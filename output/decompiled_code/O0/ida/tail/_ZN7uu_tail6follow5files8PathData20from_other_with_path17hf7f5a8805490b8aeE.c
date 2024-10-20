void *__fastcall uu_tail::follow::files::PathData::from_other_with_path(void *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 (__fastcall **v6)(); // rbp
  __int64 v7; // r15
  _OWORD *v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  const void *v11; // r8
  void *v12; // r12
  signed __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v16; // r15
  __int64 (__fastcall **v17)(); // r14
  __int64 (__fastcall *v18)(); // rsi
  _DWORD v19[2]; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v20; // [rsp+8h] [rbp-1F0h]
  __int64 v21; // [rsp+10h] [rbp-1E8h]
  __int64 (__fastcall **v22)(); // [rsp+18h] [rbp-1E0h]
  void *v23; // [rsp+20h] [rbp-1D8h]
  __int64 v24; // [rsp+28h] [rbp-1D0h]
  __int64 (__fastcall **v25)(); // [rsp+30h] [rbp-1C8h]
  _OWORD v26[3]; // [rsp+38h] [rbp-1C0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-190h] BYREF
  __int64 v28; // [rsp+70h] [rbp-188h] BYREF
  _BYTE src[160]; // [rsp+78h] [rbp-180h] BYREF
  _QWORD v30[2]; // [rsp+118h] [rbp-E0h] BYREF
  _BYTE dest[160]; // [rsp+128h] [rbp-D0h] BYREF

  v23 = a1;
  v5 = a2[25];
  v6 = (__int64 (__fastcall **)())a2[26];
  v21 = v5;
  v22 = v6;
  v7 = v5;
  if ( !v5 )
  {
    v27 = 0x1B600000000LL;
    LODWORD(v28) = 1;
    WORD2(v28) = 0;
    std::fs::OpenOptions::_open(v19, &v27, a3, a4);
    if ( v19[0] )
    {
      v7 = 0LL;
    }
    else
    {
      std::io::buffered::bufreader::BufReader<R>::with_capacity(v26, 0x2000LL, v19[1]);
      v8 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
      v7 = (__int64)v8;
      if ( !v8 )
        alloc::alloc::handle_alloc_error(8LL, 48LL);
      v9 = v26[0];
      v10 = v26[1];
      v8[2] = v26[2];
      v8[1] = v10;
      *v8 = v9;
      if ( !v19[0] )
        goto LABEL_8;
    }
    std::io::error::repr_bitpacked::decode_repr(&v27, v20);
    if ( (unsigned __int8)v27 >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v28);
LABEL_8:
    v6 = &anon_05a4d4ca64bdea474ebd4b0eb3197a7a_35_llvm_11384070901547909942;
  }
  v24 = v7;
  v25 = v6;
  std::sys::pal::unix::fs::stat(&v27);
  if ( v27 == 2 )
  {
    v30[0] = 2LL;
    std::io::error::repr_bitpacked::decode_repr(&v27, v28);
    if ( (unsigned __int8)v27 >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v28);
  }
  else
  {
    memcpy(dest, src, sizeof(dest));
    v30[0] = v27;
    v30[1] = v28;
  }
  v11 = (const void *)a2[23];
  v12 = v23;
  if ( !v11 || (v13 = a2[24], v13 < 0) )
    core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
  uu_tail::follow::files::PathData::new(v23, v7, (__int64)v6, v30, v11, v13);
  if ( !v5 )
  {
    v16 = v21;
    if ( v21 )
    {
      v17 = v22;
      if ( *v22 )
        ((void (__fastcall *)(__int64))*v22)(v21);
      v18 = v17[1];
      if ( v18 )
        _rust_dealloc(v16, v18, v17[2]);
    }
  }
  v14 = a2[22];
  if ( v14 )
    _rust_dealloc(a2[23], v14, 1LL);
  return v12;
}
