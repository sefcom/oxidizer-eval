        unsigned __int64 a4)
{
  unsigned __int64 v5; // rcx
  size_t v7; // rbp
  unsigned __int64 v8; // rdx
  size_t v9; // r13
  __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  __int64 *result; // rax
  __int64 v13; // rcx
  char *v14; // r13
  size_t v15; // r14
  size_t v16; // rdi
  __int128 v18; // [rsp+10h] [rbp-88h]
  __int128 v19; // [rsp+20h] [rbp-78h]
  __int64 v20[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v21; // [rsp+40h] [rbp-58h]
  __int128 v22; // [rsp+50h] [rbp-48h]

  v5 = *(_QWORD *)(a2[5] + 120);
  if ( !v5 )
    core::panicking::panic_const::panic_const_rem_by_zero(&anon_47fcc33835ba2501a8fd1dfb926be52d_26_llvm_7315772993864627227);
  v7 = a2[2];
  if ( (v5 | (a4 + v7)) >> 32 )
    v8 = (a4 + v7) % v5;
  else
    v8 = ((int)a4 + (int)v7) % (unsigned int)v5;
  v9 = 0LL;
  if ( a4 >= v8 )
    v9 = a4 - v8;
  if ( *a2 - v7 < v9 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a2, v7, v9);
    v7 = a2[2];
  }
  v10 = a2[1];
  memcpy((void *)(v10 + v7), a3, v9);
  v11 = v9 + v7;
  a2[2] = v11;
  uu_dd::Output::write_blocks(v20, (__int64)(a2 + 3), v10, v11);
  if ( v20[0] )
  {
    result = (__int64 *)a1;
    *(_QWORD *)(a1 + 8) = v20[1];
    v13 = 1LL;
  }
  else
  {
    v14 = &a3[v9];
    v19 = v22;
    v18 = v21;
    a2[2] = 0LL;
    v15 = &a3[a4] - v14;
    if ( *a2 < v15 )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a2, 0LL, v15);
      v16 = a2[2];
    }
    else
    {
      v16 = 0LL;
    }
    memcpy((void *)(a2[1] + v16), v14, v15);
    a2[2] += v15;
    result = (__int64 *)a1;
    *(_OWORD *)(a1 + 32) = v19;
    *(_OWORD *)(a1 + 16) = v18;
    v13 = 0LL;
  }
  *result = v13;
  return result;
}
