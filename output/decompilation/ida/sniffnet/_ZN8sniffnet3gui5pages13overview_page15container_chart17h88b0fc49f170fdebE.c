__int64 __fastcall sniffnet::gui::pages::overview_page::container_chart(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v8; // [rsp+8h] [rbp-1B0h]
  __int64 v9; // [rsp+10h] [rbp-1A8h]
  __int16 v10; // [rsp+18h] [rbp-1A0h]
  __int16 v11; // [rsp+20h] [rbp-198h]
  __int128 v12; // [rsp+28h] [rbp-190h]
  __int64 v13; // [rsp+38h] [rbp-180h]
  __int16 v14; // [rsp+40h] [rbp-178h]
  _BYTE v15[96]; // [rsp+60h] [rbp-158h] BYREF
  _BYTE v16[72]; // [rsp+C0h] [rbp-F8h] BYREF
  _BYTE v17[64]; // [rsp+108h] [rbp-B0h] BYREF
  _BYTE v18[112]; // [rsp+148h] [rbp-70h] BYREF

  v4 = *(unsigned __int8 *)(a2 + 1497);
  v12 = 0LL;
  v13 = 0x7F80000000000000LL;
  v10 = 2;
  v11 = 2;
  v14 = 0;
  v7 = 0LL;
  v8 = 8LL;
  v9 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(v16, &v7, 1LL);
  v12 = 0LL;
  LODWORD(v13) = 0;
  v10 = 2;
  v11 = 2;
  WORD2(v13) = 0;
  v7 = 0LL;
  v8 = 8LL;
  v9 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::padding(v15, &v7, 10LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v18, v15, 1LL);
  sniffnet::translations::translations::traffic_rate_translation(&v7, v4);
  iced_core::widget::text::Text<Theme,Renderer>::font(v15, &v7, a3);
  iced_core::widget::text::Text<Theme,Renderer>::class(&v7, v15, 3LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(v15, &v7, 19.9);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v17, v18, v15);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v7, v16, v17);
  v5 = sniffnet::chart::types::traffic_chart::TrafficChart::view(a2 + 16);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v15, &v7, v5, &off_2DF4368);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&v7, v15);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v15, &v7, 0LL);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(&v7, v15);
  iced_widget::container::Container<Message,Theme,Renderer>::align_y(v15, &v7);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, v15, 4LL);
}