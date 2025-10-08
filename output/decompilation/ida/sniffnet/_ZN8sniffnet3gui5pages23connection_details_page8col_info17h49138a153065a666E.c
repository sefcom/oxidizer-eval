__int64 __fastcall sniffnet::gui::pages::connection_details_page::col_info(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int128 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int128 v22; // rax
  __int128 v23; // rax
  __int64 result; // rax
  __int128 *v25; // rcx
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  char v29; // [rsp+8h] [rbp-310h]
  __int32 v30; // [rsp+Ah] [rbp-30Eh]
  __int16 v31; // [rsp+Eh] [rbp-30Ah]
  __int128 v34; // [rsp+20h] [rbp-2F8h] BYREF
  __int128 v35; // [rsp+30h] [rbp-2E8h]
  __m256i v36; // [rsp+40h] [rbp-2D8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-2B8h]
  __int128 v38; // [rsp+A0h] [rbp-278h] BYREF
  __int128 v39; // [rsp+B0h] [rbp-268h]
  __m256i v40; // [rsp+C0h] [rbp-258h]
  __int64 v41; // [rsp+E0h] [rbp-238h]
  __int128 v42; // [rsp+F0h] [rbp-228h] BYREF
  __int128 v43; // [rsp+100h] [rbp-218h]
  __m256i v44; // [rsp+110h] [rbp-208h]
  __int64 v45; // [rsp+130h] [rbp-1E8h]
  __int128 v46; // [rsp+140h] [rbp-1D8h] BYREF
  __int128 v47; // [rsp+150h] [rbp-1C8h] BYREF
  __m256i v48; // [rsp+160h] [rbp-1B8h]
  __int64 v49; // [rsp+180h] [rbp-198h]
  __int128 v50; // [rsp+1A0h] [rbp-178h] BYREF
  __int64 v51; // [rsp+1B0h] [rbp-168h]
  __int128 v52; // [rsp+1F0h] [rbp-128h] BYREF
  __int128 v53; // [rsp+200h] [rbp-118h]
  __m256i v54; // [rsp+210h] [rbp-108h]
  __int64 v55; // [rsp+230h] [rbp-E8h]
  __int128 v56; // [rsp+240h] [rbp-D8h] BYREF
  __int64 v57; // [rsp+250h] [rbp-C8h]
  __int64 v58; // [rsp+258h] [rbp-C0h]
  _WORD v59[8]; // [rsp+260h] [rbp-B8h] BYREF
  __int128 v60; // [rsp+270h] [rbp-A8h] BYREF
  __int64 v61; // [rsp+280h] [rbp-98h]
  _BYTE v62[24]; // [rsp+2B8h] [rbp-60h] BYREF
  _BYTE v63[72]; // [rsp+2D0h] [rbp-48h] BYREF

  v58 = a1;
  v29 = *(_BYTE *)(a2 + 42);
  *(_OWORD *)&v36.m256i_u64[1] = 0LL;
  v36.m256i_i64[3] = 0x7F80000000000000LL;
  WORD4(v35) = 2;
  v36.m256i_i16[0] = 2;
  LOWORD(v37) = 0;
  *(_QWORD *)&v34 = 0LL;
  *((_QWORD *)&v34 + 1) = 8LL;
  *(_QWORD *)&v35 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v46, &v34, 10LL);
  v38 = xmmword_271E90;
  iced_widget::column::Column<Message,Theme,Renderer>::padding(&v34, &v46, &v38);
  iced_widget::column::Column<Message,Theme,Renderer>::width(&v46, &v34, 131073LL);
  v59[0] = 2;
  v59[4] = 0;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v38, &v46, v59);
  memset(&v36.m256i_u64[1], 0, 22);
  WORD4(v35) = 2;
  v36.m256i_i16[0] = 2;
  *(_QWORD *)&v34 = 0LL;
  *((_QWORD *)&v34 + 1) = 8LL;
  *(_QWORD *)&v35 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v46, &v34, 8LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(&v50, &v46);
  sniffnet::utils::types::icon::Icon::to_text(&v34, 9LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v60, &v50, &v34);
  sniffnet::utils::formatted_strings::get_formatted_timestamp(&v52, *(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 40));
  sniffnet::utils::formatted_strings::get_formatted_timestamp(&v50, *(_QWORD *)(a3 + 48), *(_QWORD *)(a3 + 56));
  *(_QWORD *)&v46 = &v52;
  *((_QWORD *)&v46 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v47 = &v50;
  *((_QWORD *)&v47 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v34 = &unk_2DFEEF8;
  *((_QWORD *)&v34 + 1) = 2LL;
  v36.m256i_i64[0] = 0LL;
  *(_QWORD *)&v35 = &v46;
  *((_QWORD *)&v35 + 1) = 2LL;
  core::option::Option<T>::map_or_else(v62, 0LL, v8, &v34);
  core::ptr::drop_in_place<alloc::string::String>(&v50);
  core::ptr::drop_in_place<alloc::string::String>(&v52);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v34, v62);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v46, &v34, a5);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v34, &v60, &v46);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v46, &v38, &v34);
  <T as alloc::string::SpecToString>::spec_to_string(&v38, a2 + 42);
  v9 = sniffnet::translations::translations::protocol_translation(a6);
  sniffnet::gui::styles::text::TextType::highlighted_subtitle_with_desc(&v34, v9, v10, *((_QWORD *)&v38 + 1), v39, a5);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v42, &v46, &v34);
  core::ptr::drop_in_place<alloc::string::String>(&v38);
  if ( (v29 == 2) == (v29 == 3) )
  {
    v49 = v45;
    v48 = v44;
    v47 = v43;
    v46 = v42;
    <T as alloc::string::SpecToString>::spec_to_string(&v50, a3 + 208);
    v11 = sniffnet::translations::translations_3::service_translation(a6);
    sniffnet::gui::styles::text::TextType::highlighted_subtitle_with_desc(
      &v34,
      v11,
      v12,
      *((_QWORD *)&v50 + 1),
      v51,
      a5);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v38, &v46, &v34);
    v42 = v38;
    v43 = v39;
    v44 = v40;
    v45 = v41;
    core::ptr::drop_in_place<alloc::string::String>(&v50);
  }
  v49 = v45;
  v48 = v44;
  v47 = v43;
  v46 = v42;
  *(_QWORD *)&v13 = sniffnet::translations::translations_2::transmitted_data_translation(a6);
  v52 = v13;
  if ( *(_BYTE *)(a3 + 232) )
    v14 = sniffnet::translations::translations::outgoing_translation(a6);
  else
    v14 = sniffnet::translations::translations::incoming_translation(a6);
  alloc::str::<impl str>::to_lowercase(&v50, v14);
  *(_QWORD *)&v38 = &v52;
  *((_QWORD *)&v38 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v39 = &v50;
  *((_QWORD *)&v39 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v34 = &unk_2DFEF18;
  *((_QWORD *)&v34 + 1) = 3LL;
  v36.m256i_i64[0] = 0LL;
  *(_QWORD *)&v35 = &v38;
  *((_QWORD *)&v35 + 1) = 2LL;
  core::option::Option<T>::map_or_else(&v60, 0LL, v15, &v34);
  core::ptr::drop_in_place<alloc::string::String>(&v50);
  v16 = v61;
  v57 = v61;
  v56 = v60;
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      v17 = *(_QWORD *)a3;
      v18 = *(_QWORD *)(a3 + 8);
    }
    else
    {
      v18 = *(__int128 *)a3 >> 61;
      v17 = 8LL * *(_QWORD *)a3;
    }
  }
  else
  {
    v17 = *(_QWORD *)(a3 + 16);
    v18 = *(_QWORD *)(a3 + 24);
  }
  v19 = *((_QWORD *)&v56 + 1);
  sniffnet::networking::types::data_representation::DataRepr::formatted_string(&v60, a4, v17, v18);
  if ( a4 )
  {
    *(_QWORD *)&v50 = 0LL;
    *((_QWORD *)&v50 + 1) = 1LL;
    v51 = 0LL;
    v20 = 1LL;
    v21 = 0LL;
  }
  else
  {
    *(_QWORD *)&v22 = sniffnet::translations::translations::packets_translation(a6);
    v50 = v22;
    *(_QWORD *)&v52 = &v50;
    *((_QWORD *)&v52 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v34 = &off_2DFEF48;
    *((_QWORD *)&v34 + 1) = 1LL;
    v36.m256i_i64[0] = 0LL;
    *(_QWORD *)&v35 = &v52;
    *((_QWORD *)&v35 + 1) = 1LL;
    core::option::Option<T>::map_or_else(&v38, 0LL, *((_QWORD *)&v22 + 1), &v34);
    v50 = v38;
    v21 = v39;
    v51 = v39;
    v20 = *((_QWORD *)&v38 + 1);
  }
  <alloc::string::String as core::ops::arith::Add<&str>>::add(&v52, &v60, v20, v21);
  sniffnet::gui::styles::text::TextType::highlighted_subtitle_with_desc(&v34, v19, v16, *((_QWORD *)&v52 + 1), v53, a5);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v38, &v46, &v34);
  v42 = v38;
  v43 = v39;
  v44 = v40;
  v45 = v41;
  core::ptr::drop_in_place<alloc::string::String>(&v52);
  core::ptr::drop_in_place<alloc::string::String>(&v50);
  core::ptr::drop_in_place<alloc::string::String>(&v56);
  if ( (v29 == 3) != (v29 == 2) )
  {
    v55 = v45;
    v54 = v44;
    v53 = v43;
    v52 = v42;
    v40.m256i_i64[3] = 0x7F80000000000000LL;
    *(_OWORD *)&v40.m256i_u64[1] = 0LL;
    WORD4(v39) = 2;
    *(_DWORD *)((char *)&v39 + 10) = v30;
    HIWORD(v39) = v31;
    v40.m256i_i16[0] = 2;
    *(__int32 *)((char *)v40.m256i_i32 + 2) = v30;
    v40.m256i_i16[3] = v31;
    LOWORD(v41) = 0;
    *(_QWORD *)&v38 = 0LL;
    *((_QWORD *)&v38 + 1) = 8LL;
    *(_QWORD *)&v39 = 0LL;
    *(_QWORD *)&v23 = sniffnet::translations::translations_3::messages_translation(a6);
    v46 = v23;
    *(_QWORD *)&v50 = &v46;
    *((_QWORD *)&v50 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v34 = &unk_2DFEF58;
    *((_QWORD *)&v34 + 1) = 2LL;
    v36.m256i_i64[0] = 0LL;
    *(_QWORD *)&v35 = &v50;
    *((_QWORD *)&v35 + 1) = 1LL;
    core::option::Option<T>::map_or_else(v63, 0LL, *((_QWORD *)&v23 + 1), &v34);
    iced_core::widget::text::Text<Theme,Renderer>::new(&v34, v63);
    iced_core::widget::text::Text<Theme,Renderer>::class(&v46, &v34, 4LL);
    iced_core::widget::text::Text<Theme,Renderer>::font(&v34, &v46, a5);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v60, &v38, &v34);
    v36.m256i_i64[3] = 0x7F80000000000000LL;
    *(_OWORD *)&v36.m256i_u64[1] = 0LL;
    WORD4(v35) = 2;
    *(_DWORD *)((char *)&v35 + 10) = v30;
    HIWORD(v35) = v31;
    v36.m256i_i16[0] = 2;
    *(__int32 *)((char *)v36.m256i_i32 + 2) = v30;
    v36.m256i_i16[3] = v31;
    LOWORD(v37) = 0;
    *(_QWORD *)&v34 = 0LL;
    *((_QWORD *)&v34 + 1) = 8LL;
    *(_QWORD *)&v35 = 0LL;
    v46 = xmmword_26E860;
    iced_widget::column::Column<Message,Theme,Renderer>::padding(&v38, &v34, &v46);
    if ( v29 == 2 )
      sniffnet::networking::types::icmp_type::IcmpType::pretty_print_types(&v46, a3 + 64);
    else
      sniffnet::networking::types::arp_type::ArpType::pretty_print_types(&v46, a3 + 112);
    iced_core::widget::text::Text<Theme,Renderer>::new(&v34, &v46);
    iced_core::widget::text::Text<Theme,Renderer>::font(&v46, &v34, a5);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v50, &v38, &v46);
    sniffnet::gui::styles::scrollbar::ScrollbarType::properties(&v46);
    sniffnet::gui::styles::scrollbar::ScrollbarType::properties((char *)&v47 + 8);
    iced_widget::scrollable::Scrollable<Message,Theme,Renderer>::with_direction(&v34, &v50, &v46);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v46, &v60, &v34);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v42, &v52, &v46);
  }
  v37 = v45;
  v36 = v44;
  v35 = v43;
  v34 = v42;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v42, &v34, v59);
  result = v45;
  v25 = (__int128 *)v58;
  *(_QWORD *)(v58 + 64) = v45;
  v26 = v42;
  v27 = v43;
  v28 = *(_OWORD *)v44.m256i_i8;
  v25[3] = *(_OWORD *)&v44.m256i_u64[2];
  v25[2] = v28;
  v25[1] = v27;
  *v25 = v26;
  return result;
}