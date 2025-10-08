_OWORD *__fastcall sniffnet::gui::pages::notifications_page::data_notification_extra(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 v7; // rax
  float v8; // xmm0_4
  _OWORD *result; // rax
  __m256i *v10; // r12
  __m256i *v11; // rax
  __m256i *v12; // rax
  __m256i *v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // r15
  int v18; // r14d
  int v19; // ebp
  __int64 v20; // r14
  __m256i *v21; // rbx
  __m256i *v22; // rax
  __m256i *v23; // rax
  __m256i *v24; // rcx
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  __m256i *v28; // rsi
  __int64 v29; // r12
  unsigned int v30; // ebx
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  float v34; // [rsp+Ch] [rbp-38Ch]
  __m256i v35; // [rsp+10h] [rbp-388h] BYREF
  __m256i v36; // [rsp+30h] [rbp-368h]
  __int128 v37; // [rsp+50h] [rbp-348h]
  __int64 v38; // [rsp+70h] [rbp-328h]
  __int64 v39; // [rsp+78h] [rbp-320h]
  __m256i v40; // [rsp+80h] [rbp-318h] BYREF
  __m256i v41; // [rsp+A0h] [rbp-2F8h] BYREF
  __m256i v42; // [rsp+C0h] [rbp-2D8h]
  __m256i v43[2]; // [rsp+E0h] [rbp-2B8h] BYREF
  __int128 v44; // [rsp+120h] [rbp-278h]
  int v45; // [rsp+130h] [rbp-268h]
  _OWORD *v46; // [rsp+140h] [rbp-258h]
  __int64 v47; // [rsp+148h] [rbp-250h]
  __m256i v48; // [rsp+150h] [rbp-248h] BYREF
  __m256i v49; // [rsp+170h] [rbp-228h]
  __int128 v50; // [rsp+190h] [rbp-208h]
  __m256i v51; // [rsp+1A0h] [rbp-1F8h] BYREF
  __m256i v52; // [rsp+1C0h] [rbp-1D8h]
  __int64 v53; // [rsp+1E0h] [rbp-1B8h]
  __m256i v54; // [rsp+1F0h] [rbp-1A8h] BYREF
  __m256i v55; // [rsp+210h] [rbp-188h]
  __int64 v56; // [rsp+230h] [rbp-168h]
  _OWORD v57[5]; // [rsp+240h] [rbp-158h] BYREF
  _OWORD v58[5]; // [rsp+290h] [rbp-108h] BYREF
  _BYTE v59[64]; // [rsp+2E8h] [rbp-B0h] BYREF
  _BYTE v60[112]; // [rsp+328h] [rbp-70h] BYREF

  v39 = a3;
  v5 = *(_QWORD *)(a2 + 136);
  v6 = *(_QWORD *)(a2 + 160);
  v7 = core::cmp::Ord::max(v5, v6);
  if ( v7 && *(_BYTE *)(a2 + 169) )
  {
    v46 = a1;
    if ( v7 < 0 )
      v8 = (float)(int)(((unsigned __int64)v7 >> 1) | v7 & 1) + (float)(int)(((unsigned __int64)v7 >> 1) | v7 & 1);
    else
      v8 = (float)(int)v7;
    v34 = v8;
    v47 = v6;
    *(_OWORD *)&v41.m256i_u64[1] = 0LL;
    v41.m256i_i64[3] = 0x7F80000000000000LL;
    v40.m256i_i16[12] = 2;
    v41.m256i_i16[0] = 2;
    v42.m256i_i16[0] = 0;
    v40.m256i_i64[0] = 0LL;
    *(_OWORD *)&v40.m256i_u64[1] = 8uLL;
    iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v35, &v40);
    iced_widget::column::Column<Message,Theme,Renderer>::width(&v51, &v35, 327681LL);
    v38 = a2;
    v10 = *(__m256i **)(a2 + 128);
    v48.m256i_i64[0] = 0LL;
    v48.m256i_i64[1] = 1LL;
    *(_OWORD *)&v48.m256i_u64[2] = 0LL;
    v49.m256i_i64[0] = 1LL;
    *(_OWORD *)&v49.m256i_u64[1] = 0LL;
    v49.m256i_i64[3] = 1LL;
    *(_QWORD *)&v50 = 0LL;
    BYTE8(v50) = -7;
    <sniffnet::networking::types::data_info::DataInfo as core::default::Default>::default(&v35);
    v11 = v10;
    if ( !v5 )
      v11 = 0LL;
    v12 = v11 + 3;
    v13 = v43;
    v44 = v37;
    v43[1] = v36;
    v43[0] = v35;
    v40 = v48;
    v41 = v49;
    *(_OWORD *)v42.m256i_i8 = v50;
    v42.m256i_i64[2] = 0LL;
    v45 = 0;
    if ( v5 )
      v13 = v12;
    v57[4] = *(_OWORD *)v13[2].m256i_i8;
    v14 = *(_OWORD *)v13->m256i_i8;
    v15 = *(_OWORD *)&v13->m256i_u64[2];
    v16 = *(_OWORD *)v13[1].m256i_i8;
    v57[3] = *(_OWORD *)&v13[1].m256i_u64[2];
    v57[2] = v16;
    v57[1] = v15;
    v57[0] = v14;
    core::ptr::drop_in_place<(sniffnet::networking::types::host::Host,sniffnet::networking::types::data_info_host::DataInfoHost)>(&v40);
    if ( v5 )
    {
      v17 = 192 * v5;
      v18 = a4;
      v19 = *(unsigned __int8 *)(v38 + 168);
      do
      {
        sniffnet::gui::pages::overview_page::host_bar(
          (unsigned int)v59,
          (_DWORD)v10,
          (_DWORD)v10 + 80,
          v19,
          (unsigned int)v57,
          v39,
          v18);
        v42.m256i_i64[0] = v53;
        v41 = v52;
        v40 = v51;
        iced_widget::column::Column<Message,Theme,Renderer>::push(&v35, &v40, v59);
        v51 = v35;
        v52 = v36;
        v53 = v37;
        v10 += 6;
        v17 -= 192LL;
      }
      while ( v17 );
    }
    *(_OWORD *)&v41.m256i_u64[1] = 0LL;
    v41.m256i_i64[3] = 0x7F80000000000000LL;
    v40.m256i_i16[12] = 2;
    v41.m256i_i16[0] = 2;
    v42.m256i_i16[0] = 0;
    v40.m256i_i64[0] = 0LL;
    *(_OWORD *)&v40.m256i_u64[1] = 8uLL;
    iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v35, &v40);
    iced_widget::column::Column<Message,Theme,Renderer>::width(&v54, &v35, 131073LL);
    v20 = v38;
    v21 = *(__m256i **)(v38 + 152);
    <sniffnet::networking::types::data_info::DataInfo as core::default::Default>::default(&v35);
    v22 = v21;
    if ( !v47 )
      v22 = 0LL;
    v23 = v22 + 1;
    v40.m256i_i64[0] = 1LL;
    v24 = &v41;
    v41 = v35;
    v42 = v36;
    *(_OWORD *)v43[0].m256i_i8 = v37;
    if ( v47 )
      v24 = v23;
    v25 = *(_OWORD *)&v24->m256i_u64[2];
    v26 = *(_OWORD *)v24[1].m256i_i8;
    v27 = *(_OWORD *)&v24[1].m256i_u64[2];
    v58[0] = *(_OWORD *)v24->m256i_i8;
    v58[1] = v25;
    v58[2] = v26;
    v58[3] = v27;
    v58[4] = *(_OWORD *)v24[2].m256i_i8;
    if ( v47 )
    {
      v28 = v21;
      v29 = 112 * v47;
      v30 = *(unsigned __int8 *)(v20 + 168);
      do
      {
        sniffnet::gui::pages::overview_page::service_bar(v60, v28, &v28[1], v30, v58, v39);
        v42.m256i_i64[0] = v56;
        v41 = v55;
        v40 = v54;
        iced_widget::column::Column<Message,Theme,Renderer>::push(&v35, &v40, v60);
        v54 = v35;
        v55 = v36;
        v56 = v37;
        v28 = (__m256i *)((char *)v28 + 112);
        v29 -= 112LL;
      }
      while ( v29 );
    }
    memset(&v41.m256i_u64[1], 0, 22);
    v40.m256i_i16[12] = 2;
    v41.m256i_i16[0] = 2;
    v40.m256i_i64[0] = 0LL;
    *(_OWORD *)&v40.m256i_u64[1] = 8uLL;
    iced_widget::row::Row<Message,Theme,Renderer>::push(&v48, &v40, &v51);
    iced_widget::rule::Rule<Theme>::vertical(&v35, 30LL);
    iced_widget::container::Container<Message,Theme,Renderer>::new(&v40, &v35);
    iced_widget::container::Container<Message,Theme,Renderer>::height(&v35, &v40, v34 * 38.125);
    iced_widget::row::Row<Message,Theme,Renderer>::push(&v40, &v48, &v35);
    iced_widget::row::Row<Message,Theme,Renderer>::push(&v35, &v40, &v54);
    v31 = *(_OWORD *)v35.m256i_i8;
    v32 = *(_OWORD *)&v35.m256i_u64[2];
    v33 = *(_OWORD *)v36.m256i_i8;
    result = v46;
    v46[3] = *(_OWORD *)&v36.m256i_u64[2];
    result[2] = v33;
    result[1] = v32;
    *result = v31;
  }
  else
  {
    result = (_OWORD *)0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
  }
  return result;
}