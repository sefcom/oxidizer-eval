__int64 __fastcall uu_numfmt::parse_unit_size_suffix(const char *a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // rax
  int v7; // [rsp+0h] [rbp-28h] BYREF
  int v8; // [rsp+4h] [rbp-24h] BYREF
  const char *v9; // [rsp+8h] [rbp-20h] BYREF
  const char *v10; // [rsp+10h] [rbp-18h]

  if ( !a2 )
    return 1LL;
  v9 = a1;
  v10 = &a1[a2];
  if ( (core::str::validations::next_code_point(&v9) & 1) == 0 )
    core::option::unwrap_failed(&off_102828);
  v7 = v2;
  v9 = "K";
  v10 = aGroupingCannot;
  if ( (((__int64 (__fastcall *)(const char **, int *))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position)(
          &v9,
          &v7) & 1) != 0 )
  {
    if ( a2 == 2 )
    {
      v4 = v3;
      v8 = 0;
      v5 = core::char::methods::encode_utf8_raw(105LL, &v8);
      if ( (unsigned __int8)core::slice::<impl [T]>::ends_with(a1, 2LL, v5, 1LL) )
      {
        if ( (unsigned __int64)(v4 + 1) > 9 )
          core::panicking::panic_bounds_check(v4 + 1, 10LL, &off_102858);
        return 1LL;
      }
    }
    else if ( a2 == 1 )
    {
      if ( (unsigned __int64)(v3 + 1) >= 0xA )
        core::panicking::panic_bounds_check(v3 + 1, 10LL, &off_102840);
      return 1LL;
    }
  }
  return 0LL;
}