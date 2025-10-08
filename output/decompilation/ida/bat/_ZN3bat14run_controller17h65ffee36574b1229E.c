__int64 __fastcall bat::run_controller(_OWORD *a1, __int64 a2, char *a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v12; // [rsp+0h] [rbp-188h] BYREF
  __int128 v13; // [rsp+10h] [rbp-178h]
  __int128 v14; // [rsp+20h] [rbp-168h]
  __int128 v15; // [rsp+30h] [rbp-158h]
  __int128 v16; // [rsp+40h] [rbp-148h]
  _QWORD dest[18]; // [rsp+50h] [rbp-138h] BYREF
  __int64 v18; // [rsp+E0h] [rbp-A8h] BYREF
  __int128 v19; // [rsp+E8h] [rbp-A0h]
  __int128 v20; // [rsp+F8h] [rbp-90h]
  __int128 v21; // [rsp+108h] [rbp-80h]
  __int128 v22; // [rsp+118h] [rbp-70h]
  __int128 v23; // [rsp+128h] [rbp-60h]
  __int128 v24; // [rsp+138h] [rbp-50h]
  __int128 v25; // [rsp+148h] [rbp-40h]
  __int128 v26; // [rsp+158h] [rbp-30h]
  __int64 v27; // [rsp+168h] [rbp-20h]

  bat::assets::assets_from_cache_or_binary((char *)dest, a3[295], a4, a5);
  v12 = *(_OWORD *)&dest[1];
  v13 = *(_OWORD *)&dest[3];
  v14 = *(_OWORD *)&dest[5];
  v15 = *(_OWORD *)&dest[7];
  v16 = *(_OWORD *)&dest[9];
  if ( dest[0] == 0x8000000000000001LL )
  {
    a1[4] = v16;
    v8 = v12;
    v9 = v13;
    v10 = v14;
    a1[3] = v15;
    a1[2] = v10;
    a1[1] = v9;
    *a1 = v8;
    return core::ptr::drop_in_place<alloc::vec::Vec<bat::input::Input>>(a2);
  }
  else
  {
    v27 = dest[17];
    v26 = *(_OWORD *)&dest[15];
    v25 = *(_OWORD *)&dest[13];
    v24 = *(_OWORD *)&dest[11];
    v19 = v12;
    v20 = v13;
    v21 = v14;
    v22 = v15;
    v23 = v16;
    v18 = dest[0];
    *(_QWORD *)&v12 = a3;
    *((_QWORD *)&v12 + 1) = &v18;
    if ( a3[298] != 2 )
    {
      if ( a3[296] )
      {
        bat::get_new_terminal_title((__int64)dest, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
        bat::set_terminal_title_to((__int64)dest);
      }
    }
    dest[2] = *(_QWORD *)(a2 + 16);
    *(_OWORD *)dest = *(_OWORD *)a2;
    ((void (__fastcall *)(_OWORD *, __int128 *, _QWORD *, _QWORD, __int64, __int64))bat::controller::Controller::run)(
      a1,
      &v12,
      dest,
      0LL,
      v6,
      v7);
    return core::ptr::drop_in_place<bat::assets::HighlightingAssets>(&v18);
  }
}