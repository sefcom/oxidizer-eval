__int64 __fastcall uu_cat::cat_files(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int128 *v5; // r13
  _QWORD *v6; // r9
  __int64 (__fastcall *v7)(); // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // kr00_16
  int v12; // r15d
  __int64 v13; // r15
  __int128 v15; // [rsp+0h] [rbp-248h] BYREF
  __int128 *v16; // [rsp+10h] [rbp-238h]
  __int128 v17; // [rsp+18h] [rbp-230h]
  __int64 v18; // [rsp+38h] [rbp-210h] BYREF
  __int64 v19; // [rsp+40h] [rbp-208h]
  __int64 v20; // [rsp+48h] [rbp-200h]
  __int128 v21; // [rsp+50h] [rbp-1F8h] BYREF
  __int128 *v22; // [rsp+60h] [rbp-1E8h]
  char v23; // [rsp+68h] [rbp-1E0h]
  __int128 v24; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v25; // [rsp+80h] [rbp-1C8h]
  _BYTE *v26; // [rsp+90h] [rbp-1B8h]
  __int128 *v27; // [rsp+98h] [rbp-1B0h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+A0h] [rbp-1A8h]
  __int128 *v29; // [rsp+A8h] [rbp-1A0h]
  __int64 (__fastcall *v30)(); // [rsp+B0h] [rbp-198h]
  __int128 v31; // [rsp+B8h] [rbp-190h] BYREF
  __int64 v32; // [rsp+C8h] [rbp-180h]
  char v33; // [rsp+D0h] [rbp-178h] BYREF
  _WORD src[72]; // [rsp+D8h] [rbp-170h] BYREF
  _BYTE v35[24]; // [rsp+168h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+180h] [rbp-C8h]
  _BYTE dest[192]; // [rsp+188h] [rbp-C0h] BYREF

  v26 = a3;
  std::io::stdio::stdout();
  uucore::features::fs::FileInformation::from_file(&v33);
  if ( (v33 & 1) != 0 )
  {
    v36 = 0LL;
    core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(&v33);
  }
  else
  {
    memcpy(dest, src, 0x90uLL);
    v36 = 1LL;
  }
  uu_cat::LineNumber::new((__m256i *)&v33);
  src[24] = 1;
  LOBYTE(src[25]) = 0;
  v18 = 0LL;
  v19 = 8LL;
  v20 = 0LL;
  if ( !a2 )
    goto LABEL_16;
  v3 = 0LL;
  do
  {
    v4 = *(_QWORD *)(a1 + v3 + 8);
    v5 = *(__int128 **)(a1 + v3 + 16);
    v6 = 0LL;
    if ( (_BYTE)v36 )
      v6 = dest;
    uu_cat::cat_path((__int64)&v31, *(_QWORD *)(a1 + v3 + 8), *(_QWORD *)(a1 + v3 + 16), v26, (__int64)&v33, v6);
    if ( (_QWORD)v31 == 0x8000000000000006LL )
    {
      core::ptr::drop_in_place<core::result::Result<(),uu_cat::CatError>>(&v31);
    }
    else
    {
      v25 = v32;
      v24 = v31;
      *(_QWORD *)&v21 = 0LL;
      *((_QWORD *)&v21 + 1) = v4;
      v22 = v5;
      v23 = 0;
      v27 = &v21;
      v28 = <os_display::Quoted as core::fmt::Display>::fmt;
      v29 = &v24;
      v30 = <uu_cat::CatError as core::fmt::Display>::fmt;
      *(_QWORD *)&v15 = &unk_EAB28;
      *((_QWORD *)&v15 + 1) = 2LL;
      v16 = (__int128 *)&v27;
      v17 = 2uLL;
      ((void (__fastcall *)(_BYTE *, __int128 *))core::option::Option<T>::map_or_else)(v35, &v15);
      alloc::vec::Vec<T,A>::push(&v18, v35);
      core::ptr::drop_in_place<uu_cat::CatError>(&v24);
    }
    v3 += 24LL;
  }
  while ( 24 * a2 != v3 );
  if ( (src[24] & 0x100) != 0 )
  {
    *(_QWORD *)&v15 = &off_EAB48;
    *((_QWORD *)&v15 + 1) = 1LL;
    v16 = (_OWORD *)&byte_8;
    v17 = 0LL;
    ((void (__fastcall *)(__int128 *))std::io::stdio::_print)(&v15);
  }
  if ( v20 )
  {
    v27 = (__int128 *)uucore::util_name();
    v28 = v7;
    *(_QWORD *)&v24 = &v27;
    *((_QWORD *)&v24 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v15 = &off_EAB58;
    *((_QWORD *)&v15 + 1) = 2LL;
    v16 = &v24;
    v17 = 1uLL;
    ((void (__fastcall *)(__int128 *, __int128 *, __int64 (__fastcall *)(), __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
      &v21,
      &v15,
      v7,
      v8,
      v9,
      v10);
    v11 = v21;
    v12 = v20;
    alloc::str::join_generic_copy(&v21, v19, v20, *((_QWORD *)&v21 + 1), v22);
    v16 = v22;
    v15 = v21;
    LODWORD(v17) = v12;
    v13 = ((__int64 (__fastcall *)(__int128 *))alloc::boxed::Box<T>::new)(&v15);
    core::ptr::drop_in_place<alloc::string::String>(v11, *((_QWORD *)&v11 + 1));
  }
  else
  {
LABEL_16:
    v13 = 0LL;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v18);
  return v13;
}