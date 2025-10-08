__int64 __fastcall sniffnet::gui::pages::inspect_page::get_button_change_page(__int64 a1, int a2)
{
  _BYTE v3[264]; // [rsp+0h] [rbp-308h] BYREF
  unsigned __int64 v4; // [rsp+108h] [rbp-200h]
  _BYTE dest[408]; // [rsp+170h] [rbp-198h] BYREF

  sniffnet::utils::types::icon::Icon::to_text(v3, (unsigned int)(a2 + 1));
  iced_core::widget::text::Text<Theme,Renderer>::size(dest, v3, 8.0);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(v3, dest);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(dest, v3);
  iced_widget::button::Button<Message,Theme,Renderer>::new(v3, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, v3);
  iced_widget::button::Button<Message,Theme,Renderer>::height(v3, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::width(dest, v3);
  v3[0] = a2;
  v4 = 0x8000000000000020LL;
  return iced_widget::button::Button<Message,Theme,Renderer>::on_press(a1, dest, v3);
}