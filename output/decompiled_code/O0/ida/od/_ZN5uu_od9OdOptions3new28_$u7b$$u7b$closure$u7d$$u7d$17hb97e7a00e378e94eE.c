_OWORD *__fastcall uu_od::OdOptions::new::{{closure}}(__int64 a1)
{
  _OWORD *v1; // rax
  _OWORD *v2; // r14
  __int128 v3; // xmm0
  __int128 v5; // [rsp+0h] [rbp-68h] BYREF
  __int128 v6; // [rsp+10h] [rbp-58h]
  __int64 v7; // [rsp+20h] [rbp-48h]
  _QWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  v8[0] = a1;
  v8[1] = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v5 = &anon_e2e67c58e7293e167f44c7d91e955b1f_43_llvm_7131363112234757730;
  *((_QWORD *)&v5 + 1) = 1LL;
  *(_QWORD *)&v6 = v8;
  *((_QWORD *)&v6 + 1) = 1LL;
  v7 = 0LL;
  alloc::fmt::format::format_inner(&v9, &v5);
  *(_QWORD *)&v6 = v10;
  v5 = v9;
  DWORD2(v6) = 1;
  v1 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  v2 = v1;
  if ( !v1 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v3 = v5;
  v1[1] = v6;
  *v1 = v3;
  alloc::raw_vec::RawVec<T,A>::current_memory(&v5, a1);
  if ( *((_QWORD *)&v5 + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(a1 + 16, v5, *((_QWORD *)&v5 + 1), v6);
  return v2;
}
