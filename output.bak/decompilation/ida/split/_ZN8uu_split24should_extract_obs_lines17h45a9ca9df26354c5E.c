char __fastcall uu_split::should_extract_obs_lines(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v6; // rax
  char v7; // cl
  char result; // al
  _DWORD v9[9]; // [rsp+0h] [rbp-24h] BYREF

  v9[0] = 0;
  v6 = core::char::methods::encode_utf8_raw(v9);
  if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, v6, 1LL) )
    return 0;
  v7 = core::slice::<impl [T]>::starts_with(a1, a2, asc_21149, 2LL);
  result = 0;
  if ( !v7 && !a3 && !a4 )
  {
    if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, aA, 2LL)
      && !(unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, aB, 2LL)
      && !(unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, aC, 2LL)
      && !(unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, asc_21151, 2LL)
      && !(unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, aN, 2LL) )
    {
      return core::slice::<impl [T]>::starts_with(a1, a2, aT, 2LL) ^ 1;
    }
    return 0;
  }
  return result;
}
