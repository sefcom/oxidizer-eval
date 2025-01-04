__int64 __fastcall uu_cut::list_to_ranges(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  __int128 v6; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h] BYREF
  __int128 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a4 )
  {
    uucore::features::ranges::Range::from_list(&v8);
    if ( v8 )
    {
      *(_QWORD *)(a1 + 24) = v10;
      *(_OWORD *)(a1 + 8) = v9;
      v4 = 1LL;
    }
    else
    {
      v7 = v10;
      v6 = v9;
      ((void (__fastcall *)(__int64, __int128 *))uu_cut::list_to_ranges::{{closure}})(a1 + 8, &v6);
      v4 = 0LL;
    }
    *(_QWORD *)a1 = v4;
  }
  else
  {
    uucore::features::ranges::Range::from_list(a1);
  }
  return a1;
}
