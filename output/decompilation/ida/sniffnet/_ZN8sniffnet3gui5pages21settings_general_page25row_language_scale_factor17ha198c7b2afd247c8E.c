__int64 __fastcall sniffnet::gui::pages::settings_general_page::row_language_scale_factor(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        double a4)
{
  _QWORD v6[3]; // [rsp+8h] [rbp-100h] BYREF
  __int16 v7; // [rsp+20h] [rbp-E8h]
  __int16 v8; // [rsp+28h] [rbp-E0h]
  __int128 v9; // [rsp+30h] [rbp-D8h]
  int v10; // [rsp+40h] [rbp-C8h]
  __int16 v11; // [rsp+44h] [rbp-C4h]
  _BYTE v12[64]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v13[104]; // [rsp+A0h] [rbp-68h] BYREF

  v9 = 0LL;
  v10 = 0;
  v7 = 2;
  v8 = 2;
  v11 = 0;
  v6[0] = 0LL;
  v6[1] = 8LL;
  v6[2] = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v13, v6, 0LL);
  iced_widget::row::Row<Message,Theme,Renderer>::height(v12, v13, 100LL);
  sniffnet::gui::pages::settings_general_page::language_picklist(v6, a2, a3);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v13, v12, v6);
  iced_widget::rule::Rule<Theme>::vertical(v6, 25LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v12, v13, v6);
  sniffnet::gui::pages::settings_general_page::scale_factor_slider(v6, (unsigned __int8)a2, a3, a4);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v13, v12, v6);
  iced_widget::rule::Rule<Theme>::vertical(v6, 25LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v12, v13, v6);
  sniffnet::gui::pages::settings_general_page::need_help(v6, (unsigned __int8)a2, a3);
  return iced_widget::row::Row<Message,Theme,Renderer>::push(a1, v12, v6);
}