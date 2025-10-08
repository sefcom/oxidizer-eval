__int64 __fastcall sniffnet::gui::components::footer::get_button_sponsor(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _BYTE v5[24]; // [rsp+8h] [rbp-450h] BYREF
  _DWORD src[92]; // [rsp+20h] [rbp-438h] BYREF
  _OWORD v7[16]; // [rsp+190h] [rbp-2C8h] BYREF
  unsigned __int64 v8; // [rsp+298h] [rbp-1C0h]
  _BYTE dest[408]; // [rsp+2C0h] [rbp-198h] BYREF

  src[0] = 0;
  v2 = core::char::methods::encode_utf8_raw(10084LL, src, 4LL);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v5, v2, v3);
  iced_core::widget::text::Text<Theme,Renderer>::new(src, v5);
  iced_core::widget::text::Text<Theme,Renderer>::font(dest, src, a2);
  iced_core::widget::text::Text<Theme,Renderer>::size(src, dest, 23LL);
  iced_core::widget::text::Text<Theme,Renderer>::class(dest, src, 6LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(src, dest);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(dest, src);
  iced_core::widget::text::Text<Theme,Renderer>::line_height(v7, dest, 1.0);
  iced_widget::button::Button<Message,Theme,Renderer>::new(src, v7);
  v7[0] = 0x40000000u;
  iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, src);
  iced_widget::button::Button<Message,Theme,Renderer>::height(src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::width(dest, src);
  LOBYTE(v7[0]) = 3;
  v8 = 0x800000000000000BLL;
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(src, dest, v7);
  sniffnet::gui::components::button::row_open_link_tooltip((__int64)dest, (__int64)aSponsor, 7LL, a2);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(v7, src, dest, 0LL);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::gap(src, v7, 10LL);
  return iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::class(a1, src, 5LL);
}