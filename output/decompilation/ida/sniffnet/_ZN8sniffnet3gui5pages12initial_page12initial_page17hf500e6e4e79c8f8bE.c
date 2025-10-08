__int64 __fastcall sniffnet::gui::pages::initial_page::initial_page(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bp
  unsigned __int8 v4; // r13
  unsigned __int8 v6; // [rsp+9h] [rbp-4BFh]
  int v7; // [rsp+Ah] [rbp-4BEh]
  __int16 v8; // [rsp+Eh] [rbp-4BAh]
  __int16 v9[2]; // [rsp+10h] [rbp-4B8h] BYREF
  int v10; // [rsp+14h] [rbp-4B4h]
  __int16 v11; // [rsp+18h] [rbp-4B0h]
  int v12; // [rsp+1Ah] [rbp-4AEh]
  __int16 v13; // [rsp+1Eh] [rbp-4AAh]
  __int64 v14; // [rsp+20h] [rbp-4A8h]
  _WORD v15[8]; // [rsp+28h] [rbp-4A0h] BYREF
  __int16 v16; // [rsp+38h] [rbp-490h] BYREF
  __int16 v17; // [rsp+40h] [rbp-488h]
  int v18; // [rsp+44h] [rbp-484h]
  _OWORD v19[23]; // [rsp+80h] [rbp-448h] BYREF
  _OWORD v20[7]; // [rsp+1F0h] [rbp-2D8h] BYREF
  _OWORD v21[2]; // [rsp+260h] [rbp-268h] BYREF
  _OWORD v22[2]; // [rsp+280h] [rbp-248h] BYREF
  _BYTE v23[72]; // [rsp+2A8h] [rbp-220h] BYREF
  _BYTE v24[72]; // [rsp+2F0h] [rbp-1D8h] BYREF
  _BYTE v25[72]; // [rsp+338h] [rbp-190h] BYREF
  _BYTE v26[72]; // [rsp+380h] [rbp-148h] BYREF
  _BYTE dest[256]; // [rsp+3C8h] [rbp-100h] BYREF

  v14 = a1;
  memcpy(dest, (const void *)(a2 + 1208), 0xD0uLL);
  v6 = *(_BYTE *)(a2 + 1496);
  v3 = *(_BYTE *)(a2 + 1497);
  memcpy(v19, (const void *)(a2 + 1208), 0xD0uLL);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v20, v19);
  v21[0] = v20[0];
  v21[1] = v20[1];
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v19, dest);
  v22[1] = v19[3];
  v22[0] = v19[2];
  sniffnet::gui::pages::initial_page::get_col_data_source(v23, a2, v21, v3);
  *(_OWORD *)((char *)&v19[2] + 8) = 0LL;
  *((_QWORD *)&v19[3] + 1) = 0x7F80000000000000LL;
  WORD4(v19[1]) = 2;
  LOWORD(v19[2]) = 2;
  LOWORD(v19[4]) = 0;
  *(_QWORD *)&v19[0] = 0LL;
  *((_QWORD *)&v19[0] + 1) = 8LL;
  *(_QWORD *)&v19[1] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(v20, v19, 10LL);
  sniffnet::gui::pages::initial_page::get_filters_group(v19, a2 + 1528, v21, v3);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v16, v20, v19);
  sniffnet::gui::pages::initial_page::get_export_pcap_group_maybe(
    v19,
    *(unsigned __int8 *)(a2 + 1664),
    a2 + 1560,
    v3,
    v21);
  iced_widget::column::Column<Message,Theme,Renderer>::push_maybe(v24, &v16, v19);
  v4 = *(_BYTE *)(a2 + 1664) ^ !__OFSUB__(0LL, *(_QWORD *)(a2 + 720));
  *(_OWORD *)((char *)&v19[2] + 8) = 0LL;
  *((_QWORD *)&v19[3] + 1) = 0x7F80000000000000LL;
  WORD4(v19[1]) = 2;
  LOWORD(v19[2]) = 2;
  LOWORD(v19[4]) = 0;
  *(_QWORD *)&v19[0] = 0LL;
  *((_QWORD *)&v19[0] + 1) = 8LL;
  *(_QWORD *)&v19[1] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::width(v20, v19, 65537LL);
  iced_widget::column::Column<Message,Theme,Renderer>::padding(v19, v20, 10LL);
  v16 = 2;
  v17 = 3;
  v18 = 1117257728;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v20, v19, &v16);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v19, v20, v24);
  v15[0] = 2;
  v15[4] = 0;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v20, v19, v15);
  sniffnet::gui::pages::initial_page::button_start(v19, v22, v3, v6, v4);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v16, v20, v19);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v25, &v16, v15);
  *(_OWORD *)((char *)&v19[2] + 8) = 0LL;
  *((_QWORD *)&v19[3] + 1) = 0x7F80000000000000LL;
  WORD4(v19[1]) = 2;
  LOWORD(v19[2]) = 2;
  LOWORD(v19[4]) = 0;
  *(_QWORD *)&v19[0] = 0LL;
  *((_QWORD *)&v19[0] + 1) = 8LL;
  *(_QWORD *)&v19[1] = 0LL;
  v16 = 2;
  v17 = 3;
  v18 = 1084227584;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v20, v19, &v16);
  *(_OWORD *)((char *)&v19[2] + 8) = 0LL;
  DWORD2(v19[3]) = 0;
  WORD4(v19[1]) = 2;
  *(_DWORD *)((char *)&v19[1] + 10) = v7;
  HIWORD(v19[1]) = v8;
  LOWORD(v19[2]) = 2;
  *(_DWORD *)((char *)&v19[2] + 2) = v7;
  WORD3(v19[2]) = v8;
  WORD6(v19[3]) = 0;
  *(_QWORD *)&v19[0] = 0LL;
  *((_QWORD *)&v19[0] + 1) = 8LL;
  *(_QWORD *)&v19[1] = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v16, v19, v23);
  v9[0] = 3;
  v10 = 1097859072;
  v11 = 2;
  v12 = v7;
  v13 = v8;
  iced_widget::row::Row<Message,Theme,Renderer>::push(v19, &v16, v9);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v16, v19, v25);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v26, v20, &v16);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v19, v26);
  return iced_widget::container::Container<Message,Theme,Renderer>::height(v14, v19, 0LL);
}