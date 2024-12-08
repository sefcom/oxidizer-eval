__int64 __fastcall uu_pr::split_lines_if_form_feed(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v3; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+10h] [rbp-28h]
  __int128 v5; // [rsp+18h] [rbp-20h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  if ( *a2 == 0x8000000000000000LL )
    return uu_pr::split_lines_if_form_feed::{{closure}}(a1, a2[1]);
  v4 = a2[2];
  v3 = *(_OWORD *)a2;
  ((void (__fastcall *)(__int128 *, __int128 *))uu_pr::split_lines_if_form_feed::{{closure}})(&v5, &v3);
  result = v6;
  *(_OWORD *)a1 = v5;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
