// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictsdILinuxdITCLASCorrectionBaseDict

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
#include "TCLASCorrectionBase.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TCLASCorrectionBase(void *p = 0);
   static void *newArray_TCLASCorrectionBase(Long_t size, void *p);
   static void delete_TCLASCorrectionBase(void *p);
   static void deleteArray_TCLASCorrectionBase(void *p);
   static void destruct_TCLASCorrectionBase(void *p);
   static void streamer_TCLASCorrectionBase(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCLASCorrectionBase*)
   {
      ::TCLASCorrectionBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCLASCorrectionBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCLASCorrectionBase", ::TCLASCorrectionBase::Class_Version(), "TCLASCorrectionBase.h", 14,
                  typeid(::TCLASCorrectionBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCLASCorrectionBase::Dictionary, isa_proxy, 16,
                  sizeof(::TCLASCorrectionBase) );
      instance.SetNew(&new_TCLASCorrectionBase);
      instance.SetNewArray(&newArray_TCLASCorrectionBase);
      instance.SetDelete(&delete_TCLASCorrectionBase);
      instance.SetDeleteArray(&deleteArray_TCLASCorrectionBase);
      instance.SetDestructor(&destruct_TCLASCorrectionBase);
      instance.SetStreamerFunc(&streamer_TCLASCorrectionBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCLASCorrectionBase*)
   {
      return GenerateInitInstanceLocal((::TCLASCorrectionBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCLASCorrectionBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TCLASCorrectionBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCLASCorrectionBase::Class_Name()
{
   return "TCLASCorrectionBase";
}

//______________________________________________________________________________
const char *TCLASCorrectionBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCLASCorrectionBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCLASCorrectionBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCLASCorrectionBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCLASCorrectionBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCLASCorrectionBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCLASCorrectionBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCLASCorrectionBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TCLASCorrectionBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCLASCorrectionBase.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TCLASCorrectionBase::IsA());
   } else {
      R__c = R__b.WriteVersion(TCLASCorrectionBase::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCLASCorrectionBase(void *p) {
      return  p ? new(p) ::TCLASCorrectionBase : new ::TCLASCorrectionBase;
   }
   static void *newArray_TCLASCorrectionBase(Long_t nElements, void *p) {
      return p ? new(p) ::TCLASCorrectionBase[nElements] : new ::TCLASCorrectionBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCLASCorrectionBase(void *p) {
      delete ((::TCLASCorrectionBase*)p);
   }
   static void deleteArray_TCLASCorrectionBase(void *p) {
      delete [] ((::TCLASCorrectionBase*)p);
   }
   static void destruct_TCLASCorrectionBase(void *p) {
      typedef ::TCLASCorrectionBase current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TCLASCorrectionBase(TBuffer &buf, void *obj) {
      ((::TCLASCorrectionBase*)obj)->::TCLASCorrectionBase::Streamer(buf);
   }
} // end of namespace ROOT for class ::TCLASCorrectionBase

namespace {
  void TriggerDictionaryInitialization_TCLASCorrectionBaseDict_Impl() {
    static const char* headers[] = {
"TCLASCorrectionBase.h",
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
#line 1 "TCLASCorrectionBaseDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$TCLASCorrectionBase.h")))  TCLASCorrectionBase;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TCLASCorrectionBaseDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TCLASCorrectionBase.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TCLASCorrectionBase", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TCLASCorrectionBaseDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TCLASCorrectionBaseDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TCLASCorrectionBaseDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TCLASCorrectionBaseDict() {
  TriggerDictionaryInitialization_TCLASCorrectionBaseDict_Impl();
}
