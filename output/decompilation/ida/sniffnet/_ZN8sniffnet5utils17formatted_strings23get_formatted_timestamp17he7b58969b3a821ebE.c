__int64 __fastcall sniffnet::utils::formatted_strings::get_formatted_timestamp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int128 v5; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v6[4]; // [rsp+18h] [rbp-A0h] BYREF
  char v7; // [rsp+38h] [rbp-80h]
  __int128 v8; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v9[104]; // [rsp+50h] [rbp-68h] BYREF

  if ( (sniffnet::utils::types::timestamp::Timestamp::to_usecs(a2, a3) & 1) == 0 )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, asc_497721, 1LL);
  chrono::offset::TimeZone::timestamp_micros(v9, v3);
  chrono::offset::LocalResult<T>::latest(&v5, v9);
  if ( !(_DWORD)v5 )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, asc_497721, 1LL);
  v8 = v5;
  v6[0] = aYMDHMS;
  v6[1] = 17LL;
  v6[2] = 8LL;
  v6[3] = 0LL;
  v7 = 0;
  chrono::datetime::DateTime<Tz>::format_with_items(v9, &v8, v6);
  <T as alloc::string::SpecToString>::spec_to_string(a1, v9);
  return core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(v9);
}