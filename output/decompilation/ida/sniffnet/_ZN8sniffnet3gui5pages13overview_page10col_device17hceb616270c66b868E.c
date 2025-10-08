__int64 __fastcall sniffnet::gui::pages::overview_page::col_device(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v7; // r15
  unsigned int v8; // eax
  unsigned int v9; // ebp
  __int64 (__fastcall **v10)(); // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int128 v13; // rax
  __int64 v14; // rdx
  __int128 v15; // rax
  int v17; // [rsp+2h] [rbp-2A6h]
  __int16 v18; // [rsp+6h] [rbp-2A2h]
  __int128 v19; // [rsp+8h] [rbp-2A0h] BYREF
  __int128 *v20; // [rsp+18h] [rbp-290h]
  __int64 v21; // [rsp+20h] [rbp-288h]
  __int64 v22; // [rsp+28h] [rbp-280h]
  __int128 v23; // [rsp+30h] [rbp-278h]
  __int64 v24; // [rsp+40h] [rbp-268h]
  __int16 v25; // [rsp+48h] [rbp-260h]
  __int64 v26; // [rsp+68h] [rbp-240h] BYREF
  __int64 v27; // [rsp+70h] [rbp-238h]
  __int64 v28; // [rsp+78h] [rbp-230h]
  __int16 v29; // [rsp+80h] [rbp-228h]
  int v30; // [rsp+82h] [rbp-226h]
  __int16 v31; // [rsp+86h] [rbp-222h]
  __int16 v32; // [rsp+88h] [rbp-220h]
  int v33; // [rsp+8Ah] [rbp-21Eh]
  __int16 v34; // [rsp+8Eh] [rbp-21Ah]
  __int128 v35; // [rsp+90h] [rbp-218h]
  __int64 v36; // [rsp+A0h] [rbp-208h]
  __int16 v37; // [rsp+A8h] [rbp-200h]
  __int64 (__fastcall **v38)(); // [rsp+B0h] [rbp-1F8h]
  __int64 v39; // [rsp+B8h] [rbp-1F0h]
  unsigned int v40; // [rsp+C4h] [rbp-1E4h]
  unsigned int v41; // [rsp+C8h] [rbp-1E0h]
  unsigned int v42; // [rsp+CCh] [rbp-1DCh]
  __int128 v43; // [rsp+D0h] [rbp-1D8h] BYREF
  __int128 *v44; // [rsp+E0h] [rbp-1C8h]
  __int64 v45; // [rsp+138h] [rbp-170h]
  __int128 v46; // [rsp+140h] [rbp-168h] BYREF
  __int128 *v47; // [rsp+150h] [rbp-158h]
  _BYTE v48[24]; // [rsp+188h] [rbp-120h] BYREF
  _BYTE v49[24]; // [rsp+1A0h] [rbp-108h] BYREF
  _BYTE v50[24]; // [rsp+1B8h] [rbp-F0h] BYREF
  _BYTE v51[24]; // [rsp+1D0h] [rbp-D8h] BYREF
  _QWORD v52[9]; // [rsp+1E8h] [rbp-C0h] BYREF
  _BYTE v53[120]; // [rsp+230h] [rbp-78h] BYREF

  v45 = a1;
  v7 = *a4;
  v8 = 2 * !__OFSUB__(-*a4, 1LL);
  v42 = a4[v8 + 7];
  v41 = HIDWORD(a4[v8 + 7]);
  sniffnet::networking::types::capture_context::CaptureSource::get_name(v48, a4, v42, a4);
  v9 = a2;
  if ( (unsigned __int8)sniffnet::gui::types::filters::Filters::is_some_filter_active(a5) )
  {
    v40 = a2;
    v23 = 0LL;
    LODWORD(v24) = 0;
    LOWORD(v21) = 2;
    LOWORD(v22) = 2;
    WORD2(v24) = 0;
    *(_QWORD *)&v19 = 0LL;
    *((_QWORD *)&v19 + 1) = 8LL;
    v20 = 0LL;
    iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v26, &v19, 10LL);
    iced_core::widget::text::Text<Theme,Renderer>::new(&v19, aBpf_0, 3LL);
    iced_core::widget::text::Text<Theme,Renderer>::font(&v43, &v19, a3);
    iced_widget::row::Row<Message,Theme,Renderer>::push(&v19, &v26, &v43);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v43, *(_QWORD *)(a5 + 8), *(_QWORD *)(a5 + 16));
    v47 = v44;
    v46 = v43;
    sniffnet::gui::pages::overview_page::get_info_tooltip(&v26, &v46, a3);
    iced_widget::row::Row<Message,Theme,Renderer>::push(&v43, &v19, &v26);
    v9 = v40;
    v39 = alloc::boxed::Box<T>::new(&v43);
    v10 = &off_2DF3DE8;
  }
  else
  {
    v11 = sniffnet::translations::translations::none_translation(a2);
    iced_core::widget::text::Text<Theme,Renderer>::new(&v19, v11, v12);
    iced_core::widget::text::Text<Theme,Renderer>::font(&v43, &v19, a3);
    v39 = alloc::boxed::Box<T>::new(&v43);
    v10 = &off_2DFE840;
  }
  v38 = v10;
  v23 = 0LL;
  v24 = 0x7F80000000000000LL;
  LOWORD(v21) = 2;
  LOWORD(v22) = 2;
  v25 = 0;
  *(_QWORD *)&v19 = 0LL;
  *((_QWORD *)&v19 + 1) = 8LL;
  v20 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::height(&v43, &v19);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(v53, &v43, 10LL);
  v35 = 0LL;
  v36 = 0x7F80000000000000LL;
  v29 = 2;
  v32 = 2;
  v37 = 0;
  v26 = 0LL;
  v27 = 8LL;
  v28 = 0LL;
  *(_QWORD *)&v13 = sniffnet::networking::types::capture_context::CaptureSource::title(v7, v9);
  v43 = v13;
  *(_QWORD *)&v46 = &v43;
  *((_QWORD *)&v46 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v19 = &unk_2DFEF58;
  *((_QWORD *)&v19 + 1) = 2LL;
  v22 = 0LL;
  v20 = &v46;
  v21 = 1LL;
  core::option::Option<T>::map_or_else(v49, 0LL, *((_QWORD *)&v13 + 1), &v19);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v19, v49);
  iced_core::widget::text::Text<Theme,Renderer>::class(&v43, &v19, 4LL);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v19, &v43, a3);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v46, &v26, &v19);
  v23 = 0LL;
  LODWORD(v24) = 0;
  LOWORD(v21) = 2;
  *(_DWORD *)((char *)&v21 + 2) = v17;
  HIWORD(v21) = v18;
  LOWORD(v22) = 2;
  *(_DWORD *)((char *)&v22 + 2) = v17;
  HIWORD(v22) = v18;
  WORD2(v24) = 0;
  *(_QWORD *)&v19 = 0LL;
  *((_QWORD *)&v19 + 1) = 8LL;
  v20 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v26, &v19, 10LL);
  v52[0] = v48;
  *(_QWORD *)&v43 = v52;
  *((_QWORD *)&v43 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v19 = &off_2DFF0A8;
  *((_QWORD *)&v19 + 1) = 1LL;
  v22 = 0LL;
  v20 = &v43;
  v21 = 1LL;
  core::option::Option<T>::map_or_else(v50, 0LL, v14, &v19);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v19, v50);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v43, &v19, a3);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v19, &v26, &v43);
  sniffnet::networking::types::my_link_type::MyLinkType::full_print_on_one_line(&v43, v42, v41, v9);
  sniffnet::gui::pages::overview_page::get_info_tooltip(&v26, &v43, a3);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v43, &v19, &v26);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v19, &v46, &v43);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v52, v53, &v19);
  v36 = 0x7F80000000000000LL;
  v35 = 0LL;
  v29 = 2;
  v30 = v17;
  v31 = v18;
  v32 = 2;
  v33 = v17;
  v34 = v18;
  v37 = 0;
  v26 = 0LL;
  v27 = 8LL;
  v28 = 0LL;
  *(_QWORD *)&v15 = sniffnet::translations::translations::active_filters_translation(v9);
  v43 = v15;
  *(_QWORD *)&v46 = &v43;
  *((_QWORD *)&v46 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v19 = &unk_2DFEF58;
  *((_QWORD *)&v19 + 1) = 2LL;
  v22 = 0LL;
  v20 = &v46;
  v21 = 1LL;
  core::option::Option<T>::map_or_else(v51, 0LL, *((_QWORD *)&v15 + 1), &v19);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v19, v51);
  iced_core::widget::text::Text<Theme,Renderer>::class(&v43, &v19, 4LL);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v19, &v43, a3);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v46, &v26, &v19);
  v35 = 0LL;
  LODWORD(v36) = 0;
  v29 = 2;
  v30 = v17;
  v31 = v18;
  v32 = 2;
  v33 = v17;
  v34 = v18;
  WORD2(v36) = 0;
  v26 = 0LL;
  v27 = 8LL;
  v28 = 0LL;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v19, asc_497AD0, 3LL);
  v44 = v20;
  v43 = v19;
  iced_core::widget::text::Text<Theme,Renderer>::new(&v19, &v43);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v43, &v19, a3);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v19, &v26, &v43);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v43, &v19, v39, v38);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v19, &v46, &v43);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v45, v52, &v19);
  return core::ptr::drop_in_place<alloc::string::String>(v48);
}