__int64 __fastcall rg::flags::defs::convert::str(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  char **v3; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+8h] [rbp-30h]
  __int64 v5; // [rsp+10h] [rbp-28h]
  __int128 v6; // [rsp+18h] [rbp-20h]

  core::str::converts::from_utf8(&v3);
  if ( (_DWORD)v3 == 1 )
  {
    v3 = &off_3EA250;
    v4 = 1LL;
    v5 = 8LL;
    v6 = 0LL;
    result = ((__int64 (__fastcall *)(char ***))anyhow::__private::format_err)(&v3);
    v1 = 0LL;
  }
  else
  {
    v1 = v4;
    result = v5;
  }
  a1[1] = result;
  *a1 = v1;
  return result;
}