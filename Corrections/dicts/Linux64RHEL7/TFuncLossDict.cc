// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictsdILinux64RHEL7dITFuncLossDict

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
#include "TFuncLoss.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *TFuncLoss_Dictionary();
   static void TFuncLoss_TClassManip(TClass*);
   static void *new_TFuncLoss(void *p = 0);
   static void *newArray_TFuncLoss(Long_t size, void *p);
   static void delete_TFuncLoss(void *p);
   static void deleteArray_TFuncLoss(void *p);
   static void destruct_TFuncLoss(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFuncLoss*)
   {
      ::TFuncLoss *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TFuncLoss));
      static ::ROOT::TGenericClassInfo 
         instance("TFuncLoss", "TFuncLoss.h", 454,
                  typeid(::TFuncLoss), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TFuncLoss_Dictionary, isa_proxy, 0,
                  sizeof(::TFuncLoss) );
      instance.SetNew(&new_TFuncLoss);
      instance.SetNewArray(&newArray_TFuncLoss);
      instance.SetDelete(&delete_TFuncLoss);
      instance.SetDeleteArray(&deleteArray_TFuncLoss);
      instance.SetDestructor(&destruct_TFuncLoss);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFuncLoss*)
   {
      return GenerateInitInstanceLocal((::TFuncLoss*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFuncLoss*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TFuncLoss_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TFuncLoss*)0x0)->GetClass();
      TFuncLoss_TClassManip(theClass);
   return theClass;
   }

   static void TFuncLoss_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFuncLoss(void *p) {
      return  p ? new(p) ::TFuncLoss : new ::TFuncLoss;
   }
   static void *newArray_TFuncLoss(Long_t nElements, void *p) {
      return p ? new(p) ::TFuncLoss[nElements] : new ::TFuncLoss[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFuncLoss(void *p) {
      delete ((::TFuncLoss*)p);
   }
   static void deleteArray_TFuncLoss(void *p) {
      delete [] ((::TFuncLoss*)p);
   }
   static void destruct_TFuncLoss(void *p) {
      typedef ::TFuncLoss current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFuncLoss

namespace {
  void TriggerDictionaryInitialization_TFuncLossDict_Impl() {
    static const char* headers[] = {
"TFuncLoss.h",
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
#line 1 "TFuncLossDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$TFuncLoss.h")))  TFuncLoss;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TFuncLossDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TFuncLoss.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TFuncLoss", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TFuncLossDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TFuncLossDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TFuncLossDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TFuncLossDict() {
  TriggerDictionaryInitialization_TFuncLossDict_Impl();
}
