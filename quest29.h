//---------------------------------------------------------------------------
#ifndef quest29H
#define quest29H
//---------------------------------------------------------------------------
#include "tquest.h"

class quest29: public tquest{
  public:
  char * strpar1;
  char * strpar2;
  int amin;
  int amax;
  int TypeQ;

  quest29( FILE* f );
  quest29(){};
  Save( FILE* f );
  copy( quest29* q)
  {
    strpar1 = strdup(q->strpar1);
    strpar2 = strdup(q->strpar2);
    amin = q->amin;
    amax = q->amax;
    TypeQ = q->TypeQ;
    tquest::copy(q);
    return 0;
  }
  Edit();
  Print(TList* plist);
  Print(TList* plist, class test &t);
};

#endif
