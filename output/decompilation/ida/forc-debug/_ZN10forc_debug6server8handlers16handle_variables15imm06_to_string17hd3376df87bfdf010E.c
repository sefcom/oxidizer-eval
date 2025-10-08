__int64 __fastcall forc_debug::server::handlers::handle_variables::imm06_to_string(__int64 a1, char a2, __int64 a3)
{
  char v4; // [rsp+7h] [rbp-41h] BYREF
  _QWORD v5[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v6[6]; // [rsp+18h] [rbp-30h] BYREF

  v4 = a2;
  v5[0] = &v4;
  v5[1] = core::fmt::num::<impl core::fmt::Debug for u8>::fmt;
  v6[0] = &off_1F8CE48;
  v6[1] = 1LL;
  v6[4] = &unk_2EB430;
  v6[5] = 1LL;
  v6[2] = v5;
  v6[3] = 1LL;
  return core::option::Option<T>::map_or_else(a1, 0LL, a3, v6);
}