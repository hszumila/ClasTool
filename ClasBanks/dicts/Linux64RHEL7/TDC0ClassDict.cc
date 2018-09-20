//
// File generated by /u/apps/root/5.34.36/root/bin/rootcint at Tue Jan  9 15:26:56 2018

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME dictsdILinux64RHEL7dITDC0ClassDict
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "TDC0ClassDict.h"

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
   void TDC0Class_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void *new_TDC0Class(void *p = 0);
   static void *newArray_TDC0Class(Long_t size, void *p);
   static void delete_TDC0Class(void *p);
   static void deleteArray_TDC0Class(void *p);
   static void destruct_TDC0Class(void *p);
   static void streamer_TDC0Class(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static ROOT::TGenericClassInfo *GenerateInitInstanceLocal(const ::TDC0Class*)
   {
      ::TDC0Class *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDC0Class >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDC0Class", ::TDC0Class::Class_Version(), "./TDC0Class.h", 24,
                  typeid(::TDC0Class), ::ROOT::DefineBehavior(ptr, ptr),
                  &::TDC0Class::Dictionary, isa_proxy, 0,
                  sizeof(::TDC0Class) );
      instance.SetNew(&new_TDC0Class);
      instance.SetNewArray(&newArray_TDC0Class);
      instance.SetDelete(&delete_TDC0Class);
      instance.SetDeleteArray(&deleteArray_TDC0Class);
      instance.SetDestructor(&destruct_TDC0Class);
      instance.SetStreamerFunc(&streamer_TDC0Class);
      return &instance;
   }
   ROOT::TGenericClassInfo *GenerateInitInstance(const ::TDC0Class*)
   {
      return GenerateInitInstanceLocal((::TDC0Class*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TDC0Class*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOTDict

//______________________________________________________________________________
atomic_TClass_ptr TDC0Class::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDC0Class::Class_Name()
{
   return "TDC0Class";
}

//______________________________________________________________________________
const char *TDC0Class::ImplFileName()
{
   return ::ROOTDict::GenerateInitInstanceLocal((const ::TDC0Class*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDC0Class::ImplFileLine()
{
   return ::ROOTDict::GenerateInitInstanceLocal((const ::TDC0Class*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
void TDC0Class::Dictionary()
{
   fgIsA = ::ROOTDict::GenerateInitInstanceLocal((const ::TDC0Class*)0x0)->GetClass();
}

//______________________________________________________________________________
TClass *TDC0Class::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gCINTMutex); if(!fgIsA) {fgIsA = ::ROOTDict::GenerateInitInstanceLocal((const ::TDC0Class*)0x0)->GetClass();} }
   return fgIsA;
}

//______________________________________________________________________________
void TDC0Class::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDC0Class.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> ID;
      R__b >> TDC;
      R__b.CheckByteCount(R__s, R__c, TDC0Class::IsA());
   } else {
      R__c = R__b.WriteVersion(TDC0Class::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << ID;
      R__b << TDC;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

//______________________________________________________________________________
void TDC0Class::ShowMembers(TMemberInspector &R__insp)
{
      // Inspect the data members of an object of class TDC0Class.
      TClass *R__cl = ::TDC0Class::IsA();
      if (R__cl || R__insp.IsA()) { }
      R__insp.Inspect(R__cl, R__insp.GetParent(), "ID", &ID);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "TDC", &TDC);
      TObject::ShowMembers(R__insp);
}

namespace ROOTDict {
   // Wrappers around operator new
   static void *new_TDC0Class(void *p) {
      return  p ? new(p) ::TDC0Class : new ::TDC0Class;
   }
   static void *newArray_TDC0Class(Long_t nElements, void *p) {
      return p ? new(p) ::TDC0Class[nElements] : new ::TDC0Class[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDC0Class(void *p) {
      delete ((::TDC0Class*)p);
   }
   static void deleteArray_TDC0Class(void *p) {
      delete [] ((::TDC0Class*)p);
   }
   static void destruct_TDC0Class(void *p) {
      typedef ::TDC0Class current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TDC0Class(TBuffer &buf, void *obj) {
      ((::TDC0Class*)obj)->::TDC0Class::Streamer(buf);
   }
} // end of namespace ROOTDict for class ::TDC0Class

/********************************************************
* dicts/Linux64RHEL7/TDC0ClassDict.cc
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

extern "C" void G__cpp_reset_tagtableTDC0ClassDict();

extern "C" void G__set_cpp_environmentTDC0ClassDict() {
  G__cpp_reset_tagtableTDC0ClassDict();
}
#include <new>
extern "C" int G__cpp_dllrevTDC0ClassDict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TDC0Class */
static int G__TDC0ClassDict_184_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   TDC0Class* p = NULL;
   char* gvp = (char*) G__getgvp();
   int n = G__getaryconstruct();
   if (n) {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new TDC0Class[n];
     } else {
       p = new((void*) gvp) TDC0Class[n];
     }
   } else {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new TDC0Class;
     } else {
       p = new((void*) gvp) TDC0Class;
     }
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__TDC0ClassDictLN_TDC0Class));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDC0ClassDict_184_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   TDC0Class* p = NULL;
   char* gvp = (char*) G__getgvp();
   //m: 1
   if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
     p = new TDC0Class((TDC0Class*) G__int(libp->para[0]));
   } else {
     p = new((void*) gvp) TDC0Class((TDC0Class*) G__int(libp->para[0]));
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__TDC0ClassDictLN_TDC0Class));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDC0ClassDict_184_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) ((TDC0Class*) G__getstructoffset())->GetID());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDC0ClassDict_184_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) ((TDC0Class*) G__getstructoffset())->GetTDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDC0ClassDict_184_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((TDC0Class*) G__getstructoffset())->Print();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDC0ClassDict_184_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) TDC0Class::Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDC0ClassDict_184_0_7(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) TDC0Class::Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDC0ClassDict_184_0_8(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 115, (long) TDC0Class::Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDC0ClassDict_184_0_9(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      TDC0Class::Dictionary();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDC0ClassDict_184_0_13(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((TDC0Class*) G__getstructoffset())->StreamerNVirtual(*(TBuffer*) libp->para[0].ref);
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDC0ClassDict_184_0_14(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) TDC0Class::DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDC0ClassDict_184_0_15(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) TDC0Class::ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDC0ClassDict_184_0_16(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) TDC0Class::ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDC0ClassDict_184_0_17(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) TDC0Class::DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TDC0ClassDict_184_0_18(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)

{
   TDC0Class* p;
   void* tmp = (void*) G__int(libp->para[0]);
   p = new TDC0Class(*(TDC0Class*) tmp);
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__TDC0ClassDictLN_TDC0Class));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef TDC0Class G__TTDC0Class;
static int G__TDC0ClassDict_184_0_19(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
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
       delete[] (TDC0Class*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((TDC0Class*) (soff+(sizeof(TDC0Class)*i)))->~G__TTDC0Class();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (TDC0Class*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((TDC0Class*) (soff))->~G__TTDC0Class();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic assignment operator
static int G__TDC0ClassDict_184_0_20(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   TDC0Class* dest = (TDC0Class*) G__getstructoffset();
   *dest = *(TDC0Class*) libp->para[0].ref;
   const TDC0Class& obj = *dest;
   result7->ref = (long) (&obj);
   result7->obj.i = (long) (&obj);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TDC0Class */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncTDC0ClassDict {
 public:
  G__Sizep2memfuncTDC0ClassDict(): p(&G__Sizep2memfuncTDC0ClassDict::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncTDC0ClassDict::*p)();
};

size_t G__get_sizep2memfuncTDC0ClassDict()
{
  G__Sizep2memfuncTDC0ClassDict a;
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
extern "C" void G__cpp_setup_inheritanceTDC0ClassDict() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__TDC0ClassDictLN_TDC0Class))) {
     TDC0Class *G__Lderived;
     G__Lderived=(TDC0Class*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__TDC0ClassDictLN_TDC0Class),G__get_linked_tagnum(&G__TDC0ClassDictLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableTDC0ClassDict() {

   /* Setting up typedef entry */
   G__search_typename2("Int_t",105,-1,0,-1);
   G__setnewtype(-1,"Signed integer 4 bytes (int)",0);
   G__search_typename2("Version_t",115,-1,0,-1);
   G__setnewtype(-1,"Class version identifier (short)",0);
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__TDC0ClassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__TDC0ClassDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TDC0ClassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__TDC0ClassDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TDC0ClassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__TDC0ClassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__TDC0ClassDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TDC0ClassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__TDC0ClassDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TDC0ClassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TDC0Class */
static void G__setup_memvarTDC0Class(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__TDC0ClassDictLN_TDC0Class));
   { TDC0Class *p; p=(TDC0Class*)0x1000; if (p) { }
   G__memvar_setup((void*)((long)(&p->ID)-(long)(p)),105,0,0,-1,G__defined_typename("Int_t"),-1,1,"ID=",0,"id of DC hit");
   G__memvar_setup((void*)((long)(&p->TDC)-(long)(p)),105,0,0,-1,G__defined_typename("Int_t"),-1,1,"TDC=",0,"tdc value");
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__TDC0ClassDictLN_TClass),G__defined_typename("atomic_TClass_ptr"),-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarTDC0ClassDict() {
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
static void G__setup_memfuncTDC0Class(void) {
   /* TDC0Class */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__TDC0ClassDictLN_TDC0Class));
   G__memfunc_setup("TDC0Class",769,G__TDC0ClassDict_184_0_1, 105, G__get_linked_tagnum(&G__TDC0ClassDictLN_TDC0Class), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("TDC0Class",769,G__TDC0ClassDict_184_0_2, 105, G__get_linked_tagnum(&G__TDC0ClassDictLN_TDC0Class), -1, 0, 1, 1, 1, 0, "U 'TDC0Class' - 0 - TmpSCPB", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetID",429,G__TDC0ClassDict_184_0_3, 105, -1, G__defined_typename("Int_t"), 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetTDC",507,G__TDC0ClassDict_184_0_4, 105, -1, G__defined_typename("Int_t"), 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Print",525,G__TDC0ClassDict_184_0_5, 121, -1, -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Class",502,G__TDC0ClassDict_184_0_6, 85, G__get_linked_tagnum(&G__TDC0ClassDictLN_TClass), -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (TClass* (*)())(&TDC0Class::Class) ), 0);
   G__memfunc_setup("Class_Name",982,G__TDC0ClassDict_184_0_7, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&TDC0Class::Class_Name) ), 0);
   G__memfunc_setup("Class_Version",1339,G__TDC0ClassDict_184_0_8, 115, -1, G__defined_typename("Version_t"), 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (Version_t (*)())(&TDC0Class::Class_Version) ), 0);
   G__memfunc_setup("Dictionary",1046,G__TDC0ClassDict_184_0_9, 121, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (void (*)())(&TDC0Class::Dictionary) ), 0);
   G__memfunc_setup("IsA",253,(G__InterfaceMethod) NULL,85, G__get_linked_tagnum(&G__TDC0ClassDictLN_TClass), -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("ShowMembers",1132,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TMemberInspector' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("Streamer",835,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("StreamerNVirtual",1656,G__TDC0ClassDict_184_0_13, 121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - ClassDef_StreamerNVirtual_b", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("DeclFileName",1145,G__TDC0ClassDict_184_0_14, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&TDC0Class::DeclFileName) ), 0);
   G__memfunc_setup("ImplFileLine",1178,G__TDC0ClassDict_184_0_15, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&TDC0Class::ImplFileLine) ), 0);
   G__memfunc_setup("ImplFileName",1171,G__TDC0ClassDict_184_0_16, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&TDC0Class::ImplFileName) ), 0);
   G__memfunc_setup("DeclFileLine",1152,G__TDC0ClassDict_184_0_17, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&TDC0Class::DeclFileLine) ), 0);
   // automatic copy constructor
   G__memfunc_setup("TDC0Class", 769, G__TDC0ClassDict_184_0_18, (int) ('i'), G__get_linked_tagnum(&G__TDC0ClassDictLN_TDC0Class), -1, 0, 1, 1, 1, 0, "u 'TDC0Class' - 11 - -", (char*) NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~TDC0Class", 895, G__TDC0ClassDict_184_0_19, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 1);
   // automatic assignment operator
   G__memfunc_setup("operator=", 937, G__TDC0ClassDict_184_0_20, (int) ('u'), G__get_linked_tagnum(&G__TDC0ClassDictLN_TDC0Class), -1, 1, 1, 1, 1, 0, "u 'TDC0Class' - 11 - -", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncTDC0ClassDict() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalTDC0ClassDict() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
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

extern "C" void G__cpp_setup_funcTDC0ClassDict() {
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
G__linked_taginfo G__TDC0ClassDictLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__TDC0ClassDictLN_TBuffer = { "TBuffer" , 99 , -1 };
G__linked_taginfo G__TDC0ClassDictLN_TMemberInspector = { "TMemberInspector" , 99 , -1 };
G__linked_taginfo G__TDC0ClassDictLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__TDC0ClassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__TDC0ClassDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__TDC0ClassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__TDC0ClassDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__TDC0ClassDictLN_TDC0Class = { "TDC0Class" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableTDC0ClassDict() {
  G__TDC0ClassDictLN_TClass.tagnum = -1 ;
  G__TDC0ClassDictLN_TBuffer.tagnum = -1 ;
  G__TDC0ClassDictLN_TMemberInspector.tagnum = -1 ;
  G__TDC0ClassDictLN_TObject.tagnum = -1 ;
  G__TDC0ClassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__TDC0ClassDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__TDC0ClassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__TDC0ClassDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__TDC0ClassDictLN_TDC0Class.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableTDC0ClassDict() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__TDC0ClassDictLN_TClass);
   G__get_linked_tagnum_fwd(&G__TDC0ClassDictLN_TBuffer);
   G__get_linked_tagnum_fwd(&G__TDC0ClassDictLN_TMemberInspector);
   G__get_linked_tagnum_fwd(&G__TDC0ClassDictLN_TObject);
   G__get_linked_tagnum_fwd(&G__TDC0ClassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__TDC0ClassDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__TDC0ClassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__TDC0ClassDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__TDC0ClassDictLN_TDC0Class),sizeof(TDC0Class),-1,62720,"Class for accessing the SCPB bank: Time of Flight.",G__setup_memvarTDC0Class,G__setup_memfuncTDC0Class);
}
extern "C" void G__cpp_setupTDC0ClassDict(void) {
  G__check_setup_version(30051515,"G__cpp_setupTDC0ClassDict()");
  G__set_cpp_environmentTDC0ClassDict();
  G__cpp_setup_tagtableTDC0ClassDict();

  G__cpp_setup_inheritanceTDC0ClassDict();

  G__cpp_setup_typetableTDC0ClassDict();

  G__cpp_setup_memvarTDC0ClassDict();

  G__cpp_setup_memfuncTDC0ClassDict();
  G__cpp_setup_globalTDC0ClassDict();
  G__cpp_setup_funcTDC0ClassDict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncTDC0ClassDict();
  return;
}
class G__cpp_setup_initTDC0ClassDict {
  public:
    G__cpp_setup_initTDC0ClassDict() { G__add_setup_func("TDC0ClassDict",(G__incsetup)(&G__cpp_setupTDC0ClassDict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initTDC0ClassDict() { G__remove_setup_func("TDC0ClassDict"); }
};
G__cpp_setup_initTDC0ClassDict G__cpp_setup_initializerTDC0ClassDict;

