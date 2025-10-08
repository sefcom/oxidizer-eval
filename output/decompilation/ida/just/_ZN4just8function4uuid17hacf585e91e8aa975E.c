_QWORD *__fastcall just::function::uuid(_QWORD *a1)
{
  _BYTE v2[32]; // [rsp+8h] [rbp-20h] BYREF

  uuid::v4::<impl uuid::Uuid>::new_v4(v2);
  <T as alloc::string::SpecToString>::spec_to_string(a1 + 1, v2);
  *a1 = 0LL;
  return a1;
}