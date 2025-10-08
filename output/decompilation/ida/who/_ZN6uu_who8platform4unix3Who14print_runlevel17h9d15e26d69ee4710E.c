__int64 __fastcall uu_who::platform::unix::Who::print_runlevel(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r15d
  int v14; // r12d
  __int64 v15; // r14
  __int128 *v16; // r13
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // r10
  __int128 v21; // [rsp-50h] [rbp-108h]
  __int128 v22; // [rsp-20h] [rbp-D8h]
  int v23; // [rsp+8h] [rbp-B0h] BYREF
  int v24; // [rsp+Ch] [rbp-ACh] BYREF
  __int128 v25; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+20h] [rbp-98h]
  char **v27; // [rsp+28h] [rbp-90h] BYREF
  __int64 v28; // [rsp+30h] [rbp-88h]
  __int128 *v29; // [rsp+38h] [rbp-80h]
  __int64 v30; // [rsp+40h] [rbp-78h]
  __int64 v31; // [rsp+48h] [rbp-70h]
  __int128 v32; // [rsp+58h] [rbp-60h] BYREF
  __int64 v33; // [rsp+68h] [rbp-50h]
  _BYTE v34[8]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v35; // [rsp+78h] [rbp-40h]
  __int64 v36; // [rsp+80h] [rbp-38h]

  v6 = *(_DWORD *)(a2 + 4);
  v7 = (unsigned int)(v6 + 255);
  if ( v6 >= 0 )
    v7 = (unsigned int)v6;
  v8 = BYTE1(v7);
  v23 = (unsigned __int8)v6;
  *(_QWORD *)&v32 = &v23;
  *((_QWORD *)&v32 + 1) = <char as core::fmt::Display>::fmt;
  v27 = &off_FEF58;
  v28 = 1LL;
  v31 = 0LL;
  v29 = &v32;
  v30 = 1LL;
  core::option::Option<T>::map_or_else(v34, &v27, a3, v7, a5, a6);
  v24 = 5 * (v8 == 78) + 78;
  *(_QWORD *)&v25 = &v24;
  *((_QWORD *)&v25 + 1) = <char as core::fmt::Display>::fmt;
  v27 = &off_FEF68;
  v28 = 1LL;
  v31 = 0LL;
  v29 = &v25;
  v30 = 1LL;
  core::option::Option<T>::map_or_else(&v32, &v27, v9, v10, v11, v12);
  v25 = v32;
  v26 = v33;
  v13 = v35;
  v14 = v36;
  uu_who::platform::unix::time_string((__int64)&v27, a2);
  v15 = v28;
  v16 = v29;
  v17 = (unsigned __int8)core::unicode::unicode_data::cc::lookup(v8) == 0;
  v18 = v26;
  if ( !v17 )
    v18 = 0LL;
  v19 = 1LL;
  if ( v17 )
    v19 = *((_QWORD *)&v25 + 1);
  *((_QWORD *)&v22 + 1) = v18;
  *(_QWORD *)&v22 = v19;
  *((_QWORD *)&v21 + 1) = v16;
  *(_QWORD *)&v21 = v15;
  uu_who::platform::unix::Who::print_line(a1, 1, 0, 32, v13, v14, v21, 1uLL, 1uLL, v22, 1uLL);
  core::ptr::drop_in_place<alloc::string::String>(&v27);
  core::ptr::drop_in_place<alloc::string::String>(&v25);
  return core::ptr::drop_in_place<alloc::string::String>(v34);
}