
#ifndef __TITEMVALUE__
#define  __TITEMVALUE__

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <iomanip>

// ROOT includes

#include "TROOT.h"
#include "TObject.h"
#include "TString.h"



class TItemValue{

public:

Int_t    fItemValueId;
Int_t    fItemId;
Int_t    fMinRun;
Int_t    fMaxRun;
TString  fAuthor;
TString  fTime;
TString  fComment;


TItemValue();

TItemValue(Int_t fpItemValueId, Int_t    fItemId,Int_t    fpMinRun,
           Int_t    fpMaxRun,
    const char *fpAuthor,
    const char *fpTime,
    const char *fpComment);

virtual ~TItemValue();

void Set(Int_t fpItemValueId,Int_t    fpItemId,Int_t    fpMinRun,
           Int_t    fpMaxRun,
        const char *fpAuthor,
    const char *fpTime,
    const char *fpComment);

void  Print();

//
// This routines return lists of variables
// to include in QUERYES
//

const char *Value_List();
const char *Equal_List();


ClassDef(TItemValue,1) // Class for Map Item Value Description

};

#endif
