_OWORD *__fastcall uu_dircolors::generate_ls_colors(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 v5; // r13
  __int64 v6; // rbp
  char *v7; // r12
  __int64 v8; // rax
  unsigned __int8 v9; // al
  const char *v10; // rcx
  _OWORD *v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // r13
  __int64 v14; // r12
  char *v15; // r15
  __int64 v16; // rax
  unsigned __int8 v17; // al
  const char *v18; // rcx
  _BYTE *v19; // r14
  __int128 v21; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v22; // [rsp+10h] [rbp-1A8h]
  __int128 v23; // [rsp+18h] [rbp-1A0h] BYREF
  char ***v24; // [rsp+28h] [rbp-190h]
  __int128 v25; // [rsp+30h] [rbp-188h]
  __int64 (__fastcall *v26)(); // [rsp+40h] [rbp-178h]
  __int128 *v27; // [rsp+48h] [rbp-170h]
  __int64 (__fastcall *v28)(); // [rsp+50h] [rbp-168h]
  __int64 *v29; // [rsp+58h] [rbp-160h]
  char **v30; // [rsp+60h] [rbp-158h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+68h] [rbp-150h]
  __int128 *v32; // [rsp+70h] [rbp-148h]
  __int64 (__fastcall *v33)(); // [rsp+78h] [rbp-140h]
  void *v34; // [rsp+80h] [rbp-138h]
  __int64 v35; // [rsp+88h] [rbp-130h]
  __int128 v36; // [rsp+90h] [rbp-128h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+A0h] [rbp-118h]
  __int128 v38; // [rsp+B0h] [rbp-108h] BYREF
  char ***v39; // [rsp+C0h] [rbp-F8h]
  __int128 v40; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-D8h]
  __int64 v42; // [rsp+E8h] [rbp-D0h]
  __int128 v43; // [rsp+F0h] [rbp-C8h] BYREF
  char ***v44; // [rsp+100h] [rbp-B8h]
  __int64 v45; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+110h] [rbp-A8h]
  __int64 v47; // [rsp+118h] [rbp-A0h]
  __int64 v48; // [rsp+120h] [rbp-98h]
  __int64 v49; // [rsp+128h] [rbp-90h]
  _BYTE *v50; // [rsp+130h] [rbp-88h]
  char **v51; // [rsp+138h] [rbp-80h]
  _BYTE v52[24]; // [rsp+140h] [rbp-78h] BYREF
  _BYTE v53[24]; // [rsp+158h] [rbp-60h] BYREF
  _BYTE v54[72]; // [rsp+170h] [rbp-48h] BYREF

  v4 = *a2 == 2;
  v42 = a1;
  if ( v4 )
  {
    *(_QWORD *)&v21 = 0LL;
    *((_QWORD *)&v21 + 1) = 8LL;
    v22 = 0LL;
    uu_dircolors::generate_type_output((__int64)v52, a2);
    alloc::vec::Vec<T,A>::push(&v21, v52, &off_F5D40);
    v5 = 3LL;
    v29 = (__int64 *)&v21;
    do
    {
      v7 = (&off_F6C68)[v5 - 2];
      *(_QWORD *)&v36 = (&off_F6C68)[v5 - 3];
      v6 = v36;
      *((_QWORD *)&v36 + 1) = v7;
      v38 = *(_OWORD *)&(&off_F6C68)[v5 - 1];
      LODWORD(v23) = 0;
      v8 = core::char::methods::encode_utf8_raw(42LL, &v23);
      v9 = core::slice::<impl [T]>::starts_with(v6, v7, v8);
      v10 = asc_1C320;
      if ( v9 )
        v10 = (_BYTE *)(&dword_0 + 1);
      *(_QWORD *)&v40 = v10;
      *((_QWORD *)&v40 + 1) = v9 ^ 1u;
      *(_QWORD *)&v23 = &v38;
      *((_QWORD *)&v23 + 1) = <&T as core::fmt::Display>::fmt;
      v24 = (char ***)&v40;
      *(_QWORD *)&v25 = <&T as core::fmt::Display>::fmt;
      *((_QWORD *)&v25 + 1) = &v36;
      v26 = <&T as core::fmt::Display>::fmt;
      v30 = &off_F5D58;
      v31 = (__int64 (__fastcall *)())&byte_5;
      v34 = &unk_1C328;
      v35 = 4LL;
      v32 = &v23;
      v33 = (__int64 (__fastcall *)())(&dword_0 + 3);
      core::option::Option<T>::map_or_else(v53, &v30);
      alloc::vec::Vec<T,A>::push(&v21, v53, &off_F5DA8);
      v5 += 4LL;
    }
    while ( v5 != 523 );
    alloc::str::join_generic_copy(&v23, *((_QWORD *)&v21 + 1), v22, asc_1C11E, 1LL);
    v11 = (_OWORD *)v42;
    *(_QWORD *)(v42 + 16) = v24;
    *v11 = v23;
    v12 = (__int64 *)&v21;
  }
  else
  {
    v48 = a3;
    v49 = a4;
    v50 = a2;
    v45 = 0LL;
    v46 = 8LL;
    v47 = 0LL;
    v51 = &off_F6C68;
    v13 = 3LL;
    v29 = &v45;
    do
    {
      v15 = v51[v13 - 2];
      *(_QWORD *)&v43 = v51[v13 - 3];
      v14 = v43;
      *((_QWORD *)&v43 + 1) = v15;
      v36 = *(_OWORD *)&v51[v13 - 1];
      LODWORD(v23) = 0;
      v16 = core::char::methods::encode_utf8_raw(42LL, &v23);
      v17 = core::slice::<impl [T]>::starts_with(v14, v15, v16);
      v18 = asc_1C320;
      if ( v17 )
        v18 = (_BYTE *)(&dword_0 + 1);
      *(_QWORD *)&v38 = v18;
      *((_QWORD *)&v38 + 1) = v17 ^ 1u;
      v30 = (char **)&v38;
      v31 = <&T as core::fmt::Display>::fmt;
      v32 = &v43;
      v33 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v23 = &unk_1C1C0;
      *((_QWORD *)&v23 + 1) = 2LL;
      v24 = &v30;
      v25 = 2uLL;
      core::option::Option<T>::map_or_else(&v21, &v23);
      v40 = v21;
      v41 = v22;
      v30 = (char **)&v40;
      v31 = <alloc::string::String as core::fmt::Display>::fmt;
      v32 = &v36;
      v33 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v23 = &unk_F5CE0;
      *((_QWORD *)&v23 + 1) = 2LL;
      v24 = &v30;
      v25 = 2uLL;
      core::option::Option<T>::map_or_else(v54, &v23);
      alloc::vec::Vec<T,A>::push(&v45, v54, &off_F5DC0);
      core::ptr::drop_in_place<alloc::string::String>(&v40);
      v13 += 4LL;
    }
    while ( v13 != 523 );
    v19 = v50;
    uu_dircolors::get_colors_format_strings(&v23, v50);
    v44 = v24;
    v43 = v23;
    v37 = v26;
    v36 = v25;
    alloc::str::join_generic_copy(&v23, v46, v47, v48, v49);
    v39 = v24;
    v38 = v23;
    uu_dircolors::generate_type_output((__int64)&v21, v19);
    *(_QWORD *)&v23 = &v43;
    *((_QWORD *)&v23 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v24 = (char ***)&v21;
    *(_QWORD *)&v25 = <alloc::string::String as core::fmt::Display>::fmt;
    *((_QWORD *)&v25 + 1) = &v38;
    v26 = <alloc::string::String as core::fmt::Display>::fmt;
    v27 = &v36;
    v28 = <alloc::string::String as core::fmt::Display>::fmt;
    v30 = (char **)&unk_F5D00;
    v31 = (__int64 (__fastcall *)())&byte_4;
    v34 = 0LL;
    v32 = &v23;
    v33 = (__int64 (__fastcall *)())&byte_4;
    core::option::Option<T>::map_or_else(&v40, &v30);
    core::ptr::drop_in_place<alloc::string::String>(&v21);
    v11 = (_OWORD *)v42;
    *(_QWORD *)(v42 + 16) = v41;
    *v11 = v40;
    core::ptr::drop_in_place<alloc::string::String>(&v38);
    core::ptr::drop_in_place<alloc::string::String>(&v36);
    core::ptr::drop_in_place<alloc::string::String>(&v43);
    v12 = &v45;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v12);
  return v11;
}