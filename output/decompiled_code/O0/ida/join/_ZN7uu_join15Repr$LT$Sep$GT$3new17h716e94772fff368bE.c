__int64 __fastcall uu_join::Repr<Sep>::new(__int64 a1, char a2, const void *a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 328) = a2;
  memcpy((void *)a1, a3, 0x120uLL);
  result = a1;
  *(_QWORD *)(a1 + 304) = *a4;
  *(_QWORD *)(a1 + 312) = a4[1];
  *(_QWORD *)(a1 + 320) = a4[2];
  *(_QWORD *)(a1 + 288) = a5;
  *(_QWORD *)(a1 + 296) = a6;
  return result;
}
