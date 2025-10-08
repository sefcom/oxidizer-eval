__int64 __fastcall sniffnet::gui::components::modal::get_clear_all_overlay(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  int v8; // eax
  __int64 v9; // rdx
  _BYTE v11[96]; // [rsp+8h] [rbp-290h] BYREF
  _BYTE v12[72]; // [rsp+68h] [rbp-230h] BYREF
  __int64 v13; // [rsp+B0h] [rbp-1E8h] BYREF
  __int64 v14; // [rsp+B8h] [rbp-1E0h]
  __int64 v15; // [rsp+C0h] [rbp-1D8h]
  __int16 v16; // [rsp+C8h] [rbp-1D0h]
  __int16 v17; // [rsp+D0h] [rbp-1C8h]
  __int128 v18; // [rsp+D8h] [rbp-1C0h]
  __int64 v19; // [rsp+E8h] [rbp-1B0h]
  __int16 v20; // [rsp+F0h] [rbp-1A8h]
  unsigned __int64 v21; // [rsp+1B8h] [rbp-E0h]
  _BYTE v22[64]; // [rsp+1E0h] [rbp-B8h] BYREF
  _BYTE v23[120]; // [rsp+220h] [rbp-78h] BYREF

  v21 = 0x8000000000000018LL;
  sniffnet::gui::components::modal::confirm_button_row(v22, a5, a3, &v13);
  v18 = 0LL;
  v19 = 0x7F80000000000000LL;
  v16 = 2;
  v17 = 2;
  v20 = 0;
  v13 = 0LL;
  v14 = 8LL;
  v15 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(v11, &v13, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::width(v12, v11, 0LL);
  v8 = sniffnet::translations::translations::clear_all_translation(a5);
  sniffnet::gui::components::modal::get_modal_header((unsigned int)&v13, a3, a4, a2, a5, v8, v9);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v11, v12, &v13);
  LOWORD(v13) = 2;
  LOWORD(v14) = 3;
  HIDWORD(v14) = 1101004800;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v12, v11, &v13);
  sniffnet::translations::translations::ask_clear_all_translation(&v13, (unsigned __int8)a5);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(v11, &v13);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v13, v11, a3);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v11, v12, &v13);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v23, v11, v22);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&v13, v23);
  iced_widget::container::Container<Message,Theme,Renderer>::height(v11, &v13, 160LL);
  iced_widget::container::Container<Message,Theme,Renderer>::width(&v13, v11, 450LL);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, &v13, 10LL);
}