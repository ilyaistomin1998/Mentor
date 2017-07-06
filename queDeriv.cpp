#include <vcl.h>
#include <stdlib.h>
#include <math.h>
#include "queDeriv.h"
#include "MDeriv.h"
#include "qvarnt.h"
#include "mc_deriv.h"
#pragma hdrstop
#pragma package(smart_init)


queDeriv::queDeriv (FILE* f)
{
    // генерация ключа
    keygen=random(1000)+1;
    // чтение параметров
    char buf[256];
    reads(f, buf); strpar1 = strdup(buf);
    reads(f, buf); strpar2 = strdup(buf);
    // разбор параметров
    sscanf(strpar1, "%d %i %i\n", &derivid, &rmin, &rmax);
    debug=false;
    // инициализация типа вопроса
    qtype = type;
}

queDeriv::Save(FILE* f)
{ // не знаю, для чего
    fprintf(f,"head %i\n",type);
    fprintf(f,"%s\n",name);
    fprintf(f,"%i %i %i\n",itemnumber,subitemnumber,qtype);
    fprintf(f,"%s\n",strpar1);
    fprintf(f,"%s\n",strpar2);
    return 0;
}

// вызвать окно генератора?
queDeriv::Edit()
{
    sscanf(strpar2, "%d%d%d", &derivid, &rmin, &rmax);
    // инициализация ключа и номера варианта
    keygen=0; nvar=1;
    // установка параметров в окне и показ окна
    FDeriv->quest=this;
    FDeriv->etype->Text = IntToStr(derivid);
    FDeriv->rmin->Text = IntToStr(rmin); FDeriv->rmax->Text = IntToStr(rmax);
    FDeriv->ShowModal();
    return 0;
}

void addstringtolist (char *str, TList *plist)
{
    char lines[40][BUFSZ];
    int n=split_str(str, lines);
    for(int i=0; i<n; ++i)
        plist->Add(strdup(lines[i]));
}

