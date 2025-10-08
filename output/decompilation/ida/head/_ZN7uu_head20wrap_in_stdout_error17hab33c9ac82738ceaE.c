__int64 __fastcall uu_head::wrap_in_stdout_error(__int64 a1)
{
  unsigned __int8 v1; // bl
  __int64 v2; // rbx
  __int64 v4; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v5[2]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v6[6]; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v7[32]; // [rsp+48h] [rbp-20h] BYREF

  v4 = a1;
  v1 = std::io::error::Error::kind(a1);
  v5[0] = &v4;
  v5[1] = <std::io::error::Error as core::fmt::Display>::fmt;
  v6[0] = &off_F7CD8;
  v6[1] = 1LL;
  v6[4] = 0LL;
  v6[2] = v5;
  v6[3] = 1LL;
  core::option::Option<T>::map_or_else(v7, v6);
  v2 = std::io::error::Error::new(v1, v7);
  core::ptr::drop_in_place<std::io::error::Error>(&v4);
  return v2;
}