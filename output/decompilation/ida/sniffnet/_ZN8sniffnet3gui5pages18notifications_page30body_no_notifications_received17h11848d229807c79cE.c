__int64 __fastcall sniffnet::gui::pages::notifications_page::body_no_notifications_received(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int128 v9; // [rsp+10h] [rbp-188h] BYREF
  __int64 v10; // [rsp+20h] [rbp-178h]
  __int16 v11; // [rsp+28h] [rbp-170h]
  __int16 v12; // [rsp+30h] [rbp-168h]
  __int128 v13; // [rsp+38h] [rbp-160h]
  __int64 v14; // [rsp+48h] [rbp-150h]
  __int16 v15; // [rsp+50h] [rbp-148h]
  __int128 v16; // [rsp+70h] [rbp-128h] BYREF
  __int64 v17; // [rsp+80h] [rbp-118h]
  _BYTE v18[72]; // [rsp+D8h] [rbp-C0h] BYREF
  _BYTE v19[120]; // [rsp+120h] [rbp-78h] BYREF

  v13 = 0LL;
  v14 = 0x7F80000000000000LL;
  v11 = 2;
  v12 = 2;
  v15 = 0;
  *(_QWORD *)&v9 = 0LL;
  *((_QWORD *)&v9 + 1) = 8LL;
  v10 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::padding(&v16, &v9, 5LL);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v9, &v16, 5LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v16, &v9, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::width(&v9, &v16, 0LL);
  LOWORD(v16) = 2;
  WORD4(v16) = 0;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v19, &v9, &v16);
  sniffnet::translations::translations::no_notifications_received_translation(&v9, a3);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(&v16, &v9);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v9, &v16, a2);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v18, v19, &v9);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, a4, a5);
  v17 = v10;
  v16 = v9;
  iced_core::widget::text::Text<Theme,Renderer>::new(&v9, &v16);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v16, &v9, a2);
  iced_core::widget::text::Text<Theme,Renderer>::size(&v9, &v16, 50LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v16, v18, &v9);
  LOWORD(v9) = 2;
  DWORD2(v9) = 131073;
  return iced_widget::column::Column<Message,Theme,Renderer>::push(a1, &v16, &v9);
}