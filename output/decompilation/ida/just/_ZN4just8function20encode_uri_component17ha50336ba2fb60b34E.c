_QWORD *__fastcall just::function::encode_uri_component(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v5[0] = a3;
  v5[1] = a4;
  v5[2] = &just::function::encode_uri_component::PERCENT_ENCODE;
  <T as alloc::string::SpecToString>::spec_to_string(a1 + 1, v5);
  *a1 = 0LL;
  return a1;
}