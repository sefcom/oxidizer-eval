_QWORD *__fastcall uu_pr::split_lines_if_form_feed::{{closure}}(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v5[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+28h] [rbp-40h]
  __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+38h] [rbp-30h]
  __int128 v10; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-10h]

  v2 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 64LL, 0LL);
  if ( !v2 )
    alloc::alloc::handle_alloc_error(8LL, 64LL);
  v6 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v7 = 1LL;
  v8 = 0LL;
  v11 = 0LL;
  if ( (v2 & 7) != 0 )
    core::panicking::panic_misaligned_pointer_dereference(
      8LL,
      v2,
      &anon_7c75ec29d226220b36fc1f3bbd3b01ef_156_llvm_17389174869910011146);
  *(_QWORD *)v2 = 0x8000000000000000LL;
  *(_QWORD *)(v2 + 8) = a2;
  *(_OWORD *)(v2 + 24) = 0LL;
  *(_OWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 56) = 0LL;
  *a1 = 1LL;
  a1[1] = v2;
  a1[2] = 1LL;
  if ( v6 == 0x8000000000000000LL )
  {
    std::io::error::repr_bitpacked::decode_repr(&v4, v7);
    if ( (unsigned __int8)v4 >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v5);
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v4, &v6);
    if ( v5[0] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v8, v4, v5[0], v5[1]);
  }
  return a1;
}
