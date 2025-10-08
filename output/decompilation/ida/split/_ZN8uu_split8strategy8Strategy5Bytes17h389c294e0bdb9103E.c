_QWORD *__fastcall uu_split::strategy::Strategy::Bytes(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  result = a1;
  a1[1] = a2;
  *a1 = 7LL;
  return result;
}