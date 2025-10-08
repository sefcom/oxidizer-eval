__int64 __fastcall sniffnet::gui::components::header::get_button_settings(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE v9[368]; // [rsp+0h] [rbp-448h] BYREF
  _BYTE src[368]; // [rsp+170h] [rbp-2D8h] BYREF
  _BYTE v11[264]; // [rsp+2E0h] [rbp-168h] BYREF
  unsigned __int64 v12; // [rsp+3E8h] [rbp-60h]

  sniffnet::utils::types::icon::Icon::to_text(src, 31LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(v9, src, 20LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(src, v9);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(v9, src);
  iced_widget::button::Button<Message,Theme,Renderer>::new(src, v9);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(v9, src);
  iced_widget::button::Button<Message,Theme,Renderer>::height(src, v9);
  iced_widget::button::Button<Message,Theme,Renderer>::width(v9, src);
  v11[0] = a4;
  v12 = 0x8000000000000011LL;
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(src, v9, v11);
  v6 = sniffnet::translations::translations::settings_translation(a3);
  iced_core::widget::text::Text<Theme,Renderer>::new(v9, v6, v7);
  iced_core::widget::text::Text<Theme,Renderer>::font(v11, v9, a2);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(v9, src, v11, 2LL);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::gap(src, v9, 5LL);
  return iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::class(a1, src, 5LL);
}