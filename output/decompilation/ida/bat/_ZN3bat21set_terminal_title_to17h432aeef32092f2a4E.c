__int64 __fastcall bat::set_terminal_title_to(__int64 a1)
{
  __int64 v1; // rax
  _QWORD v3[2]; // [rsp+8h] [rbp-90h] BYREF
  _QWORD v4[2]; // [rsp+18h] [rbp-80h] BYREF
  _QWORD v5[6]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v6[8]; // [rsp+58h] [rbp-40h] BYREF

  v3[0] = a0_1;
  v3[1] = 4LL;
  v4[0] = asc_89078;
  v4[1] = 1LL;
  v5[0] = v3;
  v5[1] = <&T as core::fmt::Display>::fmt;
  v5[2] = a1;
  v5[3] = <alloc::string::String as core::fmt::Display>::fmt;
  v5[4] = v4;
  v5[5] = <&T as core::fmt::Display>::fmt;
  v6[0] = &unk_89048;
  v6[1] = 3LL;
  v6[4] = 0LL;
  v6[2] = v5;
  v6[3] = 3LL;
  std::io::stdio::_print(v6);
  v5[0] = std::io::stdio::stdout();
  v1 = <std::io::stdio::Stdout as std::io::Write>::flush(v5);
  core::result::Result<T,E>::unwrap(v1);
  return core::ptr::drop_in_place<alloc::string::String>(a1);
}