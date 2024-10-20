__int64 __fastcall uu_split::strategy::NumberType::from::{{closure}}(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int128 v4; // xmm0
  char v6; // [rsp+7h] [rbp-81h] BYREF
  __int128 v7; // [rsp+8h] [rbp-80h] BYREF
  __int64 v8; // [rsp+18h] [rbp-70h]
  _QWORD v9[7]; // [rsp+20h] [rbp-68h] BYREF
  char v10; // [rsp+58h] [rbp-30h]
  __int128 v11; // [rsp+60h] [rbp-28h]
  __int64 v12; // [rsp+70h] [rbp-18h]

  *(_QWORD *)&v7 = 0LL;
  *((_QWORD *)&v7 + 1) = 1LL;
  v8 = 0LL;
  v9[6] = 32LL;
  v10 = 3;
  v9[0] = 0LL;
  v9[2] = 0LL;
  v9[4] = &v7;
  v9[5] = &anon_31598182ec4484d5302bad599af318fc_0_llvm_11751475672666354668;
  if ( (unsigned __int8)<str as core::fmt::Display>::fmt(*a2, a2[1], v9) )
    core::result::unwrap_failed(
      anon_31598182ec4484d5302bad599af318fc_2_llvm_11751475672666354668,
      55LL,
      &v6,
      &anon_31598182ec4484d5302bad599af318fc_30_llvm_11751475672666354668,
      &anon_31598182ec4484d5302bad599af318fc_4_llvm_11751475672666354668);
  v4 = v7;
  v11 = v7;
  v12 = v8;
  *(_QWORD *)(a1 + 24) = v8;
  *(_OWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = 1LL;
  if ( *(_QWORD *)(a3 + 8) )
    _rust_dealloc(*(_QWORD *)(a3 + 16));
  return a1;
}
