// **** auto generated, do not modify **** //
#include <windows.h>
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
#include "luaconf.h"

// **** Function Pointers **** //
lua_State *(*lua_newstate)(lua_Alloc f, void *ud);
void       (*lua_close)(lua_State *L);
lua_State *(*lua_newthread)(lua_State *L);
lua_CFunction (*lua_atpanic)(lua_State *L, lua_CFunction panicf);
const lua_Number *(*lua_version)(lua_State *L);
int   (*lua_absindex)(lua_State *L, int idx);
int   (*lua_gettop)(lua_State *L);
void  (*lua_settop)(lua_State *L, int idx);
void  (*lua_pushvalue)(lua_State *L, int idx);
void  (*lua_remove)(lua_State *L, int idx);
void  (*lua_insert)(lua_State *L, int idx);
void  (*lua_replace)(lua_State *L, int idx);
void  (*lua_copy)(lua_State *L, int fromidx, int toidx);
int   (*lua_checkstack)(lua_State *L, int sz);
void  (*lua_xmove)(lua_State *from, lua_State *to, int n);
int             (*lua_isnumber)(lua_State *L, int idx);
int             (*lua_isstring)(lua_State *L, int idx);
int             (*lua_iscfunction)(lua_State *L, int idx);
int             (*lua_isuserdata)(lua_State *L, int idx);
int             (*lua_type)(lua_State *L, int idx);
const char     *(*lua_typename)(lua_State *L, int tp);
lua_Number      (*lua_tonumberx)(lua_State *L, int idx, int *isnum);
lua_Integer     (*lua_tointegerx)(lua_State *L, int idx, int *isnum);
lua_Unsigned    (*lua_tounsignedx)(lua_State *L, int idx, int *isnum);
int             (*lua_toboolean)(lua_State *L, int idx);
const char     *(*lua_tolstring)(lua_State *L, int idx, size_t *len);
size_t          (*lua_rawlen)(lua_State *L, int idx);
lua_CFunction   (*lua_tocfunction)(lua_State *L, int idx);
void	       *(*lua_touserdata)(lua_State *L, int idx);
lua_State      *(*lua_tothread)(lua_State *L, int idx);
const void     *(*lua_topointer)(lua_State *L, int idx);
void  (*lua_arith)(lua_State *L, int op);
int   (*lua_rawequal)(lua_State *L, int idx1, int idx2);
int   (*lua_compare)(lua_State *L, int idx1, int idx2, int op);
void        (*lua_pushnil)(lua_State *L);
void        (*lua_pushnumber)(lua_State *L, lua_Number n);
void        (*lua_pushinteger)(lua_State *L, lua_Integer n);
void        (*lua_pushunsigned)(lua_State *L, lua_Unsigned n);
const char *(*lua_pushlstring)(lua_State *L, const char *s, size_t l);
const char *(*lua_pushstring)(lua_State *L, const char *s);
const char *(*lua_pushvfstring)(lua_State *L, const char *fmt,va_list argp);
const char *(*lua_pushfstring)(lua_State *L, const char *fmt, ...);
void  (*lua_pushcclosure)(lua_State *L, lua_CFunction fn, int n);
void  (*lua_pushboolean)(lua_State *L, int b);
void  (*lua_pushlightuserdata)(lua_State *L, void *p);
int   (*lua_pushthread)(lua_State *L);
void  (*lua_getglobal)(lua_State *L, const char *var);
void  (*lua_gettable)(lua_State *L, int idx);
void  (*lua_getfield)(lua_State *L, int idx, const char *k);
void  (*lua_rawget)(lua_State *L, int idx);
void  (*lua_rawgeti)(lua_State *L, int idx, int n);
void  (*lua_rawgetp)(lua_State *L, int idx, const void *p);
void  (*lua_createtable)(lua_State *L, int narr, int nrec);
void *(*lua_newuserdata)(lua_State *L, size_t sz);
int   (*lua_getmetatable)(lua_State *L, int objindex);
void  (*lua_getuservalue)(lua_State *L, int idx);
void  (*lua_setglobal)(lua_State *L, const char *var);
void  (*lua_settable)(lua_State *L, int idx);
void  (*lua_setfield)(lua_State *L, int idx, const char *k);
void  (*lua_rawset)(lua_State *L, int idx);
void  (*lua_rawseti)(lua_State *L, int idx, int n);
void  (*lua_rawsetp)(lua_State *L, int idx, const void *p);
int   (*lua_setmetatable)(lua_State *L, int objindex);
void  (*lua_setuservalue)(lua_State *L, int idx);
void  (*lua_callk)(lua_State *L, int nargs, int nresults, int ctx,lua_CFunction k);
int   (*lua_getctx)(lua_State *L, int *ctx);
int   (*lua_pcallk)(lua_State *L, int nargs, int nresults, int errfunc, int ctx, lua_CFunction k);
int   (*lua_load)(lua_State *L, lua_Reader reader, void *dt,const char *chunkname,const char *mode);
int (*lua_dump)(lua_State *L, lua_Writer writer, void *data);
int  (*lua_yieldk)(lua_State *L, int nresults, int ctx,lua_CFunction k);
int  (*lua_resume)(lua_State *L, lua_State *from, int narg);
int  (*lua_status)(lua_State *L);
int (*lua_gc)(lua_State *L, int what, int data);
int   (*lua_error)(lua_State *L);
int   (*lua_next)(lua_State *L, int idx);
void  (*lua_concat)(lua_State *L, int n);
void  (*lua_len)(lua_State *L, int idx);
lua_Alloc (*lua_getallocf)(lua_State *L, void **ud);
void      (*lua_setallocf)(lua_State *L, lua_Alloc f, void *ud);
int (*lua_getstack)(lua_State *L, int level, lua_Debug *ar);
int (*lua_getinfo)(lua_State *L, const char *what, lua_Debug *ar);
const char *(*lua_getlocal)(lua_State *L, const lua_Debug *ar, int n);
const char *(*lua_setlocal)(lua_State *L, const lua_Debug *ar, int n);
const char *(*lua_getupvalue)(lua_State *L, int funcindex, int n);
const char *(*lua_setupvalue)(lua_State *L, int funcindex, int n);
void *(*lua_upvalueid)(lua_State *L, int fidx, int n);
void  (*lua_upvaluejoin)(lua_State *L, int fidx1, int n1,int fidx2, int n2);
int (*lua_sethook)(lua_State *L, lua_Hook func, int mask, int count);
lua_Hook (*lua_gethook)(lua_State *L);
int (*lua_gethookmask)(lua_State *L);
int (*lua_gethookcount)(lua_State *L);
int (*luaopen_base)(lua_State *L);
int (*luaopen_coroutine)(lua_State *L);
int (*luaopen_table)(lua_State *L);
int (*luaopen_io)(lua_State *L);
int (*luaopen_os)(lua_State *L);
int (*luaopen_string)(lua_State *L);
int (*luaopen_bit32)(lua_State *L);
int (*luaopen_math)(lua_State *L);
int (*luaopen_debug)(lua_State *L);
int (*luaopen_package)(lua_State *L);
void (*luaL_openlibs)(lua_State *L);
void (*luaL_checkversion_)(lua_State *L, lua_Number ver);
int (*luaL_getmetafield)(lua_State *L, int obj, const char *e);
int (*luaL_callmeta)(lua_State *L, int obj, const char *e);
const char *(*luaL_tolstring)(lua_State *L, int idx, size_t *len);
int (*luaL_argerror)(lua_State *L, int numarg, const char *extramsg);
const char *(*luaL_checklstring)(lua_State *L, int numArg,size_t *l);
const char *(*luaL_optlstring)(lua_State *L, int numArg,const char *def, size_t *l);
lua_Number (*luaL_checknumber)(lua_State *L, int numArg);
lua_Number (*luaL_optnumber)(lua_State *L, int nArg, lua_Number def);
lua_Integer (*luaL_checkinteger)(lua_State *L, int numArg);
lua_Integer (*luaL_optinteger)(lua_State *L, int nArg,lua_Integer def);
lua_Unsigned (*luaL_checkunsigned)(lua_State *L, int numArg);
lua_Unsigned (*luaL_optunsigned)(lua_State *L, int numArg,lua_Unsigned def);
void (*luaL_checkstack)(lua_State *L, int sz, const char *msg);
void (*luaL_checktype)(lua_State *L, int narg, int t);
void (*luaL_checkany)(lua_State *L, int narg);
int   (*luaL_newmetatable)(lua_State *L, const char *tname);
void  (*luaL_setmetatable)(lua_State *L, const char *tname);
void *(*luaL_testudata)(lua_State *L, int ud, const char *tname);
void *(*luaL_checkudata)(lua_State *L, int ud, const char *tname);
void (*luaL_where)(lua_State *L, int lvl);
int (*luaL_error)(lua_State *L, const char *fmt, ...);
int (*luaL_checkoption)(lua_State *L, int narg, const char *def,const char *const lst[]);
int (*luaL_fileresult)(lua_State *L, int stat, const char *fname);
int (*luaL_execresult)(lua_State *L, int stat);
int (*luaL_ref)(lua_State *L, int t);
void (*luaL_unref)(lua_State *L, int t, int ref);
int (*luaL_loadfilex)(lua_State *L, const char *filename,const char *mode);
int (*luaL_loadbufferx)(lua_State *L, const char *buff, size_t sz,const char *name, const char *mode);
int (*luaL_loadstring)(lua_State *L, const char *s);
lua_State *(*luaL_newstate)(void);
int (*luaL_len)(lua_State *L, int idx);
const char *(*luaL_gsub)(lua_State *L, const char *s, const char *p,const char *r);
void (*luaL_setfuncs)(lua_State *L, const luaL_Reg *l, int nup);
int (*luaL_getsubtable)(lua_State *L, int idx, const char *fname);
void (*luaL_traceback)(lua_State *L, lua_State *L1,const char *msg, int level);
void (*luaL_requiref)(lua_State *L, const char *modname,lua_CFunction openf, int glb);
void (*luaL_buffinit)(lua_State *L, luaL_Buffer *B);
char *(*luaL_prepbuffsize)(luaL_Buffer *B, size_t sz);
void (*luaL_addlstring)(luaL_Buffer *B, const char *s, size_t l);
void (*luaL_addstring)(luaL_Buffer *B, const char *s);
void (*luaL_addvalue)(luaL_Buffer *B);
void (*luaL_pushresult)(luaL_Buffer *B);
void (*luaL_pushresultsize)(luaL_Buffer *B, size_t sz);
char *(*luaL_buffinitsize)(lua_State *L, luaL_Buffer *B, size_t sz);
void (*luaL_pushmodule)(lua_State *L, const char *modname,int sizehint);
void (*luaL_openlib)(lua_State *L, const char *libname,const luaL_Reg *l, int nup);

