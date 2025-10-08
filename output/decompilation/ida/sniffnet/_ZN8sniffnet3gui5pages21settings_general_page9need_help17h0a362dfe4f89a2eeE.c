__int64 __fastcall sniffnet::gui::pages::settings_general_page::need_help(__int64 a1, char a2, __int64 a3)
{
  unsigned __int8 v4; // bp
  __int64 v5; // rdx
  char *v6; // rsi
  _WORD v8[8]; // [rsp+0h] [rbp-4E8h] BYREF
  _QWORD dest[3]; // [rsp+10h] [rbp-4D8h] BYREF
  __int16 v10; // [rsp+28h] [rbp-4C0h]
  __int16 v11; // [rsp+30h] [rbp-4B8h]
  __int128 v12; // [rsp+38h] [rbp-4B0h]
  __int64 v13; // [rsp+48h] [rbp-4A0h]
  __int16 v14; // [rsp+50h] [rbp-498h]
  _BYTE v15[72]; // [rsp+188h] [rbp-360h] BYREF
  _OWORD v16[16]; // [rsp+1D0h] [rbp-318h] BYREF
  unsigned __int64 v17; // [rsp+2D8h] [rbp-210h]
  _BYTE src[376]; // [rsp+300h] [rbp-1E8h] BYREF
  _BYTE v19[112]; // [rsp+478h] [rbp-70h] BYREF

  v12 = 0LL;
  v13 = 0x7F80000000000000LL;
  v10 = 2;
  v11 = 2;
  v14 = 0;
  dest[0] = 0LL;
  dest[1] = 8LL;
  dest[2] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(v16, dest, 1LL);
  v4 = a2 - 1;
  if ( (unsigned __int8)(a2 - 1) > 0x15u )
  {
    v6 = (char *)&unk_497BF8;
    v5 = 19LL;
  }
  else
  {
    v5 = qword_18E9450[v4];
    v6 = (char *)dword_18E9500 + dword_18E9500[v4];
  }
  iced_core::widget::text::Text<Theme,Renderer>::new(dest, v6, v5);
  iced_core::widget::text::Text<Theme,Renderer>::class(src, dest, 4LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(dest, src, 18.299999);
  iced_core::widget::text::Text<Theme,Renderer>::font(src, dest, a3);
  iced_widget::column::Column<Message,Theme,Renderer>::push(dest, v16, src);
  v8[0] = 2;
  v8[4] = 0;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v15, dest, v8);
  sniffnet::utils::types::icon::Icon::to_text(dest, 13LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(src, dest);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(dest, src);
  iced_core::widget::text::Text<Theme,Renderer>::size(src, dest, 20LL);
  iced_core::widget::text::Text<Theme,Renderer>::line_height(v16, src, 1.0);
  iced_widget::button::Button<Message,Theme,Renderer>::new(dest, v16);
  LOBYTE(v16[0]) = 5;
  v17 = 0x800000000000000BLL;
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(src, dest, v16);
  v16[0] = xmmword_271380;
  iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, src);
  iced_widget::button::Button<Message,Theme,Renderer>::height(src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::width(dest, src);
  sniffnet::gui::components::button::row_open_link_tooltip((__int64)src, (__int64)aGithubIssues, 13LL, a3);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(v16, dest, src, 3LL);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::gap(dest, v16, 5LL);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::class(src, dest, 5LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(dest, v15, src);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v19, dest, v8);
  iced_widget::container::Container<Message,Theme,Renderer>::new(dest, v19);
  iced_widget::container::Container<Message,Theme,Renderer>::width(src, dest, 0LL);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(dest, src);
  return iced_widget::container::Container<Message,Theme,Renderer>::align_y(a1, dest);
}