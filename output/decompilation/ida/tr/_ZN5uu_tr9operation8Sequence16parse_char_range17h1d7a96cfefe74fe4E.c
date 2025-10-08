__int64 __fastcall uu_tr::operation::Sequence::parse_char_range(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  __int128 v8; // xmm0
  __m256i v9; // [rsp+8h] [rbp-30h] BYREF

  v3 = 1LL;
  result = <nom::internal::And<F,G> as nom::internal::Parser<I>>::process(&v9, asc_1BA6B, 1LL, a2, a3);
  if ( v9.m256i_i32[0] == 3 )
  {
    result = v9.m256i_u8[24];
    v5 = v9.m256i_u8[25];
    v6 = (v9.m256i_u8[24] << 8) + (v9.m256i_u8[25] << 16) + 1;
    v7 = 2 * (v9.m256i_i8[24] <= (unsigned int)v9.m256i_i8[25]) + 10;
    if ( v9.m256i_i8[24] > (unsigned int)v9.m256i_i8[25] )
      v6 = v9.m256i_u8[24];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v9.m256i_u64[1];
    *(_DWORD *)(a1 + 24) = v7;
    *(_DWORD *)(a1 + 28) = v5;
    *(_DWORD *)(a1 + 32) = v6;
    v3 = 0LL;
  }
  else
  {
    v8 = *(_OWORD *)v9.m256i_i8;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v9.m256i_u64[2];
    *(_OWORD *)(a1 + 8) = v8;
  }
  *(_QWORD *)a1 = v3;
  return result;
}