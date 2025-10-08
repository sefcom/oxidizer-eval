__int64 __fastcall uu_tail::chunks::LinesChunk::fill(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+8h] [rbp-40h] BYREF
  __int128 v4; // [rsp+10h] [rbp-38h]
  __int128 v5; // [rsp+20h] [rbp-28h]

  uu_tail::chunks::BytesChunk::fill(&v3);
  if ( v3 == 1 )
  {
    *(_OWORD *)(a1 + 8) = v4;
    result = 1LL;
  }
  else
  {
    if ( (_DWORD)v4 == 1 )
    {
      v5 = v4;
      *(_QWORD *)(a2 + 8200) = uu_tail::chunks::LinesChunk::count_lines(a2);
      *(_OWORD *)(a1 + 8) = v5;
    }
    else
    {
      *(_QWORD *)(a2 + 8200) = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    result = 0LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}