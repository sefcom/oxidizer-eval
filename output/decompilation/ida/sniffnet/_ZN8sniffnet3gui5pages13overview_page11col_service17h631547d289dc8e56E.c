__int64 __fastcall sniffnet::gui::pages::overview_page::col_service(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // r13
  unsigned __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int8 v12; // [rsp+9h] [rbp-6EFh] BYREF
  int v13; // [rsp+Ah] [rbp-6EEh]
  __int16 v14; // [rsp+Eh] [rbp-6EAh]
  __int64 v15; // [rsp+10h] [rbp-6E8h]
  unsigned int v16; // [rsp+1Ch] [rbp-6DCh]
  __int128 v17; // [rsp+20h] [rbp-6D8h] BYREF
  __int128 v18; // [rsp+30h] [rbp-6C8h]
  __int128 v19; // [rsp+40h] [rbp-6B8h]
  __int128 v20; // [rsp+50h] [rbp-6A8h]
  __int64 v21; // [rsp+60h] [rbp-698h]
  __int64 v22; // [rsp+70h] [rbp-688h] BYREF
  __int64 v23; // [rsp+78h] [rbp-680h]
  unsigned __int64 v24; // [rsp+80h] [rbp-678h]
  unsigned __int64 v25; // [rsp+88h] [rbp-670h]
  __int64 v26; // [rsp+90h] [rbp-668h]
  _BYTE *v27; // [rsp+98h] [rbp-660h]
  _OWORD v28[4]; // [rsp+A0h] [rbp-658h] BYREF
  __int64 v29; // [rsp+E0h] [rbp-618h]
  _OWORD v30[2]; // [rsp+F0h] [rbp-608h] BYREF
  _OWORD src[23]; // [rsp+110h] [rbp-5E8h] BYREF
  _OWORD v32[5]; // [rsp+280h] [rbp-478h] BYREF
  _OWORD v33[4]; // [rsp+2D0h] [rbp-428h] BYREF
  __int64 v34; // [rsp+310h] [rbp-3E8h]
  _OWORD v35[16]; // [rsp+440h] [rbp-2B8h] BYREF
  unsigned __int64 v36; // [rsp+548h] [rbp-1B0h]
  _BYTE v37[64]; // [rsp+578h] [rbp-180h] BYREF
  _BYTE v38[64]; // [rsp+5B8h] [rbp-140h] BYREF
  _BYTE dest[256]; // [rsp+5F8h] [rbp-100h] BYREF

  v26 = a1;
  memcpy(dest, a2 + 1208, 0xD0uLL);
  LOBYTE(v2) = a2[1497];
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(src, dest);
  v30[1] = src[1];
  v30[0] = src[0];
  v12 = a2[455];
  *(_OWORD *)((char *)&src[2] + 8) = 0LL;
  *((_QWORD *)&src[3] + 1) = 0x7F80000000000000LL;
  WORD4(src[1]) = 2;
  LOWORD(src[2]) = 2;
  LOWORD(src[4]) = 0;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 8LL;
  *(_QWORD *)&src[1] = 0LL;
  v35[0] = 0x4130000000000000uLL;
  iced_widget::column::Column<Message,Theme,Renderer>::padding(v33, src, v35);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v17, v33, 1LL);
  sniffnet::report::get_report_entries::get_service_entries(&v22, a2 + 800, v12, (unsigned __int8)a2[1667]);
  v3 = v23;
  v4 = v24;
  v5 = v23 + 112 * v24;
  core::iter::traits::iterator::Iterator::reduce(src, v23, v5, &v12);
  if ( DWORD2(src[4]) == 1000000000 )
  {
    <sniffnet::networking::types::data_info::DataInfo as core::default::Default>::default(v32);
    v27 = a2;
    v2 = (unsigned __int8)v2;
    if ( !v4 )
      goto LABEL_9;
  }
  else
  {
    v32[4] = src[4];
    v32[3] = src[3];
    v32[2] = src[2];
    v32[1] = src[1];
    v32[0] = src[0];
    v27 = a2;
    v2 = (unsigned __int8)v2;
    if ( !v4 )
      goto LABEL_9;
  }
  v25 = v4;
  v16 = v2;
  v6 = v3;
  v15 = v3;
  do
  {
    sniffnet::gui::pages::overview_page::service_bar(v38, v6, v6 + 32, v12, v32, v30);
    v29 = v21;
    v28[3] = v20;
    v28[2] = v19;
    v28[1] = v18;
    v28[0] = v17;
    iced_widget::button::Button<Message,Theme,Renderer>::new(src, v38);
    v35[0] = xmmword_26CC70;
    iced_widget::button::Button<Message,Theme,Renderer>::padding(v33, src);
    sniffnet::report::types::search_parameters::SearchParameters::new_service_search(src, v6);
    memcpy(v35, src, 0xE0uLL);
    v36 = 0x800000000000001FLL;
    iced_widget::button::Button<Message,Theme,Renderer>::on_press(src, v33, v35);
    iced_widget::button::Button<Message,Theme,Renderer>::class(v33, src, 10LL);
    iced_widget::column::Column<Message,Theme,Renderer>::push(src, v28, v33);
    v17 = src[0];
    v18 = src[1];
    v19 = src[2];
    v20 = src[3];
    v21 = *(_QWORD *)&src[4];
    v6 += 112LL;
  }
  while ( v6 != v5 );
  v3 = v15;
  v2 = v16;
  if ( v25 > 0x1D )
  {
    *(_QWORD *)&src[4] = v21;
    src[3] = v20;
    src[2] = v19;
    src[1] = v18;
    src[0] = v17;
    LOWORD(v33[0]) = 2;
    *(_DWORD *)((char *)v33 + 2) = v13;
    WORD3(v33[0]) = v14;
    WORD4(v33[0]) = 3;
    HIDWORD(v33[0]) = 1103626240;
    iced_widget::column::Column<Message,Theme,Renderer>::push(v35, src, v33);
    v7 = sniffnet::translations::translations_2::only_top_30_items_translation(v2);
    iced_core::widget::text::Text<Theme,Renderer>::new(src, v7, v8);
    iced_core::widget::text::Text<Theme,Renderer>::font(v33, src, v30);
    iced_core::widget::text::Text<Theme,Renderer>::align_x(src, v33);
    iced_widget::column::Column<Message,Theme,Renderer>::push(v33, v35, src);
    v17 = v33[0];
    v18 = v33[1];
    v19 = v33[2];
    v20 = v33[3];
    v21 = v34;
  }
