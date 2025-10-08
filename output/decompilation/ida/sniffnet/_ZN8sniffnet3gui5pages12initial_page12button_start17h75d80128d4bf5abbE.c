__int64 __fastcall sniffnet::gui::pages::initial_page::button_start(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  __int64 started; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  _QWORD v11[46]; // [rsp+0h] [rbp-318h] BYREF
  _BYTE dest[424]; // [rsp+170h] [rbp-1A8h] BYREF

  started = sniffnet::translations::translations::start_translation(a3);
  iced_core::widget::text::Text<Theme,Renderer>::new(v11, started, v8);
  iced_core::widget::text::Text<Theme,Renderer>::font(dest, v11, a2);
  iced_core::widget::text::Text<Theme,Renderer>::size(v11, dest, 19.9);
  iced_core::widget::text::Text<Theme,Renderer>::width(dest, v11, 0LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(v11, dest);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(dest, v11);
  iced_widget::button::Button<Message,Theme,Renderer>::new(v11, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, v11);
  iced_widget::button::Button<Message,Theme,Renderer>::width(v11, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::class(dest, v11, a4);
  v9 = 0x800000000000003ALL;
  if ( a5 )
    v9 = 0x800000000000000CLL;
  v11[33] = v9;
  return iced_widget::button::Button<Message,Theme,Renderer>::on_press_maybe(a1, dest, v11);
}