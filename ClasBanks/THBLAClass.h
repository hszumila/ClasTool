////////////////////////////////////////////////////////////////////////
// File TECPBBank.h  
//
// Initial Author: Gagik Gavalian  UNH  02/13/2017
//
//
// This file is generated automatically by make_bank_class.pl 
//
// Generation DATE : Tue Nov 23 18:21:50 EST 1999
//
// Full documentation and comments can be found at
// http://improv.unh.edu/RootBosClasses.html 
//
////////////////////////////////////////////////////////////////////////
#ifndef _THBLAClass_ 
#define _THBLAClass_ 
#include <iostream>
using namespace std;


#include "TObject.h"
#include "TString.h"

class THBLAClass: public TObject{
  
 public:
  Int_t     trk_pln; // id of DC hit
  Float_t     x; // tdc value
  Float_t	y;
  Float_t       z;
  Float_t       tlen;
  Int_t       dc1;
  Int_t       stat;
  Int_t       wire;
  Float_t       dtime;
  Float_t       alpha;
  Float_t       wlen;
  Float_t       sgdoca;
  Float_t	fitdoca;
  Int_t		sector;


 public:
  THBLAClass(){};
  THBLAClass(THBLAClass *TmpHBLA);
  virtual ~THBLAClass(){};
  inline Int_t     GetTrk_pln() { return trk_pln; }
  inline Float_t     GetX() { return x; }
  inline Float_t     GetY() { return y; }
  inline Float_t     GetZ() { return z; }
  inline Float_t     GetTlen() { return tlen; }
  inline Int_t     GetDc1() { return dc1; }
  inline Int_t     GetStat() { return stat; }
  inline Int_t     GetWire() { return wire; }
  inline Float_t     GetDtime() { return dtime; }
  inline Float_t     GetAlpha() { return alpha; }
  inline Float_t     GetWlen() { return wlen; }
  inline Float_t     GetSgdoca() {return sgdoca;}
  inline Float_t     GetFitDoca() {return fitdoca;}
  inline Int_t	     GetSector() {return sector;}

  void 	 Print();
  //
  ClassDef(THBLAClass,1) // Class for accessing the HBLA: Time of Flight.
    };
#endif


