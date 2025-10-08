__int64 __fastcall sniffnet::gui::pages::settings_notifications_page::settings_header(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  _WORD v11[48]; // [rsp+10h] [rbp-248h] BYREF
  _QWORD v12[3]; // [rsp+70h] [rbp-1E8h] BYREF
  __int16 v13; // [rsp+88h] [rbp-1D0h]
  __int16 v14; // [rsp+90h] [rbp-1C8h]
  __int128 v15; // [rsp+98h] [rbp-1C0h]
  int v16; // [rsp+A8h] [rbp-1B0h]
  __int16 v17; // [rsp+ACh] [rbp-1ACh]
  unsigned __int64 v18; // [rsp+178h] [rbp-E0h]
  _BYTE v19[64]; // [rsp+1A8h] [rbp-B0h] BYREF
  _BYTE v20[112]; // [rsp+1E8h] [rbp-70h] BYREF

  v15 = 0LL;
  v16 = 0;
  v13 = 2;
  v14 = 2;
  v17 = 0;
  v12[0] = 0LL;
  v12[1] = 8LL;
  v12[2] = 0LL;
  v11[0] = 0;
  v11[4] = 2;
  iced_widget::row::Row<Message,Theme,Renderer>::push(v20, v12, v11);
  v7 = sniffnet::translations::translations::settings_translation(a5);
  iced_core::widget::text::Text<Theme,Renderer>::new(v12, v7, v8);
  iced_core::widget::text::Text<Theme,Renderer>::font(v11, v12, a3);
  iced_core::widget::text::Text<Theme,Renderer>::size(v12, v11, 19.9);
  iced_core::widget::text::Text<Theme,Renderer>::width(v11, v12, 393217LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(v12, v11);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v19, v20, v12);
  v18 = 0x8000000000000014LL;
  sniffnet::gui::components::button::button_hide((__int64)v11, (__int64)v12, a5, a2);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v12, v11);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v11, v12, 0LL);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(v12, v11);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v11, v19, v12);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v12, v11);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(v11, v12);
  iced_widget::container::Container<Message,Theme,Renderer>::align_y(v12, v11);
  iced_widget::container::Container<Message,Theme,Renderer>::height(v11, v12, 40LL);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v12, v11, 0LL);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, v12, a4);
}