__int64 __fastcall zoxide::config::maxage(__int64 a1)
{
  _QWORD v2[2]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v3[40]; // [rsp+10h] [rbp-28h] BYREF

  std::env::var_os(v3, aZoMaxage, 10LL);
  v2[1] = 0x40C3880000000000LL;
  v2[0] = 0LL;
  return core::option::Option<T>::map_or(a1, v3, v2);
}