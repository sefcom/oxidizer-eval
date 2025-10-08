__int64 __fastcall uu_df::table::Row::new(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+8h] [rbp-70h] BYREF
  __int64 v3; // [rsp+18h] [rbp-60h]
  __int128 v4; // [rsp+20h] [rbp-58h]
  __int64 v5; // [rsp+30h] [rbp-48h]
  __int128 v6; // [rsp+40h] [rbp-38h]
  __int64 v7; // [rsp+50h] [rbp-28h]
  __int128 v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-10h]

  *(_QWORD *)&v8 = 0x8000000000000000LL;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v2, "total%", 5LL);
  v5 = v3;
  v4 = v2;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v2, "-total%", 1LL);
  v7 = v3;
  v6 = v2;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v2, "-total%", 1LL);
  *(_QWORD *)(a1 + 144) = v3;
  *(_OWORD *)(a1 + 128) = v2;
  *(_QWORD *)(a1 + 168) = v9;
  *(_OWORD *)(a1 + 152) = v8;
  *(_QWORD *)(a1 + 96) = v5;
  *(_OWORD *)(a1 + 80) = v4;
  *(_OWORD *)(a1 + 104) = v6;
  result = v7;
  *(_QWORD *)(a1 + 120) = v7;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}