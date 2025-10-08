unsigned __int64 __fastcall zoxide::db::stream::StreamOptions::new(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  bool v3; // cf
  unsigned __int64 v4; // rsi
  unsigned __int64 result; // rax

  v2 = 0LL;
  *(_QWORD *)(a1 + 72) = a2;
  v3 = a2 < 0x76A700;
  v4 = a2 - 7776000;
  if ( !v3 )
    v2 = v4;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 8LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 8LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_WORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 80) = v2;
  result = 0x8000000000000000LL;
  *(_QWORD *)(a1 + 48) = 0x8000000000000000LL;
  return result;
}