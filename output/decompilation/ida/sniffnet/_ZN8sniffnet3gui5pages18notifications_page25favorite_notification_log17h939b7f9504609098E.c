__int64 __fastcall sniffnet::gui::pages::notifications_page::favorite_notification_log(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6)
{
  unsigned __int8 v7; // bp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v11; // [rsp+8h] [rbp-240h] BYREF
  __int64 v12; // [rsp+10h] [rbp-238h]
  __int64 v13; // [rsp+18h] [rbp-230h]
  __int16 v14; // [rsp+20h] [rbp-228h]
  __int16 v15; // [rsp+28h] [rbp-220h]
  __int128 v16; // [rsp+30h] [rbp-218h]
  __int64 v17; // [rsp+40h] [rbp-208h]
  __int16 v18; // [rsp+48h] [rbp-200h]
  _BYTE v19[96]; // [rsp+68h] [rbp-1E0h] BYREF
  _BYTE v20[72]; // [rsp+C8h] [rbp-180h] BYREF
  _BYTE v21[72]; // [rsp+110h] [rbp-138h] BYREF
  _BYTE v22[64]; // [rsp+158h] [rbp-F0h] BYREF
  _BYTE v23[64]; // [rsp+198h] [rbp-B0h] BYREF
  _BYTE v24[112]; // [rsp+1D8h] [rbp-70h] BYREF

  v7 = a5;
  sniffnet::gui::pages::overview_page::host_bar((unsigned int)v22, a2, a2 + 80, a4, a3, a6, a5);
  v16 = 0LL;
  LODWORD(v17) = 0;
  v14 = 2;
  v15 = 2;
  WORD2(v17) = 0;
  v11 = 0LL;
  v12 = 8LL;
  v13 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(v19, &v11, 30LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v20, v19, 1LL);
  sniffnet::utils::types::icon::Icon::to_text(&v11, 36LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(v19, &v11, 80LL);
  iced_core::widget::text::Text<Theme,Renderer>::line_height(&v11, v19, 1.0);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v23, v20, &v11);
  v16 = 0LL;
  v17 = 0x7F80000000000000LL;
  v14 = 2;
  v15 = 2;
  v18 = 0;
  v11 = 0LL;
  v12 = 8LL;
  v13 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::width(v19, &v11);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(v20, v19, 7LL);
  v16 = 0LL;
  LODWORD(v17) = 0;
  v14 = 2;
  v15 = 2;
  WORD2(v17) = 0;
  v11 = 0LL;
  v12 = 8LL;
  v13 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(v19, &v11, 8LL);
  sniffnet::utils::types::icon::Icon::to_text(&v11, 9LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v21, v19, &v11);
  <alloc::string::String as core::clone::Clone>::clone(v19, a2 + 192);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v11, v19);
  iced_core::widget::text::Text<Theme,Renderer>::font(v19, &v11, a6);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v11, v21, v19);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v21, v20, &v11);
  v8 = sniffnet::translations::translations::favorite_transmitted_translation(v7);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v11, v8, v9);
  iced_core::widget::text::Text<Theme,Renderer>::class(v19, &v11, 3LL);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v11, v19, a6);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v19, v21, &v11);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v11, v23, v19);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v24, &v11, v22);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&v11, v24);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v19, &v11, 0LL);
  iced_widget::container::Container<Message,Theme,Renderer>::padding(&v11, v19, 15LL);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, &v11, 4LL);
}