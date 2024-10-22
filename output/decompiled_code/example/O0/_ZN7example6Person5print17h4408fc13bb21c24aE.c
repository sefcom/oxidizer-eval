__int64 __fastcall example::Person::print(__int64 a1)
{
  _BYTE v2[48]; // [rsp+8h] [rbp-90h] BYREF
  _QWORD v3[12]; // [rsp+38h] [rbp-60h] BYREF

  v3[8] = a1;
  v3[9] = <alloc::string::String as core::fmt::Display>::fmt;
  v3[4] = a1;
  v3[5] = <alloc::string::String as core::fmt::Display>::fmt;
  v3[10] = a1 + 24;
  v3[11] = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
  v3[6] = a1 + 24;
  v3[7] = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
  v3[0] = a1;
  v3[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v3[2] = a1 + 24;
  v3[3] = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
  core::fmt::Arguments::new_v1(v2, &off_59290, v3);
  return std::io::stdio::_print(v2);
}
