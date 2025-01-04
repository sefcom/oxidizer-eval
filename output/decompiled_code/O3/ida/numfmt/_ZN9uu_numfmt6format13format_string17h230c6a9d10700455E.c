        __int64 a6)
{
  unsigned __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r13
  char v12; // al
  __int64 result; // rax
  __int64 (__fastcall *v14)(); // xmm0_8
  void **v15; // rcx
  int v16; // eax
  __int64 v17; // r13
  void *v18; // rax
  _QWORD *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int128 v32; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v33; // [rsp+10h] [rbp-1D8h]
  __int64 v34; // [rsp+18h] [rbp-1D0h]
  __int128 *v35; // [rsp+28h] [rbp-1C0h] BYREF
  __int64 (__fastcall *v36)(); // [rsp+30h] [rbp-1B8h]
  void **v37; // [rsp+38h] [rbp-1B0h]
  __int64 (__fastcall *v38)(); // [rsp+40h] [rbp-1A8h]
  void **v39; // [rsp+48h] [rbp-1A0h]
  __int64 v40; // [rsp+50h] [rbp-198h]
  void *v41; // [rsp+58h] [rbp-190h] BYREF
  __int128 v42; // [rsp+60h] [rbp-188h]
  __int64 (__fastcall *v43)(); // [rsp+70h] [rbp-178h]
  __int64 v44; // [rsp+78h] [rbp-170h]
  __int64 (__fastcall *v45)(); // [rsp+80h] [rbp-168h]
  char v46; // [rsp+88h] [rbp-160h]
  __int64 v47; // [rsp+90h] [rbp-158h]
  int v48; // [rsp+9Ch] [rbp-14Ch]
  __int128 v49; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-138h]
  __int64 v51; // [rsp+C0h] [rbp-128h]
  __int64 v52; // [rsp+C8h] [rbp-120h]
  __int128 v53; // [rsp+D0h] [rbp-118h] BYREF
  __int64 v54; // [rsp+E0h] [rbp-108h]
  __int128 v55; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 v56; // [rsp+100h] [rbp-E8h]
  __int128 v57; // [rsp+110h] [rbp-D8h] BYREF
  __int64 v58; // [rsp+120h] [rbp-C8h]
  __int128 v59; // [rsp+128h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+138h] [rbp-B0h]
  __int128 v61; // [rsp+140h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+150h] [rbp-98h]
  __int128 v63; // [rsp+158h] [rbp-90h] BYREF
  __int64 v64; // [rsp+168h] [rbp-80h]
  __int128 v65; // [rsp+170h] [rbp-78h] BYREF
  __int64 v66; // [rsp+180h] [rbp-68h]
  _BYTE v67[24]; // [rsp+188h] [rbp-60h] BYREF
  _BYTE v68[72]; // [rsp+1A0h] [rbp-48h] BYREF

  v47 = a6;
  v51 = a5;
  v7 = a3;
  v8 = a2;
  v52 = *(_QWORD *)(a4 + 136);
  if ( v52 != 0x8000000000000000LL )
  {
    v9 = <&str as core::str::pattern::Pattern>::strip_suffix_of(*(_QWORD *)(a4 + 144), *(_QWORD *)(a4 + 152), a2, a3);
    if ( v9 )
    {
      v8 = v9;
      v7 = v10;
    }
  }
  if ( *(_QWORD *)(a4 + 16) )
  {
    v11 = *(_QWORD *)(a4 + 24);
    v12 = *(_BYTE *)(a4 + 176);
  }
  else
  {
    v12 = *(_BYTE *)(a4 + 176);
    v11 = 0LL;
    if ( v12 == 5 && *(_BYTE *)(a4 + 177) == 5 )
    {
      v11 = uu_numfmt::format::parse_implicit_precision(v8, v7);
      v12 = 5;
    }
  }
  uu_numfmt::format::transform_from((__int64)&v35, v8, v7, *(_QWORD *)(a4 + 160), v12);
  result = (__int64)v35;
  v14 = v36;
  if ( v35 != (__int128 *)0x8000000000000000LL )
  {
    v15 = v37;
    a1[1] = v35;
    a1[2] = v14;
    a1[3] = v15;
    goto LABEL_13;
  }
  uu_numfmt::format::transform_to(
    (__int64)&v41,
    *(_QWORD *)(a4 + 168),
    *(_BYTE *)(a4 + 177),
    *(_BYTE *)(a4 + 201),
    v11,
    *(double *)&v36);
  v32 = v42;
  v33 = (__int64)v43;
  if ( v41 )
  {
    result = v33;
    a1[3] = v33;
    *(_OWORD *)(a1 + 1) = v32;
LABEL_13:
    *a1 = 1LL;
    return result;
  }
  v54 = v33;
  v53 = v32;
  if ( v52 != 0x8000000000000000LL )
  {
    *(_QWORD *)&v32 = a4 + 136;
    v35 = &v53;
    v36 = <alloc::string::String as core::fmt::Display>::fmt;
    v37 = (void **)&v32;
    v38 = <&T as core::fmt::Display>::fmt;
    v18 = &unk_1A370;
    v41 = &unk_1A370;
    *(_QWORD *)&v42 = 2LL;
    v44 = 0LL;
    *((_QWORD *)&v42 + 1) = &v35;
    v43 = (__int64 (__fastcall *)())(&dword_0 + 2);
    LOBYTE(v18) = 1;
    v48 = (int)v18;
    core::option::Option<T>::map_or_else(&v59, &v41);
    v49 = v59;
    v16 = v60;
    v50 = v60;
    LOBYTE(v16) = 1;
    if ( *(_QWORD *)a4 )
      goto LABEL_17;
LABEL_19:
    v17 = v47;
    if ( !v51 )
      v17 = *(_QWORD *)(a4 + 184);
    goto LABEL_21;
  }
  v50 = v54;
  v49 = v53;
  v16 = 0;
  if ( !*(_QWORD *)a4 )
    goto LABEL_19;
