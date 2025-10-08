__int64 __fastcall sniffnet::gui::pages::initial_page::get_col_import_pcap(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int128 dest; // [rsp+10h] [rbp-488h] BYREF
  __int64 v10; // [rsp+20h] [rbp-478h]
  __int16 v11; // [rsp+28h] [rbp-470h]
  __int16 v12; // [rsp+30h] [rbp-468h]
  __int128 v13; // [rsp+38h] [rbp-460h]
  __int64 v14; // [rsp+48h] [rbp-450h]
  __int16 v15; // [rsp+50h] [rbp-448h]
  _QWORD src[3]; // [rsp+180h] [rbp-318h] BYREF
  __int16 v17; // [rsp+198h] [rbp-300h]
  __int16 v18; // [rsp+1A0h] [rbp-2F8h]
  __int128 v19; // [rsp+1A8h] [rbp-2F0h]
  __int64 v20; // [rsp+1B8h] [rbp-2E0h]
  __int16 v21; // [rsp+1C0h] [rbp-2D8h]
  __int128 v22; // [rsp+2F0h] [rbp-1A8h] BYREF
  __int64 v23; // [rsp+300h] [rbp-198h]
  unsigned __int64 v24; // [rsp+3F8h] [rbp-A0h]
  _BYTE v25[120]; // [rsp+420h] [rbp-78h] BYREF

  v13 = 0LL;
  LODWORD(v14) = 0;
  v11 = 2;
  v12 = 2;
  WORD2(v14) = 0;
  *(_QWORD *)&dest = 0LL;
  *((_QWORD *)&dest + 1) = 8LL;
  v10 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(&v22, &dest, 1LL);
  sniffnet::utils::formatted_strings::get_path_termination_string(src, *(_QWORD *)(a5 + 8), *(_QWORD *)(a5 + 16), 25LL);
  iced_core::widget::text::Text<Theme,Renderer>::new(&dest, src);
  iced_core::widget::text::Text<Theme,Renderer>::font(src, &dest, a3);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&dest, &v22, src);
  <alloc::string::String as core::clone::Clone>::clone(&v22, a5);
  sniffnet::gui::components::button::button_open_file(
    (__int64)src,
    &v22,
    3u,
    a2,
    a3,
    1,
    (__int64)sniffnet::gui::types::message::Message::SetPcapImport);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v22, &dest, src);
  v13 = 0LL;
  v14 = 0x7F80000000000000LL;
  v11 = 2;
  v12 = 2;
  v15 = 0;
  *(_QWORD *)&dest = 0LL;
  *((_QWORD *)&dest + 1) = 8LL;
  v10 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::width(src, &dest, 0LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&dest, src, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(src, &dest, 5LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v25, src, &v22);
  iced_widget::button::Button<Message,Theme,Renderer>::new(&dest, v25);
  iced_widget::button::Button<Message,Theme,Renderer>::width(src, &dest);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(&dest, src);
  iced_widget::button::Button<Message,Theme,Renderer>::class(src, &dest, (a4 == 0x8000000000000000LL) | 4u);
  <alloc::string::String as core::clone::Clone>::clone(&dest, a5);
  v23 = v10;
  v22 = dest;
  v24 = 0x8000000000000035LL;
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(&dest, src, &v22);
  iced_widget::container::Container<Message,Theme,Renderer>::new(src, &dest);
  v22 = 0x4150000000000000uLL;
  iced_widget::container::Container<Message,Theme,Renderer>::padding(&dest, src, &v22);
  v19 = 0LL;
  v20 = 0x7F80000000000000LL;
  v17 = 2;
  v18 = 2;
  v21 = 0;
  src[0] = 0LL;
  src[1] = 8LL;
  src[2] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v22, src, 5LL);
  return iced_widget::column::Column<Message,Theme,Renderer>::push(a1, &v22, &dest);
}