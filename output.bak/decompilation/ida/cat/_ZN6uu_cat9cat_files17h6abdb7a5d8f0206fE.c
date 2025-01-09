__int64 __fastcall uu_cat::cat_files(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r12
  _QWORD *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  __int64 v17; // r9
  __int64 v18; // rbx
  __int128 v20; // [rsp+0h] [rbp-248h] BYREF
  __int64 v21; // [rsp+10h] [rbp-238h]
  __int64 v22; // [rsp+18h] [rbp-230h]
  __int128 v23; // [rsp+28h] [rbp-220h] BYREF
  __int64 v24; // [rsp+38h] [rbp-210h]
  char v25; // [rsp+40h] [rbp-208h]
  __int64 v26; // [rsp+48h] [rbp-200h] BYREF
  __int64 v27; // [rsp+50h] [rbp-1F8h]
  __int64 v28; // [rsp+58h] [rbp-1F0h]
  __int64 v29; // [rsp+60h] [rbp-1E8h] BYREF
  __int16 v30; // [rsp+68h] [rbp-1E0h]
  char v31; // [rsp+6Ah] [rbp-1DEh]
  _QWORD v32[2]; // [rsp+70h] [rbp-1D8h] BYREF
  __int128 v33; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v34; // [rsp+90h] [rbp-1B8h]
  __int128 v35; // [rsp+98h] [rbp-1B0h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-1A0h]
  _OWORD src[10]; // [rsp+B0h] [rbp-198h] BYREF
  __int64 v38; // [rsp+150h] [rbp-F8h] BYREF
  __int64 v39; // [rsp+158h] [rbp-F0h]
  __int64 v40; // [rsp+160h] [rbp-E8h]
  _BYTE v41[24]; // [rsp+168h] [rbp-E0h] BYREF
  __int64 v42; // [rsp+180h] [rbp-C8h]
  _BYTE dest[192]; // [rsp+188h] [rbp-C0h] BYREF

  *(_QWORD *)&v23 = std::io::stdio::stdout();
  uucore::features::fs::FileInformation::from_file(src, &v23);
  if ( *(_QWORD *)&src[0] )
  {
    v42 = 0LL;
    core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(src);
  }
  else
  {
    memcpy(dest, (char *)src + 8, 0x90uLL);
    v42 = 1LL;
  }
  v29 = 1LL;
  v30 = 1;
  v31 = 0;
  v26 = 0LL;
  v27 = 8LL;
  v28 = 0LL;
  v32[0] = a1;
  v32[1] = a1 + 24 * a2;
  v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v32);
  if ( v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 8);
      v6 = *(_QWORD *)(v4 + 16);
      v7 = (_QWORD *)v42;
      if ( v42 )
        v7 = dest;
      uu_cat::cat_path((__int64)&v35, v5, v6, a3, (__int64)&v29, v7);
      if ( (_QWORD)v35 != 0x8000000000000006LL )
      {
        v34 = v36;
        v33 = v35;
        *(_QWORD *)&v23 = 0LL;
        *((_QWORD *)&v23 + 1) = v5;
        v24 = v6;
        v25 = 0;
        *(_QWORD *)&src[0] = &unk_1185E8;
        *((_QWORD *)&src[0] + 1) = 2LL;
        *(_QWORD *)&src[1] = &v20;
        *(_OWORD *)((char *)&src[1] + 8) = 2uLL;
        core::option::Option<T>::map_or_else(
          v41,
          src,
          v8,
          v9,
          v10,
          v11,
          &v23,
          <os_display::Quoted as core::fmt::Display>::fmt,
          &v33,
          <uu_cat::CatError as core::fmt::Display>::fmt);
        alloc::vec::Vec<T,A>::push(&v26, v41);
        core::ptr::drop_in_place<uu_cat::CatError>(&v33);
      }
      v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v32);
    }
    while ( v4 );
    if ( HIBYTE(v30) )
    {
      *(_QWORD *)&src[0] = &off_118608;
      *((_QWORD *)&src[0] + 1) = 1LL;
      src[1] = 8uLL;
      std::io::stdio::_print(src);
    }
  }
  if ( v28 )
  {
    *(_QWORD *)&v12 = uucore::util_name();
    v23 = v12;
    *(_QWORD *)&src[0] = &off_118618;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[1] = &v20;
    *(_OWORD *)((char *)&src[1] + 8) = 1uLL;
    core::option::Option<T>::map_or_else(
      &v38,
      src,
      *((_QWORD *)&v12 + 1),
      v13,
      v14,
      v15,
      &v23,
      <&T as core::fmt::Display>::fmt,
      v21,
      v22);
    v16 = v28;
    alloc::str::join_generic_copy(&v23, v27, v28, v39, v40, v17, v38, v39, v40);
    *(_QWORD *)&src[1] = v24;
    src[0] = v23;
    DWORD2(src[1]) = v16;
    v18 = alloc::boxed::Box<T>::new(src);
    core::ptr::drop_in_place<alloc::string::String>(&v20);
  }
  else
  {
    v18 = 0LL;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v26);
  return v18;
}
