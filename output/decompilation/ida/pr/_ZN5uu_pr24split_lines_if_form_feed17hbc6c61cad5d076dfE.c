__int64 __fastcall uu_pr::split_lines_if_form_feed(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v3; // [rsp+0h] [rbp-20h] BYREF
  __int64 v4; // [rsp+10h] [rbp-10h]

  if ( __OFSUB__(0LL, *a2) )
    return uu_pr::split_lines_if_form_feed::{{closure}}(a1, a2[1]);
  uu_pr::split_lines_if_form_feed::{{closure}}(&v3);
  result = v4;
  *(_OWORD *)a1 = v3;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}