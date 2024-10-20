__int64 __fastcall uu_expr::syntax_tree::is_truthy(_QWORD *a1)
{
  unsigned int v1; // ebx
  _BYTE *v2; // rax
  __int64 v3; // rcx
  char v4; // al
  int v5; // eax
  _BYTE *v7; // [rsp+8h] [rbp-50h] BYREF
  _BYTE *v8; // [rsp+10h] [rbp-48h]
  __int64 v9; // [rsp+18h] [rbp-40h] BYREF
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int128 v13; // [rsp+40h] [rbp-18h] BYREF

  if ( *a1 == 0x8000000000000000LL )
  {
    v2 = (_BYTE *)a1[2];
    if ( !v2 || (v3 = a1[3], v3 < 0) )
      core::panicking::panic_nounwind(anon_2bac4deccfcbd46877edd8deb52f270f_29_llvm_5724965477395591734, 162LL);
    if ( v3 == 1 )
    {
      LOBYTE(v1) = 1;
      if ( *v2 == 45 )
        return v1;
      v8 = v2 + 1;
    }
    else
    {
      v8 = &v2[v3];
      if ( !v3 )
        return 0;
    }
    v7 = v2 + 1;
    v5 = (unsigned __int8)*v2;
    if ( v5 == 48 || (LOBYTE(v1) = 1, v5 == 45) )
    {
      LOBYTE(v9) = core::iter::traits::iterator::Iterator::try_fold(&v7);
      v1 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(
             &v9,
             &anon_2bac4deccfcbd46877edd8deb52f270f_26_llvm_5724965477395591734);
      LOBYTE(v1) = v1 ^ 1;
    }
  }
  else
  {
    v13 = xmmword_66FF8;
    v12 = anon_52158d68de30c31dc6c97ce83134c8ee_19_llvm_10101531615377826705;
    v4 = *((_BYTE *)a1 + 24);
    if ( (v4 != 1) == (a1[2] == 0LL) )
      core::panicking::panic(
        anon_2bac4deccfcbd46877edd8deb52f270f_32_llvm_5724965477395591734,
        61LL,
        &anon_2bac4deccfcbd46877edd8deb52f270f_37_llvm_5724965477395591734);
    LOBYTE(v1) = v4 != 1;
    alloc::raw_vec::RawVec<T,A>::current_memory(&v9, &v12);
    if ( v10 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v13, v9, v10, v11);
  }
  return v1;
}
