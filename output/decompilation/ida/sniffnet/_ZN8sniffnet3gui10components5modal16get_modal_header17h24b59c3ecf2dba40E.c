__int64 __fastcall sniffnet::gui::components::modal::get_modal_header(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7)
{
  _WORD v12[48]; // [rsp+10h] [rbp-248h] BYREF
  _QWORD v13[3]; // [rsp+70h] [rbp-1E8h] BYREF
  __int16 v14; // [rsp+88h] [rbp-1D0h]
  __int16 v15; // [rsp+90h] [rbp-1C8h]
  __int128 v16; // [rsp+98h] [rbp-1C0h]
  int v17; // [rsp+A8h] [rbp-1B0h]
  __int16 v18; // [rsp+ACh] [rbp-1ACh]
  unsigned __int64 v19; // [rsp+178h] [rbp-E0h]
  _BYTE v20[64]; // [rsp+1A8h] [rbp-B0h] BYREF
  _BYTE v21[112]; // [rsp+1E8h] [rbp-70h] BYREF

  v16 = 0LL;
  v17 = 0;
  v14 = 2;
  v15 = 2;
  v18 = 0;
  v13[0] = 0LL;
  v13[1] = 8LL;
  v13[2] = 0LL;
  v12[0] = 0;
  v12[4] = 2;
  iced_widget::row::Row<Message,Theme,Renderer>::push(v21, v13, v12);
  iced_core::widget::text::Text<Theme,Renderer>::new(v13, a6, a7);
  iced_core::widget::text::Text<Theme,Renderer>::font(v12, v13, a3);
  iced_core::widget::text::Text<Theme,Renderer>::size(v13, v12, 19.9);
  iced_core::widget::text::Text<Theme,Renderer>::width(v12, v13, 393217LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(v13, v12);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v20, v21, v13);
  v19 = 0x8000000000000013LL;
  sniffnet::gui::components::button::button_hide((__int64)v12, (__int64)v13, a5, a2);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v13, v12);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v12, v13, 0LL);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(v13, v12);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v12, v20, v13);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v13, v12);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(v12, v13);
  iced_widget::container::Container<Message,Theme,Renderer>::align_y(v13, v12);
  iced_widget::container::Container<Message,Theme,Renderer>::height(v12, v13, 40LL);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v13, v12, 0LL);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, v13, a4);
}