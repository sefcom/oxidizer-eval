__int64 __fastcall sniffnet::gui::pages::inspect_page::button_clear_filter(__int64 a1, const void *a2, __int64 a3)
{
  _BYTE v5[264]; // [rsp+0h] [rbp-308h] BYREF
  unsigned __int64 v6; // [rsp+108h] [rbp-200h]
  _BYTE dest[408]; // [rsp+170h] [rbp-198h] BYREF

  iced_core::widget::text::Text<Theme,Renderer>::new(v5, asc_49790E, 2LL);
  iced_core::widget::text::Text<Theme,Renderer>::font(dest, v5, a3);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(v5, dest);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(dest, v5);
  iced_core::widget::text::Text<Theme,Renderer>::size(v5, dest, 15LL);
  iced_core::widget::text::Text<Theme,Renderer>::line_height(dest, v5, 1.0);
  iced_widget::button::Button<Message,Theme,Renderer>::new(v5, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, v5);
  iced_widget::button::Button<Message,Theme,Renderer>::height(v5, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::width(dest, v5);
  memcpy(v5, a2, 0xE0uLL);
  v6 = 0x800000000000001FLL;
  return iced_widget::button::Button<Message,Theme,Renderer>::on_press(a1, dest, v5);
}