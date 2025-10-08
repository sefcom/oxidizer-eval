__int64 __fastcall sniffnet::gui::pages::connection_details_page::page_content(
        __int64 a1,
        _BYTE *a2,
        unsigned __int16 *a3)
{
  __int64 inner; // rax
  __m256i *v5; // rbx
  unsigned __int16 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // cl
  unsigned __int16 *v21; // rbp
  __int64 *v22; // r9
  __int64 *v23; // r9
  unsigned __int8 v25; // [rsp+7h] [rbp-831h]
  unsigned __int8 v26; // [rsp+8h] [rbp-830h]
  char v27; // [rsp+8h] [rbp-830h]
  __int32 v28; // [rsp+16h] [rbp-822h]
  __int16 v29; // [rsp+1Ah] [rbp-81Eh]
  __int32 v30; // [rsp+1Ch] [rbp-81Ch]
  _BYTE v31[88]; // [rsp+20h] [rbp-818h] BYREF
  __int128 v32; // [rsp+78h] [rbp-7C0h]
  char *v33; // [rsp+88h] [rbp-7B0h]
  __m256i v34[7]; // [rsp+90h] [rbp-7A8h] BYREF
  _OWORD *v35; // [rsp+188h] [rbp-6B0h]
  __m256i v36; // [rsp+190h] [rbp-6A8h] BYREF
  __m256i v37; // [rsp+1B0h] [rbp-688h]
  __int64 v38; // [rsp+1D0h] [rbp-668h]
  __int128 v39; // [rsp+1E0h] [rbp-658h] BYREF
  char v40; // [rsp+1F0h] [rbp-648h]
  __int128 v41; // [rsp+200h] [rbp-638h] BYREF
  __int128 v42; // [rsp+210h] [rbp-628h]
  __int128 v43; // [rsp+220h] [rbp-618h]
  __int128 v44; // [rsp+230h] [rbp-608h]
  __int128 v45; // [rsp+240h] [rbp-5F8h] BYREF
  __int128 v46; // [rsp+250h] [rbp-5E8h]
  __int128 v47; // [rsp+260h] [rbp-5D8h]
  __int128 v48; // [rsp+270h] [rbp-5C8h]
  __int128 v49; // [rsp+280h] [rbp-5B8h] BYREF
  __int128 v50; // [rsp+290h] [rbp-5A8h]
  __int128 v51; // [rsp+2A0h] [rbp-598h]
  __int128 v52; // [rsp+2B0h] [rbp-588h]
  _OWORD v53[2]; // [rsp+2C0h] [rbp-578h] BYREF
  __int64 v54; // [rsp+2E8h] [rbp-550h]
  __int128 v55; // [rsp+2F0h] [rbp-548h] BYREF
  __int128 v56; // [rsp+300h] [rbp-538h]
  __int128 v57; // [rsp+310h] [rbp-528h]
  __int128 v58; // [rsp+320h] [rbp-518h]
  __int128 v59; // [rsp+330h] [rbp-508h]
  __int128 v60; // [rsp+340h] [rbp-4F8h]
  __int128 v61; // [rsp+350h] [rbp-4E8h] BYREF
  _BYTE v62[88]; // [rsp+360h] [rbp-4D8h] BYREF
  __int128 v63; // [rsp+3C0h] [rbp-478h] BYREF
  __int64 v64; // [rsp+3D0h] [rbp-468h]
  __int128 v65; // [rsp+3E0h] [rbp-458h]
  __int32 v66; // [rsp+3F0h] [rbp-448h]
  __m256i v67; // [rsp+400h] [rbp-438h] BYREF
  __m256i v68; // [rsp+420h] [rbp-418h]
  __int64 v69; // [rsp+440h] [rbp-3F8h]
  __m256i v70; // [rsp+450h] [rbp-3E8h] BYREF
  __m256i v71; // [rsp+470h] [rbp-3C8h]
  __int64 v72; // [rsp+490h] [rbp-3A8h]
  __m256i v73; // [rsp+4A0h] [rbp-398h]
  __m256i v74; // [rsp+4C0h] [rbp-378h]
  __int128 v75; // [rsp+4E0h] [rbp-358h]
  __int64 v76; // [rsp+4F0h] [rbp-348h]
  __m256i v77[2]; // [rsp+4F8h] [rbp-340h] BYREF
  __int64 v78; // [rsp+538h] [rbp-300h]
  __m256i v79; // [rsp+540h] [rbp-2F8h] BYREF
  unsigned __int128 v80[3]; // [rsp+560h] [rbp-2D8h] BYREF
  _BYTE v81[48]; // [rsp+590h] [rbp-2A8h] BYREF
  _OWORD v82[10]; // [rsp+5C0h] [rbp-278h] BYREF
  __int64 v83; // [rsp+660h] [rbp-1D8h] BYREF
  __int64 v84; // [rsp+678h] [rbp-1C0h] BYREF
  char v85; // [rsp+6A8h] [rbp-190h]
  _BYTE v86[64]; // [rsp+6B0h] [rbp-188h] BYREF
  _BYTE v87[72]; // [rsp+6F0h] [rbp-148h] BYREF
  _BYTE dest[256]; // [rsp+738h] [rbp-100h] BYREF

  v54 = a1;
  memcpy(dest, a2 + 1208, 0xD0uLL);
  v26 = a2[1497];
  LOBYTE(v33) = a2[1496];
  v25 = a2[455];
  memcpy(v34, a2 + 1208, 0xD0uLL);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v82, v34);
  v53[0] = v82[0];
  v53[1] = v82[1];
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v34, dest);
  v79 = v34[1];
  inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a2 + 816, a3);
  v5 = (__m256i *)(inner + 48);
  if ( !inner )
    v5 = v34;
  <sniffnet::networking::types::info_address_port_pair::InfoAddressPortPair as core::default::Default>::default(v34);
  <sniffnet::networking::types::info_address_port_pair::InfoAddressPortPair as core::clone::Clone>::clone(v82, v5);
  core::ptr::drop_in_place<sniffnet::networking::types::info_address_port_pair::InfoAddressPortPair>(v34);
  v6 = a3 + 4;
  if ( v85 )
    v6 = (unsigned __int16 *)((char *)a3 + 25);
  v39 = *(_OWORD *)v6;
  v40 = *((_BYTE *)v6 + 16);
  v35 = v82;
  v7 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a2 + 1056, &v39);
  if ( v7 )
  {
    core::clone::Clone::clone(v34, v7 + 24, v8, 0x8000000000000000LL);
    *(_QWORD *)&v62[80] = v34[3].m256i_i64[0];
    *(__m256i *)&v62[48] = v34[2];
    *(__m256i *)&v62[16] = v34[1];
    *(_OWORD *)v62 = *(_OWORD *)&v34[0].m256i_u64[2];
    v61 = *(_OWORD *)v34[0].m256i_i8;
    if ( v34[0].m256i_i64[0] != 0x8000000000000000LL )
    {
      core::clone::Clone::clone(v34, &v61, v9, v10);
      v55 = *(_OWORD *)&v34[0].m256i_u64[1];
      v56 = *(_OWORD *)&v34[0].m256i_u64[3];
      v57 = *(_OWORD *)&v34[1].m256i_u64[1];
      v58 = *(_OWORD *)&v34[1].m256i_u64[3];
      v59 = *(_OWORD *)&v34[2].m256i_u64[1];
      v60 = *(_OWORD *)&v34[2].m256i_u64[3];
      if ( v34[0].m256i_i64[0] != 0x8000000000000000LL )
      {
        v32 = v60;
        *(_OWORD *)&v31[72] = v59;
        *(_OWORD *)&v31[56] = v58;
        *(_OWORD *)&v31[40] = v57;
        *(_OWORD *)&v31[24] = v56;
        *(_OWORD *)&v31[8] = v55;
        *(_QWORD *)v31 = v34[0].m256i_i64[0];
        goto LABEL_11;
      }
    }
  }
  else
  {
    *(_QWORD *)&v61 = 0x8000000000000000LL;
  }
  core::tuple::<impl core::default::Default for (U,T)>::default(v31);
