void *__fastcall uu_tail::chunks::LinesChunk::from_chunk(void *s, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  bool v4; // cf
  unsigned __int64 v5; // r15
  char v6; // bp
  unsigned __int64 v7; // rax

  v3 = *(_QWORD *)(a2 + 8200);
  v4 = v3 < a3;
  v5 = v3 - a3;
  if ( v4 )
  {
    v6 = *(_BYTE *)(a2 + 8208);
    v5 = 0LL;
    memset(s, 0, 0x2008uLL);
  }
  else
  {
    v7 = uu_tail::chunks::LinesChunk::calculate_bytes_offset_from(a2, a3);
    uu_tail::chunks::BytesChunk::from_chunk(s, a2, v7);
    v6 = *(_BYTE *)(a2 + 8208);
  }
  *((_QWORD *)s + 1025) = v5;
  *((_BYTE *)s + 8208) = v6;
  return s;
}
