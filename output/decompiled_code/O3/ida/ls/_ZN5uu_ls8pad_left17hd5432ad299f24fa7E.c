__int64 __fastcall uu_ls::pad_left(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[2]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v8[4]; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v9[6]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v10[6]; // [rsp+60h] [rbp-38h] BYREF
  char v11; // [rsp+90h] [rbp-8h]

  v7[0] = a2;
  v7[1] = a3;
  v8[0] = v7;
  v8[1] = <&T as core::fmt::Display>::fmt;
  v8[2] = a4;
  v8[3] = 0LL;
  v10[0] = 2LL;
  v10[2] = 1LL;
  v10[3] = 1LL;
  v10[4] = 0LL;
  v10[5] = 32LL;
  v11 = 1;
  v9[0] = &xmmword_23D10;
  v9[1] = 1LL;
  v9[4] = v10;
  v9[5] = 1LL;
  v9[2] = v8;
  v9[3] = 2LL;
  return core::option::Option<T>::map_or_else(a1, v9, a3, a4, a5, a6);
}
