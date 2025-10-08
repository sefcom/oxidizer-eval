__int64 __fastcall sniffnet::gui::pages::overview_page::overview_page(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int128 v4; // [rsp+0h] [rbp-4E8h] BYREF
  __int128 v5; // [rsp+10h] [rbp-4D8h]
  __m256i v6; // [rsp+20h] [rbp-4C8h]
  __int64 v7; // [rsp+40h] [rbp-4A8h]
  __int64 v8; // [rsp+48h] [rbp-4A0h]
  __int128 v9; // [rsp+50h] [rbp-498h] BYREF
  __int128 v10; // [rsp+60h] [rbp-488h]
  __m256i v11; // [rsp+70h] [rbp-478h]
  __int64 v12; // [rsp+90h] [rbp-458h]
  __int128 v13; // [rsp+A0h] [rbp-448h] BYREF
  __int128 v14; // [rsp+B0h] [rbp-438h]
  __m256i v15; // [rsp+C0h] [rbp-428h] BYREF
  __int64 v16; // [rsp+E0h] [rbp-408h]
  _BYTE v17[208]; // [rsp+110h] [rbp-3D8h] BYREF
  _QWORD v18[3]; // [rsp+1E8h] [rbp-300h] BYREF
  __int16 v19; // [rsp+200h] [rbp-2E8h]
  __int16 v20; // [rsp+208h] [rbp-2E0h]
  __int128 v21; // [rsp+210h] [rbp-2D8h]
  __int64 v22; // [rsp+220h] [rbp-2C8h]
  __int16 v23; // [rsp+228h] [rbp-2C0h]
  _OWORD v24[2]; // [rsp+230h] [rbp-2B8h] BYREF
  _OWORD v25[2]; // [rsp+250h] [rbp-298h] BYREF
  _BYTE v26[64]; // [rsp+270h] [rbp-278h] BYREF
  _BYTE v27[72]; // [rsp+2B0h] [rbp-238h] BYREF
  _BYTE v28[88]; // [rsp+2F8h] [rbp-1F0h] BYREF
  _BYTE v29[88]; // [rsp+350h] [rbp-198h] BYREF
  _OWORD v30[4]; // [rsp+3A8h] [rbp-140h] BYREF
  _BYTE dest[256]; // [rsp+3E8h] [rbp-100h] BYREF

  v8 = a1;
  memcpy(dest, (const void *)(a2 + 1208), 0xD0uLL);
  v2 = *(unsigned __int8 *)(a2 + 1497);
  memcpy(v17, (const void *)(a2 + 1208), sizeof(v17));
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(&v13, v17);
  v24[0] = v13;
  v24[1] = v14;
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v17, dest);
  v25[1] = *(_OWORD *)&v17[48];
  v25[0] = *(_OWORD *)&v17[32];
  *(_OWORD *)&v6.m256i_u64[1] = 0LL;
  v6.m256i_i64[3] = 0x7F80000000000000LL;
  WORD4(v5) = 2;
  v6.m256i_i16[0] = 2;
  LOWORD(v7) = 0;
  *(_QWORD *)&v4 = 0LL;
  *((_QWORD *)&v4 + 1) = 8LL;
  *(_QWORD *)&v5 = 0LL;
  *(_OWORD *)&v17[40] = 0LL;
  *(_QWORD *)&v17[56] = 0x7F80000000000000LL;
  *(_WORD *)&v17[24] = 2;
  *(_WORD *)&v17[32] = 2;
  *(_WORD *)&v17[64] = 0;
  *(_QWORD *)v17 = 0LL;
  *(_QWORD *)&v17[8] = 8LL;
  *(_QWORD *)&v17[16] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::height(&v9, v17);
  sniffnet::gui::components::tab::get_pages_tabs(v30, 0, (int)v24, (int)v25, v2, *(_QWORD *)(a2 + 2376));
  *(_QWORD *)&v17[64] = v12;
  *(__m256i *)&v17[32] = v11;
  *(_OWORD *)&v17[16] = v10;
  *(_OWORD *)v17 = v9;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v13, v17, v30);
  v9 = v13;
  v10 = v14;
  v11 = v15;
  v12 = v16;
  sniffnet::gui::pages::overview_page::container_chart(v28, a2, v24);
  sniffnet::gui::pages::overview_page::col_info(v29, a2);
  sniffnet::gui::pages::overview_page::row_report(v26, a2);
  *(_QWORD *)&v17[64] = v7;
  *(__m256i *)&v17[32] = v6;
  *(_OWORD *)&v17[16] = v5;
  *(_OWORD *)v17 = v4;
  iced_widget::column::Column<Message,Theme,Renderer>::width(&v13, v17, 0LL);
  iced_widget::column::Column<Message,Theme,Renderer>::padding(v17, &v13, 10LL);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v13, v17, 10LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(v17, &v13, 1LL);
  memset(&v15.m256i_u64[1], 0, 22);
  WORD4(v14) = 2;
  v15.m256i_i16[0] = 2;
  *(_QWORD *)&v13 = 0LL;
  *((_QWORD *)&v13 + 1) = 8LL;
  *(_QWORD *)&v14 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::height(v18, &v13, 280LL);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v13, v18, 10LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v18, &v13, v29);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v27, v18, v28);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v13, v17, v27);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v17, &v13, v26);
  v4 = *(_OWORD *)v17;
  v5 = *(_OWORD *)&v17[16];
  v6 = *(__m256i *)&v17[32];
  v7 = *(_QWORD *)&v17[64];
  v21 = 0LL;
  v22 = 0x7F80000000000000LL;
  v19 = 2;
  v20 = 2;
  v23 = 0;
  v18[0] = 0LL;
  v18[1] = 8LL;
  v18[2] = 0LL;
  *(_QWORD *)&v17[64] = v12;
  *(__m256i *)&v17[32] = v11;
  *(_OWORD *)&v17[16] = v10;
  *(_OWORD *)v17 = v9;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v13, v17, &v4);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v27, v18, &v13);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v17, v27);
  return iced_widget::container::Container<Message,Theme,Renderer>::height(v8, v17, 0LL);
}