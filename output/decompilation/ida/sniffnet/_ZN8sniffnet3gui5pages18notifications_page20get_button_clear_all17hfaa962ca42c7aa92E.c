__int64 __fastcall sniffnet::gui::pages::notifications_page::get_button_clear_all(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _BYTE v7[368]; // [rsp+0h] [rbp-448h] BYREF
  _BYTE src[368]; // [rsp+170h] [rbp-2D8h] BYREF
  _WORD v9[132]; // [rsp+2E0h] [rbp-168h] BYREF
  unsigned __int64 v10; // [rsp+3E8h] [rbp-60h]

  sniffnet::utils::types::icon::Icon::to_text(src, 6LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(v7, src, 20LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(src, v7);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(v7, src);
  iced_widget::button::Button<Message,Theme,Renderer>::new(src, v7);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(v7, src);
  iced_widget::button::Button<Message,Theme,Renderer>::height(src, v7);
  iced_widget::button::Button<Message,Theme,Renderer>::width(v7, src);
  v9[0] = 4;
  v10 = 0x8000000000000010LL;
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(src, v7, v9);
  v4 = sniffnet::translations::translations::clear_all_translation(a3);
  iced_core::widget::text::Text<Theme,Renderer>::new(v7, v4, v5);
  iced_core::widget::text::Text<Theme,Renderer>::font(v9, v7, a2);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(v7, src, v9, 0LL);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::gap(src, v7, 5LL);
  return iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::class(a1, src, 5LL);
}