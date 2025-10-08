__int64 __fastcall sniffnet::gui::components::footer::get_release_details(
        _OWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rax
  float v12; // xmm0_4
  __int64 v13; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v19; // [rsp+10h] [rbp-578h] BYREF
  __int128 v20; // [rsp+20h] [rbp-568h]
  __m256i v21; // [rsp+30h] [rbp-558h]
  _OWORD v22[2]; // [rsp+50h] [rbp-538h] BYREF
  __m256i v23; // [rsp+70h] [rbp-518h]
  __int128 src; // [rsp+B0h] [rbp-4D8h] BYREF
  __int128 v25; // [rsp+C0h] [rbp-4C8h]
  __m256i v26[10]; // [rsp+D0h] [rbp-4B8h] BYREF
  _BYTE v27[24]; // [rsp+228h] [rbp-360h] BYREF
  _BYTE v28[48]; // [rsp+240h] [rbp-348h] BYREF
  _QWORD dest[46]; // [rsp+270h] [rbp-318h] BYREF
  _BYTE v30[424]; // [rsp+3E0h] [rbp-1A8h] BYREF

  memset(&v26[0].m256i_u64[1], 0, 22);
  WORD4(v25) = 2;
  v26[0].m256i_i16[0] = 2;
  *(_QWORD *)&src = 0LL;
  *((_QWORD *)&src + 1) = 8LL;
  *(_QWORD *)&v25 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(dest, &src, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::height(&src, dest);
  iced_widget::row::Row<Message,Theme,Renderer>::width(v22, &src, 0LL);
  dest[0] = &off_2DFEE60;
  dest[1] = <&T as core::fmt::Display>::fmt;
  dest[2] = &off_2DFEE70;
  dest[3] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&src = &unk_2DFEE40;
  *((_QWORD *)&src + 1) = 2LL;
  v26[0].m256i_i64[0] = 0LL;
  *(_QWORD *)&v25 = dest;
  *((_QWORD *)&v25 + 1) = 2LL;
  core::option::Option<T>::map_or_else(v27, 0LL, v9, &src);
  iced_core::widget::text::Text<Theme,Renderer>::new(&src, v27);
  iced_core::widget::text::Text<Theme,Renderer>::size(dest, &src, 14.3);
  iced_core::widget::text::Text<Theme,Renderer>::font(&src, dest, a4);
  result = iced_widget::row::Row<Message,Theme,Renderer>::push(&v19, v22, &src);
  if ( a5 != 2 )
  {
    if ( (a5 & 1) != 0 )
    {
      sniffnet::utils::types::icon::Icon::to_text(&src, 40LL);
      v11 = 0LL;
      if ( a6 == 2 )
      {
        v12 = 16.0;
      }
      else
      {
        LOBYTE(v11) = a6 == 3;
        v12 = byte_273130[v11];
      }
      iced_core::widget::text::Text<Theme,Renderer>::size(dest, &src, v12);
      iced_core::widget::text::Text<Theme,Renderer>::align_x(&src, dest);
      iced_core::widget::text::Text<Theme,Renderer>::align_y(dest, &src);
      iced_core::widget::text::Text<Theme,Renderer>::line_height(v22, dest, 0.80000001);
      iced_widget::button::Button<Message,Theme,Renderer>::new(&src, v22);
      iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, &src);
      iced_widget::button::Button<Message,Theme,Renderer>::height(&src, dest);
      iced_widget::button::Button<Message,Theme,Renderer>::width(dest, &src);
      iced_widget::button::Button<Message,Theme,Renderer>::class(&src, dest, 11LL);
      LOBYTE(dest[0]) = 1;
      dest[33] = 0x800000000000000BLL;
      iced_widget::button::Button<Message,Theme,Renderer>::on_press(v30, &src, dest);
      v13 = sniffnet::translations::translations_2::new_version_available_translation(a2);
      sniffnet::gui::components::button::row_open_link_tooltip((__int64)&src, v13, v14, a3);
      iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(dest, v30, &src, 0LL);
      iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::gap(&src, dest);
      iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::class(v28, &src, 5LL);
      v26[0] = v21;
      v25 = v20;
      src = v19;
      LOWORD(v22[0]) = 3;
      DWORD1(v22[0]) = 1092616192;
      WORD4(v22[0]) = 2;
      iced_widget::row::Row<Message,Theme,Renderer>::push(dest, &src, v22);
      result = iced_widget::row::Row<Message,Theme,Renderer>::push(&v19, dest, v28);
    }
    else
    {
      v23 = v21;
      v22[1] = v20;
      v22[0] = v19;
      iced_core::widget::text::Text<Theme,Renderer>::new(&src, asc_26BB14, 4LL);
      iced_core::widget::text::Text<Theme,Renderer>::size(dest, &src, 18.299999);
      iced_core::widget::text::Text<Theme,Renderer>::font(&src, dest, a4);
      result = iced_widget::row::Row<Message,Theme,Renderer>::push(&v19, v22, &src);
    }
  }
  v15 = v19;
  v16 = v20;
  v17 = *(_OWORD *)v21.m256i_i8;
  a1[3] = *(_OWORD *)&v21.m256i_u64[2];
  a1[2] = v17;
  a1[1] = v16;
  *a1 = v15;
  return result;
}