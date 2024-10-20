_QWORD *__fastcall uu_nl::Stats::new(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  result = a1;
  *a1 = 1LL;
  a1[1] = a2;
  a1[2] = 0LL;
  return result;
}
