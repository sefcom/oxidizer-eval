__int64 __fastcall sniffnet::gui::pages::notifications_page::threshold_bar(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5)
{
  unsigned int v7; // r12d
  unsigned int bars_length; // ebp
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v15; // [rsp+8h] [rbp-200h] BYREF
  __int64 v16; // [rsp+10h] [rbp-1F8h]
  __int64 v17; // [rsp+18h] [rbp-1F0h]
  __int16 v18; // [rsp+20h] [rbp-1E8h]
  __int16 v19; // [rsp+28h] [rbp-1E0h]
  __int128 v20; // [rsp+30h] [rbp-1D8h]
  __int64 v21; // [rsp+40h] [rbp-1C8h]
  __int16 v22; // [rsp+48h] [rbp-1C0h]
  __int64 v23; // [rsp+68h] [rbp-1A0h]
  _WORD v24[48]; // [rsp+70h] [rbp-198h] BYREF
  _BYTE v25[72]; // [rsp+D0h] [rbp-138h] BYREF
  _BYTE v26[64]; // [rsp+118h] [rbp-F0h] BYREF
  _BYTE v27[64]; // [rsp+158h] [rbp-B0h] BYREF
  _BYTE v28[112]; // [rsp+198h] [rbp-70h] BYREF

  v23 = a1;
  v7 = *(unsigned __int8 *)(a2 + 168);
  bars_length = sniffnet::gui::pages::overview_page::get_bars_length(*(unsigned __int8 *)(a2 + 168), a3);
  v20 = 0LL;
  LODWORD(v21) = 0;
  v18 = 2;
  v19 = 2;
  WORD2(v21) = 0;
  v15 = 0LL;
  v16 = 8LL;
  v17 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v24, &v15, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v15, v24, 5LL);
  sniffnet::countries::country_utils::get_computer_tooltip((__int64)v24, 1, 1, 0LL, v9, 0, a4, a5);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v26, &v15, v24);
  v20 = 0LL;
  v21 = 0x7F80000000000000LL;
  v18 = 2;
  v19 = 2;
  v22 = 0;
  v15 = 0LL;
  v16 = 8LL;
  v17 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(v25, &v15, 1LL);
  v20 = 0LL;
  LODWORD(v21) = 0;
  v18 = 2;
  v19 = 2;
  WORD2(v21) = 0;
  v15 = 0LL;
  v16 = 8LL;
  v17 = 0LL;
  v24[0] = 0;
  v24[4] = 2;
  iced_widget::row::Row<Message,Theme,Renderer>::push(v27, &v15, v24);
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v10 = *(_QWORD *)(a2 + 32);
      v11 = *(_QWORD *)(a2 + 40);
      v12 = *(_QWORD *)(a2 + 56);
      v13 = *(_QWORD *)(a2 + 48);
    }
    else
    {
      v11 = *(__int128 *)(a2 + 32) >> 61;
      v10 = 8LL * *(_QWORD *)(a2 + 32);
      v12 = *(__int128 *)(a2 + 48) >> 61;
      v13 = 8LL * *(_QWORD *)(a2 + 48);
    }
  }
  else
  {
    v10 = *(_QWORD *)a2;
    v11 = *(_QWORD *)(a2 + 8);
    v12 = *(_QWORD *)(a2 + 24);
    v13 = *(_QWORD *)(a2 + 16);
  }
  sniffnet::networking::types::data_representation::DataRepr::formatted_string(
    v24,
    v7,
    v13 + v10,
    (__PAIR128__(v12, v13) + __PAIR128__(v11, v10)) >> 64);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v15, v24);
  iced_core::widget::text::Text<Theme,Renderer>::font(v24, &v15, a5);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v28, v27, v24);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v15, v25, v28);
  sniffnet::gui::pages::overview_page::get_bars(v25, bars_length);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v24, &v15, v25);
  return iced_widget::row::Row<Message,Theme,Renderer>::push(v23, v26, v24);
}