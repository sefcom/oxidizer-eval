__int64 __fastcall sniffnet::gui::pages::settings_notifications_page::volume_slider(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 a4)
{
  __int64 v5; // rdx
  unsigned __int8 v7; // [rsp+7h] [rbp-3D1h] BYREF
  _BYTE v8[72]; // [rsp+8h] [rbp-3D0h] BYREF
  void *src; // [rsp+50h] [rbp-388h] BYREF
  __int64 v10; // [rsp+58h] [rbp-380h]
  _QWORD *v11; // [rsp+60h] [rbp-378h]
  __int64 v12; // [rsp+68h] [rbp-370h]
  void *v13; // [rsp+70h] [rbp-368h]
  __int128 v14; // [rsp+78h] [rbp-360h]
  __int64 v15; // [rsp+88h] [rbp-350h]
  __int16 v16; // [rsp+90h] [rbp-348h]
  _QWORD v17[9]; // [rsp+1B0h] [rbp-228h] BYREF
  _BYTE v18[24]; // [rsp+1F8h] [rbp-1E0h] BYREF
  _BYTE v19[64]; // [rsp+210h] [rbp-1C8h] BYREF
  _QWORD dest[49]; // [rsp+250h] [rbp-188h] BYREF

  v7 = a4;
  v14 = 0LL;
  v15 = 0x7F80000000000000LL;
  LOWORD(v12) = 2;
  LOWORD(v13) = 2;
  v16 = 0;
  src = 0LL;
  v10 = 8LL;
  v11 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(dest, &src, 5LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(v8, dest, 1LL);
  v17[0] = sniffnet::translations::translations::volume_translation(a2);
  v17[1] = v5;
  dest[0] = v17;
  dest[1] = <&T as core::fmt::Display>::fmt;
  dest[2] = &v7;
  dest[3] = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
  src = &unk_2DFF0F8;
  v10 = 3LL;
  v13 = &unk_497E88;
  *(_QWORD *)&v14 = 2LL;
  v11 = dest;
  v12 = 2LL;
  core::option::Option<T>::map_or_else(v18, 0LL, v5, &src);
  iced_core::widget::text::Text<Theme,Renderer>::new(&src, v18);
  iced_core::widget::text::Text<Theme,Renderer>::font(dest, &src, a3);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v17, v8, dest);
  v14 = 0LL;
  LODWORD(v15) = 0;
  LOWORD(v12) = 2;
  LOWORD(v13) = 2;
  WORD2(v15) = 0;
  src = 0LL;
  v10 = 8LL;
  v11 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v8, &src, 1LL);
  sniffnet::utils::types::icon::Icon::to_text(&src, 5LL);
  iced_core::widget::text::Text<Theme,Renderer>::width(dest, &src, 30LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(&src, dest);
  iced_core::widget::text::Text<Theme,Renderer>::size(dest, &src, 20LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v19, v8, dest);
  iced_widget::slider::Slider<T,Message,Theme>::new(&src, v7);
  iced_widget::slider::Slider<T,Message,Theme>::step(dest, &src);
  iced_widget::slider::Slider<T,Message,Theme>::width(&src, dest);
  iced_widget::row::Row<Message,Theme,Renderer>::push(dest, v19, &src);
  LOWORD(src) = 3;
  HIDWORD(src) = 1097859072;
  LOWORD(v10) = 2;
  iced_widget::row::Row<Message,Theme,Renderer>::push(v8, dest, &src);
  sniffnet::utils::types::icon::Icon::to_text(&src, 4LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(dest, &src);
  iced_core::widget::text::Text<Theme,Renderer>::size(&src, dest, 20LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v19, v8, &src);
  iced_widget::column::Column<Message,Theme,Renderer>::push(dest, v17, v19);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&src, dest);
  iced_widget::container::Container<Message,Theme,Renderer>::padding(dest, &src, 5LL);
  iced_widget::container::Container<Message,Theme,Renderer>::width(&src, dest, 0LL);
  iced_widget::container::Container<Message,Theme,Renderer>::height(dest, &src, 60LL);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(&src, dest);
  return iced_widget::container::Container<Message,Theme,Renderer>::align_y(a1, &src);
}