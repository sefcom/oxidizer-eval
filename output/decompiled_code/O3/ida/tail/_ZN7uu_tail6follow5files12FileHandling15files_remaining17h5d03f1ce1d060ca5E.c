bool __fastcall uu_tail::follow::files::FileHandling::files_remaining(__int64 a1)
{
  const __m128i *v2; // r15
  __int64 v3; // r12
  const __m128i *v5; // r13
  int v7; // ebp
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v13; // [rsp+0h] [rbp-38h]

  v2 = *(const __m128i **)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 48);
  _ECX = ~_mm_movemask_epi8(_mm_load_si128(v2));
  v5 = v2 + 1;
  do
  {
    v13 = v3;
    if ( v3-- == 0 )
      break;
    if ( (_WORD)_ECX )
    {
      v7 = _ECX & (_ECX - 1);
    }
    else
    {
      do
      {
        v8 = _mm_movemask_epi8(_mm_load_si128(v5));
        v2 -= 240;
        ++v5;
      }
      while ( v8 == 0xFFFF );
      _RAX = (unsigned int)(-2 - v8);
      _ECX = ~v8;
      v7 = _RAX & _ECX;
    }
    __asm { tzcnt   eax, ecx }
    v9 = -15 * _RAX;
    v10 = *((_QWORD *)&v2[v9 - 14] - 1);
    v11 = v2[v9 - 14].m128i_i64[0];
    if ( (unsigned __int8)uu_tail::paths::path_is_tailable(v10, v11) )
      break;
    _RAX = <std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(v10, v11);
    _ECX = v7;
  }
  while ( !(_BYTE)_RAX );
  return v13 != 0;
}
