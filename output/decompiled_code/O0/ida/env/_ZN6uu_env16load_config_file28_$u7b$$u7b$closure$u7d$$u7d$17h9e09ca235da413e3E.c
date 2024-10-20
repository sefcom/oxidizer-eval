_OWORD *__fastcall uu_env::load_config_file::{{closure}}(__int64 a1, __int64 a2, _QWORD *a3)
{
  _OWORD *result; // rax
  __int128 v5; // xmm0
  _OWORD *v6; // r14
  __int128 v7; // [rsp+0h] [rbp-98h] BYREF
  __int128 v8; // [rsp+10h] [rbp-88h]
  __int64 v9; // [rsp+20h] [rbp-78h]
  _QWORD v10[4]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v11[3]; // [rsp+50h] [rbp-48h] BYREF
  char v12; // [rsp+68h] [rbp-30h]
  __int128 v13; // [rsp+70h] [rbp-28h] BYREF
  __int64 v14; // [rsp+80h] [rbp-18h]

  v11[0] = 1LL;
  v11[1] = a1;
  v11[2] = a2;
  v12 = 0;
  v10[0] = v11;
  v10[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v10[2] = a3;
  v10[3] = <ini::Error as core::fmt::Display>::fmt;
  *(_QWORD *)&v7 = &anon_e62154b07751d2d8ca3612a1a1427994_24_llvm_15614306555905002074;
  *((_QWORD *)&v7 + 1) = 2LL;
  *(_QWORD *)&v8 = v10;
  *((_QWORD *)&v8 + 1) = 2LL;
  v9 = 0LL;
  ((void (__fastcall *)(__int128 *, __int128 *))alloc::fmt::format::format_inner)(&v13, &v7);
  *(_QWORD *)&v8 = v14;
  v7 = v13;
  DWORD2(v8) = 1;
  result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v5 = v7;
  result[1] = v8;
  *result = v5;
  if ( *a3 != 0x8000000000000000LL )
  {
    v6 = result;
    if ( *a3 == 0x8000000000000001LL )
    {
      std::io::error::repr_bitpacked::decode_repr(&v7, a3[1]);
      if ( (unsigned __int8)v7 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v7 + 8);
    }
    else
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v7, a3);
      if ( *((_QWORD *)&v7 + 1) && (_QWORD)v8 )
        _rust_dealloc(v7);
    }
    return v6;
  }
  return result;
}
