__int64 __fastcall uu_numfmt::parse_unit_size_suffix(char *a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned __int64 v7; // rdx
  int v8; // [rsp+0h] [rbp-28h] BYREF
  int v9; // [rsp+4h] [rbp-24h] BYREF
  void *v10; // [rsp+8h] [rbp-20h] BYREF
  char *v11; // [rsp+10h] [rbp-18h]

  if ( !a2 )
    return 1LL;
  v10 = a1;
  v11 = &a1[a2];
  if ( !(unsigned int)core::str::validations::next_code_point(&v10) )
    core::option::unwrap_failed(&off_1358A8);
  v8 = v2;
  v10 = &unk_22450;
  v11 = (char *)&unk_22468;
  if ( ((__int64 (__fastcall *)(void **, int *))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position)(
         &v10,
         &v8) != 1 )
    return 0LL;
  if ( a2 == 1 )
  {
    v7 = v3 + 1;
    if ( v7 >= 0xA )
      core::panicking::panic_bounds_check(v7, 10LL, &off_1358C0);
    return 1LL;
  }
  if ( a2 != 2 )
    return 0LL;
  v4 = v3;
  v9 = 0;
  v5 = core::char::methods::encode_utf8_raw(&v9);
  if ( !(unsigned __int8)core::slice::<impl [T]>::ends_with(a1, 2LL, v5, 1LL) )
    return 0LL;
  if ( (unsigned __int64)(v4 + 1) > 9 )
    core::panicking::panic_bounds_check(v4 + 1, 10LL, &off_1358D8);
  return 1LL;
}
