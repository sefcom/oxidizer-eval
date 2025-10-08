__int64 __fastcall uu_numfmt::format::format_string(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r12
  unsigned __int8 v13; // r13
  __int64 result; // rax
  __int64 (__fastcall *v15)(); // xmm0_8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  char ***v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // r15
  char **v30; // rsi
  char **v31; // rsi
  char **v32; // [rsp+0h] [rbp-158h] BYREF
  __int128 v33; // [rsp+8h] [rbp-150h]
  __int128 v34; // [rsp+18h] [rbp-140h]
  __int64 (__fastcall *v35)(); // [rsp+28h] [rbp-130h]
  __int128 v36; // [rsp+30h] [rbp-128h] BYREF
  __int64 v37; // [rsp+40h] [rbp-118h]
  __int128 *v38; // [rsp+50h] [rbp-108h] BYREF
  __int64 (__fastcall *v39)(); // [rsp+58h] [rbp-100h]
  char ***v40; // [rsp+60h] [rbp-F8h]
  __int64 (__fastcall *v41)(); // [rsp+68h] [rbp-F0h]
  __int64 v42; // [rsp+70h] [rbp-E8h]
  __int128 v43; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+90h] [rbp-C8h]
  __int128 v45; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-A8h]
  __int128 v47; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-88h]
  __int64 v49; // [rsp+D8h] [rbp-80h]
  __int64 v50; // [rsp+E0h] [rbp-78h]
  __int64 v51; // [rsp+E8h] [rbp-70h]
  __int128 v52; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v53; // [rsp+100h] [rbp-58h]
  __int128 v54; // [rsp+110h] [rbp-48h] BYREF
  __int64 v55; // [rsp+120h] [rbp-38h]

  v49 = a5;
  v7 = a3;
  v8 = a2;
  v9 = *(_QWORD *)(a4 + 136);
  v50 = a6;
  if ( !__OFSUB__(-v9, 1LL) )
  {
    v10 = <&str as core::str::pattern::Pattern>::strip_suffix_of(*(_QWORD *)(a4 + 144), *(_QWORD *)(a4 + 152), a2, a3);
    if ( v10 )
    {
      v7 = v11;
      v8 = v10;
    }
  }
  v51 = v9;
  if ( *(_DWORD *)(a4 + 16) == 1 )
  {
    v12 = *(_QWORD *)(a4 + 24);
    v13 = *(_BYTE *)(a4 + 176);
  }
  else
  {
    v13 = *(_BYTE *)(a4 + 176);
    if ( v13 == 5 && (v13 = 5, *(_BYTE *)(a4 + 177) == 5) )
      v12 = uu_numfmt::format::parse_implicit_precision(v8, v7);
    else
      v12 = 0LL;
  }
  uu_numfmt::format::transform_from((__int64)&v38, v8, v7, *(_QWORD *)(a4 + 160), v13);
  result = (__int64)v38;
  v15 = v39;
  if ( v38 != (__int128 *)0x8000000000000000LL )
  {
    v20 = v40;
    a1[1] = v38;
    a1[2] = v15;
    a1[3] = v20;
    goto LABEL_14;
  }
  uu_numfmt::format::transform_to(
    (__int64)&v32,
    *(_QWORD *)(a4 + 168),
    *(_BYTE *)(a4 + 177),
    *(_BYTE *)(a4 + 202),
    v12,
    *(double *)&v39);
  v36 = v33;
  v19 = v34;
  v37 = v34;
  if ( (_DWORD)v32 == 1 )
  {
    result = v37;
    a1[3] = v37;
    *(_OWORD *)(a1 + 1) = v36;
LABEL_14:
    *a1 = 1LL;
    return result;
  }
  v53 = v37;
  v52 = v36;
  v21 = v51;
  if ( v51 == 0x8000000000000000LL )
  {
    v46 = v53;
    v45 = v52;
    v22 = v50;
    if ( (*(_BYTE *)a4 & 1) != 0 )
    {
LABEL_18:
      v23 = *(_QWORD *)(a4 + 8);
      goto LABEL_22;
    }
  }
  else
  {
    *(_QWORD *)&v47 = a4 + 136;
    v38 = &v52;
    v39 = <alloc::string::String as core::fmt::Display>::fmt;
    v40 = (char ***)&v47;
    v41 = <&T as core::fmt::Display>::fmt;
    v32 = (char **)&unk_195A0;
    *(_QWORD *)&v33 = 2LL;
    *((_QWORD *)&v33 + 1) = &v38;
    v34 = 2uLL;
    core::option::Option<T>::map_or_else(&v36, &v32);
    v45 = v36;
    v46 = v37;
    v22 = v50;
    if ( (*(_BYTE *)a4 & 1) != 0 )
      goto LABEL_18;
  }
  v23 = v22;
  if ( (v49 & 1) == 0 )
    v23 = *(_QWORD *)(a4 + 184);
