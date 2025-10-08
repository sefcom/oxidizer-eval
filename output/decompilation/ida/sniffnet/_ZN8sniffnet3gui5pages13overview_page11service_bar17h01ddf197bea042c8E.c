__int64 __fastcall sniffnet::gui::pages::overview_page::service_bar(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int8 v7; // r13
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int bars_length; // [rsp+4h] [rbp-204h]
  __int64 v15; // [rsp+8h] [rbp-200h] BYREF
  __int64 v16; // [rsp+10h] [rbp-1F8h]
  __int64 v17; // [rsp+18h] [rbp-1F0h]
  __int16 v18; // [rsp+20h] [rbp-1E8h]
  __int16 v19; // [rsp+28h] [rbp-1E0h]
  __int128 v20; // [rsp+30h] [rbp-1D8h]
  __int64 v21; // [rsp+40h] [rbp-1C8h]
  __int16 v22; // [rsp+48h] [rbp-1C0h]
  __int64 v23; // [rsp+68h] [rbp-1A0h]
  _QWORD v24[3]; // [rsp+70h] [rbp-198h] BYREF
  __int16 v25; // [rsp+88h] [rbp-180h]
  __int16 v26; // [rsp+90h] [rbp-178h]
  __int128 v27; // [rsp+98h] [rbp-170h]
  int v28; // [rsp+A8h] [rbp-160h]
  __int16 v29; // [rsp+ACh] [rbp-15Ch]
  _WORD v30[48]; // [rsp+B0h] [rbp-158h] BYREF
  _BYTE v31[72]; // [rsp+110h] [rbp-F8h] BYREF
  _BYTE v32[64]; // [rsp+158h] [rbp-B0h] BYREF
  _BYTE v33[112]; // [rsp+198h] [rbp-70h] BYREF

  v7 = a4;
  v23 = a1;
  bars_length = sniffnet::gui::pages::overview_page::get_bars_length(a4, a5);
  v20 = 0LL;
  LODWORD(v21) = 0;
  v18 = 2;
  v19 = 2;
  WORD2(v21) = 0;
  v15 = 0LL;
  v16 = 8LL;
  v17 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::height(v30, &v15);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(&v15, v30, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(v32, &v15, 5LL);
  v20 = 0LL;
  v21 = 0x7F80000000000000LL;
  v18 = 2;
  v19 = 2;
  v22 = 0;
  v15 = 0LL;
  v16 = 8LL;
  v17 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(v31, &v15, 1LL);
  v27 = 0LL;
  v28 = 0;
  v25 = 2;
  v26 = 2;
  v29 = 0;
  v24[0] = 0LL;
  v24[1] = 8LL;
  v24[2] = 0LL;
  <T as alloc::string::SpecToString>::spec_to_string(v30, a2);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v15, v30);
  iced_core::widget::text::Text<Theme,Renderer>::font(v30, &v15, a6);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v15, v24, v30);
  v30[0] = 0;
  v30[4] = 2;
  iced_widget::row::Row<Message,Theme,Renderer>::push(v24, &v15, v30);
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v9 = *((_QWORD *)a3 + 4);
      v10 = *((_QWORD *)a3 + 5);
      v11 = *((_QWORD *)a3 + 7);
      v12 = *((_QWORD *)a3 + 6);
    }
    else
    {
      v10 = a3[2] >> 61;
      v9 = 8LL * *((_QWORD *)a3 + 4);
      v11 = a3[3] >> 61;
      v12 = 8LL * *((_QWORD *)a3 + 6);
    }
  }
  else
  {
    v9 = *(_QWORD *)a3;
    v10 = *((_QWORD *)a3 + 1);
    v11 = *((_QWORD *)a3 + 3);
    v12 = *((_QWORD *)a3 + 2);
  }
  sniffnet::networking::types::data_representation::DataRepr::formatted_string(
    v30,
    v7,
    v12 + v9,
    (__PAIR128__(v11, v12) + __PAIR128__(v10, v9)) >> 64);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v15, v30);
  iced_core::widget::text::Text<Theme,Renderer>::font(v30, &v15, a6);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v33, v24, v30);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v15, v31, v33);
  sniffnet::gui::pages::overview_page::get_bars(v31, bars_length);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v30, &v15, v31);
  return iced_widget::row::Row<Message,Theme,Renderer>::push(v23, v32, v30);
}