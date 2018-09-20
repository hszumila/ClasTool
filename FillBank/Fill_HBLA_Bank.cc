//////////////////////////////////////////////////////////////
//
//   File Fill_SCPB_Bank.cc
//
//   This procedure Fills TSCPBClass class from BOS Bank 
//
//  Author :  Gagik Gavalian   UNH  11/10/1999
//
//
//  This file was automaticaly Generated on : 
//	Tue Nov 23 18:21:50 EST 1999 
//////////////////////////////////////////////////////////////


#include "TROOT.h"
#include "THBLAClass.h"

#include "clasbanks.h"


// Function Prototype 
void  Fill_HBLA_Bank(THBLAClass *gcHBLA,HBLA *pHBLA , int nrow, int sector);


void  Fill_HBLA_Bank(THBLAClass *gcHBLA, HBLA *pHBLA , int nrow, int sector){
gcHBLA->trk_pln  = pHBLA->get_trk_pln(nrow);
gcHBLA->x  = pHBLA->get_x(nrow);
gcHBLA->y  = pHBLA->get_y(nrow);
gcHBLA->z  = pHBLA->get_z(nrow);
gcHBLA->tlen  = pHBLA->get_tlen(nrow);

gcHBLA->dc1  = pHBLA->get_dc1(nrow);
gcHBLA->stat  = pHBLA->get_stat(nrow);
gcHBLA->wire  = pHBLA->get_wire(nrow);
gcHBLA->dtime  = pHBLA->get_dtime(nrow);
gcHBLA->alpha  = pHBLA->get_alpha(nrow);
gcHBLA->wlen  = pHBLA->get_wlen(nrow);
gcHBLA->sgdoca    = pHBLA->get_sgdoca(nrow);
gcHBLA->fitdoca    = pHBLA->get_fitdoca(nrow);
gcHBLA->sector = sector;

}



////////////////////////////////////////////////////////////////////////////////////////
//     End Of File  Fill_SCPB_Bank.cc
//////////////////////////////////////////////////////////////////////////////////////

