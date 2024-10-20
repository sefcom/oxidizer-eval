__int64 __fastcall uu_od::inputoffset::InputOffset::new(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  result = a1;
  *(_BYTE *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)a1 = a4;
  *(_QWORD *)(a1 + 8) = a5;
  return result;
}
