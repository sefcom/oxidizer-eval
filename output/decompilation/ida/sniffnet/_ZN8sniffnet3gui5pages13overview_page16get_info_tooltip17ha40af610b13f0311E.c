__int64 __fastcall sniffnet::gui::pages::overview_page::get_info_tooltip(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v5[96]; // [rsp+8h] [rbp-140h] BYREF
  _BYTE v6[96]; // [rsp+68h] [rbp-E0h] BYREF
  _BYTE v7[128]; // [rsp+C8h] [rbp-80h] BYREF

  iced_core::widget::text::Text<Theme,Renderer>::new(v5, aI_0, 1LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(v6, v5, 14.3);
  iced_core::widget::text::Text<Theme,Renderer>::font(v5, v6, a3);
  iced_core::widget::text::Text<Theme,Renderer>::line_height(v6, v5, 1.0);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v5, v6);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(v6, v5);
  iced_widget::container::Container<Message,Theme,Renderer>::align_y(v5, v6);
  iced_widget::container::Container<Message,Theme,Renderer>::height(v6, v5, 20LL);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v5, v6, 20LL);
  iced_widget::container::Container<Message,Theme,Renderer>::class(v7, v5, 7LL);
  iced_core::widget::text::Text<Theme,Renderer>::new(v5, a2);
  iced_core::widget::text::Text<Theme,Renderer>::font(v6, v5, a3);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(v5, v7, v6);
  return iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::class(a1, v5, 5LL);
}