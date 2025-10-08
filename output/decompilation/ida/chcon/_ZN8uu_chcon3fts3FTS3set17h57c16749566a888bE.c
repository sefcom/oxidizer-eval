int __fastcall uu_chcon::fts::FTS::set(__int64 a1, FTS *a2, FTSENT *a3, int a4)
{
  unsigned __int64 v4; // rax

  if ( a3 )
  {
    LODWORD(v4) = fts_set(a2, a3, a4);
    if ( (_DWORD)v4 == -1 )
    {
      v4 = ((unsigned __int64)(unsigned int)*_errno_location() << 32) | 2;
      *(_DWORD *)a1 = 16;
      *(_QWORD *)(a1 + 8) = aFtsSet_1;
      *(_QWORD *)(a1 + 16) = 9LL;
      *(_QWORD *)(a1 + 24) = v4;
    }
    else
    {
      *(_DWORD *)a1 = 18;
    }
  }
  else
  {
    *(_DWORD *)a1 = 16;
    *(_QWORD *)(a1 + 8) = aFtsSet_0;
    *(_QWORD *)(a1 + 16) = 10LL;
    LODWORD(v4) = 3;
    *(_QWORD *)(a1 + 24) = 0x2500000003LL;
  }
  return v4;
}