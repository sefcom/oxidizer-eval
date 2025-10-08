__int64 __fastcall sniffnet::gui::pages::settings_general_page::scale_factor_slider(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        double a4)
{
  __int64 v5; // rdx
  float v6; // xmm0_4
  double v9; // [rsp+10h] [rbp-3F8h]
  double v10; // [rsp+18h] [rbp-3F0h] BYREF
  _WORD v11[8]; // [rsp+20h] [rbp-3E8h] BYREF
  _BYTE v12[72]; // [rsp+30h] [rbp-3D8h] BYREF
  _BYTE v13[24]; // [rsp+78h] [rbp-390h] BYREF
  void *dest; // [rsp+90h] [rbp-378h] BYREF
  __int64 v15; // [rsp+98h] [rbp-370h]
  __int128 *p_src; // [rsp+A0h] [rbp-368h]
  __int64 v17; // [rsp+A8h] [rbp-360h]
  void *v18; // [rsp+B0h] [rbp-358h]
  __int128 v19; // [rsp+B8h] [rbp-350h]
  __int64 v20; // [rsp+C8h] [rbp-340h]
  __int16 v21; // [rsp+D0h] [rbp-338h]
  __int128 src; // [rsp+230h] [rbp-1D8h] BYREF
  char v23; // [rsp+240h] [rbp-1C8h]

  v19 = 0LL;
  v20 = 0x7F80000000000000LL;
  LOWORD(v17) = 2;
  LOWORD(v18) = 2;
  v21 = 0;
  dest = 0LL;
  v15 = 8LL;
  p_src = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(v12, &dest, 1LL);
  iced_core::widget::text::Text<Theme,Renderer>::new(
    &dest,
    (char *)dword_18E93F0 + dword_18E93F0[a2],
    qword_18E9338[a2]);
  iced_core::widget::text::Text<Theme,Renderer>::class(&src, &dest, 4LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(&dest, &src, 18.299999);
  iced_core::widget::text::Text<Theme,Renderer>::font(&src, &dest, a3);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&dest, v12, &src);
  v11[0] = 2;
  v11[4] = 0;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v12, &dest, v11);
  v10 = 100.0 * a4;
  *(_QWORD *)&src = &v10;
  *((_QWORD *)&src + 1) = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
  dest = &unk_2DFF0D8;
  v15 = 2LL;
  v18 = &unk_497BC8;
  *(_QWORD *)&v19 = 1LL;
  p_src = &src;
  v17 = 1LL;
  core::option::Option<T>::map_or_else(v13, 0LL, v5, &dest);
  v9 = log(a4) / 1.09861228866811;
  iced_core::widget::text::Text<Theme,Renderer>::new(&dest, v13);
  iced_core::widget::text::Text<Theme,Renderer>::font(&src, &dest, a3);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&dest, v12, &src);
  LOWORD(src) = 2;
  WORD4(src) = 3;
  HIDWORD(src) = 1084227584;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v12, &dest, &src);
  src = xmmword_271B60;
  v23 = 0;
  iced_widget::slider::Slider<T,Message,Theme>::new(&dest, &src, v9);
  v6 = a4;
  iced_widget::slider::Slider<T,Message,Theme>::step(&src, &dest);
  iced_widget::slider::Slider<T,Message,Theme>::width(&dest, &src);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&src, v12, &dest, 130.0 / v6);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v12, &src, v11);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&dest, v12);
  iced_widget::container::Container<Message,Theme,Renderer>::width(&src, &dest, 0LL);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(&dest, &src);
  return iced_widget::container::Container<Message,Theme,Renderer>::align_y(a1, &dest);
}