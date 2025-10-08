__int64 __fastcall sniffnet::gui::pages::notifications_page::button_expand(__int64 a1, __int64 a2, int a3)
{
  char v3; // bp
  __int128 v5; // [rsp+0h] [rbp-488h] BYREF
  __int64 src; // [rsp+10h] [rbp-478h] BYREF
  char v7; // [rsp+18h] [rbp-470h]
  unsigned __int64 v8; // [rsp+118h] [rbp-370h]
  _BYTE dest[368]; // [rsp+180h] [rbp-308h] BYREF
  _BYTE v10[408]; // [rsp+2F0h] [rbp-198h] BYREF

  v3 = a3;
  sniffnet::utils::types::icon::Icon::to_text(&src, (unsigned int)(34 - a3));
  iced_core::widget::text::Text<Theme,Renderer>::size(dest, &src, 11LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(&src, dest);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(dest, &src);
  iced_widget::button::Button<Message,Theme,Renderer>::new(&src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, &src);
  iced_widget::button::Button<Message,Theme,Renderer>::width(&src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::height(dest, &src);
  src = a2;
  v7 = v3 ^ 1;
  v8 = 0x8000000000000039LL;
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(v10, dest, &src);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&src, v10);
  v5 = xmmword_271880;
  iced_widget::container::Container<Message,Theme,Renderer>::padding(dest, &src, &v5);
  return iced_widget::container::Container<Message,Theme,Renderer>::align_y(a1, dest);
}