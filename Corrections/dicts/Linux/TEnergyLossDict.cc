// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictsdILinuxdITEnergyLossDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "TEnergyLoss.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TEnergyLoss(void *p = 0);
   static void *newArray_TEnergyLoss(Long_t size, void *p);
   static void delete_TEnergyLoss(void *p);
   static void deleteArray_TEnergyLoss(void *p);
   static void destruct_TEnergyLoss(void *p);
   static void streamer_TEnergyLoss(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEnergyLoss*)
   {
      ::TEnergyLoss *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEnergyLoss >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TEnergyLoss", ::TEnergyLoss::Class_Version(), "TEnergyLoss.h", 28,
                  typeid(::TEnergyLoss), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEnergyLoss::Dictionary, isa_proxy, 16,
                  sizeof(::TEnergyLoss) );
      instance.SetNew(&new_TEnergyLoss);
      instance.SetNewArray(&newArray_TEnergyLoss);
      instance.SetDelete(&delete_TEnergyLoss);
      instance.SetDeleteArray(&deleteArray_TEnergyLoss);
      instance.SetDestructor(&destruct_TEnergyLoss);
      instance.SetStreamerFunc(&streamer_TEnergyLoss);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEnergyLoss*)
   {
      return GenerateInitInstanceLocal((::TEnergyLoss*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TEnergyLoss*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TEnergyLoss::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEnergyLoss::Class_Name()
{
   return "TEnergyLoss";
}

//______________________________________________________________________________
const char *TEnergyLoss::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEnergyLoss*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEnergyLoss::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEnergyLoss*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEnergyLoss::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEnergyLoss*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEnergyLoss::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEnergyLoss*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TEnergyLoss::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEnergyLoss.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.ReadStaticArray((double*)fPAR_TargetOffset);
      R__b >> fPAR_STOffset;
      R__b >> fEloss_Cell;
      R__b >> fEloss_iFlag;
      fInter.Streamer(R__b);
      R__b.StreamObject(&(fLoss),typeid(fLoss));
      R__b >> fDebugMode;
      R__b.CheckByteCount(R__s, R__c, TEnergyLoss::IsA());
   } else {
      R__c = R__b.WriteVersion(TEnergyLoss::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.WriteArray(fPAR_TargetOffset, 3);
      R__b << fPAR_STOffset;
      R__b << fEloss_Cell;
      R__b << fEloss_iFlag;
      fInter.Streamer(R__b);
      R__b.StreamObject(&(fLoss),typeid(fLoss));
      R__b << fDebugMode;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEnergyLoss(void *p) {
      return  p ? new(p) ::TEnergyLoss : new ::TEnergyLoss;
   }
   static void *newArray_TEnergyLoss(Long_t nElements, void *p) {
      return p ? new(p) ::TEnergyLoss[nElements] : new ::TEnergyLoss[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEnergyLoss(void *p) {
      delete ((::TEnergyLoss*)p);
   }
   static void deleteArray_TEnergyLoss(void *p) {
      delete [] ((::TEnergyLoss*)p);
   }
   static void destruct_TEnergyLoss(void *p) {
      typedef ::TEnergyLoss current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TEnergyLoss(TBuffer &buf, void *obj) {
      ((::TEnergyLoss*)obj)->::TEnergyLoss::Streamer(buf);
   }
} // end of namespace ROOT for class ::TEnergyLoss

namespace {
  void TriggerDictionaryInitialization_TEnergyLossDict_Impl() {
    static const char* headers[] = {
"TEnergyLoss.h",
0
    };
    static const char* includePaths[] = {
"/lustre/expphy/volatile/clas/claseg2/igor/ClasTool/ClasBanks",
"/lustre/expphy/volatile/clas/claseg2/igor/ClasTool/TClasTool",
"/lustre/expphy/volatile/clas/claseg2/igor/ClasTool/VirtualReader",
"/lustre/expphy/volatile/clas/claseg2/igor/ClasTool/DSTReader",
"/lustre/expphy/volatile/clas/claseg2/igor/ClasTool/NT10Reader",
"/lustre/expphy/volatile/clas/claseg2/igor/ClasTool/FillBank",
"/lustre/expphy/volatile/clas/claseg2/igor/ClasTool/Filter",
"/lustre/expphy/volatile/clas/claseg2/igor/ClasTool/Bosio",
"/usr/include",
"/lustre/expphy/volatile/clas/claseg2/igor/ClasTool/../include",
"/u/apps/root/6.10.02/root/include",
"/lustre/expphy/volatile/clas/claseg2/igor/ClasTool/Corrections/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TEnergyLossDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$TEnergyLoss.h")))  TEnergyLoss;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TEnergyLossDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TEnergyLoss.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TEnergyLoss", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TEnergyLossDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TEnergyLossDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TEnergyLossDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TEnergyLossDict() {
  TriggerDictionaryInitialization_TEnergyLossDict_Impl();
}
