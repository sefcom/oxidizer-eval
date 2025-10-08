__int64 __fastcall sniffnet::gui::pages::overview_page::sort_arrows(
        __int64 a1,
        unsigned __int8 a2,
        void (__fastcall *a3)(_BYTE *, _QWORD))
{
  unsigned __int8 v4; // al
  _BYTE v6[368]; // [rsp+0h] [rbp-438h] BYREF
  _BYTE v7[368]; // [rsp+170h] [rbp-2C8h] BYREF
  _BYTE v8[344]; // [rsp+2E0h] [rbp-158h] BYREF

  sniffnet::report::types::sort_type::SortType::icon(v6);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(v8, v6);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(v6, v8);
  iced_widget::button::Button<Message,Theme,Renderer>::new(v7, v6);
  if ( a2 > 1u )
  {
    iced_widget::button::Button<Message,Theme,Renderer>::class(v6, v7, 13LL);
    v4 = 1;
  }
  else
  {
    iced_widget::button::Button<Message,Theme,Renderer>::class(v6, v7, 14LL);
    v4 = 2 * (a2 == 0);
  }
  a3(v8, v4);
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(v7, v6, v8);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v6, v7);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v7, v6, 60.0);
  return iced_widget::container::Container<Message,Theme,Renderer>::align_x(a1, v7);
}