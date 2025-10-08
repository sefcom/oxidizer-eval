__int64 __fastcall sniffnet::gui::pages::inspect_page::inspect_page(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bp
  __int32 v4; // [rsp+Ah] [rbp-49Eh]
  __int16 v5; // [rsp+Eh] [rbp-49Ah]
  __int128 v6; // [rsp+10h] [rbp-498h] BYREF
  __int128 v7; // [rsp+20h] [rbp-488h]
  __m256i v8; // [rsp+30h] [rbp-478h]
  __int64 v9; // [rsp+50h] [rbp-458h]
  _BYTE v10[208]; // [rsp+60h] [rbp-448h] BYREF
  __int64 v11; // [rsp+138h] [rbp-370h]
  __int128 v12; // [rsp+140h] [rbp-368h] BYREF
  __int128 v13; // [rsp+150h] [rbp-358h]
  __int128 v14; // [rsp+160h] [rbp-348h]
  __int128 v15; // [rsp+170h] [rbp-338h]
  __int64 v16; // [rsp+180h] [rbp-328h]
  __int128 v17; // [rsp+190h] [rbp-318h] BYREF
  __int128 v18; // [rsp+1A0h] [rbp-308h]
  __int128 v19; // [rsp+1B0h] [rbp-2F8h]
  __int128 v20; // [rsp+1C0h] [rbp-2E8h]
  __int64 v21; // [rsp+1D0h] [rbp-2D8h]
  __int128 v22; // [rsp+200h] [rbp-2A8h] BYREF
  __int128 v23; // [rsp+210h] [rbp-298h]
  __m256i v24; // [rsp+220h] [rbp-288h]
  __int64 v25; // [rsp+240h] [rbp-268h]
  _OWORD v26[2]; // [rsp+250h] [rbp-258h] BYREF
  _OWORD v27[2]; // [rsp+270h] [rbp-238h] BYREF
  _BYTE v28[72]; // [rsp+290h] [rbp-218h] BYREF
  _BYTE v29[72]; // [rsp+2D8h] [rbp-1D0h] BYREF
  _BYTE v30[72]; // [rsp+320h] [rbp-188h] BYREF
  _OWORD v31[4]; // [rsp+368h] [rbp-140h] BYREF
  _BYTE dest[256]; // [rsp+3A8h] [rbp-100h] BYREF

  v11 = a1;
  memcpy(dest, (const void *)(a2 + 1208), 0xD0uLL);
  v2 = *(_BYTE *)(a2 + 1497);
  memcpy(v10, (const void *)(a2 + 1208), sizeof(v10));
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(&v17, v10);
  v26[0] = v17;
  v26[1] = v18;
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v10, dest);
  v27[1] = *(_OWORD *)&v10[48];
  v27[0] = *(_OWORD *)&v10[32];
  *(_OWORD *)&v10[40] = 0LL;
  *(_QWORD *)&v10[56] = 0x7F80000000000000LL;
  *(_WORD *)&v10[24] = 2;
  *(_WORD *)&v10[32] = 2;
  *(_WORD *)&v10[64] = 0;
  *(_QWORD *)v10 = 0LL;
  *(_QWORD *)&v10[8] = 8LL;
  *(_QWORD *)&v10[16] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::width(&v17, v10, 0LL);
  iced_widget::column::Column<Message,Theme,Renderer>::padding(v10, &v17, 10LL);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v17, v10, 10LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v22, &v17, 1LL);
  *(_OWORD *)&v10[40] = 0LL;
  *(_QWORD *)&v10[56] = 0x7F80000000000000LL;
  *(_WORD *)&v10[24] = 2;
  *(_WORD *)&v10[32] = 2;
  *(_WORD *)&v10[64] = 0;
  *(_QWORD *)v10 = 0LL;
  *(_QWORD *)&v10[8] = 8LL;
  *(_QWORD *)&v10[16] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::height(&v12, v10);
  sniffnet::gui::components::tab::get_pages_tabs(v31, 1, (int)v26, (int)v27, v2, *(_QWORD *)(a2 + 2376));
  *(_QWORD *)&v10[64] = v16;
  *(_OWORD *)&v10[48] = v15;
  *(_OWORD *)&v10[32] = v14;
  *(_OWORD *)&v10[16] = v13;
  *(_OWORD *)v10 = v12;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v17, v10, v31);
  v12 = v17;
  v13 = v18;
  v14 = v19;
  v15 = v20;
  v16 = v21;
  sniffnet::gui::pages::inspect_page::report(v29, a2);
  *(_OWORD *)&v10[40] = 0LL;
  *(_QWORD *)&v10[56] = 0x7F80000000000000LL;
  *(_WORD *)&v10[24] = 2;
  *(_WORD *)&v10[32] = 2;
  *(_WORD *)&v10[64] = 0;
  *(_QWORD *)v10 = 0LL;
  *(_QWORD *)&v10[8] = 8LL;
  *(_QWORD *)&v10[16] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::height(&v17, v10);
  iced_widget::column::Column<Message,Theme,Renderer>::width(v10, &v17, 0LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v17, v10, 0LL);
  sniffnet::gui::pages::inspect_page::report_header_row(
    &v6,
    v2,
    a2 + 496,
    v26,
    *(unsigned __int8 *)(a2 + 1665),
    *(unsigned __int8 *)(a2 + 455));
  iced_widget::column::Column<Message,Theme,Renderer>::push(v10, &v17, &v6);
  LOWORD(v6) = 2;
  WORD4(v6) = 3;
  HIDWORD(v6) = 1082130432;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v17, v10, &v6);
  iced_widget::rule::Rule<Theme>::horizontal(&v6, 5LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v10, &v17, &v6);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v30, v10, v29);
  v9 = v25;
  v8 = v24;
  v7 = v23;
  v6 = v22;
  sniffnet::gui::pages::inspect_page::host_filters_col(&v17, a2 + 496, a2 + 1872, v26, v2);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v10, &v17);
  iced_widget::container::Container<Message,Theme,Renderer>::padding(&v17, v10, 10LL);
  iced_widget::container::Container<Message,Theme,Renderer>::class(v10, &v17, 4LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v28, &v6, v10);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v10, v30);
  iced_widget::container::Container<Message,Theme,Renderer>::align_y(&v17, v10);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(v10, &v17);
  v6 = xmmword_26D3F0;
  iced_widget::container::Container<Message,Theme,Renderer>::padding(&v17, v10, &v6);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v10, &v17, 947LL);
  iced_widget::container::Container<Message,Theme,Renderer>::class(&v17, v10, 4LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v10, v28, &v17);
  v22 = *(_OWORD *)v10;
  v23 = *(_OWORD *)&v10[16];
  v24 = *(__m256i *)&v10[32];
  v25 = *(_QWORD *)&v10[64];
  v8.m256i_i64[3] = 0x7F80000000000000LL;
  *(_OWORD *)&v8.m256i_u64[1] = 0LL;
  WORD4(v7) = 2;
  *(_DWORD *)((char *)&v7 + 10) = v4;
  HIWORD(v7) = v5;
  v8.m256i_i16[0] = 2;
  *(__int32 *)((char *)v8.m256i_i32 + 2) = v4;
  v8.m256i_i16[3] = v5;
  LOWORD(v9) = 0;
  *(_QWORD *)&v6 = 0LL;
  *((_QWORD *)&v6 + 1) = 8LL;
  *(_QWORD *)&v7 = 0LL;
  *(_QWORD *)&v10[64] = v16;
  *(_OWORD *)&v10[48] = v15;
  *(_OWORD *)&v10[32] = v14;
  *(_OWORD *)&v10[16] = v13;
  *(_OWORD *)v10 = v12;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v17, v10, &v22);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v28, &v6, &v17);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v10, v28);
  return iced_widget::container::Container<Message,Theme,Renderer>::height(v11, v10, 0LL);
}