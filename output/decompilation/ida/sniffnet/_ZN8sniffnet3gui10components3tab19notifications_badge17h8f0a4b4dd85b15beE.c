__int64 __fastcall sniffnet::gui::components::tab::notifications_badge(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  _BYTE v6[96]; // [rsp+0h] [rbp-F8h] BYREF
  _BYTE v7[96]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v8[56]; // [rsp+C0h] [rbp-38h] BYREF

  v3 = core::fmt::num::imp::<impl usize>::_fmt(a3, v6, 20LL);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v8, v3, v4);
  iced_core::widget::text::Text<Theme,Renderer>::new(v6, v8);
  iced_core::widget::text::Text<Theme,Renderer>::font(v7, v6, a2);
  iced_core::widget::text::Text<Theme,Renderer>::size(v6, v7, 14LL);
  iced_core::widget::text::Text<Theme,Renderer>::line_height(v7, v6, 1.0);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v6, v7);
  iced_widget::container::Container<Message,Theme,Renderer>::align_y(v7, v6);
  iced_widget::container::Container<Message,Theme,Renderer>::padding(v6, v7, 262146LL);
  iced_widget::container::Container<Message,Theme,Renderer>::height(v7, v6, 20LL);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, v7, 11LL);
}