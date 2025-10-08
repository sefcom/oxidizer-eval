__int64 *__fastcall uu_uptime::process_utmpx(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // dl
  __int64 *result; // rax
  __int64 v5; // [rsp+0h] [rbp-378h]
  __int64 v6; // [rsp+8h] [rbp-370h]
  __int64 v7; // [rsp+10h] [rbp-368h] BYREF
  char v8; // [rsp+18h] [rbp-360h]
  __int64 v9; // [rsp+20h] [rbp-358h]
  __int64 *v10; // [rsp+28h] [rbp-350h]
  _BYTE v11[16]; // [rsp+34h] [rbp-344h] BYREF
  int v12; // [rsp+44h] [rbp-334h] BYREF
  _BYTE src[384]; // [rsp+48h] [rbp-330h] BYREF
  _WORD dest[216]; // [rsp+1C8h] [rbp-1B0h] BYREF

  v10 = a1;
  if ( a2 )
    v2 = uucore::features::utmpx::Utmpx::iter_all_records_from(a2);
  else
    v2 = uucore::features::utmpx::Utmpx::iter_all_records();
  v7 = v2;
  v8 = v3 & 1;
  v5 = 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    <uucore::features::utmpx::UtmpxIter as core::iter::traits::iterator::Iterator>::next(&v12, &v7);
    if ( v12 != 1 )
      break;
    memcpy(dest, src, 0x180uLL);
    if ( dest[0] == 2 )
    {
      uucore::features::utmpx::Utmpx::login_time(v11, dest);
      if ( time::offset_date_time::OffsetDateTime::unix_timestamp(v11) > 0 )
      {
        v9 = time::offset_date_time::OffsetDateTime::unix_timestamp(v11);
        v5 = 1LL;
      }
    }
    else if ( dest[0] == 7 )
    {
      ++v6;
    }
  }
  core::ptr::drop_in_place<uucore::features::utmpx::UtmpxIter>(&v7);
  result = v10;
  *v10 = v5;
  result[1] = v9;
  result[2] = v6;
  return result;
}