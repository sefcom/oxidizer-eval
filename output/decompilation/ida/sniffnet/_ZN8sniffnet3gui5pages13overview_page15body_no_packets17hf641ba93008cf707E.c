__int64 __fastcall sniffnet::gui::pages::overview_page::body_no_packets(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r14
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  int v12; // [rsp+2h] [rbp-256h]
  unsigned __int16 v13; // [rsp+6h] [rbp-252h]
  _OWORD v15[6]; // [rsp+10h] [rbp-248h] BYREF
  __int128 v16; // [rsp+70h] [rbp-1E8h] BYREF
  _OWORD *v17; // [rsp+80h] [rbp-1D8h]
  __int64 v18; // [rsp+88h] [rbp-1D0h]
  __int64 v19; // [rsp+90h] [rbp-1C8h]
  __int128 v20; // [rsp+98h] [rbp-1C0h]
  __int64 v21; // [rsp+A8h] [rbp-1B0h]
  __int16 v22; // [rsp+B0h] [rbp-1A8h]
  __int64 v23; // [rsp+D0h] [rbp-188h]
  _BYTE v24[8]; // [rsp+D8h] [rbp-180h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-178h]
  __int64 v26; // [rsp+E8h] [rbp-170h]
  _OWORD v27[6]; // [rsp+F0h] [rbp-168h] BYREF
  __int64 v28; // [rsp+150h] [rbp-108h]
  __int64 v29; // [rsp+158h] [rbp-100h]
  __int128 v30; // [rsp+160h] [rbp-F8h] BYREF
  _OWORD *v31; // [rsp+170h] [rbp-E8h]
  _BYTE v32[144]; // [rsp+1C8h] [rbp-90h] BYREF

  v23 = a6;
  v29 = a5;
  v28 = a1;
  v7 = *a2;
  v8 = 2 * !__OFSUB__(-*a2, 1LL);
  v9 = a2[v8 + 7];
  v10 = HIDWORD(a2[v8 + 7]);
  sniffnet::networking::types::capture_context::CaptureSource::get_name(v24, a2, a3, -*a2);
  sniffnet::networking::types::my_link_type::MyLinkType::full_print_on_one_line(&v30, v9, v10, a4);
  *(_QWORD *)&v15[0] = &v30;
  *((_QWORD *)&v15[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v16 = &off_2DFF088;
  *((_QWORD *)&v16 + 1) = 1LL;
  v19 = 0LL;
  v17 = v15;
  v18 = 1LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(v24, &v16);
  core::ptr::drop_in_place<alloc::string::String>(&v30);
  if ( (v9 & 0xFFFFFFFE) == 8 )
  {
    sniffnet::utils::types::icon::Icon::to_text(&v16, 41LL);
    iced_core::widget::text::Text<Theme,Renderer>::size(v15, &v16, 60LL);
    sniffnet::translations::translations_3::unsupported_link_type_translation(&v16, (unsigned __int8)a4, v25, v26);
  }
  else if ( __OFSUB__(-v7, 1LL) )
  {
    sniffnet::utils::types::icon::Icon::get_hourglass(&v16, v23);
    iced_core::widget::text::Text<Theme,Renderer>::size(v15, &v16, 60LL);
    sniffnet::translations::translations_4::reading_from_pcap_translation(&v16, (unsigned __int8)a4, v25, v26);
  }
  else if ( a2[5] )
  {
    sniffnet::utils::types::icon::Icon::get_hourglass(&v16, v23);
    iced_core::widget::text::Text<Theme,Renderer>::size(v15, &v16, 60LL);
    sniffnet::translations::translations::waiting_translation(&v16, (unsigned __int8)a4, v25, v26);
  }
  else
  {
    sniffnet::utils::types::icon::Icon::to_text(&v16, 41LL);
    iced_core::widget::text::Text<Theme,Renderer>::size(v15, &v16, 60LL);
    sniffnet::translations::translations::no_addresses_translation(&v16, (unsigned __int8)a4, v25, v26);
  }
  iced_core::widget::text::Text<Theme,Renderer>::align_x(&v30, &v16);
  iced_core::widget::text::Text<Theme,Renderer>::font(v32, &v30, a3);
  v27[0] = v15[0];
  v27[1] = v15[1];
  v27[2] = v15[2];
  v27[3] = v15[3];
  v27[4] = v15[4];
  v27[5] = v15[5];
  v21 = 0x7F80000000000000LL;
  v20 = 0LL;
  LOWORD(v18) = 2;
  *(_DWORD *)((char *)&v18 + 2) = v12;
  HIWORD(v18) = v13;
  LOWORD(v19) = 2;
  *(_DWORD *)((char *)&v19 + 2) = v12;
  HIWORD(v19) = v13;
  v22 = 0;
  *(_QWORD *)&v16 = 0LL;
  *((_QWORD *)&v16 + 1) = 8LL;
  v17 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::width(&v30, &v16, 0LL);
  iced_widget::column::Column<Message,Theme,Renderer>::padding(&v16, &v30, 10LL);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v30, &v16, 10LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v16, &v30, 1LL);
  LOWORD(v15[0]) = 2;
  *(_DWORD *)((char *)v15 + 2) = v12;
  *(_DWORD *)((char *)v15 + 6) = v13;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v30, &v16, v15);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v16, &v30, v27);
  LOWORD(v15[0]) = 2;
  *(_DWORD *)((char *)v15 + 2) = v12;
  WORD3(v15[0]) = v13;
  WORD4(v15[0]) = 3;
  HIDWORD(v15[0]) = 1097859072;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v30, &v16, v15);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v15, &v30, v32);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v16, v29, v23);
  v31 = v17;
  v30 = v16;
  iced_core::widget::text::Text<Theme,Renderer>::new(&v16, &v30);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v30, &v16, a3);
  iced_core::widget::text::Text<Theme,Renderer>::size(&v16, &v30, 50LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v30, v15, &v16);
  LOWORD(v16) = 2;
  *(_DWORD *)((char *)&v16 + 2) = v12;
  WORD3(v16) = v13;
  DWORD2(v16) = 131073;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v28, &v30, &v16);
  return core::ptr::drop_in_place<alloc::string::String>(v24);
}