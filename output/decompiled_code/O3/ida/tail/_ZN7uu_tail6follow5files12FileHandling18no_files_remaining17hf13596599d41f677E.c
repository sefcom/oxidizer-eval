bool __fastcall uu_tail::follow::files::FileHandling::no_files_remaining(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  const __m128i *v4; // r13
  const __m128i *v6; // rbp
  int v8; // ebx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r15

  v3 = *(_QWORD *)(a1 + 48);
  if ( !v3 )
    return 1;
  v4 = *(const __m128i **)(a1 + 24);
  _ECX = ~_mm_movemask_epi8(_mm_load_si128(v4));
  v6 = v4 + 1;
  while ( v3-- != 0 )
  {
    if ( (_WORD)_ECX )
    {
      v8 = _ECX & (_ECX - 1);
    }
    else
    {
      do
      {
        v9 = _mm_movemask_epi8(_mm_load_si128(v6));
        v4 -= 240;
        ++v6;
      }
      while ( v9 == 0xFFFF );
      _RAX = (unsigned int)(-2 - v9);
      _ECX = ~v9;
      v8 = _RAX & _ECX;
    }
    __asm { tzcnt   eax, ecx }
    v10 = -15 * _RAX;
    v11 = *((_QWORD *)&v4[v10 - 14] - 1);
    v12 = v4[v10 - 14].m128i_i64[0];
    if ( !(unsigned __int8)uu_tail::paths::path_is_tailable(v11, v12) )
    {
      _RAX = <std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(v11, v12);
      _ECX = v8;
      if ( !(_BYTE)_RAX )
        continue;
    }
    return 0;
  }
  return *(_BYTE *)(a2 + 72) == 0;
}
