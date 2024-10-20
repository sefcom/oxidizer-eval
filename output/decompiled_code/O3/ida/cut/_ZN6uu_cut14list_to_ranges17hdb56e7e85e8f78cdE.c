__int64 __fastcall uu_cut::list_to_ranges(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int128 v4; // kr00_16
  __int64 v6; // [rsp+8h] [rbp-50h] BYREF
  __int128 v7; // [rsp+10h] [rbp-48h]
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int128 v9; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]

  if ( a4 )
  {
    uucore::features::ranges::Range::from_list(&v6);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 24) = v8;
      *(_OWORD *)(a1 + 8) = v7;
      *(_QWORD *)a1 = 1LL;
    }
    else
    {
      v4 = v7;
      uucore::features::ranges::complement(&v9, *((_QWORD *)&v7 + 1), v8);
      if ( (_QWORD)v4 )
        _rust_dealloc(*((_QWORD *)&v4 + 1), 16 * v4, 8LL);
      *(_QWORD *)(a1 + 24) = v10;
      *(_OWORD *)(a1 + 8) = v9;
      *(_QWORD *)a1 = 0LL;
    }
  }
  else
  {
    uucore::features::ranges::Range::from_list(a1);
  }
  return a1;
}
