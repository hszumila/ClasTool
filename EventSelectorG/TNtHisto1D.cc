// Autogenerated Class (Source File)
// Author : G.Gavalian
// Date   : Thu Mar 29 11:19:03 EST 2007
//

#include "TNtHisto1D.h"
//#include "TGHistStyles.h"

ClassImp(TNtHisto1D)

TNtHisto1D::TNtHisto1D (const char *hname):TNtHisto(hname){

  fH_ = new TH1D(GetHistName().Data(),"",1,0.,1.);
  //  fH_->SetName(GetHistName().Data());
  fH_->SetMinimum(0);
  fH_->GetXaxis()->SetNdivisions(505);
  fEpsFileName = "default.eps";
  fVariable    = "x";
  fCutsString  = "";
  //  SetStyle("PLAIN");
}

TNtHisto1D::TNtHisto1D (const char *hname,int bins, double low, double hi)
  : TNtHisto(hname)
{
  fEpsFileName = "default.eps";
  fVariable    = "x";
  fCutsString  = "";
  TString  hist_name = "_hist_1d_";
  hist_name += hname;
  fH_ = new TH1D(hist_name.Data(),"",bins,low,hi);  
  fH_->SetMinimum(0);
  fH_->GetXaxis()->SetNdivisions(505);
  SetName(hname);
  //  SetStyle("PLAIN");
}

TNtHisto1D::~TNtHisto1D (){
  delete fH_;
}

//-----------------
//-----------------
//-----------------
//__________________________________________________________
//  void     TNtHisto1D::SetStyle(const char *stname)
// {
//   TGHistStyles fHS;
//   //fHS.SetStyle((TH1 *)fH_,stname);
// }

// void  TNtHisto1D::SetBins(int bins, double hi,double low, const char *axis)
// { fH_->SetBins(bins,low,hi);}
void       TNtHisto1D::SetBins(int nx, double xmin, double xmax, int ny, double ymin, double ymax)
{
  fH_->SetBins(nx,xmin,xmax);
}

//__________________________________________________________
void       TNtHisto1D::Fill(TTree *tree, const char *opt)
{
  TString  farg;
  farg  = fVariable;
  farg += ">>";
  farg += GetHistName();
  gDirectory->ls();
  printf("=>>> FILLING : %s  %s\n",farg.Data(),fH_->GetName());
  int nres = tree->Draw(farg.Data(),fCutsString.Data(),opt);
  printf("filled events: %d\n",nres);
}

void       TNtHisto1D::Print()
{
  printf("%12s | (%6d,%8.5f,%8.5f) | %s %s\n",GetName(),fH_->GetNbinsX(),
	 fH_->GetXaxis()->GetXmin(),fH_->GetXaxis()->GetXmax(),fVariable.Data(),
	 fCutsString.Data());
}

TString    TNtHisto1D::GetHistName()
{
  TString  hist_name = "_hist_1d_";
  hist_name += GetName();
  return hist_name;
}
