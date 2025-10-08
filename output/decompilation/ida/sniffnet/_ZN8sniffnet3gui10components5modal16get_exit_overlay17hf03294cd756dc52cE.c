__int64 __fastcall sniffnet::gui::components::modal::get_exit_overlay(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  int v10; // eax
  __int64 v11; // rdx
  __int64 v13; // [rsp+8h] [rbp-1C0h] BYREF
  __int64 v14; // [rsp+10h] [rbp-1B8h]
  __int64 v15; // [rsp+18h] [rbp-1B0h]
  __int16 v16; // [rsp+20h] [rbp-1A8h]
  __int16 v17; // [rsp+28h] [rbp-1A0h]
  __int128 v18; // [rsp+30h] [rbp-198h]
  __int64 v19; // [rsp+40h] [rbp-188h]
  __int16 v20; // [rsp+48h] [rbp-180h]
  _BYTE v21[96]; // [rsp+68h] [rbp-160h] BYREF
  _BYTE v22[72]; // [rsp+C8h] [rbp-100h] BYREF
  _BYTE v23[64]; // [rsp+110h] [rbp-B8h] BYREF
  _BYTE v24[120]; // [rsp+150h] [rbp-78h] BYREF

  sniffnet::gui::components::modal::confirm_button_row(v23, a6, a4, a2);
  v18 = 0LL;
  v19 = 0x7F80000000000000LL;
  v16 = 2;
  v17 = 2;
  v20 = 0;
  v13 = 0LL;
  v14 = 8LL;
  v15 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(v21, &v13, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::width(v22, v21, 0LL);
  v10 = sniffnet::translations::translations::quit_analysis_translation(a6);
  sniffnet::gui::components::modal::get_modal_header((unsigned int)&v13, a4, a5, a3, a6, v10, v11);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v21, v22, &v13);
  LOWORD(v13) = 2;
  LOWORD(v14) = 3;
  HIDWORD(v14) = 1101004800;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v22, v21, &v13);
  sniffnet::translations::translations::ask_quit_translation(&v13, (unsigned __int8)a6);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(v21, &v13);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v13, v21, a4);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v21, v22, &v13);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v24, v21, v23);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&v13, v24);
  iced_widget::container::Container<Message,Theme,Renderer>::height(v21, &v13, 160LL);
  iced_widget::container::Container<Message,Theme,Renderer>::width(&v13, v21, 450LL);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, &v13, 10LL);
}