__int64 __fastcall uu_dd::Output::new_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  int v9; // edx
  int v10; // eax
  char v11; // cl
  int v12; // edx
  __int64 v13; // rax
  __int64 (__fastcall **v14)(); // rax
  __int64 v15; // rax
  unsigned int v17; // [rsp+4h] [rbp-44h] BYREF
  __int64 v18; // [rsp+8h] [rbp-40h] BYREF
  int v19; // [rsp+10h] [rbp-38h] BYREF
  bool v20; // [rsp+14h] [rbp-34h]
  char v21; // [rsp+15h] [rbp-33h]
  _DWORD v22[2]; // [rsp+18h] [rbp-30h] BYREF
  __int64 v23; // [rsp+20h] [rbp-28h]

  v18 = 0x1B600000000LL;
  v19 = 256;
  v20 = (*(_BYTE *)(a4 + 146) & 1) == 0;
  v21 = *(_BYTE *)(a4 + 145) & 1;
  BYTE2(v19) = *(_BYTE *)(a4 + 150) & 1;
  v6 = _mm_unpacklo_epi16(
         _mm_unpacklo_epi8(
           _mm_and_si128(_mm_cvtsi32_si128(*(_DWORD *)(a4 + 157)), (__m128i)xmmword_1B430),
           (__m128i)0LL),
         (__m128i)0LL);
  v7 = _mm_unpacklo_epi32(
         _mm_shuffle_epi32(_mm_mul_epu32(v6, (__m128i)xmmword_1B770), 232),
         _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v6, 245), *(__m128i *)""), 232));
  v8 = _mm_or_si128(_mm_shuffle_epi32(v7, 238), v7);
  v9 = (BYTE2(v19) << 10) | ((*(_BYTE *)(a4 + 152) & 1) << 14) | ((*(_BYTE *)(a4 + 153) & 1) << 16) | _mm_cvtsi128_si32(_mm_or_si128(_mm_shuffle_epi32(v8, 85), v8));
  v10 = v9 | ((*(_BYTE *)(a4 + 154) & 1) << 12);
  v11 = *(_BYTE *)(a4 + 155);
  if ( (v11 & 1) != 0 || v10 )
  {
    v12 = v9 | 0x101000;
    if ( (v11 & 1) != 0 )
      v10 = v12;
    LODWORD(v18) = v10;
  }
  std::fs::OpenOptions::_open(v22, &v18, a2, a3);
  if ( v22[0] )
  {
    v13 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
            v23,
            a2,
            a3);
    if ( v13 )
    {
      *(_QWORD *)(a1 + 8) = v13;
      *(_QWORD *)(a1 + 16) = &anon_03cf1666c72ffecffa9b2ee592f2558f_5_llvm_12236334141226123511;
      *(_BYTE *)a1 = 4;
      return a1;
    }
    v14 = &anon_03cf1666c72ffecffa9b2ee592f2558f_5_llvm_12236334141226123511;
  }
  else
  {
    LODWORD(v14) = v22[1];
  }
  v17 = (unsigned int)v14;
  if ( (*(_BYTE *)(a4 + 147) & 1) == 0 )
  {
    v15 = std::fs::File::set_len(&v17, *(_QWORD *)(a4 + 136));
    if ( v15 )
    {
      std::io::error::repr_bitpacked::decode_repr(&v18, v15);
      if ( (unsigned __int8)v18 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v19);
    }
  }
  uu_dd::Output::prepare_file(a1, v17, a4);
  return a1;
}
