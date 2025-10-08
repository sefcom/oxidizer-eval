char __fastcall uu_split::should_extract_obs_lines(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  _DWORD v9[9]; // [rsp+0h] [rbp-24h] BYREF

  v9[0] = 0;
  v6 = core::char::methods::encode_utf8_raw(45LL, v9);
  if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, v6, v7)
    || (((unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, asc_1CB05, 2LL) | (unsigned __int8)(a4 | a3)) & 1) != 0
    || (unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, aA, 2LL)
    || (unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, aB, 2LL)
    || (unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, aC_0, 2LL)
    || (unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, asc_1CB0D, 2LL)
    || (unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, aN, 2LL) )
  {
    return 0;
  }
  else
  {
    return core::slice::<impl [T]>::starts_with(a1, a2, aT, 2LL) ^ 1;
  }
}