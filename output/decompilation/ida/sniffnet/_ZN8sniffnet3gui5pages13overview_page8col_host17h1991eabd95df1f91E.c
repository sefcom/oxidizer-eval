__int64 __fastcall sniffnet::gui::pages::overview_page::col_host(__int64 a1, _BYTE *a2)
{
  __int64 v2; // r12
  unsigned __int8 v3; // bp
  __int64 v4; // r15
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  char *v7; // r13
  __int128 *v8; // rbx
  __int128 *v9; // r12
  char *v10; // rbx
  unsigned __int8 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int8 v17; // [rsp+15h] [rbp-893h] BYREF
  int v18; // [rsp+16h] [rbp-892h]
  __int16 v19; // [rsp+1Ah] [rbp-88Eh]
  unsigned int v20; // [rsp+1Ch] [rbp-88Ch]
  __int128 v21; // [rsp+20h] [rbp-888h] BYREF
  __int128 v22; // [rsp+30h] [rbp-878h]
  __int128 v23; // [rsp+40h] [rbp-868h]
  __int128 v24; // [rsp+50h] [rbp-858h]
  __int64 v25; // [rsp+60h] [rbp-848h]
  char v26[8]; // [rsp+68h] [rbp-840h] BYREF
  __int64 v27; // [rsp+70h] [rbp-838h]
  unsigned __int64 v28; // [rsp+78h] [rbp-830h]
  unsigned __int64 v29; // [rsp+80h] [rbp-828h]
  __int64 v30; // [rsp+88h] [rbp-820h]
  _BYTE *v31; // [rsp+90h] [rbp-818h]
  __int64 v32; // [rsp+98h] [rbp-810h]
  _OWORD v33[4]; // [rsp+A0h] [rbp-808h] BYREF
  __int64 v34; // [rsp+E0h] [rbp-7C8h]
  _OWORD src[23]; // [rsp+F0h] [rbp-7B8h] BYREF
  _OWORD v36[2]; // [rsp+260h] [rbp-648h] BYREF
  _OWORD v37[5]; // [rsp+280h] [rbp-628h] BYREF
  _OWORD v38[4]; // [rsp+2D0h] [rbp-5D8h] BYREF
  __int64 v39; // [rsp+310h] [rbp-598h]
  __int128 v40; // [rsp+440h] [rbp-468h] BYREF
  __int64 v41; // [rsp+450h] [rbp-458h]
  __int16 v42; // [rsp+458h] [rbp-450h]
  int v43; // [rsp+45Ah] [rbp-44Eh]
  __int16 v44; // [rsp+45Eh] [rbp-44Ah]
  __int16 v45; // [rsp+460h] [rbp-448h]
  int v46; // [rsp+462h] [rbp-446h]
  __int16 v47; // [rsp+466h] [rbp-442h]
  __int128 v48; // [rsp+468h] [rbp-440h]
  __int64 v49; // [rsp+478h] [rbp-430h]
  __int16 v50; // [rsp+480h] [rbp-428h]
  unsigned __int64 v51; // [rsp+548h] [rbp-360h]
  _BYTE v52[64]; // [rsp+570h] [rbp-338h] BYREF
  _BYTE v53[64]; // [rsp+5B0h] [rbp-2F8h] BYREF
  char v54; // [rsp+5F0h] [rbp-2B8h] BYREF
  _BYTE v55[376]; // [rsp+630h] [rbp-278h] BYREF
  _BYTE dest[256]; // [rsp+7A8h] [rbp-100h] BYREF

  v2 = a1;
  memcpy(dest, a2 + 1208, 0xD0uLL);
  v3 = a2[1497];
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(src, dest);
  v36[1] = src[1];
  v36[0] = src[0];
  v17 = a2[455];
  *(_OWORD *)((char *)&src[2] + 8) = 0LL;
  *((_QWORD *)&src[3] + 1) = 0x7F80000000000000LL;
  WORD4(src[1]) = 2;
  LOWORD(src[2]) = 2;
  LOWORD(src[4]) = 0;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 8LL;
  *(_QWORD *)&src[1] = 0LL;
  v40 = 0x4130000000000000uLL;
  iced_widget::column::Column<Message,Theme,Renderer>::padding(v38, src, &v40);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v21, v38, 1LL);
  v31 = a2;
  sniffnet::report::get_report_entries::get_host_entries(v26, v31 + 800, v17, (unsigned __int8)v31[1666]);
  v4 = v27;
  v5 = v28;
  core::iter::traits::iterator::Iterator::reduce(src, v27, v27 + 192 * v28, &v17);
  if ( DWORD2(src[4]) == 1000000000 )
  {
    <sniffnet::networking::types::data_info::DataInfo as core::default::Default>::default(v37);
    v20 = v3;
    if ( !v5 )
      goto LABEL_9;
  }
  else
  {
    v37[4] = src[4];
    v37[3] = src[3];
    v37[2] = src[2];
    v37[1] = src[1];
    v37[0] = src[0];
    v20 = v3;
    if ( !v5 )
      goto LABEL_9;
  }
  v30 = a1;
  v29 = v5;
  v6 = 192 * v5;
  v7 = &v54;
  v8 = &v40;
  do
  {
    v32 = v6;
    v9 = v8;
    v10 = v7;
    v11 = *(_BYTE *)(v4 + 177);
    <sniffnet::networking::types::host::Host as core::clone::Clone>::clone(src, v4);
    sniffnet::gui::pages::overview_page::get_star_button(v55, v11, src);
    sniffnet::gui::pages::overview_page::host_bar(
      (unsigned int)v52,
      v4,
      v4 + 80,
      v17,
      (unsigned int)v37,
      (unsigned int)v36,
      v20);
    *(_OWORD *)((char *)&src[2] + 8) = 0LL;
    DWORD2(src[3]) = 0;
    WORD4(src[1]) = 2;
    HIWORD(src[1]) = v19;
    *(_DWORD *)((char *)&src[1] + 10) = v18;
    LOWORD(src[2]) = 2;
    WORD3(src[2]) = v19;
    *(_DWORD *)((char *)&src[2] + 2) = v18;
    WORD6(src[3]) = 0;
    *(_QWORD *)&src[0] = 0LL;
    *((_QWORD *)&src[0] + 1) = 8LL;
    *(_QWORD *)&src[1] = 0LL;
    iced_widget::row::Row<Message,Theme,Renderer>::align_y(v38, src, 1LL);
    iced_widget::row::Row<Message,Theme,Renderer>::spacing(src, v38, 5LL);
    iced_widget::row::Row<Message,Theme,Renderer>::push(v38, src, v55);
    v7 = v10;
    iced_widget::row::Row<Message,Theme,Renderer>::push(v10, v38, v52);
    v8 = v9;
    v34 = v25;
    v33[3] = v24;
    v33[2] = v23;
    v33[1] = v22;
    v33[0] = v21;
    iced_widget::button::Button<Message,Theme,Renderer>::new(src, v7);
    v40 = xmmword_26CC70;
    iced_widget::button::Button<Message,Theme,Renderer>::padding(v38, src);
    sniffnet::report::types::search_parameters::SearchParameters::new_host_search(src, v4);
    memcpy(v9, src, 0xE0uLL);
    v51 = 0x800000000000001FLL;
    iced_widget::button::Button<Message,Theme,Renderer>::on_press(src, v38, v9);
    iced_widget::button::Button<Message,Theme,Renderer>::class(v38, src, 10LL);
    iced_widget::column::Column<Message,Theme,Renderer>::push(src, v33, v38);
    v4 += 192LL;
    v21 = src[0];
    v22 = src[1];
    v23 = src[2];
    v24 = src[3];
    v25 = *(_QWORD *)&src[4];
    v6 = v32 - 192;
  }
  while ( v32 != 192 );
  v2 = v30;
  if ( v29 > 0x1D )
  {
    *(_QWORD *)&src[4] = v25;
    src[3] = v24;
    src[2] = v23;
    src[1] = v22;
    src[0] = v21;
    LOWORD(v38[0]) = 2;
    *(_DWORD *)((char *)v38 + 2) = v18;
    WORD3(v38[0]) = v19;
    WORD4(v38[0]) = 3;
    HIDWORD(v38[0]) = 1103626240;
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v40, src, v38);
    v12 = sniffnet::translations::translations_2::only_top_30_items_translation(v20);
    iced_core::widget::text::Text<Theme,Renderer>::new(src, v12, v13);
    iced_core::widget::text::Text<Theme,Renderer>::font(v38, src, v36);
    iced_core::widget::text::Text<Theme,Renderer>::align_x(src, v38);
    iced_widget::column::Column<Message,Theme,Renderer>::push(v38, &v40, src);
    v21 = v38[0];
    v22 = v38[1];
    v23 = v38[2];
    v24 = v38[3];
    v25 = v39;
  }
