void __fastcall sniffnet::networking::types::host_data_states::HostDataStates::update_states(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int128 v23; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+10h] [rbp-98h]
  __int128 v25; // [rsp+20h] [rbp-88h]
  __int128 v26; // [rsp+30h] [rbp-78h]
  __int128 v27; // [rsp+40h] [rbp-68h]
  __int128 v28; // [rsp+50h] [rbp-58h]
  __int128 v29; // [rsp+60h] [rbp-48h]
  __int64 v30; // [rsp+70h] [rbp-38h]
  _BYTE v31[48]; // [rsp+78h] [rbp-30h] BYREF

  if ( *(_BYTE *)(a1 + 384) )
  {
    v3 = *(_QWORD *)(a1 + 360);
    v4 = *(_QWORD *)(a1 + 368);
    v5 = v3;
    if ( v3 )
      v5 = *(_QWORD *)(a1 + 376);
    v23 = v3 != 0;
    *(_QWORD *)&v24 = v3;
    *((_QWORD *)&v24 + 1) = v4;
    v25 = v23;
    *(_QWORD *)&v26 = v3;
    *((_QWORD *)&v26 + 1) = v4;
    *(_QWORD *)&v27 = v5;
    core::iter::traits::iterator::Iterator::collect(v31, &v23);
    iced_widget::combo_box::State<T>::with_selection(&v23, v31, a2 + 168);
    core::ptr::drop_in_place<iced_widget::combo_box::State<alloc::string::String>>(a1);
    *(_QWORD *)(a1 + 112) = v30;
    *(_OWORD *)(a1 + 96) = v29;
    *(_OWORD *)(a1 + 80) = v28;
    *(_OWORD *)(a1 + 64) = v27;
    v6 = v23;
    v7 = v24;
    v8 = v25;
    *(_OWORD *)(a1 + 48) = v26;
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = v6;
    *(_BYTE *)(a1 + 384) = 0;
    if ( !*(_BYTE *)(a1 + 416) )
    {
LABEL_3:
      if ( !*(_BYTE *)(a1 + 448) )
        return;
      goto LABEL_11;
    }
  }
  else if ( !*(_BYTE *)(a1 + 416) )
  {
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(a1 + 392);
  v10 = *(_QWORD *)(a1 + 400);
  v11 = 0LL;
  v12 = v9;
  if ( v9 )
    v12 = *(_QWORD *)(a1 + 408);
  LOBYTE(v11) = v9 != 0;
  v23 = v11;
  *(_QWORD *)&v24 = v9;
  *((_QWORD *)&v24 + 1) = v10;
  v25 = v11;
  *(_QWORD *)&v26 = v9;
  *((_QWORD *)&v26 + 1) = v10;
  *(_QWORD *)&v27 = v12;
  core::iter::traits::iterator::Iterator::collect(v31, &v23);
  iced_widget::combo_box::State<T>::with_selection(&v23, v31, a2 + 192);
  core::ptr::drop_in_place<iced_widget::combo_box::State<alloc::string::String>>(a1 + 120);
  *(_QWORD *)(a1 + 232) = v30;
  *(_OWORD *)(a1 + 216) = v29;
  *(_OWORD *)(a1 + 200) = v28;
  *(_OWORD *)(a1 + 184) = v27;
  v13 = v23;
  v14 = v24;
  v15 = v25;
  *(_OWORD *)(a1 + 168) = v26;
  *(_OWORD *)(a1 + 152) = v15;
  *(_OWORD *)(a1 + 136) = v14;
  *(_OWORD *)(a1 + 120) = v13;
  *(_BYTE *)(a1 + 416) = 0;
  if ( *(_BYTE *)(a1 + 448) )
  {
LABEL_11:
    v16 = *(_QWORD *)(a1 + 424);
    v17 = *(_QWORD *)(a1 + 432);
    v18 = 0LL;
    v19 = v16;
    if ( v16 )
      v19 = *(_QWORD *)(a1 + 440);
    LOBYTE(v18) = v16 != 0;
    v23 = v18;
    *(_QWORD *)&v24 = v16;
    *((_QWORD *)&v24 + 1) = v17;
    v25 = v18;
    *(_QWORD *)&v26 = v16;
    *((_QWORD *)&v26 + 1) = v17;
    *(_QWORD *)&v27 = v19;
    core::iter::traits::iterator::Iterator::collect(v31, &v23);
    iced_widget::combo_box::State<T>::with_selection(&v23, v31, a2 + 144);
    core::ptr::drop_in_place<iced_widget::combo_box::State<alloc::string::String>>(a1 + 240);
    *(_QWORD *)(a1 + 352) = v30;
    *(_OWORD *)(a1 + 336) = v29;
    *(_OWORD *)(a1 + 320) = v28;
    *(_OWORD *)(a1 + 304) = v27;
    v20 = v23;
    v21 = v24;
    v22 = v25;
    *(_OWORD *)(a1 + 288) = v26;
    *(_OWORD *)(a1 + 272) = v22;
    *(_OWORD *)(a1 + 256) = v21;
    *(_OWORD *)(a1 + 240) = v20;
    *(_BYTE *)(a1 + 448) = 0;
  }
}