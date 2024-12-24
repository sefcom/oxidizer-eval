__int64 __fastcall uu_cut::list_to_ranges(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int128 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h]
  __int64 v12; // [rsp+18h] [rbp-30h] BYREF
  __int128 v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  if ( a4 )
  {
    uucore::features::ranges::Range::from_list(&v12);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 24) = v14;
      *(_OWORD *)(a1 + 8) = v13;
      v8 = 1LL;
    }
    else
    {
      v11 = v14;
      v10 = v13;
      ((void (__fastcall *)(__int64, __int128 *, __int64, __int64, __int64, __int64))uu_cut::list_to_ranges::{{closure}})(
        a1 + 8,
        &v10,
        v4,
        v5,
        v6,
        v7);
      v8 = 0LL;
    }
    *(_QWORD *)a1 = v8;
  }
  else
  {
    uucore::features::ranges::Range::from_list(a1);
  }
  return a1;
}
