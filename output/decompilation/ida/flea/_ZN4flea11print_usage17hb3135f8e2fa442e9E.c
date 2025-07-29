__int64 __fastcall flea::print_usage(__int64 a1, __int64 a2, __int64 a3)
{
  char **v5; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v6; // [rsp+10h] [rbp-A8h]
  _QWORD *v7; // [rsp+18h] [rbp-A0h]
  __int64 v8; // [rsp+20h] [rbp-98h]
  __int64 v9; // [rsp+28h] [rbp-90h]
  _QWORD v10[3]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v11; // [rsp+50h] [rbp-68h] BYREF
  __int64 v12; // [rsp+60h] [rbp-58h]
  _QWORD v13[2]; // [rsp+70h] [rbp-48h] BYREF
  _QWORD v14[2]; // [rsp+80h] [rbp-38h] BYREF
  __int128 v15; // [rsp+90h] [rbp-28h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-18h]

  v13[0] = a1;
  v13[1] = a2;
  v10[0] = v13;
  v10[1] = <&T as core::fmt::Display>::fmt;
  v5 = &off_6F5918;
  v6 = 2LL;
  v9 = 0LL;
  v7 = v10;
  v8 = 1LL;
  core::option::Option<T>::map_or_else(&v15, &v5);
  v11 = v15;
  v12 = v16;
  getopts::Options::usage(v10, a3, *((_QWORD *)&v15 + 1));
  v14[0] = v10;
  v14[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v5 = (char **)&unk_6F5938;
  v6 = 2LL;
  v9 = 0LL;
  v7 = v14;
  v8 = 1LL;
  std::io::stdio::_print(&v5);
  core::ptr::drop_in_place<alloc::string::String>(v10);
  core::ptr::drop_in_place<alloc::string::String>(&v11);
  return core::ptr::drop_in_place<getopts::Options>(a3);
}