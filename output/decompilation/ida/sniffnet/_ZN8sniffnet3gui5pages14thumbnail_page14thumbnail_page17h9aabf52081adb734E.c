__int64 __fastcall sniffnet::gui::pages::thumbnail_page::thumbnail_page(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned int v8; // ebp
  __int64 v9; // r15
  __int128 v10; // [rsp+0h] [rbp-378h]
  char v11; // [rsp+18h] [rbp-360h]
  int v12; // [rsp+2Ah] [rbp-34Eh]
  __int16 v13; // [rsp+2Eh] [rbp-34Ah]
  __int128 v14; // [rsp+30h] [rbp-348h] BYREF
  __int128 v15; // [rsp+40h] [rbp-338h]
  _BYTE v16[24]; // [rsp+50h] [rbp-328h]
  __int64 v17; // [rsp+68h] [rbp-310h]
  __int16 v18; // [rsp+70h] [rbp-308h]
  __int128 v19; // [rsp+A0h] [rbp-2D8h]
  __int64 v20; // [rsp+B8h] [rbp-2C0h]
  __int64 v21; // [rsp+C0h] [rbp-2B8h]
  __int64 v22; // [rsp+C8h] [rbp-2B0h]
  __int64 v23; // [rsp+D0h] [rbp-2A8h]
  __int64 v24; // [rsp+D8h] [rbp-2A0h]
  __int128 v25[2]; // [rsp+E0h] [rbp-298h] BYREF
  _WORD v26[48]; // [rsp+108h] [rbp-270h] BYREF
  _BYTE v27[72]; // [rsp+168h] [rbp-210h] BYREF
  _BYTE v28[64]; // [rsp+1B0h] [rbp-1C8h] BYREF
  _BYTE v29[64]; // [rsp+1F0h] [rbp-188h] BYREF
  _BYTE v30[72]; // [rsp+230h] [rbp-148h] BYREF
  _BYTE dest[256]; // [rsp+278h] [rbp-100h] BYREF

  memcpy(dest, (const void *)(a2 + 1208), 0xD0uLL);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(&v14, dest);
  v25[1] = v15;
  v25[0] = v14;
  if ( (*(_OWORD *)(a2 + 960) ^ (0LL - *(_OWORD *)(a2 + 976))) == (unsigned __int128)0LL )
  {
    *(_OWORD *)&v16[8] = 0LL;
    v17 = 0x7F80000000000000LL;
    WORD4(v15) = 2;
    *(_WORD *)v16 = 2;
    v18 = 0;
    *(_QWORD *)&v14 = 0LL;
    *((_QWORD *)&v14 + 1) = 8LL;
    *(_QWORD *)&v15 = 0LL;
    v26[0] = 2;
    v26[4] = 0;
    iced_widget::column::Column<Message,Theme,Renderer>::push(v27, &v14, v26);
    iced_core::widget::text::Text<Theme,Renderer>::new(&v14, *(_QWORD *)(a2 + 472), *(_QWORD *)(a2 + 480));
    iced_core::widget::text::Text<Theme,Renderer>::font(v26, &v14, v25);
    iced_core::widget::text::Text<Theme,Renderer>::size(&v14, v26, 50LL);
    iced_widget::column::Column<Message,Theme,Renderer>::push(v26, v27, &v14);
    LOWORD(v14) = 2;
    DWORD2(v14) = 131073;
    iced_widget::column::Column<Message,Theme,Renderer>::push(v27, v26, &v14);
    iced_widget::container::Container<Message,Theme,Renderer>::new(&v14, v27);
    iced_widget::container::Container<Message,Theme,Renderer>::width(v26, &v14, 0LL);
    return iced_widget::container::Container<Message,Theme,Renderer>::align_x(a1, v26);
  }
  else
  {
    v20 = a1;
    v24 = a2 + 16;
    v3 = *(unsigned __int8 *)(a2 + 455);
    v21 = a2 + 800;
    sniffnet::networking::types::info_traffic::InfoTraffic::get_thumbnail_data(&v14, a2 + 800, v3);
    v4 = *((_QWORD *)&v14 + 1);
    v22 = v14;
    v23 = *((_QWORD *)&v15 + 1);
    v5 = v15;
    v19 = *(_OWORD *)v16;
    *(_OWORD *)&v16[8] = 0LL;
    LODWORD(v17) = 0;
    WORD4(v15) = 2;
    *(_WORD *)v16 = 2;
    WORD2(v17) = 0;
    *(_QWORD *)&v14 = 0LL;
    *((_QWORD *)&v14 + 1) = 8LL;
    *(_QWORD *)&v15 = 0LL;
    iced_widget::row::Row<Message,Theme,Renderer>::padding(v26, &v14);
    iced_widget::row::Row<Message,Theme,Renderer>::height(&v14, v26);
    iced_widget::row::Row<Message,Theme,Renderer>::align_y(v26, &v14, 1LL);
    v11 = *(_BYTE *)(a2 + 2436);
    v10 = v19;
    LODWORD(v19) = v3;
    sniffnet::chart::types::donut_chart::donut_chart((__int64)&v14, v3, v22, v4, v5, v23, v10, v25, v11);
    iced_widget::row::Row<Message,Theme,Renderer>::push(v27, v26, &v14);
    v6 = sniffnet::chart::types::traffic_chart::TrafficChart::view(v24);
    iced_widget::container::Container<Message,Theme,Renderer>::new(&v14, v6, &off_2DF4368);
    iced_widget::container::Container<Message,Theme,Renderer>::height(v26, &v14, 0LL);
    iced_widget::container::Container<Message,Theme,Renderer>::width(&v14, v26, 131073LL);
    iced_widget::row::Row<Message,Theme,Renderer>::push(v28, v27, &v14);
    *(_OWORD *)&v16[8] = 0LL;
    LODWORD(v17) = 0;
    WORD4(v15) = 2;
    *(_DWORD *)((char *)&v15 + 10) = v12;
    HIWORD(v15) = v13;
    *(_WORD *)v16 = 2;
    *(_DWORD *)&v16[2] = v12;
    *(_WORD *)&v16[6] = v13;
    WORD2(v17) = 0;
    *(_QWORD *)&v14 = 0LL;
    *((_QWORD *)&v14 + 1) = 8LL;
    *(_QWORD *)&v15 = 0LL;
    iced_widget::row::Row<Message,Theme,Renderer>::padding(v26, &v14, 5LL);
    iced_widget::row::Row<Message,Theme,Renderer>::height(&v14, v26);
    iced_widget::row::Row<Message,Theme,Renderer>::align_y(v26, &v14, 0LL);
    v7 = v21;
    v8 = v19;
    sniffnet::gui::pages::thumbnail_page::host_col(&v14, v21, (unsigned int)v19, v25, *(unsigned __int8 *)(a2 + 1666));
    iced_widget::row::Row<Message,Theme,Renderer>::push(v27, v26, &v14);
    v9 = v20;
    iced_widget::rule::Rule<Theme>::vertical(&v14, 10LL);
    iced_widget::row::Row<Message,Theme,Renderer>::push(v26, v27, &v14);
    sniffnet::gui::pages::thumbnail_page::service_col(&v14, v7, v8, v25, *(unsigned __int8 *)(a2 + 1667));
    iced_widget::row::Row<Message,Theme,Renderer>::push(v29, v26, &v14);
    v17 = 0x7F80000000000000LL;
    *(_OWORD *)&v16[8] = 0LL;
    WORD4(v15) = 2;
    *(_DWORD *)((char *)&v15 + 10) = v12;
    HIWORD(v15) = v13;
    *(_WORD *)v16 = 2;
    *(_DWORD *)&v16[2] = v12;
    *(_WORD *)&v16[6] = v13;
    v18 = 0;
    *(_QWORD *)&v14 = 0LL;
    *((_QWORD *)&v14 + 1) = 8LL;
    *(_QWORD *)&v15 = 0LL;
    iced_widget::column::Column<Message,Theme,Renderer>::push(v26, &v14, v28);
    iced_widget::column::Column<Message,Theme,Renderer>::push(v30, v26, v29);
    return iced_widget::container::Container<Message,Theme,Renderer>::new(v9, v30);
  }
}