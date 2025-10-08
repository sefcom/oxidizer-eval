__int64 __fastcall sniffnet::gui::pages::settings_general_page::language_picklist(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  void *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  int v8; // [rsp+Ah] [rbp-8FEh]
  __int16 v9; // [rsp+Eh] [rbp-8FAh]
  __int16 v10; // [rsp+10h] [rbp-8F8h] BYREF
  int v11; // [rsp+12h] [rbp-8F6h]
  __int16 v12; // [rsp+16h] [rbp-8F2h]
  __int16 v13; // [rsp+18h] [rbp-8F0h]
  _OWORD v14[4]; // [rsp+20h] [rbp-8E8h] BYREF
  _OWORD v15[4]; // [rsp+60h] [rbp-8A8h] BYREF
  __int64 dest; // [rsp+A0h] [rbp-868h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-860h]
  __int64 v18; // [rsp+B0h] [rbp-858h]
  __int16 v19; // [rsp+B8h] [rbp-850h]
  int v20; // [rsp+BAh] [rbp-84Eh]
  __int16 v21; // [rsp+BEh] [rbp-84Ah]
  __int16 v22; // [rsp+C0h] [rbp-848h]
  int v23; // [rsp+C2h] [rbp-846h]
  __int16 v24; // [rsp+C6h] [rbp-842h]
  __int128 v25; // [rsp+C8h] [rbp-840h]
  __int64 v26; // [rsp+D8h] [rbp-830h]
  __int16 v27; // [rsp+E0h] [rbp-828h]
  _BYTE v28[264]; // [rsp+400h] [rbp-508h] BYREF
  unsigned __int64 v29; // [rsp+508h] [rbp-400h]
  __int16 src; // [rsp+530h] [rbp-3D8h] BYREF
  int v31; // [rsp+532h] [rbp-3D6h]
  __int16 v32; // [rsp+536h] [rbp-3D2h]
  __int16 v33; // [rsp+538h] [rbp-3D0h]
  int v34; // [rsp+53Ch] [rbp-3CCh]
  _BYTE v35[120]; // [rsp+890h] [rbp-78h] BYREF

  v25 = 0LL;
  LODWORD(v26) = 0;
  v19 = 2;
  v22 = 2;
  WORD2(v26) = 0;
  dest = 0LL;
  v17 = 8LL;
  v18 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(&src, &dest, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&dest, &src, 10LL);
  sniffnet::translations::types::language::Language::get_flag(&src, a2);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v14, &dest, &src);
  if ( (unsigned __int8)a2 > 0x16u || (v4 = &unk_7643AF, !_bittest((const int *)&v4, (unsigned __int8)a2)) )
  {
    v15[3] = v14[3];
    v15[2] = v14[2];
    v15[1] = v14[1];
    v15[0] = v14[0];
    iced_core::widget::text::Text<Theme,Renderer>::new(&dest, asc_497AEE, 1LL);
    iced_core::widget::text::Text<Theme,Renderer>::class(&src, &dest, 5LL);
    iced_core::widget::text::Text<Theme,Renderer>::font(&dest, &src, a3);
    iced_core::widget::text::Text<Theme,Renderer>::align_y(&src, &dest);
    iced_core::widget::text::Text<Theme,Renderer>::align_x(&dest, &src);
    iced_core::widget::text::Text<Theme,Renderer>::size(&src, &dest, 15LL);
    iced_core::widget::text::Text<Theme,Renderer>::line_height(v28, &src, 1.0);
    iced_widget::button::Button<Message,Theme,Renderer>::new(&dest, v28);
    v28[0] = 6;
    v29 = 0x800000000000000BLL;
    iced_widget::button::Button<Message,Theme,Renderer>::on_press(&src, &dest, v28);
    iced_widget::button::Button<Message,Theme,Renderer>::padding(&dest, &src);
    iced_widget::button::Button<Message,Theme,Renderer>::height(&src, &dest);
    iced_widget::button::Button<Message,Theme,Renderer>::width(&dest, &src);
    iced_widget::button::Button<Message,Theme,Renderer>::class(&src, &dest, 11LL);
    sniffnet::gui::components::button::row_open_link_tooltip((__int64)&dest, (__int64)&unk_497AEF, 57LL, a3);
    iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(v28, &src, &dest, 4LL);
    iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::class(&dest, v28, 5LL);
    iced_widget::row::Row<Message,Theme,Renderer>::push(v14, v15, &dest);
  }
  v26 = 0x7F80000000000000LL;
  v25 = 0LL;
  v19 = 2;
  v20 = v8;
  v21 = v9;
  v22 = 2;
  v23 = v8;
  v24 = v9;
  v27 = 0;
  dest = 0LL;
  v17 = 8LL;
  v18 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(v28, &dest, 1LL);
  v5 = sniffnet::translations::translations::language_translation((unsigned __int8)a2);
  iced_core::widget::text::Text<Theme,Renderer>::new(&dest, v5, v6);
  iced_core::widget::text::Text<Theme,Renderer>::class(&src, &dest, 4LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(&dest, &src, 18.299999);
  iced_core::widget::text::Text<Theme,Renderer>::font(&src, &dest, a3);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&dest, v28, &src);
  v10 = 2;
  v11 = v8;
  v12 = v9;
  v13 = 0;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&src, &dest, &v10);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&dest, &src, v14);
  src = 2;
  v31 = v8;
  v32 = v9;
  v33 = 3;
  v34 = 1092616192;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v28, &dest, &src);
  iced_widget::pick_list::PickList<T,L,V,Message,Theme,Renderer>::new(&dest, (unsigned __int8)a2);
  iced_widget::pick_list::PickList<T,L,V,Message,Theme,Renderer>::padding(&src, &dest);
  iced_widget::pick_list::PickList<T,L,V,Message,Theme,Renderer>::font(&dest, &src);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&src, v28, &dest);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v35, &src, &v10);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&dest, v35);
  iced_widget::container::Container<Message,Theme,Renderer>::width(&src, &dest, 0LL);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(&dest, &src);
  return iced_widget::container::Container<Message,Theme,Renderer>::align_y(a1, &dest);
}