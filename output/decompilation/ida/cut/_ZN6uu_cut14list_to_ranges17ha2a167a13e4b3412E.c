_OWORD *__fastcall uu_cut::list_to_ranges(_OWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int128 v4; // xmm0
  _OWORD v6[2]; // [rsp+0h] [rbp-28h] BYREF

  if ( a4 )
  {
    uucore::features::ranges::Range::from_list(v6);
    if ( (v6[0] & 1) != 0 )
    {
      v4 = v6[0];
      a1[1] = v6[1];
      *a1 = v4;
    }
    else
    {
      uu_cut::list_to_ranges::{{closure}}((char *)a1 + 8, (char *)v6 + 8);
      *(_QWORD *)a1 = 0LL;
    }
    return a1;
  }
  else
  {
    uucore::features::ranges::Range::from_list(a1);
    return a1;
  }
}