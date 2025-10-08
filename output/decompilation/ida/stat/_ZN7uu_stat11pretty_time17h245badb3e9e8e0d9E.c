__int64 __fastcall uu_stat::pretty_time(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // [rsp+0h] [rbp-B8h] BYREF
  int v8; // [rsp+8h] [rbp-B0h]
  _QWORD v9[4]; // [rsp+10h] [rbp-A8h] BYREF
  char v10; // [rsp+30h] [rbp-88h]
  __int64 v11; // [rsp+38h] [rbp-80h] BYREF
  int v12; // [rsp+40h] [rbp-78h]
  _BYTE v13[40]; // [rsp+90h] [rbp-28h] BYREF

  chrono::datetime::DateTime<chrono::offset::utc::Utc>::from_timestamp(&v11, a2, a3);
  if ( (_DWORD)v11 )
  {
    v8 = v12;
    v7 = v11;
  }
  else
  {
    <chrono::datetime::DateTime<chrono::offset::utc::Utc> as core::default::Default>::default(&v7);
  }
  <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<chrono::datetime::DateTime<chrono::offset::utc::Utc>>>::from(
    v13,
    &v7);
  v9[0] = aYMDHMSFZ;
  v9[1] = 23LL;
  v9[2] = 8LL;
  v9[3] = 0LL;
  v10 = 0;
  ((void (__fastcall *)(__int64 *, _BYTE *, _QWORD *, __int64, __int64, __int64, __int64, int))chrono::datetime::DateTime<Tz>::format_with_items)(
    &v11,
    v13,
    v9,
    v3,
    v4,
    v5,
    v7,
    v8);
  <T as alloc::string::SpecToString>::spec_to_string(a1, &v11);
  return core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v11);
}