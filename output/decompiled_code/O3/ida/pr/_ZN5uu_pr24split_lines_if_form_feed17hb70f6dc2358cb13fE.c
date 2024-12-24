        __int64 a6)
{
  __int64 result; // rax
  __int128 v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h]
  __int128 v9; // [rsp+18h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( *a2 == 0x8000000000000000LL )
    return uu_pr::split_lines_if_form_feed::{{closure}}(a1, a2[1]);
  v8 = a2[2];
  v7 = *(_OWORD *)a2;
  ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))uu_pr::split_lines_if_form_feed::{{closure}})(
    &v9,
    &v7,
    a3,
    a4,
    a5,
    a6);
  result = v10;
  *(_OWORD *)a1 = v9;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
