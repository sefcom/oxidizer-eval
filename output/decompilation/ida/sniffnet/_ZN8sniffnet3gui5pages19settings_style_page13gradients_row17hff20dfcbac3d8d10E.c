__int64 __fastcall sniffnet::gui::pages::settings_style_page::gradients_row(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v5; // rdx
  _QWORD v7[8]; // [rsp+0h] [rbp-4D8h] BYREF
  void *src; // [rsp+40h] [rbp-498h] BYREF
  __int64 v9; // [rsp+48h] [rbp-490h]
  _QWORD *v10; // [rsp+50h] [rbp-488h]
  __int64 v11; // [rsp+58h] [rbp-480h]
  __int64 v12; // [rsp+60h] [rbp-478h]
  __int128 v13; // [rsp+68h] [rbp-470h]
  int v14; // [rsp+78h] [rbp-460h]
  __int16 v15; // [rsp+7Ch] [rbp-45Ch]
  _BYTE v16[24]; // [rsp+1B8h] [rbp-320h] BYREF
  _BYTE v17[64]; // [rsp+1D0h] [rbp-308h] BYREF
  _QWORD dest[46]; // [rsp+210h] [rbp-2C8h] BYREF
  _BYTE v19[264]; // [rsp+380h] [rbp-158h] BYREF
  unsigned __int64 v20; // [rsp+488h] [rbp-50h]

  v13 = 0LL;
  v14 = 0;
  LOWORD(v11) = 2;
  LOWORD(v12) = 2;
  v15 = 0;
  src = 0LL;
  v9 = 8LL;
  v10 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(dest, &src, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(v19, dest, 10LL);
  dest[0] = sniffnet::translations::translations_2::color_gradients_translation(a4);
  dest[1] = v5;
  v7[0] = dest;
  v7[1] = <&T as core::fmt::Display>::fmt;
  src = &unk_2DFEF58;
  v9 = 2LL;
  v12 = 0LL;
  v10 = v7;
  v11 = 1LL;
  core::option::Option<T>::map_or_else(v16, 0LL, v5, &src);
  iced_core::widget::text::Text<Theme,Renderer>::new(&src, v16);
  iced_core::widget::text::Text<Theme,Renderer>::font(dest, &src, a2);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v7, v19, dest);
  sniffnet::utils::types::icon::Icon::to_text(&src, 15LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(dest, &src);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(&src, dest);
  iced_core::widget::text::Text<Theme,Renderer>::size(dest, &src, 12LL);
  iced_widget::button::Button<Message,Theme,Renderer>::new(&src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, &src);
  iced_widget::button::Button<Message,Theme,Renderer>::height(&src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::width(dest, &src);
  v19[0] = 2;
  v20 = 0x8000000000000023LL;
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(&src, dest, v19);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v17, v7, &src);
  sniffnet::utils::types::icon::Icon::to_text(&src, 42LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(dest, &src);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(&src, dest);
  iced_core::widget::text::Text<Theme,Renderer>::size(dest, &src, 13LL);
  iced_widget::button::Button<Message,Theme,Renderer>::new(&src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, &src);
  iced_widget::button::Button<Message,Theme,Renderer>::height(&src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::width(dest, &src);
  v19[0] = 0;
  v20 = 0x8000000000000023LL;
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(&src, dest, v19);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v7, v17, &src);
  sniffnet::utils::types::icon::Icon::to_text(&src, 23LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(dest, &src);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(&src, dest);
  iced_core::widget::text::Text<Theme,Renderer>::size(dest, &src, 13LL);
  iced_widget::button::Button<Message,Theme,Renderer>::new(&src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, &src);
  iced_widget::button::Button<Message,Theme,Renderer>::height(&src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::width(dest, &src);
  v19[0] = 1;
  v20 = 0x8000000000000023LL;
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(&src, dest, v19);
  return iced_widget::row::Row<Message,Theme,Renderer>::push(a1, v7, &src);
}