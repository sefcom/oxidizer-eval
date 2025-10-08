__int64 __fastcall sniffnet::gui::pages::inspect_page::sort_arrows(__int64 a1, unsigned __int8 a2)
{
  char v2; // al
  _BYTE v4[368]; // [rsp+0h] [rbp-438h] BYREF
  _BYTE v5[368]; // [rsp+170h] [rbp-2C8h] BYREF
  _BYTE v6[264]; // [rsp+2E0h] [rbp-158h] BYREF
  unsigned __int64 v7; // [rsp+3E8h] [rbp-50h]

  sniffnet::report::types::sort_type::SortType::icon(v4);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(v6, v4);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(v4, v6);
  iced_widget::button::Button<Message,Theme,Renderer>::new(v5, v4);
  if ( a2 > 1u )
  {
    iced_widget::button::Button<Message,Theme,Renderer>::class(v4, v5, 13LL);
    v2 = 1;
  }
  else
  {
    iced_widget::button::Button<Message,Theme,Renderer>::class(v4, v5, 14LL);
    v2 = 2 * (a2 == 0);
  }
  v6[0] = v2;
  v7 = 0x8000000000000007LL;
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(v5, v4, v6);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v4, v5);
  iced_widget::container::Container<Message,Theme,Renderer>::align_y(v5, v4);
  return iced_widget::container::Container<Message,Theme,Renderer>::height(a1, v5, 0LL);
}