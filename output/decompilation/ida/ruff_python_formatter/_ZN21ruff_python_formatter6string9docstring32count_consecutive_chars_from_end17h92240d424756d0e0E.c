__int64 __fastcall ruff_python_formatter::string::docstring::count_consecutive_chars_from_end(__int64 a1, __int64 a2)
{
  int v3; // [rsp+4h] [rbp-24h] BYREF
  _QWORD v4[3]; // [rsp+8h] [rbp-20h] BYREF
  char v5; // [rsp+20h] [rbp-8h]

  v3 = 92;
  v4[0] = a1;
  v4[1] = a1 + a2;
  v5 = 0;
  v4[2] = &v3;
  return <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(v4);
}