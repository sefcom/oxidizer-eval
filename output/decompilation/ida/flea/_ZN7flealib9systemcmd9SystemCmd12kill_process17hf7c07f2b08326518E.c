__int64 __fastcall flealib::systemcmd::SystemCmd::kill_process(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **v5; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v6; // [rsp+8h] [rbp-A0h]
  _QWORD *v7; // [rsp+10h] [rbp-98h]
  __int64 v8; // [rsp+18h] [rbp-90h]
  __int64 v9; // [rsp+20h] [rbp-88h]
  _QWORD v10[3]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v11[8]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v12; // [rsp+50h] [rbp-58h]
  __int64 v13; // [rsp+58h] [rbp-50h]
  _QWORD v14[2]; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+70h] [rbp-38h] BYREF
  __int128 v16; // [rsp+80h] [rbp-28h] BYREF
  __int64 v17; // [rsp+90h] [rbp-18h]

  v14[0] = a3;
  v14[1] = a4;
  v10[0] = v14;
  v10[1] = <&T as core::fmt::Display>::fmt;
  v5 = &off_709140;
  v6 = 1LL;
  v9 = 0LL;
  v7 = v10;
  v8 = 1LL;
  core::option::Option<T>::map_or_else(v11, &v5);
  flealib::systemcmd::SystemCmd::execute_bash_command((__int64)v10, (__int64)&v5, v12, v13);
  v15[0] = v10;
  v15[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v5 = &off_709150;
  v6 = 1LL;
  v9 = 0LL;
  v7 = v15;
  v8 = 1LL;
  core::option::Option<T>::map_or_else(&v16, &v5);
  core::ptr::drop_in_place<alloc::string::String>(v10);
  *(_QWORD *)(a1 + 16) = v17;
  *(_OWORD *)a1 = v16;
  core::ptr::drop_in_place<alloc::string::String>(v11);
  return a1;
}