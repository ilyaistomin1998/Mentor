#include <vcl.h>
#include <stdlib.h>
#include <math.h>
#include "queInteg.h"
#include "MInteg.h"
#include "qvarnt.h"
#include "m_integ.h"
#pragma hdrstop
#pragma package(smart_init)

queInteg::queInteg (FILE* f)
{
    // генерация ключа
    keygen=random(1000)+1;
    // чтение параметров
    char buf[256];
    reads(f, buf); strpar1 = strdup(buf);
    reads(f, buf); strpar2 = strdup(buf);
    // разбор параметров
    sscanf(strpar1, "%d %i %i\n", &Integid, &rmin, &rmax);
    debug=false;
    // инициализация типа вопроса
    qtype = type;
}

queInteg::Save(FILE* f)
{ // не знаю, для чего
    fprintf(f,"head %i\n",type);
    fprintf(f,"%s\n",name);
    fprintf(f,"%i %i %i\n",itemnumber,subitemnumber,qtype);
    fprintf(f,"%s\n",strpar1);
    fprintf(f,"%s\n",strpar2);
    return 0;
}

// вызвать окно генератора?
queInteg::Edit()
{
    sscanf(strpar2, "%d%d%d", &Integid, &rmin, &rmax);
    // инициализация ключа и номера варианта
    keygen=0; nvar=1;
    // установка параметров в окне и показ окна
    FInteg->quest=this;
    FInteg->etype->Text = IntToStr(Integid);
    FInteg->rmin->Text = IntToStr(rmin); FInteg->rmax->Text = IntToStr(rmax);
    FInteg->ShowModal();
    return 0;
}

void addstringtolist (char *str, TList *plist)
{
    char lines[40][BUFSZ];
    int n=split_str(str, lines);
    for(int i=0; i<n; ++i)
        plist->Add(strdup(lines[i]));
}

void queInteg::TruePrint (TList* plist, bool make_answers=false, class test* t=NULL)
{
    char str[500];
    if (keygen==0) keygen=random(1000)+1;
    srand(keygen);

    if (!qvar->MZad||(qvar->MZad&&nvar==1))
    {
        sprintf(str, "String(\"# Тема - %s \")", selecttask->name);
        plist->Add(strdup(str));
    }
    else
    {
        sprintf(str, "String(#)");
        plist->Add(strdup(str));
    }
    sprintf(str, "String(\"Вариант   %i, задача %i.\")", nvar, nzad); plist->Add(strdup(str));

    if (!qvar->MZad||(qvar->MZad&&nvar==1))
    {
    }

    bool done;
    range r(rmin, rmax);
    char func[1000], integ[10000];
    int a,b,k;

    switch(Integid)
    {
        case 1: integral_ambp01 ( r, integ); break;
        case 2: integral_ambp02 ( r, integ); break;
        case 3: integral_ambp03 ( r, integ); break;
        case 4: integral_ambp04 ( r, integ); break;
        case 5: //integral_ambp05 ( r, integ); break;
        case 6: integral_ambp06 ( r, integ); break;
        case 7: integral_ambp07 ( r, integ); break;
        case 8: integral_ambp08 ( r, integ); break;
        case 9: integral_ambp09 ( r, integ); break;
        case 10: integral_ambp10 ( r, integ); break;
        case 11: integral_ambp11 ( r, integ); break;
        case 12: integral_ambp12 ( r, integ); break;
        case 13: integral_ambp13 ( r, integ); break;
        case 14: integral_ambp14 ( r, integ); break;
        case 15: integral_ambp15 ( r, integ); break;
        case 16: integral_ambp18 ( r, integ); break;
        case 17: integral_ambp19 ( r, integ); break;
        case 18: integral_ambp20 ( r, integ); break;
        case 19: integral_ambp21 ( r, integ); break;
        case 20: integral_ambp22 ( r, integ); break;
        case 21: integral_ambp23 ( r, integ); break;
        case 22: integral_ambp24 ( r, integ); break;
        case 23: integral_ambp25 ( r, integ); break;
        case 24: integral_ambp26 ( r, integ); break;
        case 25: integral_ambp27 ( r, integ); break;
        case 26: integral_ambp28 ( r, integ); break;
        case 27: integral_ambp29 ( r, integ); break;
        case 28: integral_ambp30 ( r, integ); break;
        case 29: integral_ambp31 ( r, integ); break;
        case 30: integral_ambp32 ( r, integ); break;
        case 31: integral_ambp33 ( r, integ); break;
        case 32: integral_ambp34 ( r, integ); break;
        case 33: integral_ambp35 ( r, integ); break;
        default:
            ShowMessage("Error\nUnknown Integral ID");
            break;
    }
    char text[BUFSZ], text1[10][BUFSZ];
    char answ[10][BUFSZ], answ1[10][10][BUFSZ];
    int nansw=split_text(integ, text, answ);
    addstringtolist(text,plist);
    int right=0;

    if (make_answers)
    {
        shuffle_answers(nansw, answ, right);
        for(int i=0; i<nansw; ++i)
        {
            char buf[BUFSZ];
            sprintf(buf, "String(\"Вариант %c):\")\n", i+'a');
            strcat(buf, answ[i]);
            strcpy(answ[i],buf);
            addstringtolist(answ[i],plist);
        }
        if (t!=NULL)
        {
            t->pr_tst = 1;
            t->ch_ask = nansw;
            t->right_ask = right;
            t->msg = "Тест успешно сгенерирован";
        }
    }

    sprintf(str, "String(@Часть преподавателя )"); plist->Add(strdup(str));
    sprintf(str, "String(\"Тема - %s\")", selecttask->name); plist->Add(strdup(str));
    sprintf(str, "String(\"ВАРИАНТ %i, решение задачи %i, ключ %i\")", nvar, nzad, keygen); plist->Add(strdup(str));
    addstringtolist(text, plist);
    addstringtolist(answ[right], plist);
    keygen=0;
}

queInteg::Print(TList* plist)
{ // функция вывода задания (без ответов)
    TruePrint(plist);
    return 0;
}

queInteg::Print(TList* plist, class test &t)
{ // вывод с вариантами ответа?
    TruePrint(plist, true, &t);
    return 0;
}