LABEL_17:
  v17 = *(_QWORD *)(a4 + 8);
LABEL_21:
  v48 = v16;
  if ( v17 )
  {
    if ( v17 > 0 && *(_BYTE *)(a4 + 81) )
    {
      *(_QWORD *)&v32 = &v49;
      *((_QWORD *)&v32 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v33 = v17;
      v34 = 0LL;
      v41 = &dword_0 + 2;
      *((_QWORD *)&v42 + 1) = 1LL;
      v43 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v44 = 0LL;
      v45 = (__int64 (__fastcall *)())&dword_30;
      v46 = 1;
      v35 = &xmmword_16000;
      v36 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v39 = &v41;
      v40 = 1LL;
      v37 = (void **)&v32;
      v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
      core::option::Option<T>::map_or_else(&v57, &v35);
      v56 = v58;
      v55 = v57;
      if ( !v51 )
        v47 = *(_QWORD *)(a4 + 184);
      if ( v47 )
      {
        *(_QWORD *)&v32 = &v55;
        *((_QWORD *)&v32 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        if ( v47 <= 0 )
        {
          v33 = -v47;
          v34 = 0LL;
          v41 = &dword_0 + 2;
          *((_QWORD *)&v42 + 1) = 1LL;
          v43 = (__int64 (__fastcall *)())(&dword_0 + 1);
          v44 = 0LL;
          v45 = (__int64 (__fastcall *)())&qword_20;
          v46 = 0;
          v35 = &xmmword_16000;
          v36 = (__int64 (__fastcall *)())(&dword_0 + 1);
          v39 = &v41;
          v40 = 1LL;
          v37 = (void **)&v32;
          v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
          v19 = v68;
          core::option::Option<T>::map_or_else(v68, &v35);
        }
        else
        {
          v33 = v47;
          v34 = 0LL;
          v41 = &dword_0 + 2;
          *((_QWORD *)&v42 + 1) = 1LL;
          v43 = (__int64 (__fastcall *)())(&dword_0 + 1);
          v44 = 0LL;
          v45 = (__int64 (__fastcall *)())&qword_20;
          v46 = 1;
          v35 = &xmmword_16000;
          v36 = (__int64 (__fastcall *)())(&dword_0 + 1);
          v39 = &v41;
          v40 = 1LL;
          v37 = (void **)&v32;
          v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
          v19 = v67;
          core::option::Option<T>::map_or_else(v67, &v35);
        }
        core::ptr::drop_in_place<alloc::string::String>(&v55, &v35, v20, v21, v22, v23, *v19, v19[1], v19[2]);
      }
      else
      {
        v33 = v58;
        v32 = v57;
      }
    }
    else
    {
      *(_QWORD *)&v32 = &v49;
      *((_QWORD *)&v32 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      if ( v17 <= 0 )
      {
        v33 = -v17;
        v34 = 0LL;
        v41 = &dword_0 + 2;
        *((_QWORD *)&v42 + 1) = 1LL;
        v43 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v44 = 0LL;
        v45 = (__int64 (__fastcall *)())&qword_20;
        v46 = 0;
        v35 = &xmmword_16000;
        v36 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v39 = &v41;
        v40 = 1LL;
        v37 = (void **)&v32;
        v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
        core::option::Option<T>::map_or_else(&v63, &v35);
        v32 = v63;
        v33 = v64;
      }
      else
      {
        v33 = v17;
        v34 = 0LL;
        v41 = &dword_0 + 2;
        *((_QWORD *)&v42 + 1) = 1LL;
        v43 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v44 = 0LL;
        v45 = (__int64 (__fastcall *)())&qword_20;
        v46 = 1;
        v35 = &xmmword_16000;
        v36 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v39 = &v41;
        v40 = 1LL;
        v37 = (void **)&v32;
        v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
        core::option::Option<T>::map_or_else(&v61, &v35);
        v32 = v61;
        v33 = v62;
      }
    }
  }
  else
  {
    v33 = v50;
    v32 = v49;
  }
  v41 = (void *)(a4 + 32);
  *(_QWORD *)&v42 = <alloc::string::String as core::fmt::Display>::fmt;
  *((_QWORD *)&v42 + 1) = &v32;
  v43 = <alloc::string::String as core::fmt::Display>::fmt;
  v44 = a4 + 56;
  v45 = <alloc::string::String as core::fmt::Display>::fmt;
  v35 = (__int128 *)&unk_23118;
  v36 = (__int64 (__fastcall *)())(&dword_0 + 3);
  v39 = 0LL;
  v37 = &v41;
  v38 = (__int64 (__fastcall *)())(&dword_0 + 3);
  core::option::Option<T>::map_or_else(&v65, &v35);
  a1[3] = v66;
  *(_OWORD *)(a1 + 1) = v65;
  *a1 = 0LL;
  ((void (__fastcall *)(__int128 *, __int128 **, __int64, __int64, __int64, __int64))core::ptr::drop_in_place<alloc::string::String>)(
    &v32,
    &v35,
    v24,
    v25,
    v26,
    v27);
  if ( v17 )
    core::ptr::drop_in_place<alloc::string::String>(&v49, &v35, v28, v29, v30, v31, v32, *((_QWORD *)&v32 + 1), v33);
  result = 0x8000000000000000LL;
  if ( v52 != 0x8000000000000000LL )
    return core::ptr::drop_in_place<alloc::string::String>(
             &v53,
             &v35,
             v28,
             v29,
             v30,
             v31,
             v32,
             *((_QWORD *)&v32 + 1),
             v33);
  return result;
}
