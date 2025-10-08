__int64 __fastcall uu_pinky::platform::unix::idle_string::NOW::__init(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-18h] BYREF

  result = time::offset_date_time::OffsetDateTime::now_local(&v2);
  if ( BYTE11(v2) == 1 )
    return time::offset_date_time::OffsetDateTime::now_utc(a1);
  *a1 = v2;
  return result;
}