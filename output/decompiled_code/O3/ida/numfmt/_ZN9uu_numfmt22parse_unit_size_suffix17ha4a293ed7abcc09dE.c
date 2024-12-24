__int64 __fastcall uu_numfmt::parse_unit_size_suffix(char *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v10; // rdx
  int v11; // [rsp+0h] [rbp-28h] BYREF
  int v12; // [rsp+4h] [rbp-24h] BYREF
  char *v13; // [rsp+8h] [rbp-20h] BYREF
  char *v14; // [rsp+10h] [rbp-18h]

  if ( a2 )
  {
    v13 = a1;
    v14 = &a1[a2];
    if ( !(unsigned int)core::str::validations::next_code_point(&v13) )
      core::option::unwrap_failed(&off_136368);
    v11 = v2;
    v13 = (char *)&unk_225D0;
    v14 = (char *)&unk_225E8;
    if ( ((__int64 (__fastcall *)(char **, int *, __int64, __int64, __int64, __int64))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position)(
           &v13,
           &v11,
           v2,
           v3,
           v4,
           v5) != 1 )
      return 0LL;
    if ( a2 == 1 )
    {
      v10 = v6 + 1;
      if ( v10 >= 0xA )
        core::panicking::panic_bounds_check(v10, 10LL, &off_136380);
      return 1LL;
    }
    if ( a2 != 2 )
      return 0LL;
    v7 = v6;
    v12 = 0;
    v8 = core::char::methods::encode_utf8_raw(&v12);
    if ( !(unsigned __int8)core::slice::<impl [T]>::ends_with(a1, 2LL, v8, 1LL) )
      return 0LL;
    if ( (unsigned __int64)(v7 + 1) > 9 )
      core::panicking::panic_bounds_check(v7 + 1, 10LL, &off_136398);
  }
  return 1LL;
}
