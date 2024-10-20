_OWORD *__fastcall uu_sort::FieldSelector::parse::{{closure}}(void *src, size_t n, __int128 *a3)
{
  __int64 v4; // r12
  void *v5; // r13
  _OWORD *result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // [rsp+8h] [rbp-80h] BYREF
  __int64 v11; // [rsp+10h] [rbp-78h]
  void *dest; // [rsp+18h] [rbp-70h]
  __int128 v13; // [rsp+20h] [rbp-68h]
  __int128 v14; // [rsp+30h] [rbp-58h]
  __int128 v15; // [rsp+40h] [rbp-48h]
  __int128 v16; // [rsp+50h] [rbp-38h]

  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v10, n, 0LL);
  v4 = v11;
  if ( v10 )
    alloc::raw_vec::handle_error(v11, dest);
  v5 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(src, dest, 1LL, 1LL, n);
  memcpy(v5, src, n);
  v15 = *a3;
  *(_QWORD *)&v16 = *((_QWORD *)a3 + 2);
  *((_QWORD *)&v13 + 1) = v4;
  *(_QWORD *)&v14 = v5;
  *((_QWORD *)&v14 + 1) = n;
  LOBYTE(v13) = 3;
  result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 64LL, 0LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 64LL);
  v7 = v13;
  v8 = v14;
  v9 = v15;
  result[3] = v16;
  result[2] = v9;
  result[1] = v8;
  *result = v7;
  return result;
}
