__int64 __fastcall just::function::datetime_utc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v7; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v8; // [rsp+18h] [rbp-A0h]
  __int64 v9; // [rsp+20h] [rbp-98h]
  char v10; // [rsp+28h] [rbp-90h]
  _BYTE v11[12]; // [rsp+34h] [rbp-84h] BYREF
  _BYTE v12[120]; // [rsp+40h] [rbp-78h] BYREF

  chrono::offset::utc::Utc::now(v11);
  *(_QWORD *)&v7 = a3;
  *((_QWORD *)&v7 + 1) = a4;
  v8 = 8LL;
  v9 = 0LL;
  v10 = 0;
  chrono::datetime::DateTime<Tz>::format_with_items(v12, v11, &v7);
  <T as alloc::string::SpecToString>::spec_to_string(&v7, v12);
  *(_QWORD *)(a1 + 24) = v8;
  *(_OWORD *)(a1 + 8) = v7;
  *(_QWORD *)a1 = 0LL;
  core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(v12);
  return a1;
}