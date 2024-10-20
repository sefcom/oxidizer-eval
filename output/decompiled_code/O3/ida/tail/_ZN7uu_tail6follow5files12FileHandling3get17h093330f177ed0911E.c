__int64 __fastcall uu_tail::follow::files::FileHandling::get(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  __m128i v8; // xmm0
  __int64 v9; // r12
  __int64 i; // r13
  __int64 v13; // r14
  __int64 v14; // r15
  __m128i v16; // [rsp+0h] [rbp-98h] BYREF
  __int64 v17; // [rsp+10h] [rbp-88h]
  __int64 v18; // [rsp+20h] [rbp-78h]
  __m128i v19; // [rsp+28h] [rbp-70h] BYREF
  __int64 v20; // [rsp+38h] [rbp-60h]
  __m128i v21; // [rsp+40h] [rbp-58h]
  __m128i v22[4]; // [rsp+50h] [rbp-48h] BYREF

  if ( !(unsigned __int8)std::path::Path::is_absolute(a2, a3)
    && !(unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(a2, a3) )
  {
    std::sys::pal::unix::fs::canonicalize(&v19, a2, a3);
    if ( v19.m128i_i64[0] != 0x8000000000000000LL )
    {
      v17 = v20;
      v16 = _mm_loadu_si128(&v19);
      if ( a1[6] )
        goto LABEL_6;
LABEL_16:
      core::option::unwrap_failed(&anon_c568fa996e9b1afffbd2fe86e67742f4_11_llvm_893476530518564186);
    }
    core::ptr::drop_in_place<std::io::error::Error>(v19.m128i_i64[1]);
  }
  std::path::Path::to_path_buf(&v16, a2, a3);
  if ( !a1[6] )
    goto LABEL_16;
LABEL_6:
  v4 = core::hash::BuildHasher::hash_one(a1 + 7, &v16);
  v5 = a1[3];
  v6 = a1[4];
  v7 = v4 & v6;
  v8 = _mm_cvtsi32_si128(v4 >> 57);
  v21 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v8, v8), 0), 0);
  v18 = v5;
  v9 = v5 - 240;
  for ( i = 0LL; ; i += 16LL )
  {
    HIDWORD(_RAX) = HIDWORD(v18);
    v22[0] = _mm_loadu_si128((const __m128i *)(v18 + v7));
    _EBP = _mm_movemask_epi8(_mm_cmpeq_epi8(v22[0], v21));
    if ( _EBP )
      break;
LABEL_10:
    if ( _mm_movemask_epi8(
           _mm_cmpeq_epi8(
             _mm_load_si128(v22),
             (__m128i)anon_a1eaa6636756e7b38e7920bea57414d0_0_llvm_6054117616294908762)) )
    {
      goto LABEL_16;
    }
    v14 = i + v7 + 16;
    v7 = v6 & v14;
  }
  while ( 1 )
  {
    __asm { tzcnt   eax, ebp }
    v13 = -240LL * (v6 & (v7 + _RAX));
    if ( (unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq>::eq(
                            v16.m128i_i64[1],
                            v17,
                            *(_QWORD *)(v9 - 240 * (v6 & (v7 + _RAX)) + 8),
                            *(_QWORD *)(v9 - 240 * (v6 & (v7 + _RAX)) + 16)) )
      break;
    _RAX = (unsigned int)(_EBP - 1);
    LOWORD(_RAX) = _EBP & (_EBP - 1);
    _EBP = _RAX;
    if ( !(_WORD)_RAX )
      goto LABEL_10;
  }
  if ( v16.m128i_i64[0] )
    _rust_dealloc(v16.m128i_i64[1], v16.m128i_i64[0], 1LL);
  return v13 + v18 - 216;
}
