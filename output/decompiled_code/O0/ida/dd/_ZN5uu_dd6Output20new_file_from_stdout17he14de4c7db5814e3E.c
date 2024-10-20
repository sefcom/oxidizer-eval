__int64 __fastcall uu_dd::Output::new_file_from_stdout(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm0
  int v4; // ebp
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  int v8; // edx
  int v9; // eax
  char v10; // cl
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int32 v16; // [rsp+8h] [rbp-50h] BYREF
  int v17; // [rsp+Ch] [rbp-4Ch] BYREF
  __m128i v18; // [rsp+10h] [rbp-48h] BYREF
  __m128i v19; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v20[10]; // [rsp+30h] [rbp-28h] BYREF

  std::io::stdio::stdout();
  v17 = 1;
  std::os::fd::owned::BorrowedFd::try_clone_to_owned(&v18, &v17);
  if ( v18.m128i_i32[0] )
  {
    v18.m128i_i64[0] = 0x8000000000000000LL;
    v19.m128i_i64[1] = v18.m128i_i64[1];
    v2 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v2 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v3 = _mm_loadu_si128(&v18);
    *(__m128i *)(v2 + 16) = _mm_loadu_si128(&v19);
    *(__m128i *)v2 = v3;
    *(_QWORD *)(a1 + 8) = v2;
    *(_QWORD *)(a1 + 16) = &anon_f907210316a4f48a9c7de5c93e2a79ff_287_llvm_5503381581801417789;
    *(_BYTE *)a1 = 4;
  }
  else
  {
    v4 = v18.m128i_i32[1];
    v16 = v18.m128i_i32[1];
    v5 = _mm_unpacklo_epi16(
           _mm_unpacklo_epi8(
             _mm_and_si128(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 157)), (__m128i)xmmword_1B430),
             (__m128i)0LL),
           (__m128i)0LL);
    v6 = _mm_unpacklo_epi32(
           _mm_shuffle_epi32(_mm_mul_epu32(v5, (__m128i)xmmword_1B770), 232),
           _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v5, 245), *(__m128i *)""), 232));
    v7 = _mm_or_si128(_mm_shuffle_epi32(v6, 238), v6);
    v8 = ((*(_BYTE *)(a2 + 150) & 1) << 10) | ((*(_BYTE *)(a2 + 152) & 1) << 14) | ((*(_BYTE *)(a2 + 153) & 1) << 16) | _mm_cvtsi128_si32(_mm_or_si128(_mm_shuffle_epi32(v7, 85), v7));
    v9 = v8 | ((*(_BYTE *)(a2 + 154) & 1) << 12);
    v10 = *(_BYTE *)(a2 + 155);
    if ( (v10 & 1) == 0 && !v9 )
      goto LABEL_11;
    v11 = v8 | 0x101000;
    if ( (v10 & 1) != 0 )
      v9 = v11;
    v20[1] = v9;
    v20[0] = 5;
    if ( (unsigned int)nix::fcntl::fcntl(v18.m128i_u32[1], v20) )
    {
      v18.m128i_i64[0] = 0x8000000000000000LL;
      v19.m128i_i64[1] = (v12 << 32) | 2;
      v13 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !v13 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v14 = _mm_loadu_si128(&v18);
      *(__m128i *)(v13 + 16) = _mm_loadu_si128(&v19);
      *(__m128i *)v13 = v14;
      *(_QWORD *)(a1 + 8) = v13;
      *(_QWORD *)(a1 + 16) = &anon_f907210316a4f48a9c7de5c93e2a79ff_287_llvm_5503381581801417789;
      *(_BYTE *)a1 = 4;
      core::ptr::drop_in_place<std::os::fd::owned::OwnedFd>(&v16);
    }
    else
    {
LABEL_11:
      uu_dd::Output::prepare_file(a1, v4, a2);
    }
  }
  return a1;
}
