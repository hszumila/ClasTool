//
// File generated by /apps/root/PRO/root/bin/rootcint at Sat Mar  4 11:54:50 2017

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME dictsdILinuxRHFC8dITGSIMClassDict
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "TGSIMClassDict.h"

#include "TClass.h"
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

// Direct notice to TROOT of the dictionary's loading.
namespace {
   static struct DictInit {
      DictInit() {
         ROOT::RegisterModule();
      }
   } __TheDictionaryInitializer;
}

// START OF SHADOWS

namespace ROOTShadow {
   namespace Shadow {
   } // of namespace Shadow
} // of namespace ROOTShadow
// END OF SHADOWS

namespace ROOTDict {
   void TGSIMClass_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void *new_TGSIMClass(void *p = 0);
   static void *newArray_TGSIMClass(Long_t size, void *p);
   static void delete_TGSIMClass(void *p);
   static void deleteArray_TGSIMClass(void *p);
   static void destruct_TGSIMClass(void *p);
   static void streamer_TGSIMClass(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static ROOT::TGenericClassInfo *GenerateInitInstanceLocal(const ::TGSIMClass*)
   {
      ::TGSIMClass *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGSIMClass >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGSIMClass", ::TGSIMClass::Class_Version(), "./TGSIMClass.h", 80,
                  typeid(::TGSIMClass), ::ROOT::DefineBehavior(ptr, ptr),
                  &::TGSIMClass::Dictionary, isa_proxy, 0,
                  sizeof(::TGSIMClass) );
      instance.SetNew(&new_TGSIMClass);
      instance.SetNewArray(&newArray_TGSIMClass);
      instance.SetDelete(&delete_TGSIMClass);
      instance.SetDeleteArray(&deleteArray_TGSIMClass);
      instance.SetDestructor(&destruct_TGSIMClass);
      instance.SetStreamerFunc(&streamer_TGSIMClass);
      return &instance;
   }
   ROOT::TGenericClassInfo *GenerateInitInstance(const ::TGSIMClass*)
   {
      return GenerateInitInstanceLocal((::TGSIMClass*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TGSIMClass*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOTDict

//______________________________________________________________________________
atomic_TClass_ptr TGSIMClass::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGSIMClass::Class_Name()
{
   return "TGSIMClass";
}

//______________________________________________________________________________
const char *TGSIMClass::ImplFileName()
{
   return ::ROOTDict::GenerateInitInstanceLocal((const ::TGSIMClass*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGSIMClass::ImplFileLine()
{
   return ::ROOTDict::GenerateInitInstanceLocal((const ::TGSIMClass*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
void TGSIMClass::Dictionary()
{
   fgIsA = ::ROOTDict::GenerateInitInstanceLocal((const ::TGSIMClass*)0x0)->GetClass();
}

//______________________________________________________________________________
TClass *TGSIMClass::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gCINTMutex); if(!fgIsA) {fgIsA = ::ROOTDict::GenerateInitInstanceLocal((const ::TGSIMClass*)0x0)->GetClass();} }
   return fgIsA;
}

//______________________________________________________________________________
void TGSIMClass::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGSIMClass.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TVirtualData::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TGSIMClass::IsA());
   } else {
      R__c = R__b.WriteVersion(TGSIMClass::IsA(), kTRUE);
      TVirtualData::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

//______________________________________________________________________________
void TGSIMClass::ShowMembers(TMemberInspector &R__insp)
{
      // Inspect the data members of an object of class TGSIMClass.
      TClass *R__cl = ::TGSIMClass::IsA();
      if (R__cl || R__insp.IsA()) { }
      TVirtualData::ShowMembers(R__insp);
}

namespace ROOTDict {
   // Wrappers around operator new
   static void *new_TGSIMClass(void *p) {
      return  p ? new(p) ::TGSIMClass : new ::TGSIMClass;
   }
   static void *newArray_TGSIMClass(Long_t nElements, void *p) {
      return p ? new(p) ::TGSIMClass[nElements] : new ::TGSIMClass[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGSIMClass(void *p) {
      delete ((::TGSIMClass*)p);
   }
   static void deleteArray_TGSIMClass(void *p) {
      delete [] ((::TGSIMClass*)p);
   }
   static void destruct_TGSIMClass(void *p) {
      typedef ::TGSIMClass current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGSIMClass(TBuffer &buf, void *obj) {
      ((::TGSIMClass*)obj)->::TGSIMClass::Streamer(buf);
   }
} // end of namespace ROOTDict for class ::TGSIMClass

/********************************************************
* dicts/LinuxRHFC8/TGSIMClassDict.cc
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

#if defined(__GNUC__) && __GNUC__ >= 4 && ((__GNUC_MINOR__ == 2 && __GNUC_PATCHLEVEL__ >= 1) || (__GNUC_MINOR__ >= 3))
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

extern "C" void G__cpp_reset_tagtableTGSIMClassDict();

extern "C" void G__set_cpp_environmentTGSIMClassDict() {
  G__cpp_reset_tagtableTGSIMClassDict();
}
#include <new>
extern "C" int G__cpp_dllrevTGSIMClassDict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TGSIMClass */
static int G__TGSIMClassDict_238_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   TGSIMClass* p = NULL;
   char* gvp = (char*) G__getgvp();
   int n = G__getaryconstruct();
   if (n) {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new TGSIMClass[n];
     } else {
       p = new((void*) gvp) TGSIMClass[n];
     }
   } else {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new TGSIMClass;
     } else {
       p = new((void*) gvp) TGSIMClass;
     }
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__TGSIMClassDictLN_TGSIMClass));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSIMClassDict_238_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   TGSIMClass* p = NULL;
   char* gvp = (char*) G__getgvp();
   //m: 1
   if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
     p = new TGSIMClass((TGSIMClass*) G__int(libp->para[0]));
   } else {
     p = new((void*) gvp) TGSIMClass((TGSIMClass*) G__int(libp->para[0]));
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__TGSIMClassDictLN_TGSIMClass));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSIMClassDict_238_0_12(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) TGSIMClass::Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSIMClassDict_238_0_13(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) TGSIMClass::Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSIMClassDict_238_0_14(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 115, (long) TGSIMClass::Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSIMClassDict_238_0_15(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      TGSIMClass::Dictionary();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSIMClassDict_238_0_19(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((TGSIMClass*) G__getstructoffset())->StreamerNVirtual(*(TBuffer*) libp->para[0].ref);
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSIMClassDict_238_0_20(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) TGSIMClass::DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSIMClassDict_238_0_21(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) TGSIMClass::ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSIMClassDict_238_0_22(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) TGSIMClass::ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSIMClassDict_238_0_23(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) TGSIMClass::DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGSIMClassDict_238_0_24(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)

{
   TGSIMClass* p;
   void* tmp = (void*) G__int(libp->para[0]);
   p = new TGSIMClass(*(TGSIMClass*) tmp);
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__TGSIMClassDictLN_TGSIMClass));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef TGSIMClass G__TTGSIMClass;
static int G__TGSIMClassDict_238_0_25(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   char* gvp = (char*) G__getgvp();
   long soff = G__getstructoffset();
   int n = G__getaryconstruct();
   //
   //has_a_delete: 1
   //has_own_delete1arg: 0
   //has_own_delete2arg: 0
   //
   if (!soff) {
     return(1);
   }
   if (n) {
     if (gvp == (char*)G__PVOID) {
       delete[] (TGSIMClass*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((TGSIMClass*) (soff+(sizeof(TGSIMClass)*i)))->~G__TTGSIMClass();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (TGSIMClass*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((TGSIMClass*) (soff))->~G__TTGSIMClass();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic assignment operator
static int G__TGSIMClassDict_238_0_26(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   TGSIMClass* dest = (TGSIMClass*) G__getstructoffset();
   *dest = *(TGSIMClass*) libp->para[0].ref;
   const TGSIMClass& obj = *dest;
   result7->ref = (long) (&obj);
   result7->obj.i = (long) (&obj);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TGSIMClass */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncTGSIMClassDict {
 public:
  G__Sizep2memfuncTGSIMClassDict(): p(&G__Sizep2memfuncTGSIMClassDict::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncTGSIMClassDict::*p)();
};

size_t G__get_sizep2memfuncTGSIMClassDict()
{
  G__Sizep2memfuncTGSIMClassDict a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceTGSIMClassDict() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__TGSIMClassDictLN_TGSIMClass))) {
     TGSIMClass *G__Lderived;
     G__Lderived=(TGSIMClass*)0x1000;
     {
       TVirtualData *G__Lpbase=(TVirtualData*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__TGSIMClassDictLN_TGSIMClass),G__get_linked_tagnum(&G__TGSIMClassDictLN_TVirtualData),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__TGSIMClassDictLN_TGSIMClass),G__get_linked_tagnum(&G__TGSIMClassDictLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableTGSIMClassDict() {

   /* Setting up typedef entry */
   G__search_typename2("Version_t",115,-1,0,-1);
   G__setnewtype(-1,"Class version identifier (short)",0);
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TGSIMClassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TGSIMClassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TGSIMClassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TGSIMClassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTBase<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTBaselEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTBase<Double_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTBaselEdoublegR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TVectorT<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TVectorTlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TVectorT<Double_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TVectorTlEdoublegR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixT<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTRow_const<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTRow_constlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTColumn_const<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTColumn_constlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTDiag_const<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTDiag_constlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTFlat_const<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTFlat_constlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTSub_const<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTSub_constlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTSparseRow_const<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTSparseRow_constlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTSparseDiag_const<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTSparseDiag_constlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTRow<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTRowlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTColumn<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTColumnlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTDiag<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTDiaglEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTFlat<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTFlatlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTSub<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTSublEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTSparseRow<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTSparseRowlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTSparseDiag<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TMatrixTSparseDiaglEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TElementActionT<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TElementActionTlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TElementPosActionT<Float_t>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_TElementPosActionTlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<std::bidirectional_iterator_tag,TObject*,std::ptrdiff_t,const TObject**,const TObject*&>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<bidirectional_iterator_tag,TObject*,std::ptrdiff_t,const TObject**,const TObject*&>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<bidirectional_iterator_tag,TObject*>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<bidirectional_iterator_tag,TObject*,long>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<bidirectional_iterator_tag,TObject*,long,const TObject**>",117,G__get_linked_tagnum(&G__TGSIMClassDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TGSIMClass */
static void G__setup_memvarTGSIMClass(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__TGSIMClassDictLN_TGSIMClass));
   { TGSIMClass *p; p=(TGSIMClass*)0x1000; if (p) { }
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__TGSIMClassDictLN_TClass),G__defined_typename("atomic_TClass_ptr"),-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarTGSIMClassDict() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncTGSIMClass(void) {
   /* TGSIMClass */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__TGSIMClassDictLN_TGSIMClass));
   G__memfunc_setup("TGSIMClass",890,G__TGSIMClassDict_238_0_1, 105, G__get_linked_tagnum(&G__TGSIMClassDictLN_TGSIMClass), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("TGSIMClass",890,G__TGSIMClassDict_238_0_2, 105, G__get_linked_tagnum(&G__TGSIMClassDictLN_TGSIMClass), -1, 0, 1, 1, 1, 0, "U 'TGSIMClass' - 0 - TmpEVNT", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetDCStat",835,(G__InterfaceMethod) NULL,99, -1, G__defined_typename("Char_t"), 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("GetCCStat",834,(G__InterfaceMethod) NULL,99, -1, G__defined_typename("Char_t"), 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("GetSCStat",850,(G__InterfaceMethod) NULL,99, -1, G__defined_typename("Char_t"), 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("GetECStat",836,(G__InterfaceMethod) NULL,99, -1, G__defined_typename("Char_t"), 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("GetLCStat",843,(G__InterfaceMethod) NULL,99, -1, G__defined_typename("Char_t"), 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("GetStat",700,(G__InterfaceMethod) NULL,99, -1, G__defined_typename("Char_t"), 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("IsGSIM",492,(G__InterfaceMethod) NULL,103, -1, G__defined_typename("Bool_t"), 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("IsEVNT",505,(G__InterfaceMethod) NULL,103, -1, G__defined_typename("Bool_t"), 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("Print",525,(G__InterfaceMethod) NULL,121, -1, -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("Class",502,G__TGSIMClassDict_238_0_12, 85, G__get_linked_tagnum(&G__TGSIMClassDictLN_TClass), -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (TClass* (*)())(&TGSIMClass::Class) ), 0);
   G__memfunc_setup("Class_Name",982,G__TGSIMClassDict_238_0_13, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&TGSIMClass::Class_Name) ), 0);
   G__memfunc_setup("Class_Version",1339,G__TGSIMClassDict_238_0_14, 115, -1, G__defined_typename("Version_t"), 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (Version_t (*)())(&TGSIMClass::Class_Version) ), 0);
   G__memfunc_setup("Dictionary",1046,G__TGSIMClassDict_238_0_15, 121, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (void (*)())(&TGSIMClass::Dictionary) ), 0);
   G__memfunc_setup("IsA",253,(G__InterfaceMethod) NULL,85, G__get_linked_tagnum(&G__TGSIMClassDictLN_TClass), -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("ShowMembers",1132,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TMemberInspector' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("Streamer",835,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("StreamerNVirtual",1656,G__TGSIMClassDict_238_0_19, 121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - ClassDef_StreamerNVirtual_b", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("DeclFileName",1145,G__TGSIMClassDict_238_0_20, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&TGSIMClass::DeclFileName) ), 0);
   G__memfunc_setup("ImplFileLine",1178,G__TGSIMClassDict_238_0_21, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&TGSIMClass::ImplFileLine) ), 0);
   G__memfunc_setup("ImplFileName",1171,G__TGSIMClassDict_238_0_22, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&TGSIMClass::ImplFileName) ), 0);
   G__memfunc_setup("DeclFileLine",1152,G__TGSIMClassDict_238_0_23, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&TGSIMClass::DeclFileLine) ), 0);
   // automatic copy constructor
   G__memfunc_setup("TGSIMClass", 890, G__TGSIMClassDict_238_0_24, (int) ('i'), G__get_linked_tagnum(&G__TGSIMClassDictLN_TGSIMClass), -1, 0, 1, 1, 1, 0, "u 'TGSIMClass' - 11 - -", (char*) NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~TGSIMClass", 1016, G__TGSIMClassDict_238_0_25, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 1);
   // automatic assignment operator
   G__memfunc_setup("operator=", 937, G__TGSIMClassDict_238_0_26, (int) ('u'), G__get_linked_tagnum(&G__TGSIMClassDictLN_TGSIMClass), -1, 1, 1, 1, 1, 0, "u 'TGSIMClass' - 11 - -", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncTGSIMClassDict() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {
}

static void G__cpp_setup_global2() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalTGSIMClassDict() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
  G__cpp_setup_global2();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
}

static void G__cpp_setup_func2() {
}

static void G__cpp_setup_func3() {
}

static void G__cpp_setup_func4() {
}

static void G__cpp_setup_func5() {
}

static void G__cpp_setup_func6() {
}

static void G__cpp_setup_func7() {
}

static void G__cpp_setup_func8() {
}

static void G__cpp_setup_func9() {
}

static void G__cpp_setup_func10() {
}

static void G__cpp_setup_func11() {
}

static void G__cpp_setup_func12() {
}

static void G__cpp_setup_func13() {
}

static void G__cpp_setup_func14() {
}

static void G__cpp_setup_func15() {
}

static void G__cpp_setup_func16() {
}

static void G__cpp_setup_func17() {
}

static void G__cpp_setup_func18() {
}

static void G__cpp_setup_func19() {
}

static void G__cpp_setup_func20() {
}

static void G__cpp_setup_func21() {
}

static void G__cpp_setup_func22() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcTGSIMClassDict() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
  G__cpp_setup_func3();
  G__cpp_setup_func4();
  G__cpp_setup_func5();
  G__cpp_setup_func6();
  G__cpp_setup_func7();
  G__cpp_setup_func8();
  G__cpp_setup_func9();
  G__cpp_setup_func10();
  G__cpp_setup_func11();
  G__cpp_setup_func12();
  G__cpp_setup_func13();
  G__cpp_setup_func14();
  G__cpp_setup_func15();
  G__cpp_setup_func16();
  G__cpp_setup_func17();
  G__cpp_setup_func18();
  G__cpp_setup_func19();
  G__cpp_setup_func20();
  G__cpp_setup_func21();
  G__cpp_setup_func22();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__TGSIMClassDictLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TBuffer = { "TBuffer" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMemberInspector = { "TMemberInspector" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTBaselEfloatgR = { "TMatrixTBase<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTBaselEdoublegR = { "TMatrixTBase<double>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TVectorTlEfloatgR = { "TVectorT<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TVectorTlEdoublegR = { "TVectorT<double>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TElementActionTlEfloatgR = { "TElementActionT<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TElementPosActionTlEfloatgR = { "TElementPosActionT<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTlEfloatgR = { "TMatrixT<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTRow_constlEfloatgR = { "TMatrixTRow_const<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTRowlEfloatgR = { "TMatrixTRow<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTDiag_constlEfloatgR = { "TMatrixTDiag_const<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTColumn_constlEfloatgR = { "TMatrixTColumn_const<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTFlat_constlEfloatgR = { "TMatrixTFlat_const<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTSub_constlEfloatgR = { "TMatrixTSub_const<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTSparseRow_constlEfloatgR = { "TMatrixTSparseRow_const<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTSparseDiag_constlEfloatgR = { "TMatrixTSparseDiag_const<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTColumnlEfloatgR = { "TMatrixTColumn<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTDiaglEfloatgR = { "TMatrixTDiag<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTFlatlEfloatgR = { "TMatrixTFlat<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTSublEfloatgR = { "TMatrixTSub<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTSparseRowlEfloatgR = { "TMatrixTSparseRow<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TMatrixTSparseDiaglEfloatgR = { "TMatrixTSparseDiag<float>" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR = { "iterator<bidirectional_iterator_tag,TObject*,long,const TObject**,const TObject*&>" , 115 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TVirtualData = { "TVirtualData" , 99 , -1 };
G__linked_taginfo G__TGSIMClassDictLN_TGSIMClass = { "TGSIMClass" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableTGSIMClassDict() {
  G__TGSIMClassDictLN_TClass.tagnum = -1 ;
  G__TGSIMClassDictLN_TBuffer.tagnum = -1 ;
  G__TGSIMClassDictLN_TMemberInspector.tagnum = -1 ;
  G__TGSIMClassDictLN_TObject.tagnum = -1 ;
  G__TGSIMClassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__TGSIMClassDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__TGSIMClassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__TGSIMClassDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTBaselEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTBaselEdoublegR.tagnum = -1 ;
  G__TGSIMClassDictLN_TVectorTlEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TVectorTlEdoublegR.tagnum = -1 ;
  G__TGSIMClassDictLN_TElementActionTlEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TElementPosActionTlEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTlEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTRow_constlEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTRowlEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTDiag_constlEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTColumn_constlEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTFlat_constlEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTSub_constlEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTSparseRow_constlEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTSparseDiag_constlEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTColumnlEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTDiaglEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTFlatlEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTSublEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTSparseRowlEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TMatrixTSparseDiaglEfloatgR.tagnum = -1 ;
  G__TGSIMClassDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR.tagnum = -1 ;
  G__TGSIMClassDictLN_TVirtualData.tagnum = -1 ;
  G__TGSIMClassDictLN_TGSIMClass.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableTGSIMClassDict() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TClass);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TBuffer);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMemberInspector);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TObject);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTBaselEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTBaselEdoublegR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TVectorTlEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TVectorTlEdoublegR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TElementActionTlEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TElementPosActionTlEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTlEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTRow_constlEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTRowlEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTDiag_constlEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTColumn_constlEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTFlat_constlEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTSub_constlEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTSparseRow_constlEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTSparseDiag_constlEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTColumnlEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTDiaglEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTFlatlEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTSublEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTSparseRowlEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TMatrixTSparseDiaglEfloatgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR);
   G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TVirtualData);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__TGSIMClassDictLN_TGSIMClass),sizeof(TGSIMClass),-1,62720,"Stores EVNT data for GSIM banks, inherit from TVirtualData.",G__setup_memvarTGSIMClass,G__setup_memfuncTGSIMClass);
}
extern "C" void G__cpp_setupTGSIMClassDict(void) {
  G__check_setup_version(30051515,"G__cpp_setupTGSIMClassDict()");
  G__set_cpp_environmentTGSIMClassDict();
  G__cpp_setup_tagtableTGSIMClassDict();

  G__cpp_setup_inheritanceTGSIMClassDict();

  G__cpp_setup_typetableTGSIMClassDict();

  G__cpp_setup_memvarTGSIMClassDict();

  G__cpp_setup_memfuncTGSIMClassDict();
  G__cpp_setup_globalTGSIMClassDict();
  G__cpp_setup_funcTGSIMClassDict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncTGSIMClassDict();
  return;
}
class G__cpp_setup_initTGSIMClassDict {
  public:
    G__cpp_setup_initTGSIMClassDict() { G__add_setup_func("TGSIMClassDict",(G__incsetup)(&G__cpp_setupTGSIMClassDict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initTGSIMClassDict() { G__remove_setup_func("TGSIMClassDict"); }
};
G__cpp_setup_initTGSIMClassDict G__cpp_setup_initializerTGSIMClassDict;

