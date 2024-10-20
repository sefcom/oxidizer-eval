unsigned __int64 __fastcall uu_sum::sysv_sum(__int64 a1, __int64 a2)
{
  unsigned int v3; // r13d
  __int64 (__fastcall *v4)(__int64, _QWORD *, __int64); // rbp
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  bool v8; // cf
  unsigned __int8 *v9; // rax
  unsigned __int64 v10; // rcx
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  unsigned __int64 v13; // rsi
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  unsigned __int8 *v16; // rcx
  int v17; // edx
  __int64 v18; // r15
  __int64 v19; // rsi
  char v21[8]; // [rsp+28h] [rbp-1040h] BYREF
  char v22[8]; // [rsp+30h] [rbp-1038h] BYREF
  _QWORD s[518]; // [rsp+38h] [rbp-1030h] BYREF

  v3 = 0;
  memset(s, 0, 0x1000uLL);
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(a2 + 24);
  v5 = 0LL;
  while ( 1 )
  {
    v6 = v4(a1, s, 4096LL);
    if ( v6 || !v7 )
      break;
    v8 = __CFADD__(v7, v5);
    v5 += v7;
    if ( v8 )
      core::panicking::panic_const::panic_const_add_overflow(&off_105378);
    if ( v7 >= 0x1001 )
      core::slice::index::slice_end_index_len_fail(v7, 4096LL, &off_105390);
    if ( v7 < 8 )
    {
      v9 = (unsigned __int8 *)s;
      goto LABEL_11;
    }
    v10 = v7 & 0x1FF8;
    v9 = (unsigned __int8 *)s + (v7 & 0xFFFFFFFFFFFFFFF8LL);
    v11 = _mm_cvtsi32_si128(v3);
    v12 = 0LL;
    v13 = 0LL;
    do
    {
      v11 = _mm_add_epi32(
              v11,
              _mm_unpacklo_epi16(_mm_unpacklo_epi8(_mm_cvtsi32_si128(s[v13 / 8]), (__m128i)0LL), (__m128i)0LL));
      v12 = _mm_add_epi32(
              v12,
              _mm_unpacklo_epi16(_mm_unpacklo_epi8(_mm_cvtsi32_si128(HIDWORD(s[v13 / 8])), (__m128i)0LL), (__m128i)0LL));
      v13 += 8LL;
    }
    while ( v10 != v13 );
    v14 = _mm_add_epi32(v12, v11);
    v15 = _mm_add_epi32(_mm_shuffle_epi32(v14, 238), v14);
    v3 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v15, 85), v15));
    if ( v10 != v7 )
    {
LABEL_11:
      v16 = (unsigned __int8 *)s + v7;
      do
      {
        v17 = *v9++;
        v3 += v17;
      }
      while ( v9 != v16 );
    }
  }
  if ( v6 )
  {
    std::io::error::repr_bitpacked::decode_repr(v21, v7);
    if ( v21[0] >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v22);
  }
  v8 = __CFADD__(v5, 512LL);
  v18 = v5 + 512;
  if ( v8 )
    core::panicking::panic_const::panic_const_add_overflow(&off_105330);
  if ( *(_QWORD *)a2 )
    (*(void (__fastcall **)(__int64))a2)(a1);
  v19 = *(_QWORD *)(a2 + 8);
  if ( v19 )
    _rust_dealloc(a1, v19, *(_QWORD *)(a2 + 16));
  return (unsigned __int64)(v18 - 1) >> 9;
}
