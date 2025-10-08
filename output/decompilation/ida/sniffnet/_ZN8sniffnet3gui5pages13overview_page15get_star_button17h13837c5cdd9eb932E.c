__int64 __fastcall sniffnet::gui::pages::overview_page::get_star_button(__int64 a1, unsigned __int8 a2, __int128 *a3)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  _OWORD v8[5]; // [rsp+0h] [rbp-308h] BYREF
  char v9; // [rsp+50h] [rbp-2B8h]
  unsigned __int64 v10; // [rsp+108h] [rbp-200h]
  _BYTE src[408]; // [rsp+170h] [rbp-198h] BYREF

  sniffnet::utils::types::icon::Icon::to_text(src, 36LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(v8, src, 20LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(src, v8);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(v8, src);
  iced_widget::button::Button<Message,Theme,Renderer>::new(src, v8);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(v8, src);
  iced_widget::button::Button<Message,Theme,Renderer>::height(src, v8);
  iced_widget::button::Button<Message,Theme,Renderer>::width(v8, src);
  iced_widget::button::Button<Message,Theme,Renderer>::class(src, v8, a2 ^ 9u);
  v8[4] = a3[4];
  v4 = *a3;
  v5 = a3[1];
  v6 = a3[2];
  v8[3] = a3[3];
  v8[2] = v6;
  v8[1] = v5;
  v8[0] = v4;
  v9 = a2 ^ 1;
  v10 = 0x800000000000000ALL;
  return iced_widget::button::Button<Message,Theme,Renderer>::on_press(a1, src, v8);
}