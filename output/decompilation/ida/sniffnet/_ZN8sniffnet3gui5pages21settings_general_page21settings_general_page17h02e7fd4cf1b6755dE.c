__int64 __fastcall sniffnet::gui::pages::settings_general_page::settings_general_page(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  unsigned int v4; // [rsp+4h] [rbp-324h]
  _OWORD v5[2]; // [rsp+10h] [rbp-318h] BYREF
  _OWORD v6[4]; // [rsp+38h] [rbp-2F0h] BYREF
  _OWORD v7[7]; // [rsp+80h] [rbp-2A8h] BYREF
  _OWORD v8[13]; // [rsp+F0h] [rbp-238h] BYREF
  _OWORD v9[2]; // [rsp+1C0h] [rbp-168h] BYREF
  _BYTE v10[72]; // [rsp+1E0h] [rbp-148h] BYREF
  _BYTE dest[256]; // [rsp+228h] [rbp-100h] BYREF

  memcpy(dest, (const void *)(a2 + 1208), 0xD0uLL);
  v2 = *(_BYTE *)(a2 + 1497);
  v4 = *(_DWORD *)(a2 + 1496);
  memcpy(v8, (const void *)(a2 + 1208), sizeof(v8));
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v7, v8);
  v5[0] = v7[0];
  v5[1] = v7[1];
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v8, dest);
  v9[1] = v8[3];
  v9[0] = v8[2];
  *(_OWORD *)((char *)&v8[2] + 8) = 0LL;
  *((_QWORD *)&v8[3] + 1) = 0x7F80000000000000LL;
  WORD4(v8[1]) = 2;
  LOWORD(v8[2]) = 2;
  LOWORD(v8[4]) = 0;
  *(_QWORD *)&v8[0] = 0LL;
  *((_QWORD *)&v8[0] + 1) = 8LL;
  *(_QWORD *)&v8[1] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(v7, v8, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::width(v6, v7, 0LL);
  sniffnet::gui::pages::settings_notifications_page::settings_header(v8, v5, v9, v4, v2);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v7, v6, v8);
  sniffnet::gui::components::tab::get_settings_tabs(v6, 2, (__int64)v5, v2);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v8, v7, v6);
  LOWORD(v6[0]) = 2;
  WORD4(v6[0]) = 3;
  HIDWORD(v6[0]) = 1092616192;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v7, v8, v6);
  sniffnet::gui::pages::settings_general_page::column_all_general_setting(v8, a2, v5);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v10, v7, v8);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v8, v10);
  iced_widget::container::Container<Message,Theme,Renderer>::height(v7, v8, 400LL);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v8, v7, 800LL);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, v8, 10LL);
}