LABEL_22:
  if ( !v23 )
  {
    v44 = v46;
    v43 = v45;
    goto LABEL_42;
  }
  if ( v23 <= 0 )
  {
    if ( (unsigned __int64)-v23 > 0xFFFF )
    {
      v30 = &off_1024A0;
      goto LABEL_49;
    }
    v38 = &v45;
    v39 = <alloc::string::String as core::fmt::Display>::fmt;
    v40 = 0LL;
    LOWORD(v41) = -(__int16)v23;
    v32 = (char **)&unk_198C0;
    *(_QWORD *)&v33 = 1LL;
    *((_QWORD *)&v34 + 1) = &unk_1ACD8;
    v35 = (__int64 (__fastcall *)())(&dword_0 + 1);
    *((_QWORD *)&v33 + 1) = &v38;
    *(_QWORD *)&v34 = 2LL;
    core::option::Option<T>::map_or_else(&v36, &v32);
    goto LABEL_37;
  }
  if ( *(_BYTE *)(a4 + 81) != 1 )
  {
    if ( (unsigned __int64)v23 > 0xFFFF )
    {
      v30 = &off_1024B8;
LABEL_49:
      v32 = &off_102460;
      *(_QWORD *)&v33 = 1LL;
      *((_QWORD *)&v33 + 1) = 8LL;
      v34 = 0LL;
      ((void (__fastcall __noreturn *)(char ***, char **, __int64, __int64, __int64, __int64))core::panicking::panic_fmt)(
        &v32,
        v30,
        v16,
        v19,
        v17,
        v18);
    }
    v38 = &v45;
    v39 = <alloc::string::String as core::fmt::Display>::fmt;
    v40 = 0LL;
    LOWORD(v41) = v23;
    v32 = (char **)&unk_198C0;
    *(_QWORD *)&v33 = 1LL;
    *((_QWORD *)&v34 + 1) = &unk_1AD08;
    v35 = (__int64 (__fastcall *)())(&dword_0 + 1);
    *((_QWORD *)&v33 + 1) = &v38;
    *(_QWORD *)&v34 = 2LL;
    core::option::Option<T>::map_or_else(&v36, &v32);
LABEL_37:
    v43 = v36;
    v44 = v37;
    goto LABEL_42;
  }
  if ( (unsigned __int64)v23 > 0xFFFF )
  {
    v30 = &off_102500;
    goto LABEL_49;
  }
  v24 = v22;
  v38 = &v45;
  v39 = <alloc::string::String as core::fmt::Display>::fmt;
  v40 = 0LL;
  LOWORD(v41) = v23;
  v32 = (char **)&unk_198C0;
  *(_QWORD *)&v33 = 1LL;
  *((_QWORD *)&v34 + 1) = &unk_1AD38;
  v35 = (__int64 (__fastcall *)())(&dword_0 + 1);
  *((_QWORD *)&v33 + 1) = &v38;
  *(_QWORD *)&v34 = 2LL;
  core::option::Option<T>::map_or_else(&v36, &v32);
  v47 = v36;
  v48 = v37;
  if ( (v49 & 1) == 0 )
    v24 = *(_QWORD *)(a4 + 184);
  if ( v24 )
  {
    if ( v24 <= 0 )
    {
      v29 = -v24;
      if ( v29 <= 0xFFFF )
      {
        v38 = &v47;
        v39 = <alloc::string::String as core::fmt::Display>::fmt;
        v40 = 0LL;
        LOWORD(v41) = v29;
        v32 = (char **)&unk_198C0;
        *(_QWORD *)&v33 = 1LL;
        *((_QWORD *)&v34 + 1) = &unk_1ACD8;
        v35 = (__int64 (__fastcall *)())(&dword_0 + 1);
        *((_QWORD *)&v33 + 1) = &v38;
        *(_QWORD *)&v34 = 2LL;
        core::option::Option<T>::map_or_else(&v36, &v32);
        goto LABEL_41;
      }
      v31 = &off_1024D0;
    }
    else
    {
      if ( (unsigned __int64)v24 <= 0xFFFF )
      {
        v38 = &v47;
        v39 = <alloc::string::String as core::fmt::Display>::fmt;
        v40 = 0LL;
        LOWORD(v41) = v24;
        v32 = (char **)&unk_198C0;
        *(_QWORD *)&v33 = 1LL;
        *((_QWORD *)&v34 + 1) = &unk_1AD08;
        v35 = (__int64 (__fastcall *)())(&dword_0 + 1);
        *((_QWORD *)&v33 + 1) = &v38;
        *(_QWORD *)&v34 = 2LL;
        core::option::Option<T>::map_or_else(&v36, &v32);
LABEL_41:
        v43 = v36;
        v44 = v37;
        core::ptr::drop_in_place<alloc::string::String>(&v47);
        goto LABEL_42;
      }
      v31 = &off_1024E8;
    }
    v32 = &off_102460;
    *(_QWORD *)&v33 = 1LL;
    *((_QWORD *)&v33 + 1) = 8LL;
    v34 = 0LL;
    ((void (__fastcall __noreturn *)(char ***, char **, __int64, __int64, __int64, __int64))core::panicking::panic_fmt)(
      &v32,
      v31,
      v25,
      v26,
      v27,
      v28);
  }
  v44 = v48;
  v43 = v47;
LABEL_42:
  v32 = (char **)(a4 + 32);
  *(_QWORD *)&v33 = <alloc::string::String as core::fmt::Display>::fmt;
  *((_QWORD *)&v33 + 1) = &v43;
  *(_QWORD *)&v34 = <alloc::string::String as core::fmt::Display>::fmt;
  *((_QWORD *)&v34 + 1) = a4 + 56;
  v35 = <alloc::string::String as core::fmt::Display>::fmt;
  v38 = (__int128 *)&unk_1ACA8;
  v39 = (__int64 (__fastcall *)())(&dword_0 + 3);
  v42 = 0LL;
  v40 = &v32;
  v41 = (__int64 (__fastcall *)())(&dword_0 + 3);
  core::option::Option<T>::map_or_else(&v54, &v38);
  a1[3] = v55;
  *(_OWORD *)(a1 + 1) = v54;
  *a1 = 0LL;
  result = core::ptr::drop_in_place<alloc::string::String>(&v43);
  if ( v23 )
    result = core::ptr::drop_in_place<alloc::string::String>(&v45);
  if ( v21 != 0x8000000000000000LL )
    return core::ptr::drop_in_place<alloc::string::String>(&v52);
  return result;
}