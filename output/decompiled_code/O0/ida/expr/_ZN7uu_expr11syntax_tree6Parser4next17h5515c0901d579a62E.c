__int64 __fastcall uu_expr::syntax_tree::Parser::next(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  bool v8; // cf
  unsigned __int64 v9; // rdi
  __int64 v10; // rdi
  const void *v11; // r15
  size_t v12; // r14
  __int64 v13; // r12
  void *v14; // r13
  __int64 v16; // [rsp+8h] [rbp-40h] BYREF
  __int64 v17; // [rsp+10h] [rbp-38h]
  void *dest; // [rsp+18h] [rbp-30h]

  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  if ( v7 < v6 && v5 )
  {
    a2[2] = v7 + 1;
    *(_OWORD *)(a1 + 8) = *(_OWORD *)(v5 + 16 * v7);
    *(_QWORD *)a1 = 7LL;
  }
  else
  {
    v8 = v7 == 0;
    v9 = v7 - 1;
    if ( v8 )
      core::panicking::panic_const::panic_const_sub_overflow(&off_196C98, v6, a3, v5);
    if ( v9 >= v6 )
      core::panicking::panic_bounds_check(v9, v6, &off_196CB0, v5);
    v10 = 16 * v9;
    v11 = *(const void **)(v5 + v10);
    v12 = *(_QWORD *)(v5 + v10 + 8);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v16, v12, 0LL);
    v13 = v17;
    if ( v16 )
      alloc::raw_vec::handle_error(v17, dest);
    v14 = dest;
    core::intrinsics::copy_nonoverlapping::precondition_check(v11, dest, 1LL, 1LL, v12);
    memcpy(v14, v11, v12);
    *(_QWORD *)a1 = 1LL;
    *(_QWORD *)(a1 + 8) = v13;
    *(_QWORD *)(a1 + 16) = v14;
    *(_QWORD *)(a1 + 24) = v12;
  }
  return a1;
}
