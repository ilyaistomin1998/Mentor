//---------------------------------------------------------------------------
#include <vcl.h>
#include <stdio.h>
#include "tkurs.h"
#include "tquest.h"
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
#include "queLimRnd.h"
#pragma hdrstop

//---------------------------------------------------------------------------
#pragma package(smart_init)

tkurs::tkurs( char * fname )
{
  FILE* f = fopen(fname,"rt");
  char* s = new char[128];
  int type;
  qlist = new TList();

  if(f)
  {
    char* buf = new char[256];
    bmentor* bm;
    //tquest* tq;
    int tni,tnsi,tnt;
    tni = 0;
    while(!reads(f,buf)){
      if(!strncmp("head",buf,4)){
        sscanf(buf,"%s %i",s,&type);
        switch(type){
          case ITEM:
            bm=new bmentor();
            bm->type=type;
            bm->number=bm->inumber++;
            bm->itemnumber=tni++;
            reads(f,buf);
            bm->name=strdup(buf);
            tnsi=0;
            break;
          case SUBITEM:
            bm=new bmentor();
            bm->type=type;
            bm->itemnumber=tni;
            bm->subitemnumber=tnsi++;
            bm->number=bm->inumber++;
            reads(f,buf);
            bm->name=strdup(buf);
            break;
          case JOB:
            bm=new bmentor();
            bm->type=type;
            bm->number=bm->inumber++;
            reads(f,buf);
            bm->name=strdup(buf);
            tnt=bm->number;
            break;
          case QUEST:
            reads(f,buf);
            char* name=strdup(buf);
            reads(f,buf);
            int n1,n2,nt;
            sscanf(buf,"%i %i %i",&n1,&n2,&nt);
            switch (nt){
              case MATLINOP:
                bm=new quest1(f);
                break;
              case MATMULT:
                bm=new quest2(f);
                break;
              case MATEIGEN:
                bm=new quest3(f);
                break;
              case DETER22:
              case DETER33:
              case DETER:
                bm=new quest4(f);
                break;
              case LEGAUSS:
                //SystemType = LEGAUSS;
                bm = new quest5(f,LEGAUSS);
              break;
              case LEKRAMER:
                //SystemType = LEKRAMER;
                bm = new quest5(f,LEKRAMER);
              break;
              case INTEGRAL:
                bm = new quest6(f);
              break;
              case NullSyst:
                bm = new quest7(f);
              break;
              case ScalMult:
                bm = new quest8(f);
              break;
              case VectMult:
                bm = new quest9(f);
              break;
              case Norm:
                bm = new quest10(f);
              break;
              case LINES:
                bm = new quest11(f);
              break;
              case ANGLE:
                bm = new quest12(f);
              break;
              case PLANE:
                bm = new quest13(f);
              break;
              case ELIPS:
                bm = new quest14(f);
              break;
              case GIPER:
                bm = new quest15(f);
              break;
              case PARAB:
                bm = new quest16(f);
              break;
              case SMMUL:
                bm = new quest17(f);
              break;
              case PRLINE:
                bm = new quest18(f);
              break;
              case PLANELINE:
                bm = new quest19(f);
              break;
              case NEOINTEGRAL2:
                bm = new quest20(f);
              break;
              case RANG:
                bm = new quest21(f);
              break;
              case LINDET:
                bm = new quest22(f);
              break;
              case KRAMER:
                bm = new quest23(f);
              break;
              case OBRMATR:
                bm = new quest24(f);
              break;
              case PRIZMA:
                bm = new quest25(f);
              break;
              case LINE_OF_PLANE:
                bm = new quest26(f);
              break;
              case COMP_LINE:
                bm = new quest27(f);
              break;
              case LINE_PRIZM:
                bm = new quest28(f);
              break;
              case LINE_CMP:
                bm = new quest29(f);
              break;
              /*case LIM:
                bm = new quest30(f);
              break;*/

              case NEW_INT:
                bm = new quest31(f);
              break;

              case EIGEN3x3:
                bm = new queeigens(f);
              break;
              case LIM01:
                bm = new quelim01(f);
                break;
              case DERIV:
                bm=new queDeriv(f);
                break;
              case MFLABS:
                bm=new queMFlabs(f);
                break;
              case MINTEG:
                bm=new queInteg(f);
                break;
              case MLIMRND:
                bm = new quelimrnd(f);
                break;
              default:
                FError("�������������� ��� �������",0);
            }
            bm->type = type;
            bm->number = bm->inumber++;
            bm->numbertask = tnt;
            bm->name = strdup(name);
            bm->itemnumber = n1;
            bm->subitemnumber = n2;
            ((tquest*)bm)->qtype = nt;
            selectquest = NULL;
            break;
        }
        qlist->Add(bm);
        //endcase:;
      }
      else
        FError("������������ ������ ",buf,0);
    }
    fclose(f);
  }
  else{
    FError("������ ��� �������� ����� ",fname,0);
  }
};

tkurs::Save(char* fname)
{
  FILE* f = fopen(fname,"wt");

  for( int i = 0; i < qlist->Count; i ++ )
  {
    ((bmentor*)qlist->Items[i])->Save(f);
  }

  fclose(f);

  return 0;
};





