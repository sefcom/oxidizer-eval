__int64 __fastcall sniffnet::gui::pages::overview_page::col_info(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // bp
  __int128 v4; // [rsp+0h] [rbp-408h] BYREF
  __int128 v5; // [rsp+10h] [rbp-3F8h]
  __m256i v6; // [rsp+20h] [rbp-3E8h] BYREF
  __int128 v7; // [rsp+40h] [rbp-3C8h]
  __int64 v8; // [rsp+50h] [rbp-3B8h]
  _OWORD v9[2]; // [rsp+80h] [rbp-388h] BYREF
  int v10; // [rsp+A8h] [rbp-360h] BYREF
  _BYTE v11[116]; // [rsp+ACh] [rbp-35Ch] BYREF
  _OWORD v12[4]; // [rsp+120h] [rbp-2E8h] BYREF
  _OWORD v13[2]; // [rsp+168h] [rbp-2A0h] BYREF
  __m256i v14; // [rsp+188h] [rbp-280h]
  __int64 v15; // [rsp+1A8h] [rbp-260h]
  _OWORD v16[2]; // [rsp+1B0h] [rbp-258h] BYREF
  __m256i v17; // [rsp+1D0h] [rbp-238h]
  __int128 v18; // [rsp+1F0h] [rbp-218h]
  __int64 v19; // [rsp+200h] [rbp-208h]
  _BYTE v20[64]; // [rsp+208h] [rbp-200h] BYREF
  _BYTE v21[64]; // [rsp+248h] [rbp-1C0h] BYREF
  _BYTE v22[72]; // [rsp+288h] [rbp-180h] BYREF
  _BYTE v23[72]; // [rsp+2D0h] [rbp-138h] BYREF
  _BYTE dest[240]; // [rsp+318h] [rbp-F0h] BYREF

  memcpy(dest, a2 + 1208, 0xD0uLL);
  v2 = a2[1497];
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(&v4, dest);
  v9[1] = v5;
  v9[0] = v4;
  sniffnet::gui::pages::overview_page::col_device(v22, v2, v9, a2 + 720, a2 + 1528);
  sniffnet::gui::pages::overview_page::col_data_representation(v13, v2, v9, a2[455]);
  sniffnet::gui::pages::overview_page::donut_row(v16, v2, v9, a2);
  *(_OWORD *)&v6.m256i_u64[1] = 0LL;
  v6.m256i_i64[3] = 0x7F80000000000000LL;
  WORD4(v5) = 2;
  v6.m256i_i16[0] = 2;
  LOWORD(v7) = 0;
  *(_QWORD *)&v4 = 0LL;
  *((_QWORD *)&v4 + 1) = 8LL;
  *(_QWORD *)&v5 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v10, &v4, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::padding(v12, &v10, 655365LL);
  memset(&v6.m256i_u64[1], 0, 22);
  WORD4(v5) = 2;
  v6.m256i_i16[0] = 2;
  *(_QWORD *)&v4 = 0LL;
  *((_QWORD *)&v4 + 1) = 8LL;
  *(_QWORD *)&v5 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::height(v21, &v4);
  sniffnet::gui::styles::scrollbar::ScrollbarType::properties(v11);
  v10 = 3;
  iced_widget::scrollable::Scrollable<Message,Theme,Renderer>::with_direction(&v4, v22, &v10);
  iced_widget::scrollable::Scrollable<Message,Theme,Renderer>::width(&v10, &v4);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v20, v21, &v10);
  iced_widget::rule::Rule<Theme>::vertical(&v10, 25LL);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&v4, &v10);
  iced_widget::container::Container<Message,Theme,Renderer>::height(&v10, &v4, 2LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v21, v20, &v10);
  *(_QWORD *)&v7 = v15;
  v6 = v14;
  v5 = v13[1];
  v4 = v13[0];
  iced_widget::column::Column<Message,Theme,Renderer>::width(&v10, &v4, 0LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v20, v21, &v10);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v4, v12, v20);
  iced_widget::rule::Rule<Theme>::horizontal(&v10, 15LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v12, &v4, &v10);
  v8 = v19;
  v7 = v18;
  v6 = v17;
  v5 = v16[1];
  v4 = v16[0];
  iced_widget::container::Container<Message,Theme,Renderer>::height(&v10, &v4, 0LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v23, v12, &v10);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&v4, v23);
  iced_widget::container::Container<Message,Theme,Renderer>::width(&v10, &v4, 400LL);
  v12[0] = xmmword_26E270;
  iced_widget::container::Container<Message,Theme,Renderer>::padding(&v4, &v10, v12);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(&v10, &v4);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, &v10, 4LL);
}