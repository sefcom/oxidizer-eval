__int64 __fastcall forc_crypto::keys::vanity::HexMatcher::new(__int64 a1)
{
  __int128 v1; // xmm0
  __int64 v3; // [rsp+10h] [rbp-78h]
  __int64 v4; // [rsp+18h] [rbp-70h]
  __int64 v5; // [rsp+28h] [rbp-60h]
  __int128 v6; // [rsp+38h] [rbp-50h] BYREF
  __int64 v7; // [rsp+48h] [rbp-40h]
  _QWORD v8[7]; // [rsp+50h] [rbp-38h] BYREF

  alloc::str::<impl str>::to_lowercase(&v6);
  alloc::str::<impl str>::to_lowercase(v8);
  v3 = v7;
  v1 = v6;
  v4 = v8[0];
  v5 = v8[2];
  *(_QWORD *)(a1 + 32) = v8[1];
  *(_QWORD *)(a1 + 40) = v5;
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 24) = v4;
  *(_OWORD *)a1 = v1;
  return a1;
}