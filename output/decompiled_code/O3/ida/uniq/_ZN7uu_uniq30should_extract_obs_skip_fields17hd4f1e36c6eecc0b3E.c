char __fastcall uu_uniq::should_extract_obs_skip_fields(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // cl
  char result; // al
  _DWORD v10[9]; // [rsp+0h] [rbp-24h] BYREF

  v10[0] = 0;
  v6 = core::char::methods::encode_utf8_raw(45LL, v10);
  if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, v6, v7) )
    return 0;
  v8 = core::slice::<impl [T]>::starts_with(a1, a2, asc_1F1ED, 2LL);
  result = 0;
  if ( !v8 && !a3 && !a4 )
  {
    if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, aS, 2LL)
      && !(unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, asc_1F1E9, 2LL) )
    {
      return core::slice::<impl [T]>::starts_with(a1, a2, aW, 2LL) ^ 1;
    }
    return 0;
  }
  return result;
}
