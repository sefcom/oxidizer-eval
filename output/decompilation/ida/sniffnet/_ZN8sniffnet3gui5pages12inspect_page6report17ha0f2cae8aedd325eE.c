__int64 __fastcall sniffnet::gui::pages::inspect_page::report(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  bool v4; // cf
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r13
  int v8; // ebx
  int v9; // r14d
  __int64 result; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int128 v19; // xmm3
  unsigned __int8 v20; // [rsp+10h] [rbp-908h]
  unsigned __int8 v21; // [rsp+11h] [rbp-907h]
  __int32 v22; // [rsp+12h] [rbp-906h]
  __int16 v23; // [rsp+16h] [rbp-902h]
  __int128 v24; // [rsp+20h] [rbp-8F8h] BYREF
  _BYTE v25[48]; // [rsp+30h] [rbp-8E8h]
  __int64 v26; // [rsp+60h] [rbp-8B8h]
  __int64 v27; // [rsp+70h] [rbp-8A8h]
  __int64 v28; // [rsp+78h] [rbp-8A0h]
  __int64 v29; // [rsp+80h] [rbp-898h]
  __int64 v30; // [rsp+88h] [rbp-890h]
  __int128 v31; // [rsp+90h] [rbp-888h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-878h]
  __m256i v33; // [rsp+B0h] [rbp-868h]
  __int64 v34; // [rsp+D0h] [rbp-848h]
  __int128 v35; // [rsp+E0h] [rbp-838h] BYREF
  __int128 v36; // [rsp+F0h] [rbp-828h]
  __m256i v37; // [rsp+100h] [rbp-818h]
  __int128 v38; // [rsp+120h] [rbp-7F8h]
  __int128 v39; // [rsp+130h] [rbp-7E8h]
  __int128 v40; // [rsp+140h] [rbp-7D8h]
  _OWORD v41[2]; // [rsp+250h] [rbp-6C8h] BYREF
  _BYTE v42[32]; // [rsp+270h] [rbp-6A8h] BYREF
  __int128 v43; // [rsp+290h] [rbp-688h] BYREF
  __m256i v44; // [rsp+2A0h] [rbp-678h]
  __int128 v45; // [rsp+2C0h] [rbp-658h]
  __int64 v46; // [rsp+2D0h] [rbp-648h]
  unsigned __int64 v47; // [rsp+398h] [rbp-580h]
  _OWORD v48[2]; // [rsp+3C0h] [rbp-558h] BYREF
  __m256i v49; // [rsp+3E0h] [rbp-538h]
  __int64 v50; // [rsp+400h] [rbp-518h]
  __m256i v51; // [rsp+410h] [rbp-508h] BYREF
  __int128 v52; // [rsp+430h] [rbp-4E8h]
  __int128 v53; // [rsp+440h] [rbp-4D8h]
  __int128 v54; // [rsp+450h] [rbp-4C8h]
  _BYTE v55[6]; // [rsp+460h] [rbp-4B8h] BYREF
  __int16 v56; // [rsp+466h] [rbp-4B2h]
  __int16 v57; // [rsp+468h] [rbp-4B0h]
  int v58; // [rsp+46Ch] [rbp-4ACh]
  _OWORD v59[18]; // [rsp+5D0h] [rbp-348h] BYREF
  _DWORD src[74]; // [rsp+6F0h] [rbp-228h] BYREF
  _BYTE dest[256]; // [rsp+818h] [rbp-100h] BYREF

  memcpy(dest, (const void *)(a2 + 1208), 0xD0uLL);
  v20 = *(_BYTE *)(a2 + 1497);
  v21 = *(_BYTE *)(a2 + 455);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(&v35, dest);
  v41[1] = v36;
  v41[0] = v35;
  sniffnet::report::get_report_entries::get_searched_entries(&v35, a2);
  v43 = v35;
  v30 = *((_QWORD *)&v36 + 1);
  v2 = v36;
  v51 = v37;
  v52 = v38;
  v53 = v39;
  v54 = v40;
  *(_OWORD *)&v37.m256i_u64[1] = 0LL;
  v37.m256i_i64[3] = 0x7F80000000000000LL;
  WORD4(v36) = 2;
  v37.m256i_i16[0] = 2;
  LOWORD(v38) = 0;
  *(_QWORD *)&v35 = 0LL;
  *((_QWORD *)&v35 + 1) = 8LL;
  *(_QWORD *)&v36 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::height(v55, &v35);
  iced_widget::column::Column<Message,Theme,Renderer>::width(&v35, v55, 0LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v24, &v35, 0LL);
  *(_OWORD *)&v37.m256i_u64[1] = 0LL;
  v37.m256i_i64[3] = 0x7F80000000000000LL;
  WORD4(v36) = 2;
  v37.m256i_i16[0] = 2;
  LOWORD(v38) = 0;
  *(_QWORD *)&v35 = 0LL;
  *((_QWORD *)&v35 + 1) = 8LL;
  *(_QWORD *)&v36 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v31, &v35, 0LL);
  v29 = a2;
  v3 = *(_QWORD *)(a2 + 2384);
  v4 = v3 == 0;
  v5 = v3 - 1;
  if ( v4 )
    v5 = 0LL;
  v27 = v5;
  v28 = v2;
  v44.m256i_i64[0] = v2;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v42, &v43);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v42);
  while ( src[64] != 3 )
  {
    memcpy(v59, src, sizeof(v59));
    v50 = v34;
    v49 = v33;
    v48[1] = v32;
    v48[0] = v31;
    sniffnet::gui::pages::inspect_page::row_report_entry(v55, v59, &v59[3], v21, v41);
    iced_widget::button::Button<Message,Theme,Renderer>::new(&v35, v55);
    iced_widget::button::Button<Message,Theme,Renderer>::padding(v55, &v35);
    *(_OWORD *)((char *)&v44.m256i_u64[1] + 4) = *(_OWORD *)((char *)&v59[1] + 12);
    *(_OWORD *)v44.m256i_i8 = v59[1];
    v43 = v59[0];
    v47 = 0x8000000000000010LL;
    iced_widget::button::Button<Message,Theme,Renderer>::on_press(&v35, v55, &v43);
    iced_widget::button::Button<Message,Theme,Renderer>::class(v55, &v35, 10LL);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v35, v48, v55);
    v31 = v35;
    v32 = v36;
    v33 = v37;
    v34 = v38;
    core::ptr::drop_in_place<(sniffnet::networking::types::address_port_pair::AddressPortPair,sniffnet::networking::types::info_address_port_pair::InfoAddressPortPair)>(v59);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v42);
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(sniffnet::networking::types::address_port_pair::AddressPortPair,sniffnet::networking::types::info_address_port_pair::InfoAddressPortPair)>>(v42);
  v6 = v30;
  if ( v30 )
  {
    v46 = v26;
    v45 = *(_OWORD *)&v25[32];
    v44 = *(__m256i *)v25;
    v43 = v24;
    sniffnet::gui::styles::scrollbar::ScrollbarType::properties(&v55[4]);
    *(_DWORD *)v55 = 2;
    iced_widget::scrollable::Scrollable<Message,Theme,Renderer>::with_direction(&v35, &v31, v55);
    iced_widget::scrollable::Scrollable<Message,Theme,Renderer>::height(v55, &v35);
    iced_widget::scrollable::Scrollable<Message,Theme,Renderer>::width(&v35, v55);
    iced_widget::column::Column<Message,Theme,Renderer>::push(v55, &v43, &v35);
    iced_widget::rule::Rule<Theme>::horizontal(&v43, 5LL);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v35, v55, &v43);
    v7 = v29;
    sniffnet::gui::pages::inspect_page::get_agglomerates_row(&v43, v41, &v51, *(unsigned __int8 *)(v29 + 455));
    v8 = 20 * v27 + 1;
    v9 = v28 + 20 * v27;
    iced_widget::column::Column<Message,Theme,Renderer>::push(v55, &v35, &v43);
    iced_widget::rule::Rule<Theme>::horizontal(&v43, 5LL);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v35, v55, &v43);
    sniffnet::gui::pages::inspect_page::get_change_page_row(
      (unsigned int)v55,
      (unsigned int)v41,
      v20,
      *(_QWORD *)(v7 + 2384),
      v8,
      v9,
      v6);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v24, &v35, v55);
    result = v26;
    *(_QWORD *)(a1 + 64) = v26;
    v11 = v24;
    v12 = *(_OWORD *)v25;
    v13 = *(_OWORD *)&v25[16];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v25[32];
    *(_OWORD *)(a1 + 32) = v13;
    *(_OWORD *)(a1 + 16) = v12;
    *(_OWORD *)a1 = v11;
  }
  else
  {
    *(_QWORD *)&v59[4] = v26;
    v59[3] = *(_OWORD *)&v25[32];
    *(__m256i *)&v59[1] = *(__m256i *)v25;
    v59[0] = v24;
    v37.m256i_i64[3] = 0x7F80000000000000LL;
    *(_OWORD *)&v37.m256i_u64[1] = 0LL;
    WORD4(v36) = 2;
    *(_DWORD *)((char *)&v36 + 10) = v22;
    HIWORD(v36) = v23;
    v37.m256i_i16[0] = 2;
    *(__int32 *)((char *)v37.m256i_i32 + 2) = v22;
    v37.m256i_i16[3] = v23;
    LOWORD(v38) = 0;
    *(_QWORD *)&v35 = 0LL;
    *((_QWORD *)&v35 + 1) = 8LL;
    *(_QWORD *)&v36 = 0LL;
    iced_widget::column::Column<Message,Theme,Renderer>::width(v55, &v35, 0LL);
    iced_widget::column::Column<Message,Theme,Renderer>::height(&v35, v55);
    iced_widget::column::Column<Message,Theme,Renderer>::padding(v55, &v35, 20LL);
    iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v35, v55, 1LL);
    *(_WORD *)v55 = 2;
    *(_DWORD *)&v55[2] = v22;
    v56 = v23;
    v57 = 0;
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v43, &v35, v55);
    sniffnet::utils::types::icon::Icon::to_text(&v35, 16LL);
    iced_core::widget::text::Text<Theme,Renderer>::size(v55, &v35, 60LL);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v35, &v43, v55);
    *(_WORD *)v55 = 2;
    *(_DWORD *)&v55[2] = v22;
    v56 = v23;
    v57 = 3;
    v58 = 1097859072;
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v43, &v35, v55);
    v14 = sniffnet::translations::translations_2::no_search_results_translation(v20);
    iced_core::widget::text::Text<Theme,Renderer>::new(&v35, v14, v15);
    iced_core::widget::text::Text<Theme,Renderer>::font(v55, &v35, v41);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v35, &v43, v55);
    LOWORD(v43) = 2;
    *(_DWORD *)((char *)&v43 + 2) = v22;
    WORD3(v43) = v23;
    DWORD2(v43) = 131073;
    iced_widget::column::Column<Message,Theme,Renderer>::push(v55, &v35, &v43);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v35, v59, v55);
    v16 = v35;
    v17 = v36;
    v18 = *(_OWORD *)v37.m256i_i8;
    v19 = *(_OWORD *)&v37.m256i_u64[2];
    v24 = v35;
    *(_OWORD *)v25 = v36;
    *(__m256i *)&v25[16] = v37;
    v26 = v38;
    *(_QWORD *)(a1 + 64) = v38;
    *(_OWORD *)(a1 + 48) = v19;
    *(_OWORD *)(a1 + 32) = v18;
    *(_OWORD *)(a1 + 16) = v17;
    *(_OWORD *)a1 = v16;
    return core::ptr::drop_in_place<iced_widget::column::Column<sniffnet::gui::types::message::Message,sniffnet::gui::styles::types::style_type::StyleType>>(&v31);
  }
  return result;
}