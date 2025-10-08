__int64 uu_uptime::uptime_since()
{
  __int64 result; // rax
  __int64 v1; // rbx
  __int64 v2; // rsi
  const char *v3; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v4; // [rsp+10h] [rbp-B8h]
  _QWORD *v5; // [rsp+18h] [rbp-B0h]
  __int64 v6; // [rsp+20h] [rbp-A8h]
  __int64 v7; // [rsp+28h] [rbp-A0h]
  _QWORD v8[2]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v9; // [rsp+48h] [rbp-80h] BYREF
  __int64 v10; // [rsp+50h] [rbp-78h]
  _BYTE v11[40]; // [rsp+A0h] [rbp-28h] BYREF

  uu_uptime::process_utmpx(&v9, 0LL);
  uucore::features::uptime::get_uptime(&v9, v9, v10);
  result = v9;
  if ( !v9 )
  {
    v1 = v10;
    chrono::offset::utc::Utc::now(&v3);
    v2 = HIDWORD(v3) - v1 + 86400LL * (int)(chrono::naive::date::NaiveDate::num_days_from_ce((unsigned int)v3) - 719163);
    chrono::offset::TimeZone::timestamp_opt(&v9, v2);
    chrono::offset::LocalResult<T>::unwrap(v11, &v9);
    v3 = "%Y-%m-%d %H:%M:%Ssrc/uu/uptime/src/uptime.rs,     couldn't get boot time: couldn't get boot time: Is a director"
         "ycouldn't get boot time: Illegal seek";
    v4 = 17LL;
    v5 = (_QWORD *)&byte_8;
    v6 = 0LL;
    LOBYTE(v7) = 0;
    chrono::datetime::DateTime<Tz>::format_with_items(&v9, v11, &v3);
    v8[0] = &v9;
    v8[1] = <chrono::format::formatting::DelayedFormat<I> as core::fmt::Display>::fmt;
    v3 = (const char *)&unk_108278;
    v4 = 2LL;
    v7 = 0LL;
    v5 = v8;
    v6 = 1LL;
    std::io::stdio::_print(&v3);
    core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v9);
    return 0LL;
  }
  return result;
}