LABEL_11:
  v11 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a2 + 912, &v31[24]);
  if ( v11 )
  {
    v76 = *(_QWORD *)(v11 + 160);
    v75 = *(_OWORD *)(v11 + 144);
    v12 = *(_OWORD *)(v11 + 80);
    v13 = *(_OWORD *)(v11 + 96);
    v14 = *(_OWORD *)(v11 + 112);
    *(_OWORD *)&v74.m256i_u64[2] = *(_OWORD *)(v11 + 128);
    *(_OWORD *)v74.m256i_i8 = v14;
    *(_OWORD *)&v73.m256i_u64[2] = v13;
    *(_OWORD *)v73.m256i_i8 = v12;
    v30 = *(_DWORD *)(v11 + 168);
    v66 = *(_DWORD *)(v11 + 188);
    v65 = *(_OWORD *)(v11 + 172);
  }
  else
  {
    v30 = 1000000000;
  }
  core::ptr::drop_in_place<(alloc::string::String,sniffnet::networking::types::host::Host)>(v31);
  v34[1].m256i_i64[3] = 0x7F80000000000000LL;
  *(_OWORD *)&v34[1].m256i_u64[1] = 0LL;
  v34[0].m256i_i16[12] = 2;
  *(__int32 *)((char *)&v34[0].m256i_i32[6] + 2) = v28;
  v34[0].m256i_i16[15] = v29;
  v34[1].m256i_i16[0] = 2;
  *(__int32 *)((char *)v34[1].m256i_i32 + 2) = v28;
  v34[1].m256i_i16[3] = v29;
  v34[2].m256i_i16[0] = 0;
  v34[0].m256i_i64[0] = 0LL;
  *(_OWORD *)&v34[0].m256i_u64[1] = 8uLL;
  iced_widget::column::Column<Message,Theme,Renderer>::width(v31, v34, 0LL);
  v15 = v26;
  sniffnet::gui::pages::connection_details_page::page_header(v34, v53, &v79, (unsigned __int8)v33, v26);
  v33 = (char *)a3 + 25;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v77, v31, v34);
  *(_OWORD *)&v34[1].m256i_u64[1] = 0LL;
  v34[1].m256i_i32[6] = 0;
  v34[0].m256i_i16[12] = 2;
  *(__int32 *)((char *)&v34[0].m256i_i32[6] + 2) = v28;
  v34[0].m256i_i16[15] = v29;
  v34[1].m256i_i16[0] = 2;
  *(__int32 *)((char *)v34[1].m256i_i32 + 2) = v28;
  v34[1].m256i_i16[3] = v29;
  v34[1].m256i_i16[14] = 0;
  v34[0].m256i_i64[0] = 0LL;
  *(_OWORD *)&v34[0].m256i_u64[1] = 8uLL;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v31, v34, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v55, v31, 10LL);
  v16 = sniffnet::translations::translations_2::source_translation(v26);
  iced_core::widget::text::Text<Theme,Renderer>::new(v34, v16, v17);
  iced_core::widget::text::Text<Theme,Renderer>::font(v31, v34, v53);
  iced_core::widget::text::Text<Theme,Renderer>::size(v34, v31, 19.9);
  iced_core::widget::text::Text<Theme,Renderer>::class(v31, v34, 3LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v45, &v55, v31);
  *(_OWORD *)&v34[1].m256i_u64[1] = 0LL;
  v34[1].m256i_i32[6] = 0;
  v34[0].m256i_i16[12] = 2;
  *(__int32 *)((char *)&v34[0].m256i_i32[6] + 2) = v28;
  v34[0].m256i_i16[15] = v29;
  v34[1].m256i_i16[0] = 2;
  *(__int32 *)((char *)v34[1].m256i_i32 + 2) = v28;
  v34[1].m256i_i16[3] = v29;
  v34[1].m256i_i16[14] = 0;
  v34[0].m256i_i64[0] = 0LL;
  *(_OWORD *)&v34[0].m256i_u64[1] = 8uLL;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v31, v34, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v55, v31, 10LL);
  v18 = sniffnet::translations::translations_2::destination_translation(v26);
  iced_core::widget::text::Text<Theme,Renderer>::new(v34, v18, v19);
  iced_core::widget::text::Text<Theme,Renderer>::font(v31, v34, v53);
  iced_core::widget::text::Text<Theme,Renderer>::size(v34, v31, 19.9);
  iced_core::widget::text::Text<Theme,Renderer>::class(v31, v34, 3LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v49, &v55, v31);
  *(_OWORD *)&v37.m256i_u64[1] = 0LL;
  v37.m256i_i64[3] = 0x7F80000000000000LL;
  v36.m256i_i16[12] = 2;
  *(__int32 *)((char *)&v36.m256i_i32[6] + 2) = v28;
  v36.m256i_i16[15] = v29;
  v37.m256i_i16[0] = 2;
  *(__int32 *)((char *)v37.m256i_i32 + 2) = v28;
  v37.m256i_i16[3] = v29;
  LOWORD(v38) = 0;
  v36.m256i_i64[0] = 0LL;
  *(_OWORD *)&v36.m256i_u64[1] = 8uLL;
  v20 = 1;
  v21 = a3 + 4;
  if ( (_QWORD)v61 != 0x8000000000000000LL )
  {
    v64 = *(_QWORD *)v62;
    v63 = v61;
    v59 = *(_OWORD *)&v62[72];
    v58 = *(_OWORD *)&v62[56];
    v57 = *(_OWORD *)&v62[40];
    v56 = *(_OWORD *)&v62[24];
    v55 = *(_OWORD *)&v62[8];
    sniffnet::gui::pages::connection_details_page::get_host_info_col(
      v34,
      *((_QWORD *)&v61 + 1),
      *(_QWORD *)v62,
      &v55,
      v53,
      v26);
    core::ptr::drop_in_place<iced_widget::column::Column<sniffnet::gui::types::message::Message,sniffnet::gui::styles::types::style_type::StyleType>>(&v36);
    v38 = v34[2].m256i_i64[0];
    v37 = v34[1];
    v36 = v34[0];
    if ( v30 == 1000000000 )
    {
      <sniffnet::networking::types::data_info::DataInfo as core::default::Default>::default(v31);
      v34[2] = *(__m256i *)&v31[48];
      v34[1] = *(__m256i *)&v31[16];
      *(_OWORD *)&v34[0].m256i_u64[2] = *(_OWORD *)v31;
      v34[0].m256i_i64[0] = 0LL;
      v34[3].m256i_i32[0] = 0;
    }
    else
    {
      v34[2].m256i_i64[2] = v76;
      *(_OWORD *)v34[2].m256i_i8 = v75;
      v34[1] = v74;
      v34[0] = v73;
      *(_OWORD *)((char *)&v34[2].m256i_u64[3] + 4) = v65;
      v34[3].m256i_i32[3] = v66;
      v34[2].m256i_i32[6] = v30;
    }
    sniffnet::countries::country_utils::get_flag_tooltip(v80, SBYTE8(v59), (__int64)v34, v26, (__int64)v53, 0);
    sniffnet::gui::pages::connection_details_page::get_local_tooltip(v81, a2, &v39, a3);
    if ( (unsigned __int8)<core::net::ip_addr::IpAddr as core::cmp::PartialEq>::eq(&v39, v21) )
    {
      *(_OWORD *)&v31[48] = v48;
      *(_OWORD *)&v31[32] = v47;
      *(_OWORD *)&v31[16] = v46;
      *(_OWORD *)v31 = v45;
      iced_widget::row::Row<Message,Theme,Renderer>::push(&v41, v31, v80);
      v45 = v41;
      v46 = v42;
      v47 = v43;
      v48 = v44;
      *(_OWORD *)&v31[48] = v52;
      *(_OWORD *)&v31[32] = v51;
      *(_OWORD *)&v31[16] = v50;
      *(_OWORD *)v31 = v49;
      iced_widget::row::Row<Message,Theme,Renderer>::push(&v41, v31, v81);
      v49 = v41;
      v50 = v42;
      v51 = v43;
      v52 = v44;
    }
    else
    {
      *(_OWORD *)&v31[48] = v52;
      *(_OWORD *)&v31[32] = v51;
      *(_OWORD *)&v31[16] = v50;
      *(_OWORD *)v31 = v49;
      iced_widget::row::Row<Message,Theme,Renderer>::push(&v41, v31, v80);
      v49 = v41;
      v50 = v42;
      v51 = v43;
      v52 = v44;
      *(_OWORD *)&v31[48] = v48;
      *(_OWORD *)&v31[32] = v47;
      *(_OWORD *)&v31[16] = v46;
      *(_OWORD *)v31 = v45;
      iced_widget::row::Row<Message,Theme,Renderer>::push(&v41, v31, v81);
      v45 = v41;
      v46 = v42;
      v47 = v43;
      v48 = v44;
    }
    core::ptr::drop_in_place<sniffnet::networking::types::host::Host>(&v55);
    core::ptr::drop_in_place<alloc::string::String>(&v63);
    v20 = 0;
    v21 = a3 + 4;
  }
  v27 = v20;
  LODWORD(v22) = 0;
  if ( v83 != 0x8000000000000000LL )
    v22 = &v83;
  sniffnet::gui::pages::connection_details_page::get_src_or_dest_col(
    (unsigned int)&v67,
    (unsigned int)&v45,
    (_DWORD)v21,
    *a3,
    a3[1],
    (_DWORD)v22,
    (__int64)v53,
    v15,
    (__int64)(a2 + 1672));
  LODWORD(v23) = 0;
  if ( v84 != 0x8000000000000000LL )
    v23 = &v84;
  sniffnet::gui::pages::connection_details_page::get_src_or_dest_col(
    (unsigned int)&v70,
    (unsigned int)&v49,
    (_DWORD)v33,
    a3[2],
    a3[3],
    (_DWORD)v23,
    (__int64)v53,
    v15,
    (__int64)(a2 + 1672));
  if ( (unsigned __int8)<core::net::ip_addr::IpAddr as core::cmp::PartialEq>::eq(&v39, v21) )
  {
    v34[2].m256i_i64[0] = v69;
    v34[1] = v68;
    v34[0] = v67;
    iced_widget::column::Column<Message,Theme,Renderer>::push(v31, v34, &v36);
    v67 = *(__m256i *)v31;
    v68 = *(__m256i *)&v31[32];
    v69 = *(_QWORD *)&v31[64];
  }
  else
  {
    v34[2].m256i_i64[0] = v72;
    v34[1] = v71;
    v34[0] = v70;
    iced_widget::column::Column<Message,Theme,Renderer>::push(v31, v34, &v36);
    v70 = *(__m256i *)v31;
    v71 = *(__m256i *)&v31[32];
    v72 = *(_QWORD *)&v31[64];
  }
  sniffnet::gui::pages::connection_details_page::col_info(v87, a3, v82, v25, v53, v15);
  sniffnet::gui::pages::connection_details_page::assemble_widgets(v86, v87, &v67, &v70);
  v34[2].m256i_i64[0] = v78;
  v34[1] = v77[1];
  v34[0] = v77[0];
  iced_widget::column::Column<Message,Theme,Renderer>::push(v31, v34, v86);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v34, v31);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v31, v34, 1000LL);
  iced_widget::container::Container<Message,Theme,Renderer>::height(v34, v31, 500LL);
  iced_widget::container::Container<Message,Theme,Renderer>::class(v54, v34, 10LL);
  if ( (_QWORD)v61 != 0x8000000000000000LL && v27 )
  {
    core::ptr::drop_in_place<alloc::string::String>(&v61);
    core::ptr::drop_in_place<sniffnet::networking::types::host::Host>(&v62[8]);
  }
  return core::ptr::drop_in_place<sniffnet::networking::types::info_address_port_pair::InfoAddressPortPair>(v82);
}