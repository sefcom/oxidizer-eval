_QWORD *__fastcall just::function::blake3(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v5[48]; // [rsp+8h] [rbp-30h] BYREF

  blake3::hash(v5, a3, a4);
  <T as alloc::string::SpecToString>::spec_to_string(a1 + 1, v5);
  *a1 = 0LL;
  return a1;
}