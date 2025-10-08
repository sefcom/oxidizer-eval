__int64 sniffnet::utils::formatted_strings::print_cli_welcome_message()
{
  _QWORD v1[2]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v2[2]; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v3[6]; // [rsp+28h] [rbp-30h] BYREF

  v1[0] = a141;
  v1[1] = 5LL;
  v2[0] = v1;
  v2[1] = <&T as core::fmt::Display>::fmt;
  v3[0] = &off_2E010B8;
  v3[1] = 2LL;
  v3[4] = 0LL;
  v3[2] = v2;
  v3[3] = 1LL;
  return std::io::stdio::_print(v3);
}