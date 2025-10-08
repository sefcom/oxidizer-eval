__int64 __fastcall sniffnet::gui::pages::settings_notifications_page::settings_notifications_page(
        __int64 a1,
        __int64 a2)
{
  unsigned __int8 v2; // bp
  __int64 v3; // rax
  char v5; // [rsp+9h] [rbp-3FFh]
  unsigned __int8 v6; // [rsp+Ah] [rbp-3FEh]
  unsigned __int8 v7; // [rsp+Bh] [rbp-3FDh]
  unsigned __int8 v8; // [rsp+Ch] [rbp-3FCh]
  unsigned __int8 v9; // [rsp+Dh] [rbp-3FBh]
  __int16 v10; // [rsp+Eh] [rbp-3FAh]
  int v11; // [rsp+10h] [rbp-3F8h]
  char v12; // [rsp+14h] [rbp-3F4h]
  __int64 v13; // [rsp+18h] [rbp-3F0h]
  int v14; // [rsp+22h] [rbp-3E6h]
  __int16 v15; // [rsp+26h] [rbp-3E2h]
  _BYTE v16[31]; // [rsp+28h] [rbp-3E0h] BYREF
  char v17; // [rsp+47h] [rbp-3C1h]
  _OWORD v18[13]; // [rsp+70h] [rbp-398h] BYREF
  __int64 v19; // [rsp+140h] [rbp-2C8h]
  _OWORD v20[7]; // [rsp+148h] [rbp-2C0h] BYREF
  __int64 v21; // [rsp+1B8h] [rbp-250h] BYREF
  int v22; // [rsp+1C0h] [rbp-248h]
  int v23; // [rsp+1C4h] [rbp-244h]
  __int64 v24; // [rsp+1C8h] [rbp-240h]
  _OWORD v25[2]; // [rsp+1D0h] [rbp-238h] BYREF
  __int128 v26; // [rsp+1F0h] [rbp-218h]
  _OWORD v27[4]; // [rsp+208h] [rbp-200h] BYREF
  __int64 v28; // [rsp+248h] [rbp-1C0h]
  _OWORD v29[2]; // [rsp+250h] [rbp-1B8h] BYREF
  _BYTE v30[72]; // [rsp+278h] [rbp-190h] BYREF
  _BYTE v31[72]; // [rsp+2C0h] [rbp-148h] BYREF
  _BYTE dest[256]; // [rsp+308h] [rbp-100h] BYREF

  v19 = a1;
  memcpy(dest, (const void *)(a2 + 1208), 0xD0uLL);
  v9 = *(_BYTE *)(a2 + 1496);
  v2 = *(_BYTE *)(a2 + 1497);
  v8 = *(_BYTE *)(a2 + 1202);
  v13 = *(_QWORD *)(a2 + 1168);
  v26 = *(_OWORD *)(a2 + 1176);
  v10 = *(_WORD *)(a2 + 1192);
  v5 = *(_BYTE *)(a2 + 1194);
  v12 = *(_BYTE *)(a2 + 1199);
  v11 = *(_DWORD *)(a2 + 1195);
  v7 = *(_BYTE *)(a2 + 1200);
  v6 = *(_BYTE *)(a2 + 1201);
  memcpy(v18, (const void *)(a2 + 1208), sizeof(v18));
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v20, v18);
  v25[0] = v20[0];
  v25[1] = v20[1];
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v18, dest);
  v29[1] = v18[3];
  v29[0] = v18[2];
  v3 = *(_QWORD *)(a2 + 1688);
  if ( v3 != 2 )
  {
    v5 = *(_BYTE *)(a2 + 1714);
    v26 = *(_OWORD *)(a2 + 1696);
    v13 = v3;
  }
  *(_OWORD *)((char *)&v18[2] + 8) = 0LL;
  *((_QWORD *)&v18[3] + 1) = 0x7F80000000000000LL;
  WORD4(v18[1]) = 2;
  LOWORD(v18[2]) = 2;
  LOWORD(v18[4]) = 0;
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 8LL;
  *(_QWORD *)&v18[1] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::width(v20, v18, 0LL);
  sniffnet::gui::pages::settings_notifications_page::settings_header(v18, v25, v29, v9, v2);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v16, v20, v18);
  sniffnet::gui::components::tab::get_settings_tabs(v20, 0, (__int64)v25, v2);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v18, v16, v20);
  LOWORD(v20[0]) = 2;
  WORD4(v20[0]) = 3;
  HIDWORD(v20[0]) = 1097859072;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v16, v18, v20);
  sniffnet::translations::translations::notifications_title_translation(v18, v2);
  iced_core::widget::text::Text<Theme,Renderer>::font(v20, v18, v25);
  iced_core::widget::text::Text<Theme,Renderer>::class(v18, v20, 4LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(v20, v18, 18.299999);
  iced_core::widget::text::Text<Theme,Renderer>::width(v18, v20, 0LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(v20, v18);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v18, v16, v20);
  LOWORD(v20[0]) = 2;
  WORD4(v20[0]) = 3;
  HIDWORD(v20[0]) = 1084227584;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v27, v18, v20);
  *(_OWORD *)((char *)&v18[2] + 8) = 0LL;
  *((_QWORD *)&v18[3] + 1) = 0x7F80000000000000LL;
  WORD4(v18[1]) = 2;
  LOWORD(v18[2]) = 2;
  LOWORD(v18[4]) = 0;
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 8LL;
  *(_QWORD *)&v18[1] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::padding(v20, v18, 5LL);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(v18, v20, 10LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(v20, v18, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::width(v16, v20, 0LL);
  sniffnet::gui::pages::settings_notifications_page::volume_slider(v18, v2, v25, v8);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v30, v16, v18);
  *((_QWORD *)&v18[3] + 1) = 0x7F80000000000000LL;
  *(_OWORD *)((char *)&v18[2] + 8) = 0LL;
  WORD4(v18[1]) = 2;
  *(_DWORD *)((char *)&v18[1] + 10) = v14;
  HIWORD(v18[1]) = v15;
  LOWORD(v18[2]) = 2;
  *(_DWORD *)((char *)&v18[2] + 2) = v14;
  WORD3(v18[2]) = v15;
  LOWORD(v18[4]) = 0;
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 8LL;
  *(_QWORD *)&v18[1] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(v20, v18, 10LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(v18, v20, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::width(v20, v18, 0LL);
  *(_QWORD *)v16 = v13;
  *(_OWORD *)&v16[8] = v26;
  *(_WORD *)&v16[24] = v10;
  v16[26] = v5;
  *(_DWORD *)&v16[27] = v11;
  v17 = v12;
  sniffnet::gui::pages::settings_notifications_page::get_data_notify(v18, v16, v2, v25);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v16, v20, v18);
  sniffnet::gui::pages::settings_notifications_page::get_favorite_notify(v18, v7, v6, v2, v25);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v20, v16, v18);
  sniffnet::gui::styles::scrollbar::ScrollbarType::properties(&v21);
  v23 = 1092616192;
  *(_QWORD *)&v16[20] = v24;
  *(_QWORD *)&v16[4] = v21;
  *(_DWORD *)&v16[12] = v22;
  *(_DWORD *)&v16[16] = 1092616192;
  *(_DWORD *)v16 = 2;
  iced_widget::scrollable::Scrollable<Message,Theme,Renderer>::with_direction(v18, v20, v16);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v31, v30, v18);
  *(_QWORD *)&v18[4] = v28;
  v18[3] = v27[3];
  v18[2] = v27[2];
  v18[1] = v27[1];
  v18[0] = v27[0];
  iced_widget::column::Column<Message,Theme,Renderer>::push(v27, v18, v31);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v18, v27);
  iced_widget::container::Container<Message,Theme,Renderer>::height(v20, v18, 400LL);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v18, v20, 800LL);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(v19, v18, 10LL);
}