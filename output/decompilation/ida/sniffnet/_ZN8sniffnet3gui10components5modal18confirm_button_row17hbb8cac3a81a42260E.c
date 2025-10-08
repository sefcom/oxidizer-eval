__int64 __fastcall sniffnet::gui::components::modal::confirm_button_row(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  _BYTE v7[64]; // [rsp+0h] [rbp-358h] BYREF
  _QWORD src[3]; // [rsp+40h] [rbp-318h] BYREF
  __int16 v9; // [rsp+58h] [rbp-300h]
  __int16 v10; // [rsp+60h] [rbp-2F8h]
  __int128 v11; // [rsp+68h] [rbp-2F0h]
  int v12; // [rsp+78h] [rbp-2E0h]
  __int16 v13; // [rsp+7Ch] [rbp-2DCh]
  _BYTE dest[424]; // [rsp+1B0h] [rbp-1A8h] BYREF

  v11 = 0LL;
  v12 = 0;
  v9 = 2;
  v10 = 2;
  v13 = 0;
  src[0] = 0LL;
  src[1] = 8LL;
  src[2] = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::height(dest, src);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v7, dest, 1LL);
  sniffnet::translations::translations::yes_translation(src, a2);
  iced_core::widget::text::Text<Theme,Renderer>::font(dest, src, a3);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(src, dest);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(dest, src);
  iced_widget::button::Button<Message,Theme,Renderer>::new(src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, src);
  iced_widget::button::Button<Message,Theme,Renderer>::height(src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::width(dest, src);
  iced_widget::button::Button<Message,Theme,Renderer>::class(src, dest, 11LL);
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(dest, src, a4);
  return iced_widget::row::Row<Message,Theme,Renderer>::push(a1, v7, dest);
}