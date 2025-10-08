char __fastcall uu_uniq::should_extract_obs_skip_fields(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  _DWORD v9[9]; // [rsp+0h] [rbp-24h] BYREF

  v9[0] = 0;
  v6 = core::char::methods::encode_utf8_raw(45LL, v9);
  if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, v6, v7)
    || (((unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, asc_1B1D1, 2LL) | (unsigned __int8)(a4 | a3)) & 1) != 0
    || (unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, aS, 2LL)
    || (unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, asc_1B1CD, 2LL) )
  {
    return 0;
  }
  else
  {
    return core::slice::<impl [T]>::starts_with(a1, a2, aW, 2LL) ^ 1;
  }
}