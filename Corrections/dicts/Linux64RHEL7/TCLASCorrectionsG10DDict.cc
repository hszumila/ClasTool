// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictsdILinux64RHEL7dITCLASCorrectionsG10DDict

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
#include "TCLASCorrectionsG10D.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TCLASCorrectionsG10D(void *p = 0);
   static void *newArray_TCLASCorrectionsG10D(Long_t size, void *p);
   static void delete_TCLASCorrectionsG10D(void *p);
   static void deleteArray_TCLASCorrectionsG10D(void *p);
   static void destruct_TCLASCorrectionsG10D(void *p);
   static void streamer_TCLASCorrectionsG10D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCLASCorrectionsG10D*)
   {
      ::TCLASCorrectionsG10D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCLASCorrectionsG10D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCLASCorrectionsG10D", ::TCLASCorrectionsG10D::Class_Version(), "TCLASCorrectionsG10D.h", 17,
                  typeid(::TCLASCorrectionsG10D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCLASCorrectionsG10D::Dictionary, isa_proxy, 16,
                  sizeof(::TCLASCorrectionsG10D) );
      instance.SetNew(&new_TCLASCorrectionsG10D);
      instance.SetNewArray(&newArray_TCLASCorrectionsG10D);
      instance.SetDelete(&delete_TCLASCorrectionsG10D);
      instance.SetDeleteArray(&deleteArray_TCLASCorrectionsG10D);
      instance.SetDestructor(&destruct_TCLASCorrectionsG10D);
      instance.SetStreamerFunc(&streamer_TCLASCorrectionsG10D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCLASCorrectionsG10D*)
   {
      return GenerateInitInstanceLocal((::TCLASCorrectionsG10D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCLASCorrectionsG10D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TCLASCorrectionsG10D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCLASCorrectionsG10D::Class_Name()
{
   return "TCLASCorrectionsG10D";
}

//______________________________________________________________________________
const char *TCLASCorrectionsG10D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCLASCorrectionsG10D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCLASCorrectionsG10D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCLASCorrectionsG10D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCLASCorrectionsG10D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCLASCorrectionsG10D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCLASCorrectionsG10D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCLASCorrectionsG10D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TCLASCorrectionsG10D::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCLASCorrectionsG10D.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TCLASCorrectionBase::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TCLASCorrectionsG10D::IsA());
   } else {
      R__c = R__b.WriteVersion(TCLASCorrectionsG10D::IsA(), kTRUE);
      TCLASCorrectionBase::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCLASCorrectionsG10D(void *p) {
      return  p ? new(p) ::TCLASCorrectionsG10D : new ::TCLASCorrectionsG10D;
   }
   static void *newArray_TCLASCorrectionsG10D(Long_t nElements, void *p) {
      return p ? new(p) ::TCLASCorrectionsG10D[nElements] : new ::TCLASCorrectionsG10D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCLASCorrectionsG10D(void *p) {
      delete ((::TCLASCorrectionsG10D*)p);
   }
   static void deleteArray_TCLASCorrectionsG10D(void *p) {
      delete [] ((::TCLASCorrectionsG10D*)p);
   }
   static void destruct_TCLASCorrectionsG10D(void *p) {
      typedef ::TCLASCorrectionsG10D current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TCLASCorrectionsG10D(TBuffer &buf, void *obj) {
      ((::TCLASCorrectionsG10D*)obj)->::TCLASCorrectionsG10D::Streamer(buf);
   }
} // end of namespace ROOT for class ::TCLASCorrectionsG10D

namespace {
  void TriggerDictionaryInitialization_TCLASCorrectionsG10DDict_Impl() {
    static const char* headers[] = {
"TCLASCorrectionsG10D.h",
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
#line 1 "TCLASCorrectionsG10DDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$TCLASCorrectionsG10D.h")))  TCLASCorrectionsG10D;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TCLASCorrectionsG10DDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TCLASCorrectionsG10D.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TCLASCorrectionsG10D", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TCLASCorrectionsG10DDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TCLASCorrectionsG10DDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TCLASCorrectionsG10DDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TCLASCorrectionsG10DDict() {
  TriggerDictionaryInitialization_TCLASCorrectionsG10DDict_Impl();
}
