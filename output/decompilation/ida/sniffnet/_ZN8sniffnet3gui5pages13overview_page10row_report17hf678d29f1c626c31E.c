__int64 __fastcall sniffnet::gui::pages::overview_page::row_report(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+8h] [rbp-1F0h] BYREF
  __int16 v4; // [rsp+20h] [rbp-1D8h]
  __int16 v5; // [rsp+28h] [rbp-1D0h]
  __int128 v6; // [rsp+30h] [rbp-1C8h]
  int v7; // [rsp+40h] [rbp-1B8h]
  __int16 v8; // [rsp+44h] [rbp-1B4h]
  __int128 v9; // [rsp+60h] [rbp-198h] BYREF
  _BYTE v10[64]; // [rsp+78h] [rbp-180h] BYREF
  _BYTE v11[64]; // [rsp+B8h] [rbp-140h] BYREF
  _BYTE v12[88]; // [rsp+F8h] [rbp-100h] BYREF
  _BYTE v13[72]; // [rsp+150h] [rbp-A8h] BYREF
  _BYTE v14[96]; // [rsp+198h] [rbp-60h] BYREF

  sniffnet::gui::pages::overview_page::col_host(v13);
  sniffnet::gui::pages::overview_page::col_service(v14, a2);
  v6 = 0LL;
  v7 = 0;
  v4 = 2;
  v5 = 2;
  v8 = 0;
  v3[0] = 0LL;
  v3[1] = 8LL;
  v3[2] = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(v11, v3, 10LL);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v3, v13);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v12, v3, 327681LL);
  iced_widget::container::Container<Message,Theme,Renderer>::height(v3, v12, 0LL);
  v9 = xmmword_271B50;
  iced_widget::container::Container<Message,Theme,Renderer>::padding(v12, v3, &v9);
  iced_widget::container::Container<Message,Theme,Renderer>::class(v3, v12, 4LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v10, v11, v3);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v3, v14);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v12, v3, 131073LL);
  iced_widget::container::Container<Message,Theme,Renderer>::height(v3, v12, 0LL);
  iced_widget::container::Container<Message,Theme,Renderer>::padding(v12, v3, &v9);
  iced_widget::container::Container<Message,Theme,Renderer>::class(v3, v12, 4LL);
  return iced_widget::row::Row<Message,Theme,Renderer>::push(a1, v10, v3);
}