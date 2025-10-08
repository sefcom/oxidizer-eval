__int64 __fastcall sniffnet::gui::pages::notifications_page::body_no_notifications_set(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  _QWORD v5[3]; // [rsp+0h] [rbp-138h] BYREF
  __int16 v6; // [rsp+18h] [rbp-120h]
  __int16 v7; // [rsp+20h] [rbp-118h]
  __int128 v8; // [rsp+28h] [rbp-110h]
  __int64 v9; // [rsp+38h] [rbp-100h]
  __int16 v10; // [rsp+40h] [rbp-F8h]
  __int16 v11; // [rsp+60h] [rbp-D8h] BYREF
  int v12; // [rsp+68h] [rbp-D0h]
  _BYTE v13[120]; // [rsp+C0h] [rbp-78h] BYREF

  v8 = 0LL;
  v9 = 0x7F80000000000000LL;
  v6 = 2;
  v7 = 2;
  v10 = 0;
  v5[0] = 0LL;
  v5[1] = 8LL;
  v5[2] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::padding(&v11, v5, 5LL);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(v5, &v11, 5LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v11, v5, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::width(v5, &v11, 0LL);
  v11 = 2;
  LOWORD(v12) = 0;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v13, v5, &v11);
  sniffnet::translations::translations::no_notifications_set_translation(v5, a3);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(&v11, v5);
  iced_core::widget::text::Text<Theme,Renderer>::font(v5, &v11, a2);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v11, v13, v5);
  sniffnet::gui::components::header::get_button_settings((__int64)v13, a2, a3, 0);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v5, &v11, v13);
  v11 = 2;
  v12 = 131073;
  return iced_widget::column::Column<Message,Theme,Renderer>::push(a1, v5, &v11);
}