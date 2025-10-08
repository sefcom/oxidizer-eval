__int64 __fastcall uu_users::get_long_usage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  __int128 v8; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = *(_OWORD *)&uucore::features::utmpx::ut::DEFAULT_FILE;
  v9[0] = &off_DC430;
  v9[1] = 2LL;
  v9[4] = 0LL;
  v9[2] = &v7;
  v9[3] = 1LL;
  ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int64, __int64, __int128 *, __int64 (__fastcall *)()))core::option::Option<T>::map_or_else)(
    a1,
    v9,
    a3,
    a4,
    a5,
    a6,
    &v8,
    <&T as core::fmt::Display>::fmt);
  return a1;
}