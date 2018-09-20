// @(#)ClasTool/ClasBanks:$Name:  $:$Id: THBLAClass.cc,v 1.4 2007/03/01 22:26:59 holtrop Exp $
// Author:  Gagik Gavalian
//____________________ 
//Begin_Html <!--
/* -->
<h1>THBLAClass</h1>
<pre>
 Modified:
           Igor (12/12/17) Comments.
</pre>

<!-- */ 
// --> End_Html   
////////////////////////////////////////////////////////

#include "THBLAClass.h"

ClassImp(THBLAClass)

THBLAClass::THBLAClass(THBLAClass *TmpHBLA){
trk_pln = TmpHBLA->trk_pln;
x	= TmpHBLA->x;
y       = TmpHBLA->y;
z       = TmpHBLA->z;
tlen	= TmpHBLA->tlen;
dc1	= TmpHBLA->dc1;
stat	= TmpHBLA->stat;
wire	= TmpHBLA->wire;
dtime	= TmpHBLA->dtime;
alpha	= TmpHBLA->alpha;
wlen	= TmpHBLA->wlen;
sgdoca	= TmpHBLA->sgdoca;
fitdoca	= TmpHBLA->fitdoca;
sector  = TmpHBLA->sector;

}

void   THBLAClass::Print(){
cout << "trk_pln    " <<  trk_pln  << endl;
cout << "x  	    " <<  x  << endl;
cout << "y	    " <<  y  << endl;
cout << "z	    " <<  z  << endl;
cout << "tlen	    " <<  tlen  << endl;
cout << "dc1	    " <<  dc1  << endl;
cout << "stat	    " <<  stat  << endl;
cout << "wire 	    " <<  wire  << endl;
cout << "dtime 	    " <<  dtime  << endl;
cout << "alpha 	    " <<  alpha  << endl;
cout << "wlen	    " <<  wlen  << endl;
cout << "sgdoca	    " <<  sgdoca  << endl;
cout << "fitdoca    " <<  fitdoca  << endl;

}


////////////////////////////////////////////////////////////////
//
//  End of File  THBLAClass.cc
////////////////////////////////////////////////////////////////
