__int64 __fastcall example::Person::print(__int64 a1)
{
  _QWORD v2[4]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v3[6]; // [rsp+28h] [rbp-30h] BYREF

  v2[0] = a1;
  v2[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v2[2] = a1 + 24;
  v2[3] = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
  v3[0] = &off_56850;
  v3[1] = 3LL;
  v3[4] = 0LL;
  v3[2] = v2;
  v3[3] = 2LL;
  return std::io::stdio::_print(v3);
}
