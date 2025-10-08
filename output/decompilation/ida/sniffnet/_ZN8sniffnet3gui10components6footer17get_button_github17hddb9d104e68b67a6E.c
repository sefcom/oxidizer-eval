__int64 __fastcall sniffnet::gui::components::footer::get_button_github(__int64 a1, __int64 a2)
{
  _BYTE v3[264]; // [rsp+0h] [rbp-478h] BYREF
  unsigned __int64 v4; // [rsp+108h] [rbp-370h]
  _BYTE src[368]; // [rsp+170h] [rbp-308h] BYREF
  _BYTE dest[408]; // [rsp+2E0h] [rbp-198h] BYREF

  sniffnet::utils::types::icon::Icon::to_text(src, 17LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(v3, src, 26LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(src, v3);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(v3, src);
  iced_core::widget::text::Text<Theme,Renderer>::line_height(dest, v3, 1.0);
  iced_widget::button::Button<Message,Theme,Renderer>::new(src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::height(v3, src);
  iced_widget::button::Button<Message,Theme,Renderer>::width(dest, v3);
  v3[0] = 0;
  v4 = 0x800000000000000BLL;
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(src, dest, v3);
  sniffnet::gui::components::button::row_open_link_tooltip((__int64)v3, (__int64)aGithub, 6LL, a2);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(dest, src, v3, 0LL);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::gap(src, dest, 5LL);
  return iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::class(a1, src, 5LL);
}