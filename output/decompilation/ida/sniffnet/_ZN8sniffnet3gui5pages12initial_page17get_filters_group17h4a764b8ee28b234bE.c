__int64 __fastcall sniffnet::gui::pages::initial_page::get_filters_group(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        unsigned int a4)
{
  unsigned int v5; // ebp
  __int64 v6; // r15
  __int64 v7; // r12
  __int128 v8; // xmm1
  __int128 v10; // [rsp+10h] [rbp-838h] BYREF
  __int128 v11; // [rsp+20h] [rbp-828h]
  __m256i v12; // [rsp+30h] [rbp-818h]
  __int64 v13; // [rsp+50h] [rbp-7F8h]
  __int128 dest; // [rsp+60h] [rbp-7E8h] BYREF
  __int128 v15; // [rsp+70h] [rbp-7D8h]
  __m256i v16; // [rsp+80h] [rbp-7C8h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-7A8h]
  __int128 v18; // [rsp+280h] [rbp-5C8h] BYREF
  __int128 v19; // [rsp+290h] [rbp-5B8h]
  __m256i v20; // [rsp+2A0h] [rbp-5A8h]
  __int64 v21; // [rsp+2C0h] [rbp-588h]
  _BYTE v22[24]; // [rsp+4A8h] [rbp-3A0h] BYREF
  _BYTE src[168]; // [rsp+4C0h] [rbp-388h] BYREF
  _BYTE v24[72]; // [rsp+568h] [rbp-2E0h] BYREF
  _BYTE v25[64]; // [rsp+5B0h] [rbp-298h] BYREF
  _OWORD v26[37]; // [rsp+5F0h] [rbp-258h] BYREF

  v5 = *(unsigned __int8 *)(a2 + 24);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a2 + 16);
  sniffnet::translations::translations_5::filter_traffic_translation(v22, a4);
  iced_widget::checkbox::Checkbox<Message,Theme,Renderer>::new(&dest, v22, v5);
  iced_widget::checkbox::Checkbox<Message,Theme,Renderer>::on_toggle(&v18, &dest);
  iced_widget::checkbox::Checkbox<Message,Theme,Renderer>::size(src, &v18);
  iced_widget::checkbox::Checkbox<Message,Theme,Renderer>::font(&dest, src);
  *(_OWORD *)&v20.m256i_u64[1] = 0LL;
  v20.m256i_i64[3] = 0x7F80000000000000LL;
  WORD4(v19) = 2;
  v20.m256i_i16[0] = 2;
  LOWORD(v21) = 0;
  *(_QWORD *)&v18 = 0LL;
  *((_QWORD *)&v18 + 1) = 8LL;
  *(_QWORD *)&v19 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(src, &v18, 10LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v10, src, &dest);
  if ( v5 )
  {
    iced_widget::text_input::TextInput<Message,Theme,Renderer>::new(&dest, 1LL, 0LL, v6, v7);
    iced_widget::text_input::TextInput<Message,Theme,Renderer>::on_input(&v18, &dest);
    iced_widget::text_input::TextInput<Message,Theme,Renderer>::padding(v26, &v18);
    v8 = a3[1];
    v26[0] = *a3;
    v26[1] = v8;
    *(_OWORD *)&v16.m256i_u64[1] = 0LL;
    v16.m256i_i64[3] = 0x7F80000000000000LL;
    WORD4(v15) = 2;
    v16.m256i_i16[0] = 2;
    LOWORD(v17) = 0;
    *(_QWORD *)&dest = 0LL;
    *((_QWORD *)&dest + 1) = 8LL;
    *(_QWORD *)&v15 = 0LL;
    iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v18, &dest, 10LL);
    dest = xmmword_26E870;
    iced_widget::column::Column<Message,Theme,Renderer>::padding(src, &v18, &dest);
    memset(&v16.m256i_u64[1], 0, 22);
    WORD4(v15) = 2;
    v16.m256i_i16[0] = 2;
    *(_QWORD *)&dest = 0LL;
    *((_QWORD *)&dest + 1) = 8LL;
    *(_QWORD *)&v15 = 0LL;
    iced_widget::row::Row<Message,Theme,Renderer>::align_y(&v18, &dest, 1LL);
    iced_widget::row::Row<Message,Theme,Renderer>::spacing(v25, &v18, 5LL);
    iced_core::widget::text::Text<Theme,Renderer>::new(&dest, aBpf, 4LL);
    iced_core::widget::text::Text<Theme,Renderer>::font(&v18, &dest, a3);
    iced_widget::row::Row<Message,Theme,Renderer>::push(&dest, v25, &v18);
    iced_widget::row::Row<Message,Theme,Renderer>::push(&v18, &dest, v26);
    iced_widget::column::Column<Message,Theme,Renderer>::push(v24, src, &v18);
    v17 = v13;
    v16 = v12;
    v15 = v11;
    dest = v10;
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v18, &dest, v24);
    v10 = v18;
    v11 = v19;
    v12 = v20;
    v13 = v21;
  }
  iced_widget::container::Container<Message,Theme,Renderer>::new(&dest, &v10);
  iced_widget::container::Container<Message,Theme,Renderer>::padding(&v18, &dest, 15LL);
  iced_widget::container::Container<Message,Theme,Renderer>::width(&dest, &v18, 0LL);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, &dest, 4LL);
}