__int64 __fastcall uu_ls::get_inode(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v4[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v5[6]; // [rsp+18h] [rbp-30h] BYREF

  v3 = a2;
  v4[0] = &v3;
  v4[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v5[0] = &unk_CF290;
  v5[1] = 1LL;
  v5[4] = 0LL;
  v5[2] = v4;
  v5[3] = 1LL;
  return core::option::Option<T>::map_or_else(a1, v5);
}