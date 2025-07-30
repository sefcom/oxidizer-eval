__int64 __fastcall flealib::commandprocessor::CommandProcessor::get_temp_dir_for_screenshot(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  const char *v5; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v6; // [rsp+8h] [rbp-E0h]
  __int128 *v7; // [rsp+10h] [rbp-D8h]
  __int64 v8; // [rsp+18h] [rbp-D0h]
  __int64 v9; // [rsp+20h] [rbp-C8h]
  __int128 v10; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-A8h]
  __int128 v12; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-90h]
  _BYTE v14[12]; // [rsp+64h] [rbp-84h] BYREF
  __int128 v15; // [rsp+70h] [rbp-78h] BYREF
  __int64 v16; // [rsp+80h] [rbp-68h]

  chrono::offset::utc::Utc::now(v14);
  v5 = aYMDHMS;
  v6 = 17LL;
  v7 = (_OWORD *)&byte_8;
  v8 = 0LL;
  LOBYTE(v9) = 0;
  ((void (__fastcall *)(__int128 *, _BYTE *, const char **, __int64, __int64, __int64))chrono::datetime::DateTime<Tz>::format_with_items)(
    &v15,
    v14,
    &v5,
    v1,
    v2,
    v3);
  *(_QWORD *)&v10 = &v15;
  *((_QWORD *)&v10 + 1) = <chrono::format::formatting::DelayedFormat<I> as core::fmt::Display>::fmt;
  v5 = (const char *)&off_7085E8;
  v6 = 2LL;
  v9 = 0LL;
  v7 = &v10;
  v8 = 1LL;
  core::option::Option<T>::map_or_else(&v12, &v5);
  core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v15);
  v10 = v12;
  v11 = v13;
  std::env::temp_dir(&v5);
  v16 = v11;
  v15 = v10;
  std::path::Path::join(a1, v6, v7, &v15);
  return core::ptr::drop_in_place<std::path::PathBuf>(&v5);
}