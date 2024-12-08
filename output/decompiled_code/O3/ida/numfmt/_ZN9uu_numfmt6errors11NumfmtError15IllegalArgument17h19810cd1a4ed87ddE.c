__int64 __fastcall uu_numfmt::errors::NumfmtError::IllegalArgument(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = result;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a2;
  *(_QWORD *)a1 = 1LL;
  return result;
}
