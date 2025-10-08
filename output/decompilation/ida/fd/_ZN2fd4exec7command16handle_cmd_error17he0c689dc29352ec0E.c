__int64 __fastcall fd::exec::command::handle_cmd_error(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 program; // rax
  __int64 v5; // rdx
  _QWORD v7[2]; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v8; // [rsp+18h] [rbp-90h] BYREF
  _QWORD v9[3]; // [rsp+20h] [rbp-88h] BYREF
  char **v10; // [rsp+38h] [rbp-70h] BYREF
  __int64 v11; // [rsp+40h] [rbp-68h]
  _QWORD *v12; // [rsp+48h] [rbp-60h]
  __int64 v13; // [rsp+50h] [rbp-58h]
  __int64 v14; // [rsp+58h] [rbp-50h]
  _BYTE v15[24]; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v16[40]; // [rsp+80h] [rbp-28h] BYREF

  if ( a1 && !(unsigned __int8)std::io::error::Error::kind(a2) )
  {
    v8 = a2;
    program = std::process::Command::get_program(a1);
    alloc::string::String::from_utf8_lossy(v9, program);
    v7[0] = v9;
    v7[1] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    v10 = &off_402190;
    v11 = 1LL;
    v14 = 0LL;
    v12 = v7;
    v13 = 1LL;
    core::option::Option<T>::map_or_else(v15, 0LL, v5, &v10);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v9);
    fd::error::print_error((__int64)v15);
    v3 = &v8;
  }
  else
  {
    v7[0] = a2;
    v9[0] = v7;
    v9[1] = <std::io::error::Error as core::fmt::Display>::fmt;
    v10 = &off_4021A0;
    v11 = 1LL;
    v14 = 0LL;
    v12 = v9;
    v13 = 1LL;
    core::option::Option<T>::map_or_else(v16, 0LL, a3, &v10);
    fd::error::print_error((__int64)v16);
    v3 = v7;
  }
  return core::ptr::drop_in_place<std::io::error::Error>(v3);
}