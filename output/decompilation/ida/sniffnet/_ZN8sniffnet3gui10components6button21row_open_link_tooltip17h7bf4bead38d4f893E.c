__int64 __fastcall sniffnet::gui::components::button::row_open_link_tooltip(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD v7[3]; // [rsp+8h] [rbp-170h] BYREF
  __int16 v8; // [rsp+20h] [rbp-158h]
  __int16 v9; // [rsp+28h] [rbp-150h]
  __int128 v10; // [rsp+30h] [rbp-148h]
  int v11; // [rsp+40h] [rbp-138h]
  __int16 v12; // [rsp+44h] [rbp-134h]
  _BYTE v13[64]; // [rsp+68h] [rbp-110h] BYREF
  _BYTE v14[96]; // [rsp+A8h] [rbp-D0h] BYREF
  _BYTE v15[112]; // [rsp+108h] [rbp-70h] BYREF

  v10 = 0LL;
  v11 = 0;
  v8 = 2;
  v9 = 2;
  v12 = 0;
  v7[0] = 0LL;
  v7[1] = 8LL;
  v7[2] = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v14, v7, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(v15, v14, 10LL);
  iced_core::widget::text::Text<Theme,Renderer>::new(v7, a2, a3);
  iced_core::widget::text::Text<Theme,Renderer>::font(v14, v7, a4);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v13, v15, v14);
  sniffnet::utils::types::icon::Icon::to_text(v7, 27LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(v14, v7, 16LL);
  iced_core::widget::text::Text<Theme,Renderer>::class(v7, v14, 3LL);
  return iced_widget::row::Row<Message,Theme,Renderer>::push(a1, v13, v7);
}