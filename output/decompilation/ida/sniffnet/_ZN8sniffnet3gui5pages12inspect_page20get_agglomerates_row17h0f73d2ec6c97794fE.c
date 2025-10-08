__int64 __fastcall sniffnet::gui::pages::inspect_page::get_agglomerates_row(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        unsigned int a4)
{
  unsigned __int8 v4; // bp
  unsigned int bars_length; // eax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v13; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v14; // [rsp+8h] [rbp-1B0h]
  __int64 v15; // [rsp+10h] [rbp-1A8h]
  __int16 v16; // [rsp+18h] [rbp-1A0h]
  __int16 v17; // [rsp+20h] [rbp-198h]
  __int128 v18; // [rsp+28h] [rbp-190h]
  __int64 v19; // [rsp+38h] [rbp-180h]
  __int16 v20; // [rsp+40h] [rbp-178h]
  _BYTE v21[96]; // [rsp+60h] [rbp-158h] BYREF
  _BYTE v22[64]; // [rsp+C0h] [rbp-F8h] BYREF
  _BYTE v23[72]; // [rsp+100h] [rbp-B8h] BYREF
  _BYTE v24[112]; // [rsp+148h] [rbp-70h] BYREF

  v4 = a4;
  bars_length = sniffnet::gui::pages::overview_page::get_bars_length(a4, a3);
  sniffnet::gui::pages::overview_page::get_bars(&v13, bars_length);
  iced_widget::row::Row<Message,Theme,Renderer>::width(v22, &v13);
  v18 = 0LL;
  v19 = 0x7F80000000000000LL;
  v16 = 2;
  v17 = 2;
  v20 = 0;
  v13 = 0LL;
  v14 = 8LL;
  v15 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(v21, &v13, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::width(v24, v21, 95.0);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v8 = *((_QWORD *)a3 + 4);
      v9 = *((_QWORD *)a3 + 5);
      v10 = *((_QWORD *)a3 + 7);
      v11 = *((_QWORD *)a3 + 6);
    }
    else
    {
      v9 = a3[2] >> 61;
      v8 = 8LL * *((_QWORD *)a3 + 4);
      v10 = a3[3] >> 61;
      v11 = 8LL * *((_QWORD *)a3 + 6);
    }
  }
  else
  {
    v8 = *(_QWORD *)a3;
    v9 = *((_QWORD *)a3 + 1);
    v10 = *((_QWORD *)a3 + 3);
    v11 = *((_QWORD *)a3 + 2);
  }
  sniffnet::networking::types::data_representation::DataRepr::formatted_string(
    v21,
    v4,
    v11 + v8,
    (__PAIR128__(v10, v11) + __PAIR128__(v9, v8)) >> 64);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v13, v21);
  iced_core::widget::text::Text<Theme,Renderer>::font(v21, &v13, a2);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v23, v24, v21);
  v18 = 0LL;
  LODWORD(v19) = 0;
  v16 = 2;
  v17 = 2;
  WORD2(v19) = 0;
  v13 = 0LL;
  v14 = 8LL;
  v15 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::padding(v21, &v13, 0x20000LL);
  iced_widget::row::Row<Message,Theme,Renderer>::height(&v13, v21, 40LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v21, &v13, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v13, v21, v22);
  return iced_widget::row::Row<Message,Theme,Renderer>::push(a1, &v13, v23);
}