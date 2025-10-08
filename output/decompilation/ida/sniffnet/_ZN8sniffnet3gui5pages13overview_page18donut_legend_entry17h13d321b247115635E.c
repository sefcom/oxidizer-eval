__int64 __fastcall sniffnet::gui::pages::overview_page::donut_legend_entry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 *a5,
        __int64 a6,
        unsigned __int8 a7)
{
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  void *v14; // [rsp+8h] [rbp-1B0h] BYREF
  __int64 v15; // [rsp+10h] [rbp-1A8h]
  _QWORD *v16; // [rsp+18h] [rbp-1A0h]
  __int64 v17; // [rsp+20h] [rbp-198h]
  __int64 v18; // [rsp+28h] [rbp-190h]
  __int128 v19; // [rsp+30h] [rbp-188h]
  int v20; // [rsp+40h] [rbp-178h]
  __int16 v21; // [rsp+44h] [rbp-174h]
  _QWORD v22[2]; // [rsp+68h] [rbp-150h] BYREF
  _BYTE v23[24]; // [rsp+78h] [rbp-140h] BYREF
  _BYTE v24[24]; // [rsp+90h] [rbp-128h] BYREF
  _QWORD v25[12]; // [rsp+A8h] [rbp-110h] BYREF
  _BYTE v26[64]; // [rsp+108h] [rbp-B0h] BYREF
  _BYTE v27[112]; // [rsp+148h] [rbp-70h] BYREF

  sniffnet::networking::types::data_representation::DataRepr::formatted_string(v23, a4, a2, a3);
  v9 = *a5;
  switch ( v9 )
  {
    case 4:
      v10 = sniffnet::translations::translations_2::dropped_translation(a7);
      break;
    case 3:
      v10 = sniffnet::translations::translations::outgoing_translation(a7);
      break;
    case 2:
      v10 = sniffnet::translations::translations::incoming_translation(a7);
      break;
    default:
      v11 = 0LL;
      v10 = 1LL;
      break;
  }
  v22[0] = v10;
  v22[1] = v11;
  v19 = 0LL;
  v20 = 0;
  LOWORD(v17) = 2;
  LOWORD(v18) = 2;
  v21 = 0;
  v14 = 0LL;
  v15 = 8LL;
  v16 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(v25, &v14, 10LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v27, v25, 1LL);
  v19 = 0LL;
  v20 = 0;
  LOWORD(v17) = 2;
  LOWORD(v18) = 2;
  v21 = 0;
  v14 = 0LL;
  v15 = 8LL;
  v16 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::width(v25, &v14, 10LL);
  iced_widget::rule::Rule<Theme>::horizontal(&v14, 1LL);
  iced_widget::rule::Rule<Theme>::class(v26, &v14, a5);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v14, v25, v26);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v26, v27, &v14);
  v25[0] = v22;
  v25[1] = <&T as core::fmt::Display>::fmt;
  v25[2] = v23;
  v25[3] = <alloc::string::String as core::fmt::Display>::fmt;
  v14 = &unk_2DFF0B8;
  v15 = 2LL;
  v18 = 0LL;
  v16 = v25;
  v17 = 2LL;
  core::option::Option<T>::map_or_else(v24, 0LL, v12, &v14);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v14, v24);
  iced_core::widget::text::Text<Theme,Renderer>::font(v25, &v14, a6);
  iced_widget::row::Row<Message,Theme,Renderer>::push(a1, v26, v25);
  return core::ptr::drop_in_place<alloc::string::String>(v23);
}