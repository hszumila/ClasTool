// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictsdILinux64RHEL7dITCLASCorrectionsDict

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
#include "TCLASCorrections.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TCLASCorrections(void *p = 0);
   static void *newArray_TCLASCorrections(Long_t size, void *p);
   static void delete_TCLASCorrections(void *p);
   static void deleteArray_TCLASCorrections(void *p);
   static void destruct_TCLASCorrections(void *p);
   static void streamer_TCLASCorrections(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCLASCorrections*)
   {
      ::TCLASCorrections *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCLASCorrections >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCLASCorrections", ::TCLASCorrections::Class_Version(), "TCLASCorrections.h", 14,
                  typeid(::TCLASCorrections), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCLASCorrections::Dictionary, isa_proxy, 16,
                  sizeof(::TCLASCorrections) );
      instance.SetNew(&new_TCLASCorrections);
      instance.SetNewArray(&newArray_TCLASCorrections);
      instance.SetDelete(&delete_TCLASCorrections);
      instance.SetDeleteArray(&deleteArray_TCLASCorrections);
      instance.SetDestructor(&destruct_TCLASCorrections);
      instance.SetStreamerFunc(&streamer_TCLASCorrections);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCLASCorrections*)
   {
      return GenerateInitInstanceLocal((::TCLASCorrections*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCLASCorrections*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TCLASCorrections::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCLASCorrections::Class_Name()
{
   return "TCLASCorrections";
}

//______________________________________________________________________________
const char *TCLASCorrections::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCLASCorrections*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCLASCorrections::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCLASCorrections*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCLASCorrections::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCLASCorrections*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCLASCorrections::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCLASCorrections*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TCLASCorrections::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCLASCorrections.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TCLASCorrections::IsA());
   } else {
      R__c = R__b.WriteVersion(TCLASCorrections::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCLASCorrections(void *p) {
      return  p ? new(p) ::TCLASCorrections : new ::TCLASCorrections;
   }
   static void *newArray_TCLASCorrections(Long_t nElements, void *p) {
      return p ? new(p) ::TCLASCorrections[nElements] : new ::TCLASCorrections[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCLASCorrections(void *p) {
      delete ((::TCLASCorrections*)p);
   }
   static void deleteArray_TCLASCorrections(void *p) {
      delete [] ((::TCLASCorrections*)p);
   }
   static void destruct_TCLASCorrections(void *p) {
      typedef ::TCLASCorrections current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TCLASCorrections(TBuffer &buf, void *obj) {
      ((::TCLASCorrections*)obj)->::TCLASCorrections::Streamer(buf);
   }
} // end of namespace ROOT for class ::TCLASCorrections

namespace {
  void TriggerDictionaryInitialization_TCLASCorrectionsDict_Impl() {
    static const char* headers[] = {
"TCLASCorrections.h",
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
#line 1 "TCLASCorrectionsDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$TCLASCorrections.h")))  TCLASCorrections;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TCLASCorrectionsDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TCLASCorrections.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TCLASCorrections", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TCLASCorrectionsDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TCLASCorrectionsDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TCLASCorrectionsDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TCLASCorrectionsDict() {
  TriggerDictionaryInitialization_TCLASCorrectionsDict_Impl();
}
