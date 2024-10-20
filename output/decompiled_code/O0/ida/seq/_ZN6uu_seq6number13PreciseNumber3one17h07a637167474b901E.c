__int64 __fastcall uu_seq::number::PreciseNumber::one(__int64 a1)
{
  __int128 v2; // [rsp+8h] [rbp-20h] BYREF
  __int64 v3; // [rsp+18h] [rbp-10h]

  num_bigint::biguint::convert::<impl core::convert::From<u64> for num_bigint::biguint::BigUint>::from(&v2, 1LL);
  *(_QWORD *)(a1 + 16) = v3;
  *(_OWORD *)a1 = v2;
  *(_BYTE *)(a1 + 24) = 2;
  *(_DWORD *)(a1 + 25) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 1LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return a1;
}
