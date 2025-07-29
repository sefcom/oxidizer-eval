__int64 __fastcall backdoorautomater::sanitizer::sanitize_service(__int64 a1, __int64 a2)
{
  _QWORD v3[4]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v4[3]; // [rsp+28h] [rbp-40h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h]

  regex::regex::string::Regex::new(v4, aAZaZ09, 14LL);
  core::result::Result<T,E>::unwrap(v3, v4, &off_22A478);
  if ( (unsigned __int8)regex::regex::string::Regex::is_match_at(
                          v3[0],
                          v3[1],
                          *(_QWORD *)(a2 + 8),
                          *(_QWORD *)(a2 + 16)) )
  {
    v4[0] = &off_22A490;
    v4[1] = 1LL;
    v4[2] = 8LL;
    v5 = 0LL;
    core::panicking::panic_fmt(v4, &off_22A4A0);
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  return core::ptr::drop_in_place<regex::regex::string::Regex>(v3);
}