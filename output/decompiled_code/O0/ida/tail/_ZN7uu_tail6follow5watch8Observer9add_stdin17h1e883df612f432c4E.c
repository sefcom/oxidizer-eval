        unsigned __int8 a6)
{
  char v8; // al
  _OWORD *v11; // r14
  __int64 v13; // rsi
  __int128 v14; // [rsp+8h] [rbp-70h] BYREF
  __int64 v15; // [rsp+18h] [rbp-60h]
  __int128 v16; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v17[9]; // [rsp+30h] [rbp-48h] BYREF

  v17[1] = a4;
  v17[2] = a5;
  v8 = *(_BYTE *)(a1 + 142);
  if ( v8 == 2 || (v8 & 1) != 0 )
  {
    if ( a4 )
    {
      if ( *(_QWORD *)a5 )
        (*(void (__fastcall **)(__int64))a5)(a4);
      v13 = *(_QWORD *)(a5 + 8);
      if ( v13 )
        _rust_dealloc(a4, v13, *(_QWORD *)(a5 + 16));
    }
    return 0LL;
  }
  else
  {
    std::sys::os_str::bytes::Slice::to_owned(
      &v14,
      anon_8dd52ede904ce8e610c06c6554fda8ed_12_llvm_16350955247103539242,
      10LL);
    v17[0] = v15;
    v16 = v14;
    if ( !*((_QWORD *)&v14 + 1) || v15 < 0 )
      core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
    v11 = uu_tail::follow::watch::Observer::add_path(a1, *((__int64 *)&v14 + 1), v15, a2, a3, a4, a5, a6);
    alloc::raw_vec::RawVec<T,A>::current_memory(&v14, &v16);
    if ( *((_QWORD *)&v14 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v17, v14, *((_QWORD *)&v14 + 1), v15);
    return v11;
  }
}