LABEL_9:
  v49 = 0x7F80000000000000LL;
  v48 = 0LL;
  v42 = 2;
  v43 = v18;
  v44 = v19;
  v45 = 2;
  v46 = v18;
  v47 = v19;
  v50 = 0;
  *(_QWORD *)&v40 = 0LL;
  *((_QWORD *)&v40 + 1) = 8LL;
  v41 = 0LL;
  *(_OWORD *)((char *)&src[2] + 8) = 0LL;
  DWORD2(src[3]) = 0;
  WORD4(src[1]) = 2;
  *(_DWORD *)((char *)&src[1] + 10) = v18;
  HIWORD(src[1]) = v19;
  LOWORD(src[2]) = 2;
  *(_DWORD *)((char *)&src[2] + 2) = v18;
  WORD3(src[2]) = v19;
  WORD6(src[3]) = 0;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 8LL;
  *(_QWORD *)&src[1] = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::height(v38, src, 45LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v33, v38, 1LL);
  v14 = sniffnet::translations::translations_2::host_translation(v20);
  iced_core::widget::text::Text<Theme,Renderer>::new(src, v14, v15);
  iced_core::widget::text::Text<Theme,Renderer>::font(v38, src, v36);
  iced_core::widget::text::Text<Theme,Renderer>::class(src, v38, 3LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(v38, src, 19.9);
  iced_widget::row::Row<Message,Theme,Renderer>::push(src, v33, v38);
  LOWORD(v33[0]) = 0;
  WORD4(v33[0]) = 2;
  *(_DWORD *)((char *)v33 + 10) = v18;
  HIWORD(v33[0]) = v19;
  iced_widget::row::Row<Message,Theme,Renderer>::push(v38, src, v33);
  sniffnet::gui::pages::overview_page::sort_arrows(
    src,
    (unsigned __int8)v31[1666],
    sniffnet::gui::types::message::Message::HostSortSelection);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v53, v38, src);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v33, &v40, v53);
  sniffnet::gui::styles::scrollbar::ScrollbarType::properties((char *)v38 + 4);
  LODWORD(v38[0]) = 2;
  iced_widget::scrollable::Scrollable<Message,Theme,Renderer>::with_direction(src, &v21, v38);
  iced_widget::scrollable::Scrollable<Message,Theme,Renderer>::width(v38, src);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v2, v33, v38);
  return core::ptr::drop_in_place<alloc::vec::Vec<(sniffnet::networking::types::host::Host,sniffnet::networking::types::data_info_host::DataInfoHost)>>(v26);
}