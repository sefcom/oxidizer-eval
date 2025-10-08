__int64 __fastcall sniffnet::gui::components::button::button_hide(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE v9[368]; // [rsp+0h] [rbp-378h] BYREF
  _BYTE dest[376]; // [rsp+170h] [rbp-208h] BYREF
  _BYTE v11[144]; // [rsp+2E8h] [rbp-90h] BYREF

  iced_core::widget::text::Text<Theme,Renderer>::new(v9, asc_49790E, 2LL);
  iced_core::widget::text::Text<Theme,Renderer>::font(dest, v9, a4);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(v9, dest);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(dest, v9);
  iced_core::widget::text::Text<Theme,Renderer>::size(v9, dest, 15LL);
  iced_core::widget::text::Text<Theme,Renderer>::line_height(dest, v9, 1.0);
  iced_widget::button::Button<Message,Theme,Renderer>::new(v9, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, v9);
  iced_widget::button::Button<Message,Theme,Renderer>::height(v9, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::width(dest, v9);
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(v9, dest, a2);
  v6 = sniffnet::translations::translations::hide_translation(a3);
  iced_core::widget::text::Text<Theme,Renderer>::new(dest, v6, v7);
  iced_core::widget::text::Text<Theme,Renderer>::font(v11, dest, a4);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(dest, v9, v11, 3LL);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::gap(v9, dest, 5LL);
  return iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::class(a1, v9, 5LL);
}