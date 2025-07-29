__int64 __fastcall flealib::commandprocessor::CommandProcessor::get_temp_dir_for_screenshot(__int64 a1)
{
  const char *v2; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v3; // [rsp+8h] [rbp-E0h]
  __int128 *v4; // [rsp+10h] [rbp-D8h]
  __int64 v5; // [rsp+18h] [rbp-D0h]
  __int64 v6; // [rsp+20h] [rbp-C8h]
  __int128 v7; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-A8h]
  __int128 v9; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+58h] [rbp-90h]
  _BYTE v11[12]; // [rsp+64h] [rbp-84h] BYREF
  __int128 v12; // [rsp+70h] [rbp-78h] BYREF
  __int64 v13; // [rsp+80h] [rbp-68h]

  chrono::offset::utc::Utc::now(v11);
  v2 = aYMDHMS;
  v3 = 17LL;
  v4 = (_OWORD *)&byte_8;
  v5 = 0LL;
  LOBYTE(v6) = 0;
  ((void (__fastcall *)(__int128 *, _BYTE *, const char **))chrono::datetime::DateTime<Tz>::format_with_items)(
    &v12,
    v11,
    &v2);
  *(_QWORD *)&v7 = &v12;
  *((_QWORD *)&v7 + 1) = <chrono::format::formatting::DelayedFormat<I> as core::fmt::Display>::fmt;
  v2 = (const char *)&off_7085E8;
  v3 = 2LL;
  v6 = 0LL;
  v4 = &v7;
  v5 = 1LL;
  core::option::Option<T>::map_or_else(&v9, &v2);
  core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v12);
  v7 = v9;
  v8 = v10;
  std::env::temp_dir(&v2);
  v13 = v8;
  v12 = v7;
  std::path::Path::join(a1, v3, v4, &v12);
  return core::ptr::drop_in_place<std::path::PathBuf>(&v2);
}