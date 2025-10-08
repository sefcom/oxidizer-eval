__int64 __fastcall sniffnet::gui::pages::settings_general_page::button_clear_mmdb(
        __int64 a1,
        void (__fastcall *a2)(_BYTE *, _QWORD *),
        __int64 a3,
        int a4)
{
  _QWORD v7[3]; // [rsp+8h] [rbp-4A0h] BYREF
  _BYTE dest[368]; // [rsp+20h] [rbp-488h] BYREF
  _BYTE v9[368]; // [rsp+190h] [rbp-318h] BYREF
  _BYTE src[424]; // [rsp+300h] [rbp-1A8h] BYREF

  iced_core::widget::text::Text<Theme,Renderer>::new(dest, asc_49790E, 2LL);
  iced_core::widget::text::Text<Theme,Renderer>::font(v9, dest, a3);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(dest, v9);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(v9, dest);
  iced_core::widget::text::Text<Theme,Renderer>::size(dest, v9, 15LL);
  iced_core::widget::text::Text<Theme,Renderer>::line_height(v9, dest, 1.0);
  iced_widget::button::Button<Message,Theme,Renderer>::new(dest, v9);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(v9, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::height(dest, v9);
  iced_widget::button::Button<Message,Theme,Renderer>::width(src, dest);
  if ( a4 )
  {
    memcpy(dest, src, sizeof(dest));
    v7[0] = 0LL;
    v7[1] = 1LL;
    v7[2] = 0LL;
    a2(v9, v7);
    iced_widget::button::Button<Message,Theme,Renderer>::on_press(src, dest, v9);
  }
  return iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(a1, src);
}