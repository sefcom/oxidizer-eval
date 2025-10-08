__int64 __fastcall sniffnet::networking::types::info_traffic::InfoTraffic::get_thumbnail_data(
        __int64 *a1,
        __int64 a2,
        char a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  __int128 v10; // kr00_16

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v3 = *(_QWORD *)(a2 + 192);
      v4 = *(_QWORD *)(a2 + 200);
      v5 = *(_QWORD *)(a2 + 216);
      v6 = *(_QWORD *)(a2 + 208);
    }
    else
    {
      v4 = *(__int128 *)(a2 + 192) >> 61;
      v3 = 8LL * *(_QWORD *)(a2 + 192);
      v5 = *(__int128 *)(a2 + 208) >> 61;
      v6 = 8LL * *(_QWORD *)(a2 + 208);
    }
    v9 = v4 + __CFADD__(v3, v6) + v5;
    v10 = *(_OWORD *)(a2 + 160) + *(_OWORD *)(a2 + 176);
    if ( v10 == 0 )
      core::panicking::panic_const::panic_const_div_by_zero(
        &off_2DFFA30,
        a2,
        *((_QWORD *)&v10 + 1) | (*(_QWORD *)(a2 + 160) + *(_QWORD *)(a2 + 176)),
        *((_QWORD *)&v10 + 1),
        v10,
        v9);
    result = _udivti3(
               (v3 + v6) * *(unsigned int *)(a2 + 240),
               (__PAIR128__(v9, v3 + v6) * *(unsigned int *)(a2 + 240)) >> 64,
               v10);
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 160);
    v4 = *(_QWORD *)(a2 + 168);
    v5 = *(_QWORD *)(a2 + 184);
    v6 = *(_QWORD *)(a2 + 176);
    result = *(unsigned int *)(a2 + 240);
    v8 = 0LL;
  }
  *a1 = v3;
  a1[1] = v4;
  a1[2] = v6;
  a1[3] = v5;
  a1[4] = result;
  a1[5] = v8;
  return result;
}