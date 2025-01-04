__int64 __fastcall uu_tail::chunks::LinesChunk::fill(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int128 v7; // [rsp+10h] [rbp-28h]

  uu_tail::chunks::BytesChunk::fill(&v6, a2, a3);
  if ( v6 )
  {
    *(_OWORD *)(a1 + 8) = v7;
    v3 = 1LL;
  }
  else
  {
    if ( (_QWORD)v7 )
    {
      v4 = *((_QWORD *)&v7 + 1);
      *(_QWORD *)(a2 + 8200) = uu_tail::chunks::LinesChunk::count_lines(a2);
      *(_QWORD *)(a1 + 8) = 1LL;
      *(_QWORD *)(a1 + 16) = v4;
    }
    else
    {
      *(_QWORD *)(a2 + 8200) = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    v3 = 0LL;
  }
  *(_QWORD *)a1 = v3;
  return a1;
}
