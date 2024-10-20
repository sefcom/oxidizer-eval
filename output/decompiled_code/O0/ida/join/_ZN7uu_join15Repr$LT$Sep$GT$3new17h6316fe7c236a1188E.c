__int64 __fastcall uu_join::Repr<Sep>::new(__int64 a1, char a2, char a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  char v8; // dl
  __int64 result; // rax

  v8 = a2;
  result = a1;
  *(_BYTE *)(a1 + 40) = v8;
  *(_BYTE *)(a1 + 41) = a3;
  *(_QWORD *)a1 = *a4;
  *(_QWORD *)(a1 + 8) = a4[1];
  *(_QWORD *)(a1 + 16) = a4[2];
  *(_QWORD *)(a1 + 24) = a5;
  *(_QWORD *)(a1 + 32) = a6;
  return result;
}
