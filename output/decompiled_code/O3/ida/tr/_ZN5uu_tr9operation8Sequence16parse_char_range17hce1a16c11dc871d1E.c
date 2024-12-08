__int64 __fastcall uu_tr::operation::Sequence::parse_char_range(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned __int64 v4; // r8
  int v5; // edx
  __int64 result; // rax
  __int128 v7; // xmm0
  __m256i v8; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v9[0] = asc_149C4;
  v9[1] = 1LL;
  nom::sequence::separated_pair::{{closure}}(&v8, v9, a2, a3);
  if ( v8.m256i_i32[0] == 3 )
  {
    v3 = v8.m256i_u8[24];
    v4 = 0x800000000000000BLL;
    v5 = (v8.m256i_u8[24] << 8) + (v8.m256i_u8[25] << 16) + 1;
    if ( v8.m256i_i8[24] > (unsigned int)v8.m256i_i8[25] )
    {
      v5 = v8.m256i_u8[25];
      v4 = 0x800000000000000ALL;
    }
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v8.m256i_u64[1];
    *(_QWORD *)(a1 + 24) = v4;
    *(_DWORD *)(a1 + 32) = v5;
    *(_DWORD *)(a1 + 36) = v3;
    result = 0LL;
  }
  else
  {
    v7 = *(_OWORD *)v8.m256i_i8;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v8.m256i_u64[2];
    *(_OWORD *)(a1 + 8) = v7;
    result = 1LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}
