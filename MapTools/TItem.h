#ifndef __TMAPITEM__
#define  __TMAPITEM__

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <iomanip>

// ROOT includes

#include "TROOT.h"
#include "TObject.h"
#include "TString.h"


class TItem{

public:

 Int_t    fItemId; // Item ID corresponding to Subsystem ID
 TString  fItemName; // Item Name
 Int_t    fSubsystemId; // Subsystem ID
 Int_t    fLength;      // Item Array Length
 TString  fType;        // Item Type
 TString  fDescription; // Item Description

 TItem();
 virtual ~TItem();
 void Print();

 ClassDef(TItem,1) // Class to keep Map Item information
};



#endif
