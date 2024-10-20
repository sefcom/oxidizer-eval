__int64 __fastcall uu_mv::rename_with_fallback::{{closure}}(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  unsigned __int8 v4; // bp
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+8h] [rbp-E0h] BYREF
  char **v8; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v9; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD *v10; // [rsp+20h] [rbp-C8h]
  __int64 v11; // [rsp+28h] [rbp-C0h]
  __int64 v12; // [rsp+30h] [rbp-B8h]
  _QWORD v13[2]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v14[8]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v16[8]; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v17[6]; // [rsp+70h] [rbp-78h] BYREF
  __int128 v18; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-38h]
  __int128 v20; // [rsp+B8h] [rbp-30h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-20h]

  v7 = a2;
  std::sys::os_str::bytes::Slice::to_string_lossy(v13);
  v2 = *(_QWORD *)(a1 + 16);
  std::sys::os_str::bytes::Slice::to_string_lossy(v15);
  switch ( v7 & 3 )
  {
    case 0uLL:
      v3 = 16LL;
      goto LABEL_7;
    case 1uLL:
      v3 = 15LL;
LABEL_7:
      v4 = *(_BYTE *)(v7 + v3);
      break;
    case 2uLL:
      v4 = std::sys::pal::unix::decode_error_kind(HIDWORD(v7), v2);
      break;
    case 3uLL:
      v4 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v7), v2);
      if ( v4 == 41 )
        core::hint::unreachable_unchecked::precondition_check();
      return result;
  }
  v17[0] = v15;
  v17[1] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
  v17[2] = v13;
  v17[3] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
  v17[4] = &v7;
  v17[5] = <std::io::error::Error as core::fmt::Display>::fmt;
  v8 = &anon_80a71568819187eb068e7dc772b8a818_122_llvm_5221707602514596811;
  v9 = 3LL;
  v10 = v17;
  v11 = 3LL;
  v12 = 0LL;
  alloc::fmt::format::format_inner(&v20, &v8);
  v18 = v20;
  v19 = v21;
  v5 = std::io::error::Error::new(v4, &v18);
  if ( v15[0] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v8, v15);
    if ( v9 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v16, v8, v9, v10);
  }
  if ( v13[0] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v8, v13);
    if ( v9 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v14, v8, v9, v10);
  }
  std::io::error::repr_bitpacked::decode_repr(&v8, v7);
  if ( (unsigned __int8)v8 >= 3u )
    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v9);
  return v5;
}
