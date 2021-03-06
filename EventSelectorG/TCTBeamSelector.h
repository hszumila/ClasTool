// Autogenerated Class (Header File)
// Author : G.Gavalian
// Date   : Thu Jan 10 12:07:33 EST 2008
//

#ifndef __TCTBeamSelector__
#define __TCTBeamSelector__
#include <iostream>
#include <cmath>
#include <TROOT.h>
#include <TVector3.h>
#include <TObject.h>
#include <TLorentzVector.h>
#include <TVirtualReader.h>
#include <TString.h>
#include "TDSTReader.h"
#include "TMiniDSTReader.h"

#define  BEAM_PHOTON    12
#define  BEAM_ELECTRON  13

#define  DATA_EXPERIMENT  27
#define  DATA_EXPERIMENTFULL  29
#define  DATA_SIMULATION  28

class TCTBeamSelector : public TObject {

private:
  TLorentzVector  vBeam;
  Int_t  iBeamType;
  Int_t  iDataType;
  Double_t  dBeamTimingCut;

TVirtualReader  *fReader;

public:

TCTBeamSelector ();
~TCTBeamSelector ();

void   SetBeamType(int _itype);
void   SetBeamType(const char *_ctype);
void   SetDataType(int _idtype);
void   SetDataType(const char *_cdtype);

void   SetReader(TVirtualReader *fr){fReader = fr;};

 Double_t        GetStartTime();
 Double_t        GetBeamTime();
 Int_t           GetBestTAGR();
 Int_t           GetTAGRNeighbors(Int_t tIndx,double time_interval = 2.);
 TLorentzVector  GetBeamVector();
 Int_t           GetTagrEID();

 //TLorentzVector  GetBeamVector();
TLorentzVector  GetGSIMBeam();
TLorentzVector  GetDATABeamPhoton();
TLorentzVector  GetDATABeamPhotonMini();

ClassDef(TCTBeamSelector,1)

};
#endif
