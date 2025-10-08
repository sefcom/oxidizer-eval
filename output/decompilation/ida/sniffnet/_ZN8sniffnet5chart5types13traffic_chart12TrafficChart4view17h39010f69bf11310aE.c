__int64 __fastcall sniffnet::chart::types::traffic_chart::TrafficChart::view(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r14
  __int64 v3; // rbp
  __int128 v5; // [rsp+0h] [rbp-1A8h] BYREF
  __int128 v6; // [rsp+10h] [rbp-198h]
  __int16 v7; // [rsp+20h] [rbp-188h]
  __int128 v8; // [rsp+28h] [rbp-180h]
  __int64 v9; // [rsp+38h] [rbp-170h]
  __int16 v10; // [rsp+40h] [rbp-168h]
  __int128 v11; // [rsp+70h] [rbp-138h] BYREF
  __int64 v12; // [rsp+80h] [rbp-128h]
  char v13; // [rsp+88h] [rbp-120h]
  _OWORD v14[2]; // [rsp+B0h] [rbp-F8h] BYREF
  _BYTE v15[96]; // [rsp+D8h] [rbp-D0h] BYREF
  _QWORD v16[14]; // [rsp+138h] [rbp-70h] BYREF

  if ( *(_BYTE *)(a1 + 437) || *(_BYTE *)(a1 + 436) == 1 )
  {
    v16[0] = 0x8000000000000000LL;
  }
  else
  {
    sniffnet::gui::styles::types::style_type::StyleType::get_extension(&v5, a1);
    v14[1] = v6;
    v14[0] = v5;
    v1 = *(_QWORD *)(a1 + 400);
    v2 = *(_QWORD *)(a1 + 408);
    v3 = *(unsigned int *)(a1 + 416);
    v8 = 0LL;
    LODWORD(v9) = 0;
    WORD4(v6) = 2;
    v7 = 2;
    WORD2(v9) = 0;
    *(_QWORD *)&v5 = 0LL;
    *((_QWORD *)&v5 + 1) = 8LL;
    *(_QWORD *)&v6 = 0LL;
    v11 = xmmword_26F3F0;
    ((void (__fastcall *)(_BYTE *, __int128 *, __int128 *))iced_widget::row::Row<Message,Theme,Renderer>::padding)(
      v15,
      &v5,
      &v11);
    iced_widget::row::Row<Message,Theme,Renderer>::width(&v11, v15, 0LL);
    if ( *(_BYTE *)(a1 + 438) )
    {
      sniffnet::utils::formatted_strings::get_formatted_timestamp(v15, v1, v2);
      iced_core::widget::text::Text<Theme,Renderer>::new(&v5, v15);
      iced_core::widget::text::Text<Theme,Renderer>::font(v15, &v5, v14);
      iced_core::widget::text::Text<Theme,Renderer>::size(&v5, v15, 12.5);
    }
    else
    {
      *(_QWORD *)&v5 = 7LL;
    }
    iced_widget::row::Row<Message,Theme,Renderer>::push_maybe(v15, &v11, &v5);
    LOWORD(v5) = 0;
    WORD4(v5) = 2;
    iced_widget::row::Row<Message,Theme,Renderer>::push(&v11, v15, &v5);
    sniffnet::utils::formatted_strings::get_formatted_timestamp(v15, v3 + v1 - 1, v2);
    iced_core::widget::text::Text<Theme,Renderer>::new(&v5, v15);
    iced_core::widget::text::Text<Theme,Renderer>::font(v15, &v5, v14);
    iced_core::widget::text::Text<Theme,Renderer>::size(&v5, v15, 12.5);
    iced_widget::row::Row<Message,Theme,Renderer>::push(v16, &v11, &v5);
  }
  v8 = 0LL;
  v9 = 0x7F80000000000000LL;
  WORD4(v6) = 2;
  v7 = 2;
  v10 = 0;
  *(_QWORD *)&v5 = 0LL;
  *((_QWORD *)&v5 + 1) = 8LL;
  *(_QWORD *)&v6 = 0LL;
  v12 = a1;
  LOWORD(v11) = 0;
  WORD4(v11) = 0;
  v13 = 0;
  ((void (__fastcall *)(_BYTE *, __int128 *, __int128 *))iced_widget::column::Column<Message,Theme,Renderer>::push)(
    v15,
    &v5,
    &v11);
  iced_widget::column::Column<Message,Theme,Renderer>::push_maybe(&v5, v15, v16);
  return alloc::boxed::Box<T>::new(&v5);
}