__int64 __fastcall sniffnet::gui::pages::inspect_page::filter_input(
        __int64 a1,
        unsigned int a2,
        const void *a3,
        _OWORD *a4)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // r15
  __int128 v9; // xmm1
  int v10; // ebp
  __int128 v12; // [rsp+10h] [rbp-ED8h] BYREF
  __int128 v13; // [rsp+20h] [rbp-EC8h]
  __m256i v14[16]; // [rsp+30h] [rbp-EB8h] BYREF
  _OWORD dest[14]; // [rsp+230h] [rbp-CB8h] BYREF
  char v16; // [rsp+310h] [rbp-BD8h]
  _OWORD v17[2]; // [rsp+320h] [rbp-BC8h] BYREF
  __m256i v18; // [rsp+340h] [rbp-BA8h]
  _BYTE src[416]; // [rsp+540h] [rbp-9A8h] BYREF
  __int64 v20; // [rsp+6E0h] [rbp-808h]
  int v21; // [rsp+6E8h] [rbp-800h]
  int v22; // [rsp+6ECh] [rbp-7FCh]
  char v23; // [rsp+6F0h] [rbp-7F8h]
  _BYTE v24[368]; // [rsp+760h] [rbp-788h] BYREF
  _BYTE v25[544]; // [rsp+8D0h] [rbp-618h] BYREF
  _OWORD v26[26]; // [rsp+AF0h] [rbp-3F8h] BYREF
  _OWORD v27[37]; // [rsp+C90h] [rbp-258h] BYREF

  v6 = sniffnet::report::types::search_parameters::FilterInputType::current_value(a2, a3);
  v8 = v7;
  sniffnet::report::types::search_parameters::FilterInputType::clear_search(&v12, a2, a3);
  sniffnet::gui::pages::inspect_page::button_clear_filter(v24, &v12, a4);
  iced_widget::text_input::TextInput<Message,Theme,Renderer>::new(&v12, 1LL, 0LL, v6, v8);
  v16 = a2;
  memcpy(dest, a3, sizeof(dest));
  iced_widget::text_input::TextInput<Message,Theme,Renderer>::on_input(v25, &v12, dest);
  iced_widget::text_input::TextInput<Message,Theme,Renderer>::padding(&v12, v25);
  iced_widget::text_input::TextInput<Message,Theme,Renderer>::size(v27, &v12);
  v9 = a4[1];
  v27[0] = *a4;
  v27[1] = v9;
  iced_widget::text_input::TextInput<Message,Theme,Renderer>::width(v17, v27);
  if ( v8 )
  {
    iced_widget::text_input::TextInput<Message,Theme,Renderer>::class(src, v17, 1LL);
  }
  else
  {
    iced_widget::text_input::TextInput<Message,Theme,Renderer>::class(src, v17, 0LL);
    memcpy(v26, src, 0x180uLL);
    v10 = sniffnet::utils::types::icon::Icon::codepoint(16LL);
    v26[24] = unk_2DFF038;
    v26[25] = *(_OWORD *)&qword_2DFF048;
    memcpy(src, v26, sizeof(src));
    v20 = 0x4140000000000001LL;
    v21 = v10;
    v22 = 0x40000000;
    v23 = 0;
  }
  memset(&v14[0].m256i_u64[1], 0, 22);
  WORD4(v13) = 2;
  v14[0].m256i_i16[0] = 2;
  *(_QWORD *)&v12 = 0LL;
  *((_QWORD *)&v12 + 1) = 8LL;
  *(_QWORD *)&v13 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(v25, &v12, 5LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(&v12, v25, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v17, &v12, src);
  if ( v8 )
  {
    v14[0] = v18;
    v13 = v17[1];
    v12 = v17[0];
    iced_widget::row::Row<Message,Theme,Renderer>::push(v17, &v12, v24);
    iced_widget::container::Container<Message,Theme,Renderer>::new(&v12, v17);
    dest[0] = xmmword_26D0F0;
    iced_widget::container::Container<Message,Theme,Renderer>::padding(v25, &v12, dest);
    return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, v25, 6LL);
  }
  else
  {
    iced_widget::container::Container<Message,Theme,Renderer>::new(&v12, v17);
    dest[0] = xmmword_271EA0;
    iced_widget::container::Container<Message,Theme,Renderer>::padding(v25, &v12, dest);
    iced_widget::container::Container<Message,Theme,Renderer>::class(a1, v25, 3LL);
    return core::ptr::drop_in_place<iced_widget::button::Button<sniffnet::gui::types::message::Message,sniffnet::gui::styles::types::style_type::StyleType>>(v24);
  }
}