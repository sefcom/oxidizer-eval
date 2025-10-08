__int64 __fastcall uu_who::platform::unix::idle_string::NOW::__init(__int64 a1)
{
  _BYTE v2[32]; // [rsp+8h] [rbp-20h] BYREF

  time::offset_date_time::OffsetDateTime::now_local(v2);
  return core::result::Result<T,E>::unwrap(a1, v2);
}