__int64 __fastcall uu_tr::operation::Sequence::parse_char_star(__int64 a1, __int64 a2, __int64 a3)
{
  __int8 v3; // al
  __int64 result; // rax
  __int128 v5; // xmm0
  __m256i v6; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v7[0] = asc_1BB7B;
  v7[1] = 1LL;
  v7[2] = asc_1BB7C;
  v7[3] = 2LL;
  <nom::sequence::Preceded<F,G> as nom::internal::Parser<I>>::process(&v6, v7, a2, a3);
  if ( v6.m256i_i32[0] == 3 )
  {
    v3 = v6.m256i_i8[24];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v6.m256i_u64[1];
    *(_DWORD *)(a1 + 24) = 12;
    *(_BYTE *)(a1 + 32) = 2;
    *(_BYTE *)(a1 + 33) = v3;
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
    v5 = *(_OWORD *)v6.m256i_i8;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v6.m256i_u64[2];
    *(_OWORD *)(a1 + 8) = v5;
    result = 1LL;
    *(_QWORD *)a1 = 1LL;
  }
  return result;
}