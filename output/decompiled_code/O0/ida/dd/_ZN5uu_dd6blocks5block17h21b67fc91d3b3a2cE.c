__int64 __fastcall uu_dd::blocks::block(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v15; // rax
  __int128 v17; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-70h]
  __int64 v19; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h] BYREF
  __int128 v23; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+50h] [rbp-38h]
  _QWORD v25[6]; // [rsp+58h] [rbp-30h] BYREF

  v22 = a4;
  v25[0] = 0LL;
  v25[1] = 8LL;
  v25[2] = 0LL;
  v19 = a2;
  v20 = a3;
  LOBYTE(v21) = 0;
  core::iter::traits::iterator::Iterator::fold(&v17, &v19, v25, &v22, a6 + 24);
  if ( !*((_QWORD *)&v17 + 1) || (BYTE8(v17) & 7) != 0 || v18 >= 0x555555555555556LL )
    core::panicking::panic_nounwind(anon_965c7e9797bf363381d1deac3dc9c421_2_llvm_809249241883912370, 162LL);
  v9 = v18 - 1;
  if ( v18 && (!a5 || !*(_QWORD *)(a6 + 8)) )
  {
    v10 = *((_QWORD *)&v17 + 1) + 24 * v9;
    v11 = *(_QWORD *)(v10 + 8);
    if ( !v11 || (v12 = *(_QWORD *)(v10 + 16), v12 < 0) )
      core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
    v13 = 0LL;
    while ( v12 != v13 )
    {
      if ( *(_BYTE *)(v11 + v13++) != 32 )
        goto LABEL_18;
    }
    --v18;
    if ( v9 >= (unsigned __int64)v17 )
      core::panicking::panic_nounwind(anon_7bf17358f8e033a0017788a0b3f72e05_19_llvm_2099831596196026068, 104LL);
    v15 = *(_QWORD *)(v10 + 16);
    v23 = *(_OWORD *)v10;
    v24 = v15;
    if ( (_QWORD)v23 != 0x8000000000000000LL )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v19, &v23);
      if ( v20 )
      {
        if ( v21 )
          _rust_dealloc(v19, v21, v20);
      }
    }
  }
LABEL_18:
  *(_QWORD *)(a1 + 16) = v18;
  *(_OWORD *)a1 = v17;
  return a1;
}
