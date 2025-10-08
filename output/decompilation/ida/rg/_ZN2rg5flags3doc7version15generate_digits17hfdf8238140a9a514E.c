__int64 __fastcall rg::flags::doc::version::generate_digits(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v5[2]; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v6[4]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v7[6]; // [rsp+48h] [rbp-30h] BYREF

  v4[0] = a1411;
  v4[1] = 6LL;
  v5[0] = a9802945e63;
  v5[1] = 10LL;
  v6[0] = v4;
  v6[1] = <&T as core::fmt::Display>::fmt;
  v6[2] = v5;
  v6[3] = <&T as core::fmt::Display>::fmt;
  v7[0] = &unk_3EAA88;
  v7[1] = 3LL;
  v7[4] = 0LL;
  v7[2] = v6;
  v7[3] = 2LL;
  return core::option::Option<T>::map_or_else(a1, 0LL, a3, v7);
}