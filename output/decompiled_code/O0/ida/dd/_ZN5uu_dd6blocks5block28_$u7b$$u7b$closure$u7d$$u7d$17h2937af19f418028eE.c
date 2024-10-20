__int64 __fastcall uu_dd::blocks::block::{{closure}}(__int64 a1, unsigned __int64 **a2, _QWORD *a3, __int128 *a4)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  __int128 v15; // [rsp+0h] [rbp-38h]
  __int64 v16; // [rsp+10h] [rbp-28h]

  v6 = *((_QWORD *)a4 + 2);
  v7 = **a2;
  if ( v6 > v7 )
  {
    v8 = (__int64 *)a2[1];
    v9 = (unsigned int)(*(_DWORD *)v8 + 1);
    if ( *(_DWORD *)v8 == -1 )
      core::panicking::panic_const::panic_const_add_overflow(
        &anon_63782909c3cb7357905e62e141098beb_10_llvm_18118160920441741807,
        a2,
        a3,
        v9);
    *(_DWORD *)v8 = v9;
    v7 = **a2;
    v6 = *((_QWORD *)a4 + 2);
  }
  if ( v7 <= v6 )
    *((_QWORD *)a4 + 2) = v7;
  else
    alloc::vec::Vec<T,A>::extend_with(a4, v7 - v6, 32LL);
  v16 = *((_QWORD *)a4 + 2);
  v15 = *a4;
  v10 = a3[2];
  if ( v10 == *a3 )
    alloc::raw_vec::RawVec<T,A>::grow_one(a3);
  v11 = a3[1];
  v12 = 3 * v10;
  *(_QWORD *)(v11 + 8 * v12 + 16) = v16;
  *(_OWORD *)(v11 + 8 * v12) = v15;
  v13 = v10 + 1;
  a3[2] = v13;
  *(_QWORD *)(a1 + 16) = v13;
  *(_OWORD *)a1 = *(_OWORD *)a3;
  return a1;
}
