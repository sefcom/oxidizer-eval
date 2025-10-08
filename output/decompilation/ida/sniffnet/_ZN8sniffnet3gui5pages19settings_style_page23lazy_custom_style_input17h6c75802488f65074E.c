__int64 __fastcall sniffnet::gui::pages::settings_style_page::lazy_custom_style_input(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  bool v9; // r15
  int v10; // r12d
  unsigned __int8 v11; // al
  __int64 v12; // rax
  __int64 v13; // rdx
  _DWORD *v14; // rbx
  bool v15; // r15
  __int64 v16; // rax
  bool v18; // [rsp+17h] [rbp-5A1h]
  __int64 v19; // [rsp+18h] [rbp-5A0h]
  __int128 v20; // [rsp+20h] [rbp-598h] BYREF
  __int128 v21; // [rsp+30h] [rbp-588h]
  __int128 v22; // [rsp+40h] [rbp-578h]
  __int128 v23; // [rsp+50h] [rbp-568h]
  __int64 v24; // [rsp+60h] [rbp-558h]
  __int64 v25; // [rsp+70h] [rbp-548h]
  _DWORD *v26; // [rsp+78h] [rbp-540h]
  __int128 v27; // [rsp+80h] [rbp-538h] BYREF
  __int128 v28; // [rsp+90h] [rbp-528h]
  __int128 v29; // [rsp+A0h] [rbp-518h]
  __int128 v30; // [rsp+B0h] [rbp-508h]
  __int64 v31; // [rsp+C0h] [rbp-4F8h]
  _BYTE v32[24]; // [rsp+E8h] [rbp-4D0h] BYREF
  _OWORD v33[4]; // [rsp+100h] [rbp-4B8h] BYREF
  __int64 v34; // [rsp+140h] [rbp-478h]
  __int128 src; // [rsp+150h] [rbp-468h] BYREF
  __int64 v36; // [rsp+160h] [rbp-458h]
  __int16 v37; // [rsp+168h] [rbp-450h]
  __int16 v38; // [rsp+170h] [rbp-448h]
  __int128 v39; // [rsp+178h] [rbp-440h]
  __int64 v40; // [rsp+188h] [rbp-430h]
  __int128 v41[19]; // [rsp+190h] [rbp-428h] BYREF
  int v42; // [rsp+2C8h] [rbp-2F0h] BYREF
  _OWORD v43[6]; // [rsp+2CCh] [rbp-2ECh] BYREF
  __int128 dest; // [rsp+330h] [rbp-288h] BYREF
  __int128 v45; // [rsp+340h] [rbp-278h]
  __int128 v46; // [rsp+350h] [rbp-268h]
  __int128 v47; // [rsp+360h] [rbp-258h]
  __int64 v48; // [rsp+370h] [rbp-248h]
  unsigned __int64 v49; // [rsp+438h] [rbp-180h]
  __int128 v50[6]; // [rsp+4A0h] [rbp-118h] BYREF
  _BYTE v51[64]; // [rsp+508h] [rbp-B0h] BYREF
  _BYTE v52[112]; // [rsp+548h] [rbp-70h] BYREF

  v25 = a1;
  v26 = a6;
  v9 = (*a6 & 0x1C) != 16;
  v18 = *(_QWORD *)a6 < 6uLL;
  sniffnet::gui::styles::types::palette::Palette::from_file(&v42, a4, a5);
  v19 = a4;
  if ( a5 )
  {
    v10 = v42;
    v39 = 0LL;
    LODWORD(v40) = 0;
    v37 = 2;
    v38 = 2;
    WORD2(v40) = 0;
    *(_QWORD *)&src = 0LL;
    *((_QWORD *)&src + 1) = 8LL;
    v36 = 0LL;
    iced_widget::row::Row<Message,Theme,Renderer>::align_y(v33, &src, 1LL);
    sniffnet::utils::formatted_strings::get_path_termination_string(v32, a4, a5, 17LL);
    iced_core::widget::text::Text<Theme,Renderer>::new(&src, v32);
    iced_core::widget::text::Text<Theme,Renderer>::font(&dest, &src, a3);
    v11 = 5 * (v10 != 0);
  }
  else
  {
    v39 = 0LL;
    LODWORD(v40) = 0;
    v37 = 2;
    v38 = 2;
    WORD2(v40) = 0;
    *(_QWORD *)&src = 0LL;
    *((_QWORD *)&src + 1) = 8LL;
    v36 = 0LL;
    iced_widget::row::Row<Message,Theme,Renderer>::align_y(v33, &src, 1LL);
    sniffnet::utils::formatted_strings::get_path_termination_string(v32, a4, 0LL, 17LL);
    iced_core::widget::text::Text<Theme,Renderer>::new(&src, v32);
    iced_core::widget::text::Text<Theme,Renderer>::font(&dest, &src, a3);
    v11 = 0;
  }
  iced_core::widget::text::Text<Theme,Renderer>::class(&v27, &dest, v11);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v52, v33, &v27);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&src, a4, a5);
  *(_QWORD *)&v45 = v36;
  dest = src;
  sniffnet::gui::components::button::button_open_file(
    (__int64)&src,
    &dest,
    0,
    a2,
    a3,
    1,
    (__int64)sniffnet::gui::types::message::Message::LoadStyle);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v51, v52, &src);
  v39 = 0LL;
  v40 = 0x7F80000000000000LL;
  v37 = 2;
  v38 = 2;
  LOWORD(v41[0]) = 0;
  *(_QWORD *)&src = 0LL;
  *((_QWORD *)&src + 1) = 8LL;
  v36 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::width(&dest, &src, 0LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&src, &dest, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v27, &src, 5LL);
  v12 = sniffnet::translations::translations_3::custom_style_translation(a2);
  iced_core::widget::text::Text<Theme,Renderer>::new(&src, v12, v13);
  iced_core::widget::text::Text<Theme,Renderer>::font(&dest, &src, a3);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&src, &v27, &dest);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v20, &src, v51);
  v14 = v26;
  v15 = v18 && v9;
  if ( v15 )
  {
    v34 = v24;
    v33[3] = v23;
    v33[2] = v22;
    v33[1] = v21;
    v33[0] = v20;
    sniffnet::gui::styles::types::style_type::StyleType::get_palette(&dest, v26);
    sniffnet::gui::styles::types::style_type::StyleType::get_extension(&src, v14);
    sniffnet::gui::pages::settings_style_page::get_palette_rule((__int64)&v27, &dest, v41);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&dest, v33, &v27);
    v20 = dest;
    v21 = v45;
    v22 = v46;
    v23 = v47;
    v16 = v48;