LABEL_9:
  *((_QWORD *)&v35[3] + 1) = 0x7F80000000000000LL;
  *(_OWORD *)((char *)&v35[2] + 8) = 0LL;
  WORD4(v35[1]) = 2;
  *(_DWORD *)((char *)&v35[1] + 10) = v13;
  HIWORD(v35[1]) = v14;
  LOWORD(v35[2]) = 2;
  *(_DWORD *)((char *)&v35[2] + 2) = v13;
  WORD3(v35[2]) = v14;
  LOWORD(v35[4]) = 0;
  *(_QWORD *)&v35[0] = 0LL;
  *((_QWORD *)&v35[0] + 1) = 8LL;
  *(_QWORD *)&v35[1] = 0LL;
  *(_OWORD *)((char *)&src[2] + 8) = 0LL;
  DWORD2(src[3]) = 0;
  WORD4(src[1]) = 2;
  *(_DWORD *)((char *)&src[1] + 10) = v13;
  HIWORD(src[1]) = v14;
  LOWORD(src[2]) = 2;
  *(_DWORD *)((char *)&src[2] + 2) = v13;
  WORD3(src[2]) = v14;
  WORD6(src[3]) = 0;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 8LL;
  *(_QWORD *)&src[1] = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::height(v33, src, 45LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v28, v33, 1LL);
  v9 = sniffnet::translations::translations_3::service_translation(v2);
  iced_core::widget::text::Text<Theme,Renderer>::new(src, v9, v10);
  iced_core::widget::text::Text<Theme,Renderer>::font(v33, src, v30);
  iced_core::widget::text::Text<Theme,Renderer>::class(src, v33, 3LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(v33, src, 19.9);
  iced_widget::row::Row<Message,Theme,Renderer>::push(src, v28, v33);
  LOWORD(v28[0]) = 0;
  WORD4(v28[0]) = 2;
  *(_DWORD *)((char *)v28 + 10) = v13;
  HIWORD(v28[0]) = v14;
  iced_widget::row::Row<Message,Theme,Renderer>::push(v33, src, v28);
  sniffnet::gui::pages::overview_page::sort_arrows(
    src,
    (unsigned __int8)v27[1667],
    sniffnet::gui::types::message::Message::ServiceSortSelection);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v37, v33, src);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v28, v35, v37);
  sniffnet::gui::styles::scrollbar::ScrollbarType::properties((char *)v33 + 4);
  LODWORD(v33[0]) = 2;
  iced_widget::scrollable::Scrollable<Message,Theme,Renderer>::with_direction(src, &v17, v33);
  iced_widget::scrollable::Scrollable<Message,Theme,Renderer>::width(v33, src);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v26, v28, v33);
  return core::ptr::drop_in_place<alloc::vec::Vec<(sniffnet::networking::types::service::Service,sniffnet::networking::types::data_info::DataInfo)>>(
           v22,
           v3);
}