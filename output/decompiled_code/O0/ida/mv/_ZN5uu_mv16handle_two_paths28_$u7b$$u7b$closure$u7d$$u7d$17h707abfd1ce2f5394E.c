_OWORD *__fastcall uu_mv::handle_two_paths::{{closure}}(__int64 a1)
{
  _OWORD *v1; // rax
  _OWORD *v2; // rbx
  __int128 v3; // xmm0
  __int64 v5; // [rsp+8h] [rbp-70h] BYREF
  __int128 v6; // [rsp+10h] [rbp-68h] BYREF
  __int128 v7; // [rsp+20h] [rbp-58h]
  __int64 v8; // [rsp+30h] [rbp-48h]
  _QWORD v9[2]; // [rsp+48h] [rbp-30h] BYREF
  __int128 v10; // [rsp+58h] [rbp-20h] BYREF
  __int64 v11; // [rsp+68h] [rbp-10h]

  v5 = a1;
  v9[0] = &v5;
  v9[1] = <std::io::error::Error as core::fmt::Display>::fmt;
  *(_QWORD *)&v6 = &anon_80a71568819187eb068e7dc772b8a818_67_llvm_5221707602514596811;
  *((_QWORD *)&v6 + 1) = 1LL;
  *(_QWORD *)&v7 = v9;
  *((_QWORD *)&v7 + 1) = 1LL;
  v8 = 0LL;
  alloc::fmt::format::format_inner(&v10, &v6);
  *(_QWORD *)&v7 = v11;
  v6 = v10;
  DWORD2(v7) = 1;
  v1 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  v2 = v1;
  if ( !v1 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v3 = v6;
  v1[1] = v7;
  *v1 = v3;
  std::io::error::repr_bitpacked::decode_repr(&v6, v5);
  if ( (unsigned __int8)v6 >= 3u )
    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v6 + 8);
  return v2;
}