void queDeriv::TruePrint (TList* plist, bool make_answers=false, class test* t=NULL)
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
    char func[10000], deriv[10000];
    int a,b,k;
    switch(derivid)
    {
        case  1: deriv101(r, deriv); break;
        case  2: deriv102(r, deriv); break;
        case  3: deriv103(r, deriv); break;
        case  4: deriv104(r, deriv); break;
        case  5: deriv105(r, deriv); break;
        case  6: deriv106(r, deriv); break;
        case  7: deriv107(r, deriv); break;
        case  8: deriv108(r, deriv); break;
        case  9: deriv201(r, deriv); break;
        case 10: deriv202(r, deriv); break;
        case 11: deriv203(r, deriv); break;
        case 12: deriv204(r, deriv); break;
        case 13: deriv205(r, deriv); break;
        case 14: deriv206(r, deriv); break;
        case 15: deriv207(r, deriv); break;
        case 16: deriv208(r, deriv); break;
        case 17: deriv301(r, deriv); break;
        case 18: deriv302(r, deriv); break;
        case 19: deriv303(r, deriv); break;
        case 20: deriv304(r, deriv); break;
        case 21: deriv305(r, deriv); break;
        case 22: deriv306(r, deriv); break;
        case 23: deriv307(r, deriv); break;
        case 24: deriv308(r, deriv); break;
        case 25: deriv401(r, deriv); break;
        case 26: deriv402(r, deriv); break;
        case 27: deriv403(r, deriv); break;
        case 28: deriv404(r, deriv); break;
        case 29: deriv405(r, deriv); break;
        case 30: deriv406(r, deriv); break;
        case 31: deriv407(r, deriv); break;
        case 32: deriv408(r, deriv); break;
        case 33: deriv501(r, deriv); break;
        case 34: deriv502(r, deriv); break;
        case 35: deriv503(r, deriv); break;
        case 36: deriv504(r, deriv); break;
        case 37: deriv505(r, deriv); break;
        case 38: deriv506(r, deriv); break;
        case 39: deriv507(r, deriv); break;
        case 40: deriv508(r, deriv); break;
        case 41: deriv50101v(r, deriv); break;
        case 42: deriv50102v(r, deriv); break;
        case 43: deriv50103v(r, deriv); break;
        case 44: deriv50104v(r, deriv); break;
        case 45: deriv50105v(r, deriv); break;
        //case 46: deriv50201v(r, deriv); break;
        //new
        case 46: deriv050201v(r,deriv); break;
        case 47: deriv050202v(r,deriv); break;
        //case 49: deriv050301v(r,deriv); break;
//char *deriv050302v (const range& r, char *deriv);
//char *deriv050303v (const range& r, char *deriv);
// sometimes falls
        case 48: deriv050401v(r,deriv); break;
        case 49: deriv050501v(r,deriv); break;
        case 50: deriv050601v(r,deriv); break;

        case 51: deriv71(r,deriv); break;
        case 52: deriv72(r,deriv); break;
        case 53: deriv73(r,deriv); break;
        case 54: deriv74(r,deriv); break;
        case 55: deriv75(r,deriv); break;
        case 56: deriv76(r,deriv); break;
        case 57: deriv77(r,deriv); break;
        case 58: deriv78(r,deriv); break;
        case 59: deriv79(r,deriv); break;
        case 60: deriv710(r,deriv); break;
        case 61: deriv711(r,deriv); break;
        case 62: deriv712(r,deriv); break;
        case 63: deriv713(r,deriv); break;
        case 64: deriv714(r,deriv); break;
        case 65: deriv715(r,deriv); break;
        case 66: deriv716(r,deriv); break;

        case 67: derivb119(r,deriv); break;
        case 68: derivb120(r,deriv); break;
        case 69: derivb121(r,deriv); break;
        case 70: derivb122(r,deriv); break;
        case 71: derivb123(r,deriv); break;
        case 72: derivb124(r,deriv); break;
        case 73: derivb125(r,deriv); break;
        case 74: derivb126(r,deriv); break;
        case 75: derivb127(r,deriv); break;
        case 76: derivb128(r,deriv); break;
        case 77: derivb129(r,deriv); break;

        case 78: derivb219(r,deriv); break;
        case 79: derivb220(r,deriv); break;
        case 80: derivb221(r,deriv); break;
        case 81: derivb222(r,deriv); break;
        case 82: derivb223(r,deriv); break;
        case 83: derivb224(r,deriv); break;
        case 84: derivb225(r,deriv); break;
        case 85: derivb226(r,deriv); break;
        case 86: derivb227(r,deriv); break;
        case 87: derivb228(r,deriv); break;
        case 88: derivb229(r,deriv); break;

        case 89: derivb301(r, deriv); break;
        case 90: derivb302(r, deriv); break;
        case 91: derivb303(r, deriv); break;
        case 92: derivb304(r, deriv); break;
        case 93: derivb305(r, deriv); break;
        case 94: derivb306(r, deriv); break;
        case 95: derivb307(r, deriv); break;
        case 96: derivb308(r, deriv); break;
        case 97: derivb309(r, deriv); break;
        case 98: derivb310(r, deriv); break;
        case 99: derivb311(r, deriv); break;
        case 100: derivb401(r, deriv); break;
        case 101: derivb402(r, deriv); break;
        case 102: derivb403(r, deriv); break;
        case 103: derivb404(r, deriv); break;
        case 104: derivb405(r, deriv); break;
        case 105: derivb406(r, deriv); break;
        case 106: derivb407(r, deriv); break;
        case 107: derivb408(r, deriv); break;
        case 108: derivb409(r, deriv); break;
        case 109: derivb410(r, deriv); break;
        case 110: derivb411(r, deriv); break;
        default: ShowMessage("Error\nUnknown derivative ID"); break;
    }
    char text[BUFSZ], text1[10][BUFSZ];
    char answ[10][BUFSZ], answ1[10][10][BUFSZ];
    int nansw=split_text(deriv, text, answ);
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
            t->right_ask = right+1;
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

queDeriv::Print(TList* plist)
{ // функция вывода задания (без ответов)
    TruePrint(plist);
    return 0;
}

queDeriv::Print(TList* plist, class test &t)
{ // вывод с вариантами ответа?
    TruePrint(plist, true, &t);
    return 0;
}

 