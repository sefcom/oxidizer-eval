__int64 __fastcall sniffnet::gui::pages::initial_page::get_export_pcap_group_maybe(
        _QWORD *a1,
        int a2,
        __int64 a3,
        unsigned __int8 a4,
        _OWORD *a5)
{
  __int64 result; // rax
  unsigned int v7; // r15d
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int128 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // rax
  __int32 v14; // [rsp+12h] [rbp-8C6h]
  __int16 v15; // [rsp+16h] [rbp-8C2h]
  __int64 v16; // [rsp+18h] [rbp-8C0h]
  __int64 v17; // [rsp+20h] [rbp-8B8h]
  __int64 v18; // [rsp+28h] [rbp-8B0h]
  __int64 v19; // [rsp+30h] [rbp-8A8h]
  __int128 v20; // [rsp+40h] [rbp-898h] BYREF
  __int64 v21; // [rsp+50h] [rbp-888h]
  _OWORD v22[2]; // [rsp+88h] [rbp-850h] BYREF
  __m256i v23; // [rsp+A8h] [rbp-830h]
  __int64 v24; // [rsp+C8h] [rbp-810h]
  __int128 dest; // [rsp+D0h] [rbp-808h] BYREF
  __int128 v26; // [rsp+E0h] [rbp-7F8h]
  __m256i v27; // [rsp+F0h] [rbp-7E8h] BYREF
  __int64 v28; // [rsp+110h] [rbp-7C8h]
  _BYTE v29[72]; // [rsp+2F0h] [rbp-5E8h] BYREF
  _BYTE v30[24]; // [rsp+338h] [rbp-5A0h] BYREF
  _BYTE v31[24]; // [rsp+350h] [rbp-588h] BYREF
  _BYTE src[168]; // [rsp+368h] [rbp-570h] BYREF
  __int128 v33; // [rsp+410h] [rbp-4C8h] BYREF
  __int64 v34; // [rsp+420h] [rbp-4B8h]
  __int16 v35; // [rsp+428h] [rbp-4B0h]
  __int16 v36; // [rsp+430h] [rbp-4A8h]
  __int128 v37; // [rsp+438h] [rbp-4A0h]
  __int64 v38; // [rsp+448h] [rbp-490h]
  __int16 v39; // [rsp+450h] [rbp-488h]
  _BYTE v40[72]; // [rsp+638h] [rbp-2A0h] BYREF
  _OWORD v41[37]; // [rsp+680h] [rbp-258h] BYREF

  if ( a2 )
  {
    result = 0x8000000000000003LL;
    *a1 = 0x8000000000000003LL;
  }
  else
  {
    v7 = *(unsigned __int8 *)(a3 + 48);
    v18 = *(_QWORD *)(a3 + 8);
    v17 = *(_QWORD *)(a3 + 16);
    v16 = *(_QWORD *)(a3 + 32);
    v19 = *(_QWORD *)(a3 + 40);
    v8 = a4;
    v9 = sniffnet::translations::translations_3::export_capture_translation(a4);
    iced_widget::checkbox::Checkbox<Message,Theme,Renderer>::new(&dest, v9, v10, v7);
    iced_widget::checkbox::Checkbox<Message,Theme,Renderer>::on_toggle(&v33, &dest);
    iced_widget::checkbox::Checkbox<Message,Theme,Renderer>::size(src, &v33);
    iced_widget::checkbox::Checkbox<Message,Theme,Renderer>::font(&dest, src);
    v37 = 0LL;
    v38 = 0x7F80000000000000LL;
    v35 = 2;
    v36 = 2;
    v39 = 0;
    *(_QWORD *)&v33 = 0LL;
    *((_QWORD *)&v33 + 1) = 8LL;
    v34 = 0LL;
    iced_widget::column::Column<Message,Theme,Renderer>::spacing(src, &v33, 10LL);
    iced_widget::column::Column<Message,Theme,Renderer>::push(v22, src, &dest);
    if ( v7 )
    {
      *(_OWORD *)&v27.m256i_u64[1] = 0LL;
      v27.m256i_i64[3] = 0x7F80000000000000LL;
      WORD4(v26) = 2;
      v27.m256i_i16[0] = 2;
      LOWORD(v28) = 0;
      *(_QWORD *)&dest = 0LL;
      *((_QWORD *)&dest + 1) = 8LL;
      *(_QWORD *)&v26 = 0LL;
      iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v33, &dest, 10LL);
      dest = xmmword_26E870;
      iced_widget::column::Column<Message,Theme,Renderer>::padding(src, &v33, &dest);
      memset(&v27.m256i_u64[1], 0, 22);
      WORD4(v26) = 2;
      v27.m256i_i16[0] = 2;
      *(_QWORD *)&dest = 0LL;
      *((_QWORD *)&dest + 1) = 8LL;
      *(_QWORD *)&v26 = 0LL;
      iced_widget::row::Row<Message,Theme,Renderer>::align_y(&v33, &dest, 1LL);
      iced_widget::row::Row<Message,Theme,Renderer>::spacing(v29, &v33, 5LL);
      *(_QWORD *)&v11 = sniffnet::translations::translations_3::file_name_translation(v8);
      v33 = v11;
      *(_QWORD *)&v20 = &v33;
      *((_QWORD *)&v20 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_2DFEF58;
      *((_QWORD *)&dest + 1) = 2LL;
      v27.m256i_i64[0] = 0LL;
      *(_QWORD *)&v26 = &v20;
      *((_QWORD *)&v26 + 1) = 1LL;
      core::option::Option<T>::map_or_else(v30, 0LL, *((_QWORD *)&v11 + 1), &dest);
      iced_core::widget::text::Text<Theme,Renderer>::new(&dest, v30);
      iced_core::widget::text::Text<Theme,Renderer>::font(&v33, &dest, a5);
      iced_widget::row::Row<Message,Theme,Renderer>::push(&v20, v29, &v33);
      iced_widget::text_input::TextInput<Message,Theme,Renderer>::new(&dest, aSniffnetPcap, 13LL, v18, v17);
      iced_widget::text_input::TextInput<Message,Theme,Renderer>::on_input(&v33, &dest);
      iced_widget::text_input::TextInput<Message,Theme,Renderer>::padding(v41, &v33);
      v12 = a5[1];
      v41[0] = *a5;
      v41[1] = v12;
      iced_widget::row::Row<Message,Theme,Renderer>::push(&dest, &v20, v41);
      iced_widget::column::Column<Message,Theme,Renderer>::push(v29, src, &dest);
      memset(&v27.m256i_u64[1], 0, 22);
      WORD4(v26) = 2;
      *(_DWORD *)((char *)&v26 + 10) = v14;
      HIWORD(v26) = v15;
      v27.m256i_i16[0] = 2;
      *(__int32 *)((char *)v27.m256i_i32 + 2) = v14;
      v27.m256i_i16[3] = v15;
      *(_QWORD *)&dest = 0LL;
      *((_QWORD *)&dest + 1) = 8LL;
      *(_QWORD *)&v26 = 0LL;
      iced_widget::row::Row<Message,Theme,Renderer>::align_y(&v33, &dest, 1LL);
      iced_widget::row::Row<Message,Theme,Renderer>::spacing(src, &v33, 5LL);
      *(_QWORD *)&v13 = sniffnet::translations::translations_3::directory_translation(v8);
      v33 = v13;
      *(_QWORD *)&v20 = &v33;
      *((_QWORD *)&v20 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_2DFEF58;
      *((_QWORD *)&dest + 1) = 2LL;
      v27.m256i_i64[0] = 0LL;
      *(_QWORD *)&v26 = &v20;
      *((_QWORD *)&v26 + 1) = 1LL;
      core::option::Option<T>::map_or_else(v31, 0LL, *((_QWORD *)&v13 + 1), &dest);
      iced_core::widget::text::Text<Theme,Renderer>::new(&dest, v31);
      iced_core::widget::text::Text<Theme,Renderer>::font(&v33, &dest, a5);
      iced_widget::row::Row<Message,Theme,Renderer>::push(&v20, src, &v33);
      sniffnet::utils::formatted_strings::get_path_termination_string(&v33, v16, v19, 25LL);
      iced_core::widget::text::Text<Theme,Renderer>::new(&dest, &v33);
      iced_core::widget::text::Text<Theme,Renderer>::font(&v33, &dest, a5);
      iced_widget::row::Row<Message,Theme,Renderer>::push(&dest, &v20, &v33);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v33, v16, v19);
      v21 = v34;
      v20 = v33;
      sniffnet::gui::components::button::button_open_file(
        (__int64)src,
        &v20,
        2u,
        v8,
        (__int64)a5,
        1,
        (__int64)sniffnet::gui::types::message::Message::OutputPcapDir);
      iced_widget::row::Row<Message,Theme,Renderer>::push(&v33, &dest, src);
      iced_widget::column::Column<Message,Theme,Renderer>::push(v40, v29, &v33);
      v28 = v24;
      v27 = v23;
      v26 = v22[1];
      dest = v22[0];
      iced_widget::column::Column<Message,Theme,Renderer>::push(v22, &dest, v40);
    }
    iced_widget::container::Container<Message,Theme,Renderer>::new(&dest, v22);
    iced_widget::container::Container<Message,Theme,Renderer>::padding(&v33, &dest, 15LL);
    iced_widget::container::Container<Message,Theme,Renderer>::width(&dest, &v33, 0LL);
    return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, &dest, 4LL);
  }
  return result;
}