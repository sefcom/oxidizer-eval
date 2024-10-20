__int64 __fastcall uu_join::Repr<Sep>::new(__int64 a1, char a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  result = a1;
  *(_BYTE *)(a1 + 40) = a2;
  *(_QWORD *)a1 = *a3;
  *(_QWORD *)(a1 + 8) = a3[1];
  *(_QWORD *)(a1 + 16) = a3[2];
  *(_QWORD *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 32) = a5;
  return result;
}
