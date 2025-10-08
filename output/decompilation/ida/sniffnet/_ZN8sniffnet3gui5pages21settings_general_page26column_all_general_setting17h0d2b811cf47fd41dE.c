__int64 __fastcall sniffnet::gui::pages::settings_general_page::column_all_general_setting(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int8 v4; // bp
  char v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  double v13; // [rsp+28h] [rbp-2D0h]
  __int128 v14; // [rsp+30h] [rbp-2C8h] BYREF
  __int128 v15; // [rsp+40h] [rbp-2B8h]
  __m256i v16; // [rsp+50h] [rbp-2A8h]
  __int64 v17; // [rsp+70h] [rbp-288h]
  __int128 v18; // [rsp+80h] [rbp-278h] BYREF
  __int64 v19; // [rsp+90h] [rbp-268h]
  __int128 v20; // [rsp+A0h] [rbp-258h] BYREF
  __int128 v21; // [rsp+B0h] [rbp-248h]
  __m256i v22; // [rsp+C0h] [rbp-238h]
  __int64 v23; // [rsp+E0h] [rbp-218h]
  __int128 v24; // [rsp+F0h] [rbp-208h] BYREF
  __int64 v25; // [rsp+100h] [rbp-1F8h]
  _OWORD v26[2]; // [rsp+110h] [rbp-1E8h] BYREF
  __m256i v27; // [rsp+130h] [rbp-1C8h]
  __int64 v28; // [rsp+150h] [rbp-1A8h]
  __int128 v29; // [rsp+178h] [rbp-180h] BYREF
  __int128 v30; // [rsp+188h] [rbp-170h]
  __m256i v31; // [rsp+198h] [rbp-160h]
  __int64 v32; // [rsp+1B8h] [rbp-140h]
  __int128 v33; // [rsp+270h] [rbp-88h]
  __int64 v34; // [rsp+280h] [rbp-78h]
  __int128 v35; // [rsp+288h] [rbp-70h]
  __int64 v36; // [rsp+298h] [rbp-60h]
  _BYTE v37[24]; // [rsp+2A0h] [rbp-58h] BYREF
  double v38; // [rsp+2B8h] [rbp-40h]
  unsigned __int8 v39; // [rsp+2C1h] [rbp-37h]

  <sniffnet::gui::types::settings::Settings as core::clone::Clone>::clone(&v29, a2 + 1168);
  v4 = v39;
  v13 = v38;
  v19 = v34;
  v18 = v33;
  v25 = v36;
  v24 = v35;
  core::ptr::drop_in_place<alloc::string::String>(v37);
  v5 = *(_BYTE *)(a2 + 2439);
  *(_OWORD *)&v31.m256i_u64[1] = 0LL;
  v31.m256i_i64[3] = 0x7F80000000000000LL;
  WORD4(v30) = 2;
  v31.m256i_i16[0] = 2;
  LOWORD(v32) = 0;
  *(_QWORD *)&v29 = 0LL;
  *((_QWORD *)&v29 + 1) = 8LL;
  *(_QWORD *)&v30 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(v26, &v29, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::padding(&v29, v26, 655365LL);
  sniffnet::gui::pages::settings_general_page::row_language_scale_factor(&v20, v4, a3, v13);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v26, &v29, &v20);
  iced_widget::rule::Rule<Theme>::horizontal(&v29, 25LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v14, v26, &v29);
  if ( v5 != 3 )
  {
    v23 = v17;
    v22 = v16;
    v21 = v15;
    v20 = v14;
    v6 = sniffnet::translations::translations_3::params_not_editable_translation(v4);
    iced_core::widget::text::Text<Theme,Renderer>::new(&v29, v6, v7);
    iced_core::widget::text::Text<Theme,Renderer>::font(v26, &v29, a3);
    iced_widget::container::Container<Message,Theme,Renderer>::new(&v29, v26);
    iced_widget::container::Container<Message,Theme,Renderer>::padding(v26, &v29);
    iced_widget::container::Container<Message,Theme,Renderer>::class(&v29, v26, 6LL);
    iced_widget::column::Column<Message,Theme,Renderer>::push(v26, &v20, &v29);
    LOWORD(v20) = 2;
    WORD4(v20) = 3;
    HIDWORD(v20) = 1092616192;
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v29, v26, &v20);
    v14 = v29;
    v15 = v30;
    v16 = v31;
    v17 = v32;
  }
  v28 = v17;
  v27 = v16;
  v26[1] = v15;
  v26[0] = v14;
  sniffnet::gui::pages::settings_general_page::mmdb_settings(
    (unsigned int)&v29,
    v5 == 3,
    v4,
    a3,
    DWORD2(v18),
    v19,
    *((__int64 *)&v24 + 1),
    v25,
    *(_QWORD *)(a2 + 1152),
    *(_QWORD *)(a2 + 1160));
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v20, v26, &v29);
  v8 = v20;
  v9 = v21;
  v10 = *(_OWORD *)v22.m256i_i8;
  v11 = *(_OWORD *)&v22.m256i_u64[2];
  v14 = v20;
  v15 = v21;
  v16 = v22;
  v17 = v23;
  *(_QWORD *)(a1 + 64) = v23;
  *(_OWORD *)(a1 + 48) = v11;
  *(_OWORD *)(a1 + 32) = v10;
  *(_OWORD *)(a1 + 16) = v9;
  *(_OWORD *)a1 = v8;
  core::ptr::drop_in_place<alloc::string::String>(&v24);
  return core::ptr::drop_in_place<alloc::string::String>(&v18);
}