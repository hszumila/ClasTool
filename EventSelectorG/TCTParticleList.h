// Autogenerated Class (Header File)
// Author : G.Gavalian
// Date   : Fri Nov 30 14:47:15 EST 2007
//

#ifndef __TCTParticleList__
#define __TCTParticleList__
#include <iostream>
#include <TROOT.h>
#include <TVector3.h>
#include <TObject.h>
#include <TGListTree.h>
#include "TCTContainer.h"

class TCTParticleList : public TGListTree {

private:

  TGListTreeItem  *fgListParticles;
  TGListTreeItem  *fgListComposite;
  TGListTreeItem  *fgListVectors;
  TGListTreeItem  *fgListVariables;

public:

TCTParticleList (TGCanvas* p, UInt_t options, Pixel_t back = GetWhitePixel());
~TCTParticleList ();

 void     Init(); 
 void     AddParticle(const char *name, const char *type);
 Int_t    GetNPart();
 TString  GetSelectedName();
 void     FillFromContainer(TCTContainer *_fct);


 ClassDef(TCTParticleList,1)

};
#endif