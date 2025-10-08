__int64 __fastcall uu_pinky::platform::unix::get_long_usage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v8[0] = &off_F8ED0;
  v8[1] = 2LL;
  v8[4] = 0LL;
  v8[2] = &v7;
  v8[3] = 1LL;
  ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int64, __int64, char **, __int64 (__fastcall *)()))core::option::Option<T>::map_or_else)(
    a1,
    v8,
    a3,
    a4,
    a5,
    a6,
    &uucore::features::utmpx::ut::DEFAULT_FILE,
    <&T as core::fmt::Display>::fmt);
  return a1;
}