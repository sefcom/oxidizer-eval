__int64 __fastcall sniffnet::gui::pages::connection_details_page::get_host_info_col(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 result; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int128 v19; // [rsp+0h] [rbp-198h] BYREF
  __int128 v20; // [rsp+10h] [rbp-188h]
  __m256i v21; // [rsp+20h] [rbp-178h]
  __int64 v22; // [rsp+40h] [rbp-158h]
  __int128 v23; // [rsp+50h] [rbp-148h] BYREF
  __int128 v24; // [rsp+60h] [rbp-138h]
  __m256i v25; // [rsp+70h] [rbp-128h]
  __int64 v26; // [rsp+90h] [rbp-108h]
  __int128 v27; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-E8h]
  __int128 v29; // [rsp+C0h] [rbp-D8h] BYREF
  __int128 v30; // [rsp+D0h] [rbp-C8h]
  __m256i v31; // [rsp+E0h] [rbp-B8h]
  __int64 v32; // [rsp+100h] [rbp-98h]
  __int128 v33; // [rsp+108h] [rbp-90h] BYREF
  __int128 v34; // [rsp+118h] [rbp-80h]
  __m256i v35; // [rsp+128h] [rbp-70h]
  __int64 v36; // [rsp+148h] [rbp-50h]
  __int128 v37; // [rsp+150h] [rbp-48h] BYREF
  __int64 v38; // [rsp+160h] [rbp-38h]

  *(_OWORD *)&v25.m256i_u64[1] = 0LL;
  v25.m256i_i64[3] = 0x7F80000000000000LL;
  WORD4(v24) = 2;
  v25.m256i_i16[0] = 2;
  LOWORD(v26) = 0;
  *(_QWORD *)&v23 = 0LL;
  *((_QWORD *)&v23 + 1) = 8LL;
  *(_QWORD *)&v24 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v19, &v23, 4LL);
  core::net::parser::<impl core::str::traits::FromStr for core::net::ip_addr::IpAddr>::from_str(&v23, a2, a3);
  if ( (_BYTE)v23 == 2 || *(_QWORD *)(a4 + 64) && *(_QWORD *)(a4 + 40) )
  {
    v26 = v22;
    v25 = v21;
    v24 = v20;
    v23 = v19;
    iced_widget::rule::Rule<Theme>::horizontal(&v29);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v19, &v23, &v29);
  }
  core::net::parser::<impl core::str::traits::FromStr for core::net::ip_addr::IpAddr>::from_str(&v23, a2, a3);
  if ( (_BYTE)v23 == 2 )
  {
    v32 = v22;
    v31 = v21;
    v30 = v20;
    v29 = v19;
    v11 = sniffnet::translations::translations_2::fqdn_translation(a6);
    sniffnet::gui::styles::text::TextType::highlighted_subtitle_with_desc(&v23, v11, v12, a2, a3, a5);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v19, &v29, &v23);
  }
  if ( *(_QWORD *)(a4 + 64) && *(_QWORD *)(a4 + 40) )
  {
    v32 = v22;
    v31 = v21;
    v30 = v20;
    v29 = v19;
    *(_QWORD *)&v33 = a4 + 48;
    *((_QWORD *)&v33 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v34 = a4 + 24;
    *((_QWORD *)&v34 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v23 = &unk_2DFEF78;
    *((_QWORD *)&v23 + 1) = 3LL;
    v25.m256i_i64[0] = 0LL;
    *(_QWORD *)&v24 = &v33;
    *((_QWORD *)&v24 + 1) = 2LL;
    core::option::Option<T>::map_or_else(&v37, 0LL, v10, &v23);
    v13 = sniffnet::translations::translations_2::administrative_entity_translation(a6);
    v28 = v38;
    v27 = v37;
    sniffnet::gui::styles::text::TextType::highlighted_subtitle_with_desc(
      &v23,
      v13,
      v14,
      *((_QWORD *)&v37 + 1),
      v38,
      a5);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v33, &v29, &v23);
    v19 = v33;
    v20 = v34;
    v21 = v35;
    v22 = v36;
    core::ptr::drop_in_place<alloc::string::String>(&v27);
  }
  result = v22;
  *(_QWORD *)(a1 + 64) = v22;
  v16 = v19;
  v17 = v20;
  v18 = *(_OWORD *)v21.m256i_i8;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v21.m256i_u64[2];
  *(_OWORD *)(a1 + 32) = v18;
  *(_OWORD *)(a1 + 16) = v17;
  *(_OWORD *)a1 = v16;
  return result;
}