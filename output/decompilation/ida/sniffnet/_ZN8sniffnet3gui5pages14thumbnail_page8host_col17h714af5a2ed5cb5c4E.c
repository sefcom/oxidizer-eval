__int64 __fastcall sniffnet::gui::pages::thumbnail_page::host_col(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v7; // r15
  unsigned __int64 v8; // rbp
  char v9; // bl
  _OWORD *v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int32 v15; // [rsp+Ah] [rbp-26Eh]
  __int16 v16; // [rsp+Eh] [rbp-26Ah]
  __int64 v18; // [rsp+18h] [rbp-260h] BYREF
  __int64 v19; // [rsp+20h] [rbp-258h]
  unsigned __int64 v20; // [rsp+28h] [rbp-250h]
  __int128 v21; // [rsp+30h] [rbp-248h] BYREF
  __int128 v22; // [rsp+40h] [rbp-238h]
  __m256i v23; // [rsp+50h] [rbp-228h] BYREF
  __int64 v24; // [rsp+70h] [rbp-208h]
  __int64 v25; // [rsp+90h] [rbp-1E8h]
  __int64 v26; // [rsp+98h] [rbp-1E0h]
  __int128 v27; // [rsp+A0h] [rbp-1D8h] BYREF
  __int128 v28; // [rsp+B0h] [rbp-1C8h]
  __m256i v29; // [rsp+C0h] [rbp-1B8h]
  __int64 v30; // [rsp+E0h] [rbp-198h]
  _BYTE v31[8]; // [rsp+E8h] [rbp-190h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-188h]
  __int64 v33; // [rsp+F8h] [rbp-180h]
  __int128 v34; // [rsp+100h] [rbp-178h] BYREF
  __int128 v35; // [rsp+110h] [rbp-168h]
  _OWORD v36[2]; // [rsp+120h] [rbp-158h] BYREF
  __m256i v37; // [rsp+140h] [rbp-138h]
  __int64 v38; // [rsp+160h] [rbp-118h]
  _BYTE v39[24]; // [rsp+180h] [rbp-F8h] BYREF
  unsigned __int128 v40[3]; // [rsp+198h] [rbp-E0h] BYREF
  _BYTE v41[64]; // [rsp+1C8h] [rbp-B0h] BYREF
  _BYTE v42[112]; // [rsp+208h] [rbp-70h] BYREF

  v25 = a1;
  *(_OWORD *)&v23.m256i_u64[1] = 0LL;
  v23.m256i_i64[3] = 0x7F80000000000000LL;
  WORD4(v22) = 2;
  v23.m256i_i16[0] = 2;
  LOWORD(v24) = 0;
  *(_QWORD *)&v21 = 0LL;
  *((_QWORD *)&v21 + 1) = 8LL;
  *(_QWORD *)&v22 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::padding(v36, &v21, 327680LL);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v21, v36, 3LL);
  iced_widget::column::Column<Message,Theme,Renderer>::width(&v27, &v21, 131073LL);
  sniffnet::report::get_report_entries::get_host_entries(v31, a2, a3, a5);
  v18 = 0LL;
  v19 = 8LL;
  v20 = 0LL;
  if ( v33 )
  {
    v7 = v32;
    v26 = v32 + 192 * v33;
    v8 = 0LL;
    do
    {
      sniffnet::gui::pages::thumbnail_page::host_text(v39, v7);
      v9 = *(_BYTE *)(v7 + 72);
      <alloc::string::String as core::clone::Clone>::clone(&v21, v39);
      BYTE8(v35) = v9;
      v34 = v21;
      *(_QWORD *)&v35 = v22;
      if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(&v34, v19, v8) )
      {
        core::ptr::drop_in_place<x11_dl::error::OpenError>(&v34);
        core::ptr::drop_in_place<alloc::string::String>(v39);
      }
      else
      {
        v22 = v35;
        v21 = v34;
        alloc::vec::Vec<T,A>::push(&v18, &v21);
        sniffnet::countries::country_utils::get_flag_tooltip(v40, v9, v7 + 80, 0, a4, 1);
        memset(&v23.m256i_u64[1], 0, 22);
        WORD4(v22) = 2;
        HIWORD(v22) = v16;
        *(_DWORD *)((char *)&v22 + 10) = v15;
        v23.m256i_i16[0] = 2;
        v23.m256i_i16[3] = v16;
        *(__int32 *)((char *)v23.m256i_i32 + 2) = v15;
        *(_QWORD *)&v21 = 0LL;
        *((_QWORD *)&v21 + 1) = 8LL;
        *(_QWORD *)&v22 = 0LL;
        iced_widget::row::Row<Message,Theme,Renderer>::align_y(v36, &v21, 1LL);
        iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v21, v36, 5LL);
        iced_widget::row::Row<Message,Theme,Renderer>::push(v42, &v21, v40);
        iced_core::widget::text::Text<Theme,Renderer>::new(&v21, v39);
        iced_core::widget::text::Text<Theme,Renderer>::font(v36, &v21, a4);
        iced_core::widget::text::Text<Theme,Renderer>::size(&v21, v36, 14.3);
        iced_widget::row::Row<Message,Theme,Renderer>::push(v41, v42, &v21);
        v24 = v30;
        v23 = v29;
        v22 = v28;
        v21 = v27;
        iced_widget::column::Column<Message,Theme,Renderer>::push(v36, &v21, v41);
        v27 = v36[0];
        v28 = v36[1];
        v29 = v37;
        v30 = v38;
        v8 = v20;
        if ( v20 > 3 )
          break;
      }
      v7 += 192LL;
    }
    while ( v7 != v26 );
  }
  v10 = (_OWORD *)v25;
  *(_QWORD *)(v25 + 64) = v30;
  v11 = v27;
  v12 = v28;
  v13 = *(_OWORD *)v29.m256i_i8;
  v10[3] = *(_OWORD *)&v29.m256i_u64[2];
  v10[2] = v13;
  v10[1] = v12;
  *v10 = v11;
  core::ptr::drop_in_place<alloc::vec::Vec<sniffnet::networking::types::host::ThumbnailHost>>(&v18);
  return core::ptr::drop_in_place<alloc::vec::Vec<(sniffnet::networking::types::host::Host,sniffnet::networking::types::data_info_host::DataInfoHost)>>(v31);
}