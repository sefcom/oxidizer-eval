__int64 __fastcall uu_ls::get_inode(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v8[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v9[6]; // [rsp+18h] [rbp-30h] BYREF

  v7 = a2;
  v8[0] = &v7;
  v8[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v9[0] = &xmmword_23C10;
  v9[1] = 1LL;
  v9[4] = 0LL;
  v9[2] = v8;
  v9[3] = 1LL;
  return core::option::Option<T>::map_or_else(a1, v9, a3, a4, a5, a6);
}
