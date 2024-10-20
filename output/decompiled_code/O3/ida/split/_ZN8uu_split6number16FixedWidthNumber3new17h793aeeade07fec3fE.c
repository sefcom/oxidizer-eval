        unsigned __int64 a4)
{
  unsigned __int64 v4; // r12
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  bool v13; // cf
  __int64 v14; // rax

  v4 = a4;
  if ( a3 )
  {
    if ( a3 < 0 )
    {
      v7 = 0LL;
    }
    else
    {
      v7 = 1LL;
      v8 = _rust_alloc_zeroed(a3, 1LL);
      if ( v8 )
      {
        v9 = v8;
        if ( !a2 )
          core::panicking::panic_const::panic_const_rem_by_zero(&anon_2616838c605c3f70843e9f0bba6ced0c_6_llvm_6529744654479120720);
        goto LABEL_7;
      }
    }
    alloc::raw_vec::handle_error(v7, a3);
  }
  v9 = 1LL;
  if ( !a2 )
  {
    if ( a4 )
    {
      *(_QWORD *)a1 = 0x8000000000000000LL;
    }
    else
    {
      v14 = 0LL;
LABEL_18:
      *(_QWORD *)a1 = v14;
      *(_QWORD *)(a1 + 8) = v9;
      *(_QWORD *)(a1 + 16) = a3;
      *(_BYTE *)(a1 + 24) = a2;
    }
    return a1;
  }
LABEL_7:
  v10 = a3 - 1;
  while ( v10 != -1 )
  {
    if ( !a3 )
      core::panicking::panic_bounds_check(v10, 0LL, &anon_2616838c605c3f70843e9f0bba6ced0c_7_llvm_6529744654479120720);
    if ( HIDWORD(v4) )
    {
      v11 = v4 / a2;
      v12 = v4 % a2;
    }
    else
    {
      LODWORD(v12) = (unsigned int)v4 % a2;
      v11 = (unsigned int)v4 / a2;
    }
    *(_BYTE *)(v9 + v10--) = v12;
    v13 = v4 < a2;
    v4 = v11;
    if ( v13 )
      goto LABEL_17;
  }
  if ( !v4 )
  {
LABEL_17:
    v14 = a3;
    goto LABEL_18;
  }
  *(_QWORD *)a1 = 0x8000000000000000LL;
  if ( a3 )
    _rust_dealloc(v9, a3, 1LL);
  return a1;
}
