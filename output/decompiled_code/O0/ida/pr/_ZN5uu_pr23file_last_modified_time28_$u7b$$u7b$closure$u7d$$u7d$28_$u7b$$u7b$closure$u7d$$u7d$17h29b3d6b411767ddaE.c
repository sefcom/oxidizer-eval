__int64 __fastcall uu_pr::file_last_modified_time::{{closure}}::{{closure}}(__int64 a1)
{
  int v1; // eax
  char v3; // [rsp+7h] [rbp-F1h] BYREF
  __int64 v4; // [rsp+8h] [rbp-F0h] BYREF
  int v5; // [rsp+10h] [rbp-E8h]
  __int128 v6; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v7; // [rsp+28h] [rbp-D0h]
  __int64 v8; // [rsp+30h] [rbp-C8h] BYREF
  int v9; // [rsp+38h] [rbp-C0h]
  int v10; // [rsp+3Ch] [rbp-BCh]
  __int64 v11; // [rsp+44h] [rbp-B4h] BYREF
  int v12; // [rsp+4Ch] [rbp-ACh]
  _QWORD v13[7]; // [rsp+50h] [rbp-A8h] BYREF
  char v14; // [rsp+88h] [rbp-70h]
  _QWORD v15[13]; // [rsp+90h] [rbp-68h] BYREF

  <chrono::datetime::DateTime<chrono::offset::utc::Utc> as core::convert::From<std::time::SystemTime>>::from(&v11);
  v5 = v12;
  v4 = v11;
  v3 = 0;
  std::thread::local::LocalKey<T>::try_with(
    v13,
    &anon_3f273f3c4772dc55a54bdec9062ccb39_6_llvm_3469199380322658755,
    &v11,
    &v3);
  core::result::Result<T,E>::expect(
    &v6,
    v13,
    anon_6b18f3ca19b16514212961b62c614770_0_llvm_3964607150695535679,
    70LL,
    &anon_6b18f3ca19b16514212961b62c614770_2_llvm_3964607150695535679);
  v1 = chrono::offset::LocalResult<T>::unwrap(&v6, &anon_4b66f08430e3b2971a63e8fbb00d0ebe_106_llvm_5877677624257021904);
  v8 = v4;
  v9 = v5;
  v10 = v1;
  chrono::datetime::DateTime<Tz>::format(
    v15,
    &v8,
    anon_7c75ec29d226220b36fc1f3bbd3b01ef_90_llvm_17389174869910011146,
    14LL);
  *(_QWORD *)&v6 = 0LL;
  *((_QWORD *)&v6 + 1) = 1LL;
  v7 = 0LL;
  v13[6] = 32LL;
  v14 = 3;
  v13[0] = 0LL;
  v13[2] = 0LL;
  v13[4] = &v6;
  v13[5] = &anon_ebfa4b0515454fd90ef63a7fce850bb1_2_llvm_16725593182750105152;
  if ( (unsigned __int8)<chrono::format::formatting::DelayedFormat<I> as core::fmt::Display>::fmt(v15, v13) )
    core::result::unwrap_failed(
      anon_ebfa4b0515454fd90ef63a7fce850bb1_4_llvm_16725593182750105152,
      55LL,
      &v4,
      &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
      &anon_ebfa4b0515454fd90ef63a7fce850bb1_6_llvm_16725593182750105152);
  *(_QWORD *)(a1 + 16) = v7;
  *(_OWORD *)a1 = v6;
  if ( v15[0] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v15);
  return a1;
}
