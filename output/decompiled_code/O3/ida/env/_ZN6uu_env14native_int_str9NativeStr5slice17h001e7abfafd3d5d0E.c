        unsigned __int64 a4)
{
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  signed __int64 v7; // rax
  signed __int64 v8; // rbx
  void *v9; // r12
  unsigned __int64 v10; // rbp
  __int64 v11; // r13
  __int64 v12; // rax
  char **v14; // rax

  v5 = a2[1];
  v6 = a2[2];
  if ( *a2 != 0x8000000000000000LL )
  {
    if ( a4 < a3 )
    {
      v14 = &anon_6a2a029ee6b08fd20bf9f6115e8d9be2_7_llvm_14650951337123673598;
LABEL_16:
      core::slice::index::slice_index_order_fail(a3, a4, v14);
    }
    if ( v6 < a4 )
      core::slice::index::slice_end_index_len_fail(
        a4,
        v6,
        &anon_6a2a029ee6b08fd20bf9f6115e8d9be2_7_llvm_14650951337123673598);
    v8 = a4 - a3;
    if ( a4 != a3 )
    {
      if ( v8 < 0 )
      {
        v11 = 0LL;
      }
      else
      {
        v10 = a3;
        v11 = 1LL;
        v12 = _rust_alloc(v8, 1LL);
        if ( v12 )
        {
          v9 = (void *)v12;
          a3 = v10;
LABEL_12:
          memcpy(v9, (const void *)(a3 + v5), v8);
          v7 = v8;
          goto LABEL_13;
        }
      }
      alloc::raw_vec::handle_error(v11, v8);
    }
    v9 = &dword_0 + 1;
    goto LABEL_12;
  }
  v7 = a4 - a3;
  if ( a4 < a3 )
  {
    v14 = &anon_6a2a029ee6b08fd20bf9f6115e8d9be2_6_llvm_14650951337123673598;
    goto LABEL_16;
  }
  if ( v6 < a4 )
    core::slice::index::slice_end_index_len_fail(
      a4,
      v6,
      &anon_6a2a029ee6b08fd20bf9f6115e8d9be2_6_llvm_14650951337123673598);
  v8 = 0x8000000000000000LL;
  v9 = (void *)(a3 + v5);
LABEL_13:
  *a1 = v8;
  a1[1] = (signed __int64)v9;
  a1[2] = v7;
  return a1;
}
