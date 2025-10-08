__int64 __fastcall sniffnet::gui::pages::notifications_page::data_notification_log(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5)
{
  unsigned int v7; // r13d
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int128 v15; // [rsp+0h] [rbp-2F8h] BYREF
  __int128 *v16; // [rsp+10h] [rbp-2E8h]
  __int64 (__fastcall *v17)(); // [rsp+18h] [rbp-2E0h]
  _QWORD *v18; // [rsp+20h] [rbp-2D8h]
  __int128 v19; // [rsp+28h] [rbp-2D0h]
  __int64 v20; // [rsp+38h] [rbp-2C0h]
  __int16 v21; // [rsp+40h] [rbp-2B8h]
  __int64 v22; // [rsp+60h] [rbp-298h]
  int v23; // [rsp+6Ah] [rbp-28Eh]
  __int16 v24; // [rsp+6Eh] [rbp-28Ah]
  __int128 v25; // [rsp+70h] [rbp-288h] BYREF
  __int128 *v26; // [rsp+80h] [rbp-278h]
  __int64 v27; // [rsp+88h] [rbp-270h]
  __int64 v28; // [rsp+90h] [rbp-268h]
  __int64 v29; // [rsp+D0h] [rbp-228h]
  __int64 v30; // [rsp+D8h] [rbp-220h]
  __int128 v31; // [rsp+E0h] [rbp-218h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-208h]
  __int128 v33; // [rsp+F8h] [rbp-200h] BYREF
  __int64 v34; // [rsp+108h] [rbp-1F0h]
  _BYTE v35[24]; // [rsp+140h] [rbp-1B8h] BYREF
  _QWORD v36[9]; // [rsp+158h] [rbp-1A0h] BYREF
  _QWORD v37[8]; // [rsp+1A0h] [rbp-158h] BYREF
  _BYTE v38[96]; // [rsp+1E0h] [rbp-118h] BYREF
  _BYTE v39[64]; // [rsp+240h] [rbp-B8h] BYREF
  _BYTE v40[120]; // [rsp+280h] [rbp-78h] BYREF

  v22 = a5;
  v30 = a3;
  v29 = a1;
  v7 = *(unsigned __int8 *)(a2 + 168);
  sniffnet::networking::types::data_representation::DataRepr::formatted_string(
    v35,
    *(unsigned __int8 *)(a2 + 168),
    *(_QWORD *)(a2 + 88),
    0LL);
  v8 = 8LL;
  if ( !(_BYTE)v7 )
    v8 = 29LL;
  sniffnet::utils::types::icon::Icon::to_text(&v15, v8);
  iced_core::widget::text::Text<Theme,Renderer>::size(&v25, &v15, 80LL);
  iced_core::widget::text::Text<Theme,Renderer>::line_height(v38, &v25, 1.0);
  v37[0] = sniffnet::translations::translations::threshold_translation(a4);
  v37[1] = v9;
  v36[0] = sniffnet::translations::translations::per_second_translation(a4);
  v36[1] = v10;
  *(_QWORD *)&v15 = v37;
  *((_QWORD *)&v15 + 1) = <&T as core::fmt::Display>::fmt;
  v16 = (__int128 *)v35;
  v17 = <alloc::string::String as core::fmt::Display>::fmt;
  v18 = v36;
  *(_QWORD *)&v19 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v25 = &unk_2DFF058;
  *((_QWORD *)&v25 + 1) = 3LL;
  v28 = 0LL;
  v26 = &v15;
  v27 = 3LL;
  core::option::Option<T>::map_or_else(&v33, 0LL, v10, &v25);
  v31 = v33;
  v32 = v34;
  v19 = 0LL;
  LODWORD(v20) = 0;
  LOWORD(v17) = 2;
  LOWORD(v18) = 2;
  WORD2(v20) = 0;
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = 8LL;
  v16 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(&v25, &v15, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v15, &v25, 30LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v37, &v15, v38);
  v19 = 0LL;
  v20 = 0x7F80000000000000LL;
  LOWORD(v17) = 2;
  LOWORD(v18) = 2;
  v21 = 0;
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = 8LL;
  v16 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v25, &v15, 7LL);
  iced_widget::column::Column<Message,Theme,Renderer>::width(&v33, &v25);
  v19 = 0LL;
  LODWORD(v20) = 0;
  LOWORD(v17) = 2;
  LOWORD(v18) = 2;
  WORD2(v20) = 0;
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = 8LL;
  v16 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v25, &v15, 8LL);
  sniffnet::utils::types::icon::Icon::to_text(&v15, 9LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v36, &v25, &v15);
  <alloc::string::String as core::clone::Clone>::clone(&v25, a2 + 96);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v15, &v25);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v25, &v15, v22);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v15, v36, &v25);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v36, &v33, &v15);
  v11 = sniffnet::networking::types::data_representation::DataRepr::data_exceeded_translation(v7, a4);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v15, v11, v12);
  v26 = v16;
  v25 = v15;
  iced_core::widget::text::Text<Theme,Renderer>::new(&v15, &v25);
  iced_core::widget::text::Text<Theme,Renderer>::class(&v25, &v15, 3LL);
  v13 = v22;
  iced_core::widget::text::Text<Theme,Renderer>::font(&v15, &v25, v22);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v33, v36, &v15);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v15, &v31);
  iced_core::widget::text::Text<Theme,Renderer>::class(&v25, &v15, 4LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(&v15, &v25, 14.3);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v25, &v15, v13);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v15, &v33, &v25);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v25, v37, &v15);
  sniffnet::gui::pages::notifications_page::threshold_bar(&v15, a2, v30, a4, v13);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v39, &v25, &v15);
  v20 = 0x7F80000000000000LL;
  v19 = 0LL;
  LOWORD(v17) = 2;
  *(_DWORD *)((char *)&v17 + 2) = v23;
  HIWORD(v17) = v24;
  LOWORD(v18) = 2;
  *(_DWORD *)((char *)&v18 + 2) = v23;
  HIWORD(v18) = v24;
  v21 = 0;
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = 8LL;
  v16 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v25, &v15, 10LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v33, &v25, v39);
  sniffnet::gui::pages::notifications_page::button_expand(&v15, *(_QWORD *)(a2 + 80), *(unsigned __int8 *)(a2 + 169));
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v25, &v33, &v15);
  sniffnet::gui::pages::notifications_page::data_notification_extra(&v15, a2, v13, a4);
  iced_widget::column::Column<Message,Theme,Renderer>::push_maybe(v40, &v25, &v15);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&v15, v40);
  iced_widget::container::Container<Message,Theme,Renderer>::width(&v25, &v15, 0LL);
  iced_widget::container::Container<Message,Theme,Renderer>::padding(&v15, &v25, 15LL);
  iced_widget::container::Container<Message,Theme,Renderer>::class(v29, &v15, 4LL);
  return core::ptr::drop_in_place<alloc::string::String>(v35);
}