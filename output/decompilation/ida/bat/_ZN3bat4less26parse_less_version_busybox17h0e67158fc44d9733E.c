__int64 __fastcall bat::less::parse_less_version_busybox(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v3[8]; // [rsp+0h] [rbp-18h] BYREF
  __int64 v4; // [rsp+8h] [rbp-10h]
  __int64 v5; // [rsp+10h] [rbp-8h]

  core::str::converts::from_utf8(v3, a1, a2);
  result = 2LL;
  if ( (v3[0] & 1) == 0 )
    return 2LL - (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(aBusybox, 8LL, v4, v5);
  return result;
}