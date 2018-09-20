// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictsdILinux64RHEL7dITCLASCorrectionsGSIMDict

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
#include "TCLASCorrectionsGSIM.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TCLASCorrectionsGSIM(void *p = 0);
   static void *newArray_TCLASCorrectionsGSIM(Long_t size, void *p);
   static void delete_TCLASCorrectionsGSIM(void *p);
   static void deleteArray_TCLASCorrectionsGSIM(void *p);
   static void destruct_TCLASCorrectionsGSIM(void *p);
   static void streamer_TCLASCorrectionsGSIM(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCLASCorrectionsGSIM*)
   {
      ::TCLASCorrectionsGSIM *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCLASCorrectionsGSIM >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCLASCorrectionsGSIM", ::TCLASCorrectionsGSIM::Class_Version(), "TCLASCorrectionsGSIM.h", 15,
                  typeid(::TCLASCorrectionsGSIM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCLASCorrectionsGSIM::Dictionary, isa_proxy, 16,
                  sizeof(::TCLASCorrectionsGSIM) );
      instance.SetNew(&new_TCLASCorrectionsGSIM);
      instance.SetNewArray(&newArray_TCLASCorrectionsGSIM);
      instance.SetDelete(&delete_TCLASCorrectionsGSIM);
      instance.SetDeleteArray(&deleteArray_TCLASCorrectionsGSIM);
      instance.SetDestructor(&destruct_TCLASCorrectionsGSIM);
      instance.SetStreamerFunc(&streamer_TCLASCorrectionsGSIM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCLASCorrectionsGSIM*)
   {
      return GenerateInitInstanceLocal((::TCLASCorrectionsGSIM*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCLASCorrectionsGSIM*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TCLASCorrectionsGSIM::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCLASCorrectionsGSIM::Class_Name()
{
   return "TCLASCorrectionsGSIM";
}

//______________________________________________________________________________
const char *TCLASCorrectionsGSIM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCLASCorrectionsGSIM*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCLASCorrectionsGSIM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCLASCorrectionsGSIM*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCLASCorrectionsGSIM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCLASCorrectionsGSIM*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCLASCorrectionsGSIM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCLASCorrectionsGSIM*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TCLASCorrectionsGSIM::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCLASCorrectionsGSIM.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TCLASCorrectionBase::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TCLASCorrectionsGSIM::IsA());
   } else {
      R__c = R__b.WriteVersion(TCLASCorrectionsGSIM::IsA(), kTRUE);
      TCLASCorrectionBase::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCLASCorrectionsGSIM(void *p) {
      return  p ? new(p) ::TCLASCorrectionsGSIM : new ::TCLASCorrectionsGSIM;
   }
   static void *newArray_TCLASCorrectionsGSIM(Long_t nElements, void *p) {
      return p ? new(p) ::TCLASCorrectionsGSIM[nElements] : new ::TCLASCorrectionsGSIM[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCLASCorrectionsGSIM(void *p) {
      delete ((::TCLASCorrectionsGSIM*)p);
   }
   static void deleteArray_TCLASCorrectionsGSIM(void *p) {
      delete [] ((::TCLASCorrectionsGSIM*)p);
   }
   static void destruct_TCLASCorrectionsGSIM(void *p) {
      typedef ::TCLASCorrectionsGSIM current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TCLASCorrectionsGSIM(TBuffer &buf, void *obj) {
      ((::TCLASCorrectionsGSIM*)obj)->::TCLASCorrectionsGSIM::Streamer(buf);
   }
} // end of namespace ROOT for class ::TCLASCorrectionsGSIM

namespace {
  void TriggerDictionaryInitialization_TCLASCorrectionsGSIMDict_Impl() {
    static const char* headers[] = {
"TCLASCorrectionsGSIM.h",
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
#line 1 "TCLASCorrectionsGSIMDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$TCLASCorrectionsGSIM.h")))  TCLASCorrectionsGSIM;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TCLASCorrectionsGSIMDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TCLASCorrectionsGSIM.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TCLASCorrectionsGSIM", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TCLASCorrectionsGSIMDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TCLASCorrectionsGSIMDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TCLASCorrectionsGSIMDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TCLASCorrectionsGSIMDict() {
  TriggerDictionaryInitialization_TCLASCorrectionsGSIMDict_Impl();
}
