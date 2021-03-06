//---------------------------------------------------------------------------
#include <vcl.h>
#include <math.h>
#include <stdlib.h>
#include "global.h"
#include "quest1.h"
#include "quest2.h"
#include "quest3.h"
#include "quest4.h"
#include "quest5.h"
#include "quest6.h"
#include "quest7.h"
#include "quest8.h"
#include "quest9.h"
#include "quest10.h"
#include "quest11.h"
#include "quest12.h"
#include "quest13.h"
#include "quest14.h"
#include "quest15.h"
#include "quest16.h"
#include "quest17.h"
#include "quest18.h"
#include "quest19.h"
#include "quest20.h"
#include "quest21.h"
#include "quest22.h"
#include "quest23.h"
#include "quest24.h"
#include "quest25.h"
#include "quest26.h"
#include "quest27.h"
#include "quest28.h"
#include "quest29.h"
//#include "quest30.h"
#include "quest31.h"
#include "queeigens.h"
#include "quelim01.h"
#include "queDeriv.h"
#include "queMFlabs.h"
#include "queInteg.h"
#include "quelimrnd.h"
#pragma hdrstop

void FWarning(char* s)
{
  Application->MessageBox(s,"��������������",MB_OK);
}

void FInform(char* s)
{
  Application->MessageBox(s,"����������",MB_OK);
}

void FError(char* s,int kod)
{
  Application->MessageBox(s,"������",MB_OK + MB_ICONEXCLAMATION);

  if( kod == 1 )
        exit( 1 );
}

void FError(char* s,int kod,int par)
{
  char* s1 = new char[256];
  char* s2 = new char[32];

  sprintf(s2,"%i ",par);
  strcpy(s1,s);
  strcat(s1,s2);

  Application->MessageBox(s1,"������",MB_OK + MB_ICONEXCLAMATION);

  if( kod == 1 )
        exit(1);
}

void FError(char* s,char* sk,int kod)
{
  char* s1 = new char[256];

  s1 = strcpy(s1,s);
  s1 = strcat(s1,sk);

  Application->MessageBox(s1,"������",MB_OK + MB_ICONEXCLAMATION);

  if( kod == 1 )
        exit(1);
}

char* GetFileIndex(int n)
{
  char *s = new char[16];
  sprintf(s,"%8i",n);
  strcat(s,".elf");
  return s;
}


int reads(FILE *f, char *s)
{
// ������ ������ �� ����� � ��������� ����������� $
  int i;
  do
  {
    i = -1;
    do
    {
      i++;
      fscanf(f,"%c",(s+i));
    }while(*(s+i)!=10&&feof(f)==NULL&&i<1024);
    *(s+i)=0;
    if(i==0&&feof(f)!=NULL)return(1);
  }while(*s=='$');
  return(0);
}

int readsall(FILE *f, char *s)
{
// ������ ������ �� ����� ��� �������� ����������� $
  int i;
  i=-1;
  do{
    i++;
    fscanf(f,"%c",(s+i));
  }while(*(s+i)!=10&&feof(f)==NULL&&i<1024);
  *(s+i)=0;
  if(i==0&&feof(f)!=NULL)return(1);
  return(0);
}