// **** Loading Function **** //
void LinkLuaFunctions()
{
  HINSTANCE luaLib;
  luaLib = LoadLibrary(TEXT("lua52.dll")); 
  
  lua_newstate = (lua_State *(*)(lua_Alloc f, void *ud))GetProcAddress(luaLib,"lua_newstate");
  lua_close = (void       (*)(lua_State *L))GetProcAddress(luaLib,"lua_close");
  lua_newthread = (lua_State *(*)(lua_State *L))GetProcAddress(luaLib,"lua_newthread");
  lua_atpanic = (lua_CFunction (*)(lua_State *L, lua_CFunction panicf))GetProcAddress(luaLib,"lua_atpanic");
  lua_version = (const lua_Number *(*)(lua_State *L))GetProcAddress(luaLib,"lua_version");
  lua_absindex = (int   (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_absindex");
  lua_gettop = (int   (*)(lua_State *L))GetProcAddress(luaLib,"lua_gettop");
  lua_settop = (void  (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_settop");
  lua_pushvalue = (void  (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_pushvalue");
  lua_remove = (void  (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_remove");
  lua_insert = (void  (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_insert");
  lua_replace = (void  (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_replace");
  lua_copy = (void  (*)(lua_State *L, int fromidx, int toidx))GetProcAddress(luaLib,"lua_copy");
  lua_checkstack = (int   (*)(lua_State *L, int sz))GetProcAddress(luaLib,"lua_checkstack");
  lua_xmove = (void  (*)(lua_State *from, lua_State *to, int n))GetProcAddress(luaLib,"lua_xmove");
  lua_isnumber = (int             (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_isnumber");
  lua_isstring = (int             (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_isstring");
  lua_iscfunction = (int             (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_iscfunction");
  lua_isuserdata = (int             (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_isuserdata");
  lua_type = (int             (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_type");
  lua_typename = (const char     *(*)(lua_State *L, int tp))GetProcAddress(luaLib,"lua_typename");
  lua_tonumberx = (lua_Number      (*)(lua_State *L, int idx, int *isnum))GetProcAddress(luaLib,"lua_tonumberx");
  lua_tointegerx = (lua_Integer     (*)(lua_State *L, int idx, int *isnum))GetProcAddress(luaLib,"lua_tointegerx");
  lua_tounsignedx = (lua_Unsigned    (*)(lua_State *L, int idx, int *isnum))GetProcAddress(luaLib,"lua_tounsignedx");
  lua_toboolean = (int             (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_toboolean");
  lua_tolstring = (const char     *(*)(lua_State *L, int idx, size_t *len))GetProcAddress(luaLib,"lua_tolstring");
  lua_rawlen = (size_t          (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_rawlen");
  lua_tocfunction = (lua_CFunction   (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_tocfunction");
  lua_touserdata = (void	       *(*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_touserdata");
  lua_tothread = (lua_State      *(*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_tothread");
  lua_topointer = (const void     *(*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_topointer");
  lua_arith = (void  (*)(lua_State *L, int op))GetProcAddress(luaLib,"lua_arith");
  lua_rawequal = (int   (*)(lua_State *L, int idx1, int idx2))GetProcAddress(luaLib,"lua_rawequal");
  lua_compare = (int   (*)(lua_State *L, int idx1, int idx2, int op))GetProcAddress(luaLib,"lua_compare");
  lua_pushnil = (void        (*)(lua_State *L))GetProcAddress(luaLib,"lua_pushnil");
  lua_pushnumber = (void        (*)(lua_State *L, lua_Number n))GetProcAddress(luaLib,"lua_pushnumber");
  lua_pushinteger = (void        (*)(lua_State *L, lua_Integer n))GetProcAddress(luaLib,"lua_pushinteger");
  lua_pushunsigned = (void        (*)(lua_State *L, lua_Unsigned n))GetProcAddress(luaLib,"lua_pushunsigned");
  lua_pushlstring = (const char *(*)(lua_State *L, const char *s, size_t l))GetProcAddress(luaLib,"lua_pushlstring");
  lua_pushstring = (const char *(*)(lua_State *L, const char *s))GetProcAddress(luaLib,"lua_pushstring");
  lua_pushvfstring = (const char *(*)(lua_State *L, const char *fmt,va_list argp))GetProcAddress(luaLib,"lua_pushvfstring");
  lua_pushfstring = (const char *(*)(lua_State *L, const char *fmt, ...))GetProcAddress(luaLib,"lua_pushfstring");
  lua_pushcclosure = (void  (*)(lua_State *L, lua_CFunction fn, int n))GetProcAddress(luaLib,"lua_pushcclosure");
  lua_pushboolean = (void  (*)(lua_State *L, int b))GetProcAddress(luaLib,"lua_pushboolean");
  lua_pushlightuserdata = (void  (*)(lua_State *L, void *p))GetProcAddress(luaLib,"lua_pushlightuserdata");
  lua_pushthread = (int   (*)(lua_State *L))GetProcAddress(luaLib,"lua_pushthread");
  lua_getglobal = (void  (*)(lua_State *L, const char *var))GetProcAddress(luaLib,"lua_getglobal");
  lua_gettable = (void  (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_gettable");
  lua_getfield = (void  (*)(lua_State *L, int idx, const char *k))GetProcAddress(luaLib,"lua_getfield");
  lua_rawget = (void  (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_rawget");
  lua_rawgeti = (void  (*)(lua_State *L, int idx, int n))GetProcAddress(luaLib,"lua_rawgeti");
  lua_rawgetp = (void  (*)(lua_State *L, int idx, const void *p))GetProcAddress(luaLib,"lua_rawgetp");
  lua_createtable = (void  (*)(lua_State *L, int narr, int nrec))GetProcAddress(luaLib,"lua_createtable");
  lua_newuserdata = (void *(*)(lua_State *L, size_t sz))GetProcAddress(luaLib,"lua_newuserdata");
  lua_getmetatable = (int   (*)(lua_State *L, int objindex))GetProcAddress(luaLib,"lua_getmetatable");
  lua_getuservalue = (void  (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_getuservalue");
  lua_setglobal = (void  (*)(lua_State *L, const char *var))GetProcAddress(luaLib,"lua_setglobal");
  lua_settable = (void  (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_settable");
  lua_setfield = (void  (*)(lua_State *L, int idx, const char *k))GetProcAddress(luaLib,"lua_setfield");
  lua_rawset = (void  (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_rawset");
  lua_rawseti = (void  (*)(lua_State *L, int idx, int n))GetProcAddress(luaLib,"lua_rawseti");
  lua_rawsetp = (void  (*)(lua_State *L, int idx, const void *p))GetProcAddress(luaLib,"lua_rawsetp");
  lua_setmetatable = (int   (*)(lua_State *L, int objindex))GetProcAddress(luaLib,"lua_setmetatable");
  lua_setuservalue = (void  (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_setuservalue");
  lua_callk = (void  (*)(lua_State *L, int nargs, int nresults, int ctx,lua_CFunction k))GetProcAddress(luaLib,"lua_callk");
  lua_getctx = (int   (*)(lua_State *L, int *ctx))GetProcAddress(luaLib,"lua_getctx");
  lua_pcallk = (int   (*)(lua_State *L, int nargs, int nresults, int errfunc, int ctx, lua_CFunction k))GetProcAddress(luaLib,"lua_pcallk");
  lua_load = (int   (*)(lua_State *L, lua_Reader reader, void *dt,const char *chunkname,const char *mode))GetProcAddress(luaLib,"lua_load");
  lua_dump = (int (*)(lua_State *L, lua_Writer writer, void *data))GetProcAddress(luaLib,"lua_dump");
  lua_yieldk = (int  (*)(lua_State *L, int nresults, int ctx,lua_CFunction k))GetProcAddress(luaLib,"lua_yieldk");
  lua_resume = (int  (*)(lua_State *L, lua_State *from, int narg))GetProcAddress(luaLib,"lua_resume");
  lua_status = (int  (*)(lua_State *L))GetProcAddress(luaLib,"lua_status");
  lua_gc = (int (*)(lua_State *L, int what, int data))GetProcAddress(luaLib,"lua_gc");
  lua_error = (int   (*)(lua_State *L))GetProcAddress(luaLib,"lua_error");
  lua_next = (int   (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_next");
  lua_concat = (void  (*)(lua_State *L, int n))GetProcAddress(luaLib,"lua_concat");
  lua_len = (void  (*)(lua_State *L, int idx))GetProcAddress(luaLib,"lua_len");
  lua_getallocf = (lua_Alloc (*)(lua_State *L, void **ud))GetProcAddress(luaLib,"lua_getallocf");
  lua_setallocf = (void      (*)(lua_State *L, lua_Alloc f, void *ud))GetProcAddress(luaLib,"lua_setallocf");
  lua_getstack = (int (*)(lua_State *L, int level, lua_Debug *ar))GetProcAddress(luaLib,"lua_getstack");
  lua_getinfo = (int (*)(lua_State *L, const char *what, lua_Debug *ar))GetProcAddress(luaLib,"lua_getinfo");
  lua_getlocal = (const char *(*)(lua_State *L, const lua_Debug *ar, int n))GetProcAddress(luaLib,"lua_getlocal");
  lua_setlocal = (const char *(*)(lua_State *L, const lua_Debug *ar, int n))GetProcAddress(luaLib,"lua_setlocal");
  lua_getupvalue = (const char *(*)(lua_State *L, int funcindex, int n))GetProcAddress(luaLib,"lua_getupvalue");
  lua_setupvalue = (const char *(*)(lua_State *L, int funcindex, int n))GetProcAddress(luaLib,"lua_setupvalue");
  lua_upvalueid = (void *(*)(lua_State *L, int fidx, int n))GetProcAddress(luaLib,"lua_upvalueid");
  lua_upvaluejoin = (void  (*)(lua_State *L, int fidx1, int n1,int fidx2, int n2))GetProcAddress(luaLib,"lua_upvaluejoin");
  lua_sethook = (int (*)(lua_State *L, lua_Hook func, int mask, int count))GetProcAddress(luaLib,"lua_sethook");
  lua_gethook = (lua_Hook (*)(lua_State *L))GetProcAddress(luaLib,"lua_gethook");
  lua_gethookmask = (int (*)(lua_State *L))GetProcAddress(luaLib,"lua_gethookmask");
  lua_gethookcount = (int (*)(lua_State *L))GetProcAddress(luaLib,"lua_gethookcount");
  luaopen_base = (int (*)(lua_State *L))GetProcAddress(luaLib,"luaopen_base");
  luaopen_coroutine = (int (*)(lua_State *L))GetProcAddress(luaLib,"luaopen_coroutine");
  luaopen_table = (int (*)(lua_State *L))GetProcAddress(luaLib,"luaopen_table");
  luaopen_io = (int (*)(lua_State *L))GetProcAddress(luaLib,"luaopen_io");
  luaopen_os = (int (*)(lua_State *L))GetProcAddress(luaLib,"luaopen_os");
  luaopen_string = (int (*)(lua_State *L))GetProcAddress(luaLib,"luaopen_string");
  luaopen_bit32 = (int (*)(lua_State *L))GetProcAddress(luaLib,"luaopen_bit32");
  luaopen_math = (int (*)(lua_State *L))GetProcAddress(luaLib,"luaopen_math");
  luaopen_debug = (int (*)(lua_State *L))GetProcAddress(luaLib,"luaopen_debug");
  luaopen_package = (int (*)(lua_State *L))GetProcAddress(luaLib,"luaopen_package");
  luaL_openlibs = (void (*)(lua_State *L))GetProcAddress(luaLib,"luaL_openlibs");
  luaL_checkversion_ = (void (*)(lua_State *L, lua_Number ver))GetProcAddress(luaLib,"luaL_checkversion_");
  luaL_getmetafield = (int (*)(lua_State *L, int obj, const char *e))GetProcAddress(luaLib,"luaL_getmetafield");
  luaL_callmeta = (int (*)(lua_State *L, int obj, const char *e))GetProcAddress(luaLib,"luaL_callmeta");
  luaL_tolstring = (const char *(*)(lua_State *L, int idx, size_t *len))GetProcAddress(luaLib,"luaL_tolstring");
  luaL_argerror = (int (*)(lua_State *L, int numarg, const char *extramsg))GetProcAddress(luaLib,"luaL_argerror");
  luaL_checklstring = (const char *(*)(lua_State *L, int numArg,size_t *l))GetProcAddress(luaLib,"luaL_checklstring");
  luaL_optlstring = (const char *(*)(lua_State *L, int numArg,const char *def, size_t *l))GetProcAddress(luaLib,"luaL_optlstring");
  luaL_checknumber = (lua_Number (*)(lua_State *L, int numArg))GetProcAddress(luaLib,"luaL_checknumber");
  luaL_optnumber = (lua_Number (*)(lua_State *L, int nArg, lua_Number def))GetProcAddress(luaLib,"luaL_optnumber");
  luaL_checkinteger = (lua_Integer (*)(lua_State *L, int numArg))GetProcAddress(luaLib,"luaL_checkinteger");
  luaL_optinteger = (lua_Integer (*)(lua_State *L, int nArg,lua_Integer def))GetProcAddress(luaLib,"luaL_optinteger");
  luaL_checkunsigned = (lua_Unsigned (*)(lua_State *L, int numArg))GetProcAddress(luaLib,"luaL_checkunsigned");
  luaL_optunsigned = (lua_Unsigned (*)(lua_State *L, int numArg,lua_Unsigned def))GetProcAddress(luaLib,"luaL_optunsigned");
  luaL_checkstack = (void (*)(lua_State *L, int sz, const char *msg))GetProcAddress(luaLib,"luaL_checkstack");
  luaL_checktype = (void (*)(lua_State *L, int narg, int t))GetProcAddress(luaLib,"luaL_checktype");
  luaL_checkany = (void (*)(lua_State *L, int narg))GetProcAddress(luaLib,"luaL_checkany");
  luaL_newmetatable = (int   (*)(lua_State *L, const char *tname))GetProcAddress(luaLib,"luaL_newmetatable");
  luaL_setmetatable = (void  (*)(lua_State *L, const char *tname))GetProcAddress(luaLib,"luaL_setmetatable");
  luaL_testudata = (void *(*)(lua_State *L, int ud, const char *tname))GetProcAddress(luaLib,"luaL_testudata");
  luaL_checkudata = (void *(*)(lua_State *L, int ud, const char *tname))GetProcAddress(luaLib,"luaL_checkudata");
  luaL_where = (void (*)(lua_State *L, int lvl))GetProcAddress(luaLib,"luaL_where");
  luaL_error = (int (*)(lua_State *L, const char *fmt, ...))GetProcAddress(luaLib,"luaL_error");
  luaL_checkoption = (int (*)(lua_State *L, int narg, const char *def,const char *const lst[]))GetProcAddress(luaLib,"luaL_checkoption");
  luaL_fileresult = (int (*)(lua_State *L, int stat, const char *fname))GetProcAddress(luaLib,"luaL_fileresult");
  luaL_execresult = (int (*)(lua_State *L, int stat))GetProcAddress(luaLib,"luaL_execresult");
  luaL_ref = (int (*)(lua_State *L, int t))GetProcAddress(luaLib,"luaL_ref");
  luaL_unref = (void (*)(lua_State *L, int t, int ref))GetProcAddress(luaLib,"luaL_unref");
  luaL_loadfilex = (int (*)(lua_State *L, const char *filename,const char *mode))GetProcAddress(luaLib,"luaL_loadfilex");
  luaL_loadbufferx = (int (*)(lua_State *L, const char *buff, size_t sz,const char *name, const char *mode))GetProcAddress(luaLib,"luaL_loadbufferx");
  luaL_loadstring = (int (*)(lua_State *L, const char *s))GetProcAddress(luaLib,"luaL_loadstring");
  luaL_newstate = (lua_State *(*)(void))GetProcAddress(luaLib,"luaL_newstate");
  luaL_len = (int (*)(lua_State *L, int idx))GetProcAddress(luaLib,"luaL_len");
  luaL_gsub = (const char *(*)(lua_State *L, const char *s, const char *p,const char *r))GetProcAddress(luaLib,"luaL_gsub");
  luaL_setfuncs = (void (*)(lua_State *L, const luaL_Reg *l, int nup))GetProcAddress(luaLib,"luaL_setfuncs");
  luaL_getsubtable = (int (*)(lua_State *L, int idx, const char *fname))GetProcAddress(luaLib,"luaL_getsubtable");
  luaL_traceback = (void (*)(lua_State *L, lua_State *L1,const char *msg, int level))GetProcAddress(luaLib,"luaL_traceback");
  luaL_requiref = (void (*)(lua_State *L, const char *modname,lua_CFunction openf, int glb))GetProcAddress(luaLib,"luaL_requiref");
  luaL_buffinit = (void (*)(lua_State *L, luaL_Buffer *B))GetProcAddress(luaLib,"luaL_buffinit");
  luaL_prepbuffsize = (char *(*)(luaL_Buffer *B, size_t sz))GetProcAddress(luaLib,"luaL_prepbuffsize");
  luaL_addlstring = (void (*)(luaL_Buffer *B, const char *s, size_t l))GetProcAddress(luaLib,"luaL_addlstring");
  luaL_addstring = (void (*)(luaL_Buffer *B, const char *s))GetProcAddress(luaLib,"luaL_addstring");
  luaL_addvalue = (void (*)(luaL_Buffer *B))GetProcAddress(luaLib,"luaL_addvalue");
  luaL_pushresult = (void (*)(luaL_Buffer *B))GetProcAddress(luaLib,"luaL_pushresult");
  luaL_pushresultsize = (void (*)(luaL_Buffer *B, size_t sz))GetProcAddress(luaLib,"luaL_pushresultsize");
  luaL_buffinitsize = (char *(*)(lua_State *L, luaL_Buffer *B, size_t sz))GetProcAddress(luaLib,"luaL_buffinitsize");
  luaL_pushmodule = (void (*)(lua_State *L, const char *modname,int sizehint))GetProcAddress(luaLib,"luaL_pushmodule");
  luaL_openlib = (void (*)(lua_State *L, const char *libname,const luaL_Reg *l, int nup))GetProcAddress(luaLib,"luaL_openlib");  
}
