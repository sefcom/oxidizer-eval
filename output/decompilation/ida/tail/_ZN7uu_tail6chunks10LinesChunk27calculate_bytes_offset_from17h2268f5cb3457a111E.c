__int64 __fastcall uu_tail::chunks::LinesChunk::calculate_bytes_offset_from(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 buffer; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int8 v6; // si
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rdi
  bool v10; // r8

  v2 = a2;
  buffer = uu_tail::chunks::LinesChunk::get_buffer(a1);
  if ( v4 == 0 || a2 == 0 )
    return 0LL;
  v6 = *(_BYTE *)(a1 + 8208);
  v7 = v4 - 1;
  v5 = 0LL;
  do
  {
    v8 = v5;
    v9 = 0LL;
    v10 = *(_BYTE *)(buffer + v5++) == v6;
    if ( v7 == v8 )
      break;
    LOBYTE(v9) = v10;
    v2 -= v9;
  }
  while ( v2 );
  return v5;
}