__int64 __fastcall sniffnet::gui::pages::inspect_page::host_filters_col(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int8 v10; // bl
  __int128 v11; // rax
  __int128 v12; // rax
  __int128 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int128 v17; // [rsp+10h] [rbp-6C8h] BYREF
  __int64 v18; // [rsp+20h] [rbp-6B8h]
  _OWORD v19[5]; // [rsp+30h] [rbp-6A8h] BYREF
  void *v20; // [rsp+80h] [rbp-658h] BYREF
  __int64 v21; // [rsp+88h] [rbp-650h]
  __int128 *v22; // [rsp+90h] [rbp-648h]
  __int64 v23; // [rsp+98h] [rbp-640h]
  __int64 v24; // [rsp+A0h] [rbp-638h]
  __int128 v25; // [rsp+A8h] [rbp-630h]
  __int64 v26; // [rsp+B8h] [rbp-620h]
  __int16 v27; // [rsp+C0h] [rbp-618h]
  __int64 v28; // [rsp+1F8h] [rbp-4E0h]
  __int128 v29; // [rsp+200h] [rbp-4D8h] BYREF
  __int128 v30; // [rsp+210h] [rbp-4C8h]
  __int128 v31; // [rsp+220h] [rbp-4B8h]
  __int128 v32; // [rsp+230h] [rbp-4A8h]
  __int128 v33; // [rsp+2E0h] [rbp-3F8h] BYREF
  __int128 v34; // [rsp+2F0h] [rbp-3E8h]
  __int128 v35; // [rsp+300h] [rbp-3D8h]
  __int128 v36; // [rsp+310h] [rbp-3C8h]
  _BYTE v37[24]; // [rsp+328h] [rbp-3B0h] BYREF
  _BYTE v38[24]; // [rsp+340h] [rbp-398h] BYREF
  _BYTE v39[24]; // [rsp+358h] [rbp-380h] BYREF
  _BYTE v40[64]; // [rsp+370h] [rbp-368h] BYREF
  _BYTE v41[64]; // [rsp+3B0h] [rbp-328h] BYREF
  _BYTE v42[64]; // [rsp+3F0h] [rbp-2E8h] BYREF
  _BYTE v43[72]; // [rsp+430h] [rbp-2A8h] BYREF
  _BYTE v44[72]; // [rsp+478h] [rbp-260h] BYREF
  _BYTE v45[88]; // [rsp+4C0h] [rbp-218h] BYREF
  _BYTE v46[88]; // [rsp+518h] [rbp-1C0h] BYREF
  _BYTE v47[88]; // [rsp+570h] [rbp-168h] BYREF
  _BYTE v48[272]; // [rsp+5C8h] [rbp-110h] BYREF

  v28 = a1;
  <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(v48, a2);
  v25 = 0LL;
  LODWORD(v26) = 0;
  LOWORD(v23) = 2;
  LOWORD(v24) = 2;
  WORD2(v26) = 0;
  v20 = 0LL;
  v21 = 8LL;
  v22 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v29, &v20, 10LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v19, &v29, 1LL);
  v8 = sniffnet::translations::translations_3::filter_by_host_translation(a5);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v20, v8, v9);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v29, &v20, a4);
  iced_core::widget::text::Text<Theme,Renderer>::class(&v20, &v29, 4LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(&v29, &v20, 18.299999);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v33, v19, &v29);
  v10 = *(_BYTE *)(a2 + 216);
  if ( v10 || *(_QWORD *)(a2 + 160) || *(_QWORD *)(a2 + 208) || *(_QWORD *)(a2 + 184) )
  {
    v19[3] = v36;
    v19[2] = v35;
    v19[1] = v34;
    v19[0] = v33;
    sniffnet::report::types::search_parameters::SearchParameters::reset_host_filters(&v29, a2);
    sniffnet::gui::pages::inspect_page::button_clear_filter(&v20, &v29, a4);
    iced_widget::row::Row<Message,Theme,Renderer>::push(&v29, v19, &v20);
    v33 = v29;
    v34 = v30;
    v35 = v31;
    v36 = v32;
  }
  <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v20, a2);
  sniffnet::gui::pages::inspect_page::filter_combobox(&v29, 6LL, a3 + 240, &v20, a4);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v45, &v29, 95LL);
  <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v20, a2);
  sniffnet::gui::pages::inspect_page::filter_combobox(&v29, 7LL, a3, &v20, a4);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v46, &v29, 190LL);
  <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v20, a2);
  sniffnet::gui::pages::inspect_page::filter_combobox(&v29, 8LL, a3 + 120, &v20, a4);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v47, &v29, 190LL);
  v25 = 0LL;
  LODWORD(v26) = 0;
  LOWORD(v23) = 2;
  LOWORD(v24) = 2;
  WORD2(v26) = 0;
  v20 = 0LL;
  v21 = 8LL;
  v22 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v29, &v20, 5LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v19, &v29, 1LL);
  *(_QWORD *)&v11 = sniffnet::translations::translations_2::country_translation((unsigned __int8)a5);
  v29 = v11;
  *(_QWORD *)&v17 = &v29;
  *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
  v20 = &unk_2DFEF58;
  v21 = 2LL;
  v24 = 0LL;
  v22 = &v17;
  v23 = 1LL;
  core::option::Option<T>::map_or_else(v37, 0LL, *((_QWORD *)&v11 + 1), &v20);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v20, v37);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v29, &v20, a4);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v20, v19, &v29);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v40, &v20, v45);
  v25 = 0LL;
  LODWORD(v26) = 0;
  LOWORD(v23) = 2;
  LOWORD(v24) = 2;
  WORD2(v26) = 0;
  v20 = 0LL;
  v21 = 8LL;
  v22 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v29, &v20, 5LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v19, &v29, 1LL);
  *(_QWORD *)&v12 = sniffnet::translations::translations_2::domain_name_translation((unsigned __int8)a5);
  v29 = v12;
  *(_QWORD *)&v17 = &v29;
  *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
  v20 = &unk_2DFEF58;
  v21 = 2LL;
  v24 = 0LL;
  v22 = &v17;
  v23 = 1LL;
  core::option::Option<T>::map_or_else(v38, 0LL, *((_QWORD *)&v12 + 1), &v20);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v20, v38);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v29, &v20, a4);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v20, v19, &v29);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v41, &v20, v46);
  v25 = 0LL;
  LODWORD(v26) = 0;
  LOWORD(v23) = 2;
  LOWORD(v24) = 2;
  WORD2(v26) = 0;
  v20 = 0LL;
  v21 = 8LL;
  v22 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v29, &v20, 5LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v19, &v29, 1LL);
  *(_QWORD *)&v13 = sniffnet::translations::translations_2::administrative_entity_translation((unsigned __int8)a5);
  v29 = v13;
  *(_QWORD *)&v17 = &v29;
  *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
  v20 = &unk_2DFEF58;
  v21 = 2LL;
  v24 = 0LL;
  v22 = &v17;
  v23 = 1LL;
  core::option::Option<T>::map_or_else(v39, 0LL, *((_QWORD *)&v13 + 1), &v20);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v20, v39);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v29, &v20, a4);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v20, v19, &v29);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v42, &v20, v47);
  v25 = 0LL;
  v26 = 0x7F80000000000000LL;
  LOWORD(v23) = 2;
  LOWORD(v24) = 2;
  v27 = 0;
  v20 = 0LL;
  v21 = 8LL;
  v22 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v29, &v20, 0LL);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(v19, &v29, 5LL);
  iced_widget::toggler::Toggler<Message,Theme,Renderer>::new(&v20, v10);
  v14 = sniffnet::translations::translations_2::only_show_favorites_translation((unsigned __int8)a5);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v29, v14, v15);
  v18 = v30;
  v17 = v29;
  iced_widget::toggler::Toggler<Message,Theme,Renderer>::label(&v29, &v20, &v17);
  iced_widget::toggler::Toggler<Message,Theme,Renderer>::on_toggle(&v20, &v29, v48);
  iced_widget::toggler::Toggler<Message,Theme,Renderer>::width(&v29, &v20);
  iced_widget::toggler::Toggler<Message,Theme,Renderer>::spacing(&v20, &v29);
  iced_widget::toggler::Toggler<Message,Theme,Renderer>::size(&v29, &v20);
  iced_widget::toggler::Toggler<Message,Theme,Renderer>::font(&v20, &v29, a4);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&v29, &v20);
  iced_widget::container::Container<Message,Theme,Renderer>::padding(&v20, &v29, 5LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v29, v19, &v20);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v43, &v29, v41);
  v25 = 0LL;
  v26 = 0x7F80000000000000LL;
  LOWORD(v23) = 2;
  LOWORD(v24) = 2;
  v27 = 0;
  v20 = 0LL;
  v21 = 8LL;
  v22 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v29, &v20, 0LL);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v20, &v29, 5LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v29, &v20, v40);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v44, &v29, v42);
  v25 = 0LL;
  v26 = 0x7F80000000000000LL;
  LOWORD(v23) = 2;
  LOWORD(v24) = 2;
  v27 = 0;
  v20 = 0LL;
  v21 = 8LL;
  v22 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v29, &v20, 0LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v20, &v29, &v33);
  LOWORD(v19[0]) = 2;
  WORD4(v19[0]) = 3;
  HIDWORD(v19[0]) = 1092616192;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v29, &v20, v19);
  v25 = 0LL;
  LODWORD(v26) = 0;
  LOWORD(v23) = 2;
  LOWORD(v24) = 2;
  WORD2(v26) = 0;
  v20 = 0LL;
  v21 = 8LL;
  v22 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v19, &v20, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v20, v19, 30LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v19, &v20, v43);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v20, v19, v44);
  return iced_widget::column::Column<Message,Theme,Renderer>::push(v28, &v29, &v20);
}