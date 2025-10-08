__int64 __fastcall sniffnet::gui::pages::settings_general_page::mmdb_selection_row(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 a8,
        unsigned __int8 a9)
{
  unsigned __int8 v12; // bp
  __int64 v13; // rdx
  __int128 v16; // [rsp+20h] [rbp-198h] BYREF
  _QWORD *v17; // [rsp+30h] [rbp-188h]
  __int64 v18; // [rsp+38h] [rbp-180h]
  __int64 v19; // [rsp+40h] [rbp-178h]
  __int128 v20; // [rsp+48h] [rbp-170h]
  int v21; // [rsp+58h] [rbp-160h]
  __int16 v22; // [rsp+5Ch] [rbp-15Ch]
  __int128 v23; // [rsp+80h] [rbp-138h] BYREF
  _QWORD v24[12]; // [rsp+90h] [rbp-128h] BYREF
  __int128 v25; // [rsp+F0h] [rbp-C8h] BYREF
  _QWORD *v26; // [rsp+100h] [rbp-B8h]
  _BYTE v27[24]; // [rsp+130h] [rbp-88h] BYREF
  _BYTE v28[112]; // [rsp+148h] [rbp-70h] BYREF

  v23 = a8;
  if ( a6 )
    v12 = 5 * (a7 < (__int64)0x8000000000000003LL);
  else
    v12 = 0;
  v20 = 0LL;
  v21 = 0;
  LOWORD(v18) = 2;
  LOWORD(v19) = 2;
  v22 = 0;
  *(_QWORD *)&v16 = 0LL;
  *((_QWORD *)&v16 + 1) = 8LL;
  v17 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(&v25, &v16, 1LL);
  v24[0] = &v23;
  v24[1] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v16 = &unk_2DFF0B8;
  *((_QWORD *)&v16 + 1) = 2LL;
  v19 = 0LL;
  v17 = v24;
  v18 = 1LL;
  core::option::Option<T>::map_or_else(v27, 0LL, v13, &v16);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v16, v27);
  iced_core::widget::text::Text<Theme,Renderer>::font(v24, &v16, a3);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v28, &v25, v24);
  sniffnet::utils::formatted_strings::get_path_termination_string(v24, a5, a6, 25LL);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v16, v24);
  iced_core::widget::text::Text<Theme,Renderer>::font(v24, &v16, a3);
  iced_core::widget::text::Text<Theme,Renderer>::class(&v16, v24, v12);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v24, v28, &v16);
  if ( a6 )
  {
    sniffnet::gui::pages::settings_general_page::button_clear_mmdb(&v16, a4, a3, a2);
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v16, a5, 0LL);
    v26 = v17;
    v25 = v16;
    sniffnet::gui::components::button::button_open_file((__int64)&v16, &v25, 1u, a9, a3, a2, a4);
  }
  return iced_widget::row::Row<Message,Theme,Renderer>::push(a1, v24, &v16);
}