__int64 __fastcall sniffnet::gui::components::footer::get_button_feedback(__int64 a1, __int64 a2)
{
  _OWORD v3[16]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v4; // [rsp+108h] [rbp-330h]
  _BYTE src[368]; // [rsp+130h] [rbp-308h] BYREF
  _BYTE dest[408]; // [rsp+2A0h] [rbp-198h] BYREF

  sniffnet::utils::types::icon::Icon::to_text(src, 30LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(dest, src, 15LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(src, dest);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(dest, src);
  iced_core::widget::text::Text<Theme,Renderer>::line_height(v3, dest, 1.0);
  iced_widget::button::Button<Message,Theme,Renderer>::new(src, v3);
  v3[0] = 0x40000000u;
  iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, src);
  iced_widget::button::Button<Message,Theme,Renderer>::height(src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::width(dest, src);
  LOBYTE(v3[0]) = 4;
  v4 = 0x800000000000000BLL;
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(src, dest, v3);
  sniffnet::gui::components::button::row_open_link_tooltip((__int64)dest, (__int64)aRoadmap, 7LL, a2);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(v3, src, dest, 0LL);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::gap(src, v3, 10LL);
  return iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::class(a1, src, 5LL);
}