__int64 __fastcall uu_cut::list_to_ranges(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  __int128 *v5; // r14
  __int128 v7; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+10h] [rbp-58h]
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]
  _BYTE v12[40]; // [rsp+40h] [rbp-28h] BYREF

  if ( a4 )
  {
    uucore::features::ranges::Range::from_list(&v9);
    v4 = 1LL;
    v5 = &v10;
    if ( !v9 )
    {
      v8 = v11;
      v7 = v10;
      v5 = (__int128 *)v12;
      ((void (__fastcall *)(_BYTE *, __int128 *))uu_cut::list_to_ranges::{{closure}})(v12, &v7);
      v4 = 0LL;
    }
    *(_QWORD *)(a1 + 24) = *((_QWORD *)v5 + 2);
    *(_OWORD *)(a1 + 8) = *v5;
    *(_QWORD *)a1 = v4;
  }
  else
  {
    uucore::features::ranges::Range::from_list(a1);
  }
  return a1;
}
