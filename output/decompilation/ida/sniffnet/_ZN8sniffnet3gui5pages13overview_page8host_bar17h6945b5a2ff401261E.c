__int64 __fastcall sniffnet::gui::pages::overview_page::host_bar(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  unsigned __int8 v8; // r13
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  unsigned int bars_length; // [rsp+Ch] [rbp-20Ch]
  unsigned __int128 v17; // [rsp+10h] [rbp-208h] BYREF
  __int128 *v18; // [rsp+20h] [rbp-1F8h]
  __int64 v19; // [rsp+28h] [rbp-1F0h]
  __int64 v20; // [rsp+30h] [rbp-1E8h]
  __int128 v21; // [rsp+38h] [rbp-1E0h]
  __int64 v22; // [rsp+48h] [rbp-1D0h]
  __int16 v23; // [rsp+50h] [rbp-1C8h]
  __int128 v24; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v25; // [rsp+80h] [rbp-198h]
  __int16 v26; // [rsp+88h] [rbp-190h]
  __int16 v27; // [rsp+90h] [rbp-188h]
  __int128 v28; // [rsp+98h] [rbp-180h]
  int v29; // [rsp+A8h] [rbp-170h]
  __int16 v30; // [rsp+ACh] [rbp-16Ch]
  __int64 v31; // [rsp+B8h] [rbp-160h]
  __int128 v32; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v33; // [rsp+D0h] [rbp-148h]
  _BYTE v34[64]; // [rsp+120h] [rbp-F8h] BYREF
  _BYTE v35[72]; // [rsp+160h] [rbp-B8h] BYREF
  _BYTE v36[112]; // [rsp+1A8h] [rbp-70h] BYREF

  v8 = a4;
  v31 = a1;
  bars_length = sniffnet::gui::pages::overview_page::get_bars_length(a4, a5);
  v21 = 0LL;
  LODWORD(v22) = 0;
  LOWORD(v19) = 2;
  LOWORD(v20) = 2;
  WORD2(v22) = 0;
  *(_QWORD *)&v17 = 0LL;
  *((_QWORD *)&v17 + 1) = 8LL;
  v18 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::height(&v32, &v17);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(&v17, &v32, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v32, &v17, 5LL);
  sniffnet::countries::country_utils::get_flag_tooltip(&v17, *(_DWORD *)(a2 + 72), (__int64)a3, a7, a6, 0);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v36, &v32, &v17);
  v21 = 0LL;
  v22 = 0x7F80000000000000LL;
  LOWORD(v19) = 2;
  LOWORD(v20) = 2;
  v23 = 0;
  *(_QWORD *)&v17 = 0LL;
  *((_QWORD *)&v17 + 1) = 8LL;
  v18 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(v35, &v17, 1LL);
  v28 = 0LL;
  v29 = 0;
  v26 = 2;
  v27 = 2;
  v30 = 0;
  *(_QWORD *)&v24 = 0LL;
  *((_QWORD *)&v24 + 1) = 8LL;
  v25 = 0LL;
  <alloc::string::String as core::clone::Clone>::clone(&v32, a2);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v17, &v32);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v32, &v17, a6);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v34, &v24, &v32);
  if ( *(_QWORD *)(a2 + 64) )
  {
    *(_QWORD *)&v24 = a2 + 48;
    *((_QWORD *)&v24 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v17 = &off_2DFF098;
    *((_QWORD *)&v17 + 1) = 1LL;
    v20 = 0LL;
    v18 = &v24;
    v19 = 1LL;
    core::option::Option<T>::map_or_else(&v32, 0LL, v10, &v17);
    v24 = v32;
    v25 = v33;
  }
  else
  {
    *(_QWORD *)&v24 = 0LL;
    *((_QWORD *)&v24 + 1) = 1LL;
    v25 = 0LL;
  }
  iced_core::widget::text::Text<Theme,Renderer>::new(&v17, &v24);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v32, &v17, a6);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v17, v34, &v32);
  LOWORD(v32) = 0;
  WORD4(v32) = 2;
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v24, &v17, &v32);
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v11 = *((_QWORD *)a3 + 6);
      v12 = *((_QWORD *)a3 + 7);
      v13 = *((_QWORD *)a3 + 9);
      v14 = *((_QWORD *)a3 + 8);
    }
    else
    {
      v12 = a3[3] >> 61;
      v11 = 8LL * *((_QWORD *)a3 + 6);
      v13 = a3[4] >> 61;
      v14 = 8LL * *((_QWORD *)a3 + 8);
    }
  }
  else
  {
    v11 = *((_QWORD *)a3 + 2);
    v12 = *((_QWORD *)a3 + 3);
    v13 = *((_QWORD *)a3 + 5);
    v14 = *((_QWORD *)a3 + 4);
  }
  sniffnet::networking::types::data_representation::DataRepr::formatted_string(
    &v32,
    v8,
    v14 + v11,
    (__PAIR128__(v13, v14) + __PAIR128__(v12, v11)) >> 64);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v17, &v32);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v32, &v17, a6);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v34, &v24, &v32);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v17, v35, v34);
  sniffnet::gui::pages::overview_page::get_bars(v35, bars_length);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v32, &v17, v35);
  return iced_widget::row::Row<Message,Theme,Renderer>::push(v31, v36, &v32);
}