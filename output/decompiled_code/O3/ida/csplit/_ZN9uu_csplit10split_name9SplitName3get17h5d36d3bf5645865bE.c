size_t *__fastcall uu_csplit::split_name::SplitName::get(size_t *a1, __int64 a2, __int64 a3)
{
  const void *v4; // r13
  signed __int64 v5; // r15
  __int64 v6; // rax
  void *v7; // rbp
  __int64 v8; // rax
  const void *v9; // r14
  size_t v10; // r15
  __int64 v11; // r13
  __int64 v12; // rax
  void *v13; // r12
  signed __int64 v15; // [rsp+0h] [rbp-68h] BYREF
  void *v16; // [rsp+8h] [rbp-60h]
  signed __int64 v17; // [rsp+10h] [rbp-58h]
  __int64 v18; // [rsp+18h] [rbp-50h]
  _QWORD v19[2]; // [rsp+20h] [rbp-48h] BYREF
  size_t n; // [rsp+30h] [rbp-38h]

  v4 = *(const void **)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  if ( v5 )
  {
    if ( v5 < 0 )
    {
      v18 = 0LL;
    }
    else
    {
      v18 = 1LL;
      v6 = _rust_alloc(v5, 1LL);
      if ( v6 )
      {
        v7 = (void *)v6;
        goto LABEL_6;
      }
    }
    alloc::raw_vec::handle_error(v18, v5);
  }
  v7 = &dword_0 + 1;
LABEL_6:
  memcpy(v7, v4, v5);
  v15 = v5;
  v16 = v7;
  v17 = v5;
  v8 = uucore::features::format::Format<F>::fmt(a2 + 24, &v15, a3);
  if ( v8 )
  {
    v19[0] = v8;
    core::result::unwrap_failed(
      anon_f13878f122c1ec2ed340980b5a879c26_1_llvm_11087721956373219730,
      43LL,
      v19,
      &anon_f13878f122c1ec2ed340980b5a879c26_0_llvm_11087721956373219730,
      &anon_f13878f122c1ec2ed340980b5a879c26_6_llvm_11087721956373219730);
  }
  alloc::string::String::from_utf8_lossy(v19, v16, v17);
  v9 = (const void *)v19[1];
  v10 = n;
  if ( n )
  {
    if ( (n & 0x8000000000000000LL) != 0LL )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = 1LL;
      v12 = _rust_alloc(n, 1LL);
      if ( v12 )
      {
        v13 = (void *)v12;
        goto LABEL_12;
      }
    }
    alloc::raw_vec::handle_error(v11, v10);
  }
  v13 = &dword_0 + 1;
LABEL_12:
  memcpy(v13, v9, v10);
  *a1 = v10;
  a1[1] = (size_t)v13;
  a1[2] = v10;
  if ( v15 )
    _rust_dealloc(v16, v15, 1LL);
  if ( 2LL * v19[0] )
    _rust_dealloc(v9, v19[0], 1LL);
  return a1;
}
