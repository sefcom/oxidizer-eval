__int64 __fastcall uu_touch::filetime_to_datetime(_DWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+4h] [rbp-24h] BYREF
  int v3; // [rsp+Ch] [rbp-1Ch]
  __int64 v4; // [rsp+10h] [rbp-18h] BYREF
  int v5; // [rsp+18h] [rbp-10h]

  result = chrono::datetime::DateTime<chrono::offset::utc::Utc>::from_timestamp(&v2);
  if ( (_DWORD)v2 )
  {
    v5 = v3;
    v4 = v2;
    return <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<chrono::datetime::DateTime<chrono::offset::utc::Utc>>>::from(
             a1,
             &v4);
  }
  else
  {
    *a1 = 0;
  }
  return result;
}
