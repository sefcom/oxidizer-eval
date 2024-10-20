        unsigned __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // r15
  bool v10; // si
  __int64 v11; // rdi
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  bool v15; // cf
  __int64 v17; // [rsp+0h] [rbp-48h] BYREF
  __int64 v18; // [rsp+8h] [rbp-40h]
  __int64 v19; // [rsp+10h] [rbp-38h]

  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v17, a3, 1LL);
  v8 = v18;
  if ( v17 )
    alloc::raw_vec::handle_error(v18, v19);
  v9 = v19;
  v10 = v19 == 0 || a3 < 0;
  v11 = a3;
  v12 = a3;
  while ( 1 )
  {
    v15 = v12-- == 0;
    if ( v15 )
      break;
    if ( !a2 )
      core::panicking::panic_const::panic_const_rem_by_zero(&anon_b760fe9489943aeee93369f40367437d_17_llvm_11129561081277887655);
    if ( v10 )
      core::panicking::panic_nounwind(anon_60fe5ecc8a5a6f6a64f7c14fee2afab1_17_llvm_16066862953719322457, 166LL);
    if ( HIDWORD(a4) )
    {
      v13 = a4 / a2;
      v14 = a4 % a2;
    }
    else
    {
      LODWORD(v14) = (unsigned int)a4 % a2;
      v13 = (unsigned int)a4 / a2;
    }
    *(_BYTE *)(v9 + v11 - 1) = v14;
    v11 = v12;
    v15 = a4 < a2;
    a4 = v13;
    if ( v15 )
      goto LABEL_13;
  }
  if ( !a4 )
  {
LABEL_13:
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = a3;
    *(_BYTE *)(a1 + 24) = a2;
    return a1;
  }
  *(_QWORD *)a1 = 0x8000000000000000LL;
  if ( v8 )
    _rust_dealloc(v9);
  return a1;
}
