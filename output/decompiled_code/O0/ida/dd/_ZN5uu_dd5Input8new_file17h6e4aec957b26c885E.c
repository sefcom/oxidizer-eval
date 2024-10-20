__int64 __fastcall uu_dd::Input::new_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  int v9; // ecx
  char v10; // al
  int v11; // edx
  __int64 v12; // rax
  __int64 (__fastcall **v13)(); // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i v17; // xmm0
  int v18; // ecx
  int v20; // [rsp+0h] [rbp-68h] BYREF
  int fd; // [rsp+4h] [rbp-64h]
  __int64 v22; // [rsp+8h] [rbp-60h] BYREF
  int v23; // [rsp+10h] [rbp-58h]
  __int16 v24; // [rsp+14h] [rbp-54h]
  _DWORD v25[2]; // [rsp+18h] [rbp-50h] BYREF
  __int64 v26; // [rsp+20h] [rbp-48h]
  __m128i v27; // [rsp+28h] [rbp-40h] BYREF
  __m128i v28; // [rsp+38h] [rbp-30h] BYREF

  v22 = 0x1B600000000LL;
  v23 = 1;
  v24 = 0;
  v6 = _mm_unpacklo_epi16(
         _mm_unpacklo_epi8(_mm_and_si128(_mm_cvtsi32_si128(*(_DWORD *)(a4 + 70)), (__m128i)xmmword_1B430), (__m128i)0LL),
         (__m128i)0LL);
  v7 = _mm_unpacklo_epi32(
         _mm_shuffle_epi32(_mm_mul_epu32(v6, (__m128i)xmmword_1B770), 232),
         _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v6, 245), *(__m128i *)""), 232));
  v8 = _mm_or_si128(_mm_shuffle_epi32(v7, 238), v7);
  v9 = ((*(_BYTE *)(a4 + 65) & 1) << 14) | ((*(_BYTE *)(a4 + 66) & 1) << 16) | ((*(_BYTE *)(a4 + 67) & 1) << 12) | _mm_cvtsi128_si32(_mm_or_si128(_mm_shuffle_epi32(v8, 85), v8));
  v10 = *(_BYTE *)(a4 + 68);
  if ( (v10 & 1) != 0 || v9 )
  {
    v11 = v9 | 0x101000;
    if ( (v10 & 1) == 0 )
      v11 = v9;
    LODWORD(v22) = v11;
  }
  std::fs::OpenOptions::_open(v25, &v22, a2, a3);
  if ( v25[0] )
  {
    v12 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
            v26,
            a2,
            a3);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 8) = v12;
      *(_QWORD *)(a1 + 16) = &anon_03cf1666c72ffecffa9b2ee592f2558f_5_llvm_12236334141226123511;
      *(_QWORD *)a1 = 1LL;
      return a1;
    }
    v13 = &anon_03cf1666c72ffecffa9b2ee592f2558f_5_llvm_12236334141226123511;
  }
  else
  {
    LODWORD(v13) = v25[1];
  }
  fd = (int)v13;
  v20 = 0;
  v14 = *(_QWORD *)(a4 + 128);
  if ( !v14 )
  {
    v18 = 0;
LABEL_17:
    *(_DWORD *)(a1 + 8) = v18;
    *(_DWORD *)(a1 + 12) = (_DWORD)v13;
    *(_QWORD *)(a1 + 16) = a4;
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  if ( !uu_dd::Source::skip(&v20, v14) )
  {
    v18 = v20;
    LODWORD(v13) = fd;
    goto LABEL_17;
  }
  v27.m128i_i64[0] = 0x8000000000000000LL;
  v28.m128i_i64[1] = v15;
  v16 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !v16 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v17 = _mm_loadu_si128(&v27);
  *(__m128i *)(v16 + 16) = _mm_loadu_si128(&v28);
  *(__m128i *)v16 = v17;
  *(_QWORD *)(a1 + 8) = v16;
  *(_QWORD *)(a1 + 16) = &anon_f907210316a4f48a9c7de5c93e2a79ff_287_llvm_5503381581801417789;
  *(_QWORD *)a1 = 1LL;
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
  close(fd);
  return a1;
}
