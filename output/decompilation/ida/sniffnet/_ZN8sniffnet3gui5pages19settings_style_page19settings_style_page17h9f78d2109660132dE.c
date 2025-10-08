__int64 __fastcall sniffnet::gui::pages::settings_style_page::settings_style_page(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // r13
  unsigned __int8 v3; // bp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int32 v8; // [rsp+Ah] [rbp-69Eh]
  __int16 v9; // [rsp+Eh] [rbp-69Ah]
  __int128 v10; // [rsp+10h] [rbp-698h] BYREF
  __int128 v11; // [rsp+20h] [rbp-688h]
  __m256i v12; // [rsp+30h] [rbp-678h] BYREF
  __int64 v13; // [rsp+50h] [rbp-658h]
  __int128 v14; // [rsp+60h] [rbp-648h] BYREF
  __int64 v15; // [rsp+70h] [rbp-638h]
  _WORD v16[6]; // [rsp+80h] [rbp-628h] BYREF
  int v17; // [rsp+8Ch] [rbp-61Ch]
  _WORD v18[2]; // [rsp+90h] [rbp-618h] BYREF
  int v19; // [rsp+94h] [rbp-614h]
  __int16 v20; // [rsp+98h] [rbp-610h]
  __int32 v21; // [rsp+9Ah] [rbp-60Eh]
  __int16 v22; // [rsp+9Eh] [rbp-60Ah]
  __int128 v23; // [rsp+A0h] [rbp-608h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-5F8h]
  __m256i v25; // [rsp+C0h] [rbp-5E8h]
  __int64 v26; // [rsp+E0h] [rbp-5C8h]
  __int128 v27; // [rsp+F0h] [rbp-5B8h] BYREF
  __int128 v28; // [rsp+100h] [rbp-5A8h]
  _BYTE src[224]; // [rsp+110h] [rbp-598h] BYREF
  __int64 v30; // [rsp+1F0h] [rbp-4B8h]
  unsigned __int8 v31; // [rsp+1F8h] [rbp-4B0h]
  _BYTE v32[24]; // [rsp+200h] [rbp-4A8h] BYREF
  __int128 v33; // [rsp+218h] [rbp-490h]
  __int64 v34; // [rsp+228h] [rbp-480h]
  unsigned __int8 v35; // [rsp+238h] [rbp-470h]
  unsigned __int8 v36; // [rsp+239h] [rbp-46Fh]
  __int128 v37; // [rsp+260h] [rbp-448h] BYREF
  __int64 v38; // [rsp+270h] [rbp-438h]
  __int128 v39; // [rsp+280h] [rbp-428h] BYREF
  __int128 v40; // [rsp+290h] [rbp-418h]
  __int64 v41; // [rsp+2A0h] [rbp-408h]
  __int64 v42; // [rsp+2A8h] [rbp-400h] BYREF
  int v43; // [rsp+2B0h] [rbp-3F8h]
  int v44; // [rsp+2B4h] [rbp-3F4h]
  __int64 v45; // [rsp+2B8h] [rbp-3F0h]
  __int128 v46; // [rsp+2C0h] [rbp-3E8h] BYREF
  __int128 v47; // [rsp+2D0h] [rbp-3D8h]
  __m256i v48; // [rsp+2E0h] [rbp-3C8h]
  __int64 v49; // [rsp+300h] [rbp-3A8h]
  __int128 v50; // [rsp+310h] [rbp-398h] BYREF
  __int128 v51; // [rsp+320h] [rbp-388h]
  __m256i v52; // [rsp+330h] [rbp-378h]
  __int64 v53; // [rsp+350h] [rbp-358h]
  __int128 v54; // [rsp+420h] [rbp-288h] BYREF
  __int64 v55; // [rsp+430h] [rbp-278h]
  unsigned __int8 v56; // [rsp+438h] [rbp-270h]
  _BYTE v57[208]; // [rsp+440h] [rbp-268h] BYREF
  _OWORD v58[2]; // [rsp+510h] [rbp-198h] BYREF
  _BYTE dest[208]; // [rsp+530h] [rbp-178h] BYREF
  _BYTE v60[168]; // [rsp+600h] [rbp-A8h] BYREF

  v41 = a1;
  <sniffnet::gui::types::settings::Settings as core::clone::Clone>::clone(&v27, a2 + 1168);
  memcpy(dest, &src[8], sizeof(dest));
  v2 = v36;
  v3 = v35;
  v38 = v34;
  v37 = v33;
  core::ptr::drop_in_place<alloc::string::String>(&src[216]);
  core::ptr::drop_in_place<alloc::string::String>(v32);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(&v27, dest);
  v40 = v28;
  v39 = v27;
  v58[0] = *(_OWORD *)src;
  v58[1] = *(_OWORD *)&src[16];
  *(_OWORD *)&src[8] = 0LL;
  *(_QWORD *)&src[24] = 0x7F80000000000000LL;
  WORD4(v28) = 2;
  *(_WORD *)src = 2;
  *(_WORD *)&src[32] = 0;
  *(_QWORD *)&v27 = 0LL;
  *((_QWORD *)&v27 + 1) = 8LL;
  *(_QWORD *)&v28 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v50, &v27, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::width(&v54, &v50, 0LL);
  sniffnet::gui::pages::settings_notifications_page::settings_header((__int64)&v27, (__int64)&v39, (__int64)v58, v3, v2);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v50, &v54, &v27);
  sniffnet::gui::components::tab::get_settings_tabs(&v54, 1, (__int64)&v39, v2);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v27, &v50, &v54);
  v16[0] = 2;
  v16[4] = 3;
  v17 = 1097859072;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v54, &v27, v16);
  sniffnet::translations::translations::appearance_title_translation(&v27, v2);
  iced_core::widget::text::Text<Theme,Renderer>::class(&v50, &v27, 4LL);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v27, &v50, &v39);
  iced_core::widget::text::Text<Theme,Renderer>::size(&v50, &v27, 18.299999);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v27, &v54, &v50);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v50, &v27, v16);
  sniffnet::gui::pages::settings_style_page::gradients_row(&v54, &v39, v3, v2);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v27, &v50, &v54);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v46, &v27, v16);
  *(_OWORD *)&src[8] = 0LL;
  *(_QWORD *)&src[24] = 0x7F80000000000000LL;
  WORD4(v28) = 2;
  *(_WORD *)src = 2;
  *(_WORD *)&src[32] = 0;
  *(_QWORD *)&v27 = 0LL;
  *((_QWORD *)&v27 + 1) = 8LL;
  *(_QWORD *)&v28 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v50, &v27, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::width(&v54, &v50, 0LL);
  memset(&v12.m256i_u64[1], 0, 22);
  WORD4(v11) = 2;
  v12.m256i_i16[0] = 2;
  *(_QWORD *)&v10 = 0LL;
  *((_QWORD *)&v10 + 1) = 8LL;
  *(_QWORD *)&v11 = 0LL;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v27, aYeti, 4LL);
  v15 = v28;
  v14 = v27;
  *(_QWORD *)&v50 = 16LL;
  sniffnet::gui::pages::settings_style_page::get_palette_container(&v27, dest, &v14, &v50);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v50, &v10, &v27);
  v18[0] = 3;
  v19 = 1097859072;
  v20 = 2;
  v21 = v8;
  v22 = v9;
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v10, &v50, v18);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v27, aYeti, 4LL);
  v15 = v28;
  v14 = v27;
  *(_QWORD *)&v50 = 17LL;
  sniffnet::gui::pages::settings_style_page::get_palette_container(&v27, dest, &v14, &v50);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v50, &v10, &v27);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v27, &v54, &v50);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v54, &v27, v16);
  memset(&v12.m256i_u64[1], 0, 22);
  WORD4(v11) = 2;
  *(_DWORD *)((char *)&v11 + 10) = v8;
  HIWORD(v11) = v9;
  v12.m256i_i16[0] = 2;
  *(__int32 *)((char *)v12.m256i_i32 + 2) = v8;
  v12.m256i_i16[3] = v9;
  *(_QWORD *)&v10 = 0LL;
  *((_QWORD *)&v10 + 1) = 8LL;
  *(_QWORD *)&v11 = 0LL;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v27, &unk_272B68, 8LL);
  v15 = v28;
  v14 = v27;
  *(_QWORD *)&v50 = 18LL;
  sniffnet::gui::pages::settings_style_page::get_palette_container(&v27, dest, &v14, &v50);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v50, &v10, &v27);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v10, &v50, v18);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v27, aMonAmour, 9LL);
  v15 = v28;
  v14 = v27;
  *(_QWORD *)&v50 = 19LL;
  sniffnet::gui::pages::settings_style_page::get_palette_container(&v27, dest, &v14, &v50);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v50, &v10, &v27);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v27, &v54, &v50);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v23, &v27, v16);
  sniffnet::gui::pages::settings_style_page::get_extra_palettes(&v27, dest);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v54, &v27);
  v4 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v54);
  if ( v4 )
  {
    v6 = v5;
    do
    {
      *(_QWORD *)&src[32] = v26;
      *(__m256i *)src = v25;
      v28 = v24;
      v27 = v23;
      iced_widget::column::Column<Message,Theme,Renderer>::push(&v50, &v27, v4, v6);
      v23 = v50;
      v24 = v51;
      v25 = v52;
      v26 = v53;
      v4 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v54);
      v6 = v5;
    }
    while ( v4 );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<core::pin::Pin<alloc::boxed::Box<dyn core::future::future::Future+Output = ()+core::marker::Send>>>>(
    &v54,
    &v27,
    v5,
    v6);
  v13 = v26;
  v12 = v25;
  v11 = v24;
  v10 = v23;
  <alloc::string::String as core::clone::Clone>::clone(&v27, &v37);
  v56 = v2;
  v54 = v27;
  v55 = v28;
  memcpy(v57, dest, sizeof(v57));
  v31 = v2;
  v27 = v39;
  v28 = v40;
  *(_OWORD *)&src[208] = v37;
  v30 = v38;
  memcpy(src, dest, 0xD0uLL);
  iced_widget::lazy::Lazy<Message,Theme,Renderer,Dependency,View>::new(&v50, &v54, &v27);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v27, &v10, &v50);
  LOWORD(v54) = 2;
  *(_DWORD *)((char *)&v54 + 2) = v8;
  WORD3(v54) = v9;
  WORD4(v54) = 3;
  HIDWORD(v54) = 1092616192;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v50, &v27, &v54);
  v23 = v50;
  v24 = v51;
  v25 = v52;
  v26 = v53;
  sniffnet::gui::styles::scrollbar::ScrollbarType::properties(&v42);
  v44 = 1092616192;
  *(_QWORD *)((char *)&v28 + 4) = v45;
  *(_QWORD *)((char *)&v27 + 4) = v42;
  HIDWORD(v27) = v43;
  LODWORD(v28) = 1092616192;
  LODWORD(v27) = 2;
  iced_widget::scrollable::Scrollable<Message,Theme,Renderer>::with_direction(v60, &v23, &v27);
  *(_QWORD *)&src[32] = v49;
  *(__m256i *)src = v48;
  v28 = v47;
  v27 = v46;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v50, &v27, v60);
  v46 = v50;
  v47 = v51;
  v48 = v52;
  v49 = v53;
  iced_widget::container::Container<Message,Theme,Renderer>::new(&v27, &v46);
  iced_widget::container::Container<Message,Theme,Renderer>::height(&v50, &v27, 400LL);
  iced_widget::container::Container<Message,Theme,Renderer>::width(&v27, &v50, 800LL);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(v41, &v27, 10LL);
}