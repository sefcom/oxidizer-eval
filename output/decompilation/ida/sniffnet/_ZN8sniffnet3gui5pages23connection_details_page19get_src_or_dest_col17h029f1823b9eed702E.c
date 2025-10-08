__int64 __fastcall sniffnet::gui::pages::connection_details_page::get_src_or_dest_col(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 a8,
        __int64 a9)
{
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v20; // [rsp+8h] [rbp-1A0h]
  const char *v21; // [rsp+10h] [rbp-198h]
  __int64 v22; // [rsp+18h] [rbp-190h]
  __int64 v23; // [rsp+20h] [rbp-188h] BYREF
  __int64 v24; // [rsp+28h] [rbp-180h]
  __int64 v25; // [rsp+30h] [rbp-178h]
  __int16 v26; // [rsp+38h] [rbp-170h]
  __int16 v27; // [rsp+40h] [rbp-168h]
  __int128 v28; // [rsp+48h] [rbp-160h]
  __int64 v29; // [rsp+58h] [rbp-150h]
  __int16 v30; // [rsp+60h] [rbp-148h]
  __int64 v31; // [rsp+78h] [rbp-130h]
  _BYTE v32[8]; // [rsp+80h] [rbp-128h] BYREF
  __int64 v33; // [rsp+88h] [rbp-120h]
  __int64 v34; // [rsp+90h] [rbp-118h]
  _BYTE v35[88]; // [rsp+98h] [rbp-110h] BYREF
  _BYTE v36[72]; // [rsp+F0h] [rbp-B8h] BYREF
  _BYTE v37[112]; // [rsp+138h] [rbp-70h] BYREF

  v31 = a1;
  if ( !(_WORD)a4 )
  {
    v22 = sniffnet::translations::translations::address_translation(a8);
    v13 = v15;
    if ( a6 )
      goto LABEL_3;
LABEL_5:
    v21 = asc_497943;
    v14 = 1LL;
    goto LABEL_6;
  }
  v22 = sniffnet::translations::translations_2::socket_address_translation(a8);
  v13 = v12;
  if ( !a6 )
    goto LABEL_5;
LABEL_3:
  v21 = *(const char **)(a6 + 8);
  v14 = *(_QWORD *)(a6 + 16);
LABEL_6:
  v20 = v14;
  v28 = 0LL;
  v29 = 0x7F80000000000000LL;
  v26 = 2;
  v27 = 2;
  v30 = 0;
  v23 = 0LL;
  v24 = 8LL;
  v25 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(v36, &v23, 4LL);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&v23, a2);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v35, &v23, 0LL);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(&v23, v35);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v35, v36, &v23);
  iced_widget::rule::Rule<Theme>::horizontal(&v23);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v36, v35, &v23);
  v28 = 0LL;
  LODWORD(v29) = 0;
  v26 = 2;
  v27 = 2;
  WORD2(v29) = 0;
  v23 = 0LL;
  v24 = 8LL;
  v25 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(v35, &v23, 10LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v37, v35, 2LL);
  sniffnet::utils::formatted_strings::get_socket_address(v32, a3, a4, a5);
  sniffnet::gui::styles::text::TextType::highlighted_subtitle_with_desc(&v23, v22, v13, v33, v34, a7);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v35, v37, &v23);
  sniffnet::gui::pages::connection_details_page::get_button_copy(v37, a8, a7, a3, a9);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v23, v35, v37);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v35, v36, &v23);
  v16 = sniffnet::translations::translations_2::mac_address_translation(a8);
  sniffnet::gui::styles::text::TextType::highlighted_subtitle_with_desc(&v23, v16, v17, v21, v20, a7);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v31, v35, &v23);
  return core::ptr::drop_in_place<alloc::string::String>(v32);
}