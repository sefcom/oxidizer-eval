__int64 __fastcall uu_df::table::RowFormatter::scaled_inodes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  char v6; // [rsp+7h] [rbp-71h] BYREF
  __int128 v7; // [rsp+8h] [rbp-70h] BYREF
  __int64 v8; // [rsp+18h] [rbp-60h]
  _QWORD v9[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v10[7]; // [rsp+30h] [rbp-48h] BYREF
  char v11; // [rsp+68h] [rbp-10h]

  v9[1] = a4;
  v9[0] = a3;
  v4 = *(_BYTE *)(*(_QWORD *)(a2 + 8) + 84LL);
  if ( v4 == 2 )
  {
    *(_QWORD *)&v7 = 0LL;
    *((_QWORD *)&v7 + 1) = 1LL;
    v8 = 0LL;
    v10[6] = 32LL;
    v11 = 3;
    v10[0] = 0LL;
    v10[2] = 0LL;
    v10[4] = &v7;
    v10[5] = &anon_ce24071ab6ca4656d9be62da3780334f_7_llvm_4420661897342018725;
    if ( (unsigned __int8)core::fmt::num::<impl core::fmt::Display for u128>::fmt(v9, v10) )
      core::result::unwrap_failed(
        anon_ce24071ab6ca4656d9be62da3780334f_9_llvm_4420661897342018725,
        55LL,
        &v6,
        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
        &anon_ce24071ab6ca4656d9be62da3780334f_11_llvm_4420661897342018725);
    *(_QWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v7;
  }
  else
  {
    uu_df::blocks::to_magnitude_and_suffix(a1, a3, a4, v4 & 1);
  }
  return a1;
}
