__int64 __fastcall uu_more::Pager::new(__int64 a1, __int16 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // r10
  bool v8; // cf
  __int16 v9; // si
  __int16 v10; // r9

  result = *(_QWORD *)(a3 + 16);
  v7 = *(_QWORD *)(a6 + 24);
  v8 = a2 == 0;
  v9 = a2 - 1;
  if ( v8 )
    v9 = 0;
  v10 = *(_WORD *)(a6 + 38);
  *(_QWORD *)(a1 + 24) = v7;
  *(_WORD *)(a1 + 64) = v9;
  *(_OWORD *)a1 = *(_OWORD *)a3;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 40) = a5;
  *(_QWORD *)(a1 + 48) = result;
  *(_WORD *)(a1 + 66) = v10;
  *(_QWORD *)(a1 + 56) = 0LL;
  return result;
}
