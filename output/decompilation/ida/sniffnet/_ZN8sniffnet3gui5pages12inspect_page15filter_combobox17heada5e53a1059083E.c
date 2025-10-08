__int64 __fastcall sniffnet::gui::pages::inspect_page::filter_combobox(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        const void *a4,
        _OWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  int v13; // r12d
  __int128 v15; // [rsp+10h] [rbp-1B98h] BYREF
  __int64 v16; // [rsp+20h] [rbp-1B88h]
  __int128 v17; // [rsp+30h] [rbp-1B78h]
  __int128 v18; // [rsp+40h] [rbp-1B68h]
  __int128 v19; // [rsp+50h] [rbp-1B58h]
  __int128 v20; // [rsp+60h] [rbp-1B48h]
  __int128 v21; // [rsp+70h] [rbp-1B38h] BYREF
  __int128 v22; // [rsp+80h] [rbp-1B28h]
  __m256i v23[30]; // [rsp+90h] [rbp-1B18h] BYREF
  _BYTE v24[232]; // [rsp+460h] [rbp-1748h] BYREF
  _BYTE dest[232]; // [rsp+548h] [rbp-1660h] BYREF
  __int128 v26; // [rsp+630h] [rbp-1578h] BYREF
  __int128 v27; // [rsp+640h] [rbp-1568h]
  __m256i v28; // [rsp+650h] [rbp-1558h]
  _OWORD v29[2]; // [rsp+A20h] [rbp-1188h] BYREF
  __m256i v30; // [rsp+A40h] [rbp-1168h]
  __int64 v31; // [rsp+B78h] [rbp-1030h]
  _OWORD v32[17]; // [rsp+E10h] [rbp-D98h] BYREF
  _BYTE v33[368]; // [rsp+F20h] [rbp-C88h] BYREF
  _OWORD v34[48]; // [rsp+1090h] [rbp-B18h] BYREF
  __int64 v35; // [rsp+1390h] [rbp-818h]
  int v36; // [rsp+1398h] [rbp-810h]
  int v37; // [rsp+139Ch] [rbp-80Ch]
  char v38; // [rsp+13A0h] [rbp-808h]
  _OWORD v39[48]; // [rsp+1480h] [rbp-728h] BYREF
  _OWORD v40[44]; // [rsp+1780h] [rbp-428h] BYREF
  _BYTE src[264]; // [rsp+1A40h] [rbp-168h] BYREF

  v31 = 0LL;
  v8 = sniffnet::report::types::search_parameters::FilterInputType::current_value(a2, a4);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v21, v8, v9);
  v10 = v22;
  v16 = v22;
  v15 = v21;
  sniffnet::report::types::search_parameters::FilterInputType::clear_search(&v21, (unsigned __int8)a2, a4);
  sniffnet::gui::pages::inspect_page::button_clear_filter(v33, &v21, a5);
  dest[224] = a2;
  memcpy(dest, a4, 0xE0uLL);
  core::clone::Clone::clone(v29, dest);
  iced_widget::combo_box::ComboBox<T,Message,Theme,Renderer>::new(&v21, a3, &v15, v29);
  memcpy(v24, dest, sizeof(v24));
  iced_widget::combo_box::ComboBox<T,Message,Theme,Renderer>::on_input(v29, &v21, v24);
  iced_widget::combo_box::ComboBox<T,Message,Theme,Renderer>::padding(&v21, v29);
  iced_widget::combo_box::ComboBox<T,Message,Theme,Renderer>::size(v40, &v21);
  memcpy(v32, src, 0x108uLL);
  v11 = a5[1];
  v32[0] = *a5;
  v32[1] = v11;
  memcpy(src, v32, sizeof(src));
  v12 = a5[1];
  v40[0] = *a5;
  v40[1] = v12;
  iced_widget::combo_box::ComboBox<T,Message,Theme,Renderer>::width(&v26, v40);
  if ( v10 )
  {
    iced_widget::combo_box::ComboBox<T,Message,Theme,Renderer>::input_class(v34, &v26, 1LL);
  }
  else
  {
    iced_widget::combo_box::ComboBox<T,Message,Theme,Renderer>::input_class(v34, &v26, 0LL);
    memcpy(v39, v34, 0x2C0uLL);
    v13 = sniffnet::utils::types::icon::Icon::codepoint(16LL);
    v17 = v34[44];
    v18 = v34[45];
    v19 = unk_2DFF038;
    v20 = *(_OWORD *)&qword_2DFF048;
    v39[44] = v34[44];
    v39[45] = v34[45];
    v39[46] = unk_2DFF038;
    v39[47] = *(_OWORD *)&qword_2DFF048;
    memcpy(v34, v39, sizeof(v34));
    v35 = 0x4140000000000001LL;
    v36 = v13;
    v37 = 0x40000000;
    v38 = 0;
  }
  memset(&v23[0].m256i_u64[1], 0, 22);
  WORD4(v22) = 2;
  v23[0].m256i_i16[0] = 2;
  *(_QWORD *)&v21 = 0LL;
  *((_QWORD *)&v21 + 1) = 8LL;
  *(_QWORD *)&v22 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(v29, &v21, 5LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(&v21, v29, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v26, &v21, v34);
  if ( v10 )
  {
    v23[0] = v28;
    v22 = v27;
    v21 = v26;
    iced_widget::row::Row<Message,Theme,Renderer>::push(v29, &v21, v33);
    v26 = v29[0];
    v27 = v29[1];
    v28 = v30;
    iced_widget::container::Container<Message,Theme,Renderer>::new(&v21, &v26);
    *(_OWORD *)v24 = xmmword_26D0F0;
    iced_widget::container::Container<Message,Theme,Renderer>::padding(v29, &v21, v24);
    iced_widget::container::Container<Message,Theme,Renderer>::class(a1, v29, 6LL);
  }
  else
  {
    iced_widget::container::Container<Message,Theme,Renderer>::new(&v21, &v26);
    *(_OWORD *)v24 = xmmword_271EA0;
    iced_widget::container::Container<Message,Theme,Renderer>::padding(v29, &v21, v24);
    iced_widget::container::Container<Message,Theme,Renderer>::class(a1, v29, 3LL);
    core::ptr::drop_in_place<iced_widget::button::Button<sniffnet::gui::types::message::Message,sniffnet::gui::styles::types::style_type::StyleType>>(v33);
  }
  return core::ptr::drop_in_place<alloc::string::String>(&v15);
}