LABEL_8:
    v24 = v16;
    goto LABEL_9;
  }
  if ( (v42 & 1) == 0 )
  {
    v50[5] = v43[5];
    v50[4] = v43[4];
    v50[3] = v43[3];
    v50[2] = v43[2];
    v50[1] = v43[1];
    v50[0] = v43[0];
    v48 = v24;
    v47 = v23;
    v46 = v22;
    v45 = v21;
    dest = v20;
    sniffnet::gui::styles::types::palette::Palette::generate_buttons_color(&v27, v43);
    sniffnet::gui::pages::settings_style_page::get_palette_rule((__int64)&src, v50, &v27);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v27, &dest, &src);
    v20 = v27;
    v21 = v28;
    v22 = v29;
    v23 = v30;
    v16 = v31;
    goto LABEL_8;
  }
LABEL_9:
  iced_widget::button::Button<Message,Theme,Renderer>::new(&src, &v20);
  iced_widget::button::Button<Message,Theme,Renderer>::height(&dest, &src);
  iced_widget::button::Button<Message,Theme,Renderer>::width(&src, &dest);
  v27 = xmmword_26FBF0;
  iced_widget::button::Button<Message,Theme,Renderer>::padding(&dest, &src);
  iced_widget::button::Button<Message,Theme,Renderer>::class(&src, &dest, v15 | 4u);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v27, v19, a5);
  *(_QWORD *)&v45 = v28;
  dest = v27;
  v49 = 0x800000000000000FLL;
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(v25, &src, &dest);
  return core::ptr::drop_in_place<core::result::Result<sniffnet::gui::styles::types::palette::Palette,toml::de::error::Error>>(&v42);
}