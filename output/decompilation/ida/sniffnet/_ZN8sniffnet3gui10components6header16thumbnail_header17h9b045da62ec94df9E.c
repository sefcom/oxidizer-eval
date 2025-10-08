__int64 __fastcall sniffnet::gui::components::header::thumbnail_header(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        __int64 a6)
{
  _WORD v11[8]; // [rsp+18h] [rbp-140h] BYREF
  _QWORD v12[3]; // [rsp+28h] [rbp-130h] BYREF
  __int16 v13; // [rsp+40h] [rbp-118h]
  __int16 v14; // [rsp+48h] [rbp-110h]
  __int128 v15; // [rsp+50h] [rbp-108h]
  int v16; // [rsp+60h] [rbp-F8h]
  __int16 v17; // [rsp+64h] [rbp-F4h]
  _WORD v18[2]; // [rsp+88h] [rbp-D0h] BYREF
  int v19; // [rsp+8Ch] [rbp-CCh]
  __int16 v20; // [rsp+90h] [rbp-C8h]
  _WORD v21[2]; // [rsp+E8h] [rbp-70h] BYREF
  int v22; // [rsp+ECh] [rbp-6Ch]
  __int16 v23; // [rsp+F0h] [rbp-68h]

  v15 = 0LL;
  v16 = 0;
  v13 = 2;
  v14 = 2;
  v17 = 0;
  v12[0] = 0LL;
  v12[1] = 8LL;
  v12[2] = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v18, v12, 1LL);
  v11[0] = 0;
  v11[4] = 2;
  iced_widget::row::Row<Message,Theme,Renderer>::push(v12, v18, v11);
  v18[0] = 3;
  v19 = 1117782016;
  v20 = 2;
  iced_widget::row::Row<Message,Theme,Renderer>::push(v21, v12, v18);
  iced_core::widget::text::Text<Theme,Renderer>::new(v12, aSniffnet, 8LL);
  iced_core::widget::text::Text<Theme,Renderer>::font(v18, v12, a3);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v12, v21, v18);
  v21[0] = 3;
  v22 = 1092616192;
  v23 = 2;
  iced_widget::row::Row<Message,Theme,Renderer>::push(v18, v12, v21);
  sniffnet::gui::components::header::get_button_minimize((__int64)v21, a2, a4, 1);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v12, v18, v21);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v21, v12, v11);
  if ( a6 )
  {
    sniffnet::gui::components::tab::notifications_badge(v12, a2);
    iced_widget::container::Container<Message,Theme,Renderer>::class(v18, v12, 12LL);
    iced_widget::container::Container<Message,Theme,Renderer>::new(v12, v18);
    iced_widget::container::Container<Message,Theme,Renderer>::width(v18, v12, 40LL);
    iced_widget::container::Container<Message,Theme,Renderer>::align_x(v12, v18);
  }
  else
  {
    v18[0] = 3;
    v19 = 1109393408;
    v20 = 2;
    iced_widget::container::Container<Message,Theme,Renderer>::new(v12, v18);
  }
  iced_widget::row::Row<Message,Theme,Renderer>::push(v18, v21, v12);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v12, v18);
  iced_widget::container::Container<Message,Theme,Renderer>::height(v18, v12, 30LL);
  iced_widget::container::Container<Message,Theme,Renderer>::align_y(v12, v18);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, v12, a5);
}