tquest* qcreate(tquest* q)
{
  quest1* t1 = NULL;
  quest2* t2 = NULL;
  quest3* t3 = NULL;
  quest4* t4 = NULL;
  quest5* t5 = NULL;
  quest6* t6 = NULL;
  quest7* t7 = NULL;
  quest8* t8 = NULL;
  quest9* t9 = NULL;
  quest10* t10 = NULL;
  quest11* t11 = NULL;
  quest12* t12 = NULL;
  quest13* t13 = NULL;
  quest14* t14 = NULL;
  quest15* t15 = NULL;
  quest16* t16 = NULL;
  quest17* t17 = NULL;
  quest18* t18 = NULL;
  quest19* t19 = NULL;
  quest20* t20 = NULL;
  quest21* t21 = NULL;
  quest22* t22 = NULL;
  quest23* t23 = NULL;
  quest24* t24 = NULL;
  quest25* t25 = NULL;
  quest26* t26 = NULL;
  quest27* t27 = NULL;
  quest28* t28 = NULL;
  quest29* t29 = NULL;
  //quest30* t30 = NULL;
  quest31* t31 = NULL;
  queeigens* t34 = NULL;
  quelim01* tlim01 = NULL;
  queDeriv* tderiv=NULL;
  queInteg* tinteg=NULL;
  queMFlabs* tmflabs=NULL;
  quelimrnd* tlimrnd = NULL;

  switch (q->qtype)
  {
    case MATLINOP:
      t1 = new quest1();
      t1->copy((quest1*)q);
      return t1;
    case MATMULT:
      t2 = new quest2();
      t2->copy((quest2*)q);
      return t2;
    case MATEIGEN:
      t3 = new quest3();
      t3->copy((quest3*)q);
      return t3;
    case DETER22:
    case DETER33:
    case DETER:
      t4 = new quest4();
      t4->copy((quest4*)q);
      return t4;
    case LEGAUSS:
      t5 = new quest5();
      t5->copy((quest5*)q);
      return t5;
    case LEKRAMER:
      t5 = new quest5();
      t5->copy((quest5*)q);
      return t5;
    case INTEGRAL:
      t6 = new quest6();
      t6->copy((quest6*)q);
      return t6;
    case NullSyst:
      t7 = new quest7();
      t7->copy((quest7*)q);
      return t7;
    case ScalMult:
      t8 = new quest8();
      t8->copy((quest8*)q);
      return t8;
    case VectMult:
      t9 = new quest9();
      t9->copy((quest9*)q);
      return t9;
    case Norm:
      t10 = new quest10();
      t10->copy((quest10*)q);
      return t10;
    case LINES:
      t11 = new quest11();
      t11->copy((quest11*)q);
      return t11;
    case ANGLE:
      t12 = new quest12();
      t12->copy((quest12*)q);
      return t12;
    case PLANE:
      t13 = new quest13();
      t13->copy((quest13*)q);
      return t13;
    case ELIPS:
      t14 = new quest14();
      t14->copy((quest14*)q);
      return t14;
    case GIPER:
      t15 = new quest15();
      t15->copy((quest15*)q);
      return t15;
    case PARAB:
      t16 = new quest16();
      t16->copy((quest16*)q);
      return t16;
    case SMMUL:
      t17 = new quest17();
      t17->copy((quest17*)q);
      return t17;
    case PRLINE:
      t18 = new quest18();
      t18->copy((quest18*)q);
      return t18;
    case PLANELINE:
      t19 = new quest19();
      t19->copy((quest19*)q);
      return t19;
    case NEOINTEGRAL2:
      t20 = new quest20();
      t20->copy((quest20*)q);
      return t20;
    case RANG:
      t21 = new quest21();
      t21->copy((quest21*)q);
      return t21;
    case LINDET:
      t22 = new quest22();
      t22->copy((quest22*)q);
      return t22;
    case KRAMER:
      t23 = new quest23();
      t23->copy((quest23*)q);
      return t23;
    case OBRMATR:
      t24 = new quest24();
      t24->copy((quest24*)q);
      return t24;
    case PRIZMA:
      t25 = new quest25();
      t25->copy((quest25*)q);
      return t25;
    case LINE_OF_PLANE:
      t26 = new quest26();
      t26->copy((quest26*)q);
      return t26;
    case COMP_LINE:
      t27 = new quest27();
      t27->copy(( quest27 * )q);
      return t27;
    case LINE_PRIZM:
      t28 = new quest28();
      t28->copy(( quest28 * )q);
      return t28;

    case LINE_CMP:
      t29 = new quest29();
      t29->copy(( quest29 * )q);
      return t29;

    /*case LIM:
      t30 = new quest30();
      t30->copy(( quest30 * )q);
      return t30;*/

    case NEW_INT:
      t31 = new quest31();
      t31->copy(( quest31 * )q);
      return t31;

    case EIGEN3x3:
      t34 = new queeigens();
      t34->copy(( queeigens * )q);
      return t34;

    case LIM01:
      tlim01 = new quelim01();
      tlim01->copy(( quelim01 * )q);
      return tlim01;

    case DERIV:
      tderiv = new queDeriv();
      tderiv->copy((queDeriv*)q);
      return tderiv;
    case MINTEG:
        tinteg = new queInteg();
        tinteg->copy((queInteg*)q);
        return tinteg;
    case MFLABS:
        tmflabs=new queMFlabs();
        tmflabs->copy((queMFlabs*)q);
        return tmflabs;
    case MLIMRND:
        tlimrnd = new quelimrnd();
        tlimrnd->copy((quelimrnd*)q);
        return tlimrnd;
    default:
      FError("��� ������ ���� ������� ",q->qtype,1);
  }
  return t1;
}

int rgen(int key,int n, int min,int max)
{
        int a = min;

//     a=min+(max-min+0.8)*0.5*(sin(6.2832/150.*n*key)+1.);

        a = min + random( max - min + 1 );

        /*if ( a == 0 )
                a = 1;*/

/*        if ( a == -1 )
                a = -2;*/

        return a;
}
