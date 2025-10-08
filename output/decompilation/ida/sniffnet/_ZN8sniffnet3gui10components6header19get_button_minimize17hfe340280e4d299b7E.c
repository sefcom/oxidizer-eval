__int64 __fastcall sniffnet::gui::components::header::get_button_minimize(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        int a4)
{
  unsigned int v4; // r13d
  __int64 v5; // r15
  unsigned __int8 v6; // al
  __int64 v7; // r12
  __int64 v8; // rdx
  unsigned __int8 v10; // [rsp+Fh] [rbp-499h]
  _BYTE dest[264]; // [rsp+20h] [rbp-488h] BYREF
  unsigned __int64 v12; // [rsp+128h] [rbp-380h]
  _BYTE src[368]; // [rsp+190h] [rbp-318h] BYREF
  _BYTE v14[424]; // [rsp+300h] [rbp-1A8h] BYREF

  if ( a4 )
  {
    LOWORD(v4) = 20;
    v5 = 1LL;
    v10 = 3;
    v6 = 39;
    v7 = 0LL;
  }
  else
  {
    v5 = sniffnet::translations::translations_3::thumbnail_mode_translation(a3);
    v7 = v8;
    LOWORD(v4) = 24;
    v10 = 5;
    v6 = 38;
  }
  sniffnet::utils::types::icon::Icon::to_text(src, v6);
  iced_core::widget::text::Text<Theme,Renderer>::size(dest, src, v4);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(src, dest);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(dest, src);
  iced_widget::button::Button<Message,Theme,Renderer>::new(src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, src);
  iced_widget::button::Button<Message,Theme,Renderer>::height(src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::width(dest, src);
  iced_widget::button::Button<Message,Theme,Renderer>::class(v14, dest, 15LL);
  dest[0] = 0;
  v12 = 0x8000000000000030LL;
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(src, v14, dest);
  iced_core::widget::text::Text<Theme,Renderer>::new(dest, v5, v7);
  iced_core::widget::text::Text<Theme,Renderer>::font(v14, dest, a2);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(dest, src, v14, 3LL);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::gap(src, dest, 0LL);
  return iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::class(a1, src, v10);
}