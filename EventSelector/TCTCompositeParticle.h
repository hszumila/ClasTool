// Autogenerated Class (Header File)
// Author : G.Gavalian
// Date   : Fri Sep 28 15:34:08 EDT 2007
//

#ifndef __TCTCompositeParticle__
#define __TCTCompositeParticle__
#include <iostream>
#include <TROOT.h>
#include <TVector3.h>
#include <TObject.h>
#include <TCTParticle.h>

class TCTCompositeParticle : public TNamed {

private:

  Double_t  fPartDOCA;
  Double_t  fPartMassCut;
  Double_t  fPartMass;
  Double_t  fPartDistance;
  Double_t  fPartColiniarity;


  TLorentzVector  fPartVector;
  TVector3        fPartVertex;
  TVector3        fInterVertex;
  TString         fPartName;
  Int_t           fP1_Indx;
  Int_t           fP2_Indx;
  TString         fOperator;

public:

  TCTCompositeParticle (const char *__pname,const char *__foperator, double __mass,double pid_cut);
  TCTCompositeParticle (const char *__pname,int __p1, int __p2, double __mass,double pid_cut);
  
TCTCompositeParticle ();
~TCTCompositeParticle ();

 
 void       SetPartDep(int __p1,int __p2){fP1_Indx = __p1;fP2_Indx = __p2;};
 int        GetP1(){return fP1_Indx;};
 int        GetP2(){return fP2_Indx;};
 int        GetP(int __indx);
 int        GetNPart();
 int        GetSign(int __indx);

 TString    GetOperator(){return fOperator;};
 void       SetOperator(const char *__foperator){fOperator=__foperator;};
 void       SetVector(TLorentzVector __v1){fPartVector = __v1;};
 void       Construct(TCTParticle __p1, TCTParticle __p2);
 void       SetInterVector(TVector3 _v3){fInterVertex = _v3;};

 Double_t        Get(const char *var);
 // void       SetName(const char *__pname){fPartName = __pname;};
 double GetDOCA(){return fPartDOCA;};
 TLorentzVector  GetV(){return fPartVector;};
 TVector3        GetVert(){return fPartVertex;};
 TVector3        FindNeutralVtx( TVector3 v1, TVector3 p1, 
				 TVector3 v2, TVector3 p2, Double_t *dist );
 Int_t           GetStatus();
ClassDef(TCTCompositeParticle,1)

};
#endif