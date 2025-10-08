__int64 __fastcall sniffnet::gui::pages::overview_page::body_pcap_error(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  __int128 v10; // [rsp+0h] [rbp-198h] BYREF
  __int64 v11; // [rsp+10h] [rbp-188h]
  __int16 v12; // [rsp+18h] [rbp-180h]
  __int16 v13; // [rsp+20h] [rbp-178h]
  __int128 v14; // [rsp+28h] [rbp-170h]
  __int64 v15; // [rsp+38h] [rbp-160h]
  __int16 v16; // [rsp+40h] [rbp-158h]
  __int128 v17; // [rsp+60h] [rbp-138h] BYREF
  __int64 v18; // [rsp+70h] [rbp-128h]
  _WORD v19[6]; // [rsp+C0h] [rbp-D8h] BYREF
  int v20; // [rsp+CCh] [rbp-CCh]
  _BYTE v21[144]; // [rsp+108h] [rbp-90h] BYREF

  sniffnet::translations::translations::error_translation(&v10, a6, a2, a3);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(&v17, &v10);
  iced_core::widget::text::Text<Theme,Renderer>::font(v21, &v17, a7);
  v14 = 0LL;
  v15 = 0x7F80000000000000LL;
  v12 = 2;
  v13 = 2;
  v16 = 0;
  *(_QWORD *)&v10 = 0LL;
  *((_QWORD *)&v10 + 1) = 8LL;
  v11 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::width(&v17, &v10, 0LL);
  iced_widget::column::Column<Message,Theme,Renderer>::padding(&v10, &v17, 10LL);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v17, &v10, 10LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v10, &v17, 1LL);
  LOWORD(v17) = 2;
  WORD4(v17) = 0;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v19, &v10, &v17);
  sniffnet::utils::types::icon::Icon::to_text(&v10, 12LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(&v17, &v10, 60LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v10, v19, &v17);
  v19[0] = 2;
  v19[4] = 3;
  v20 = 1097859072;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v17, &v10, v19);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v19, &v17, v21);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, a4, a5);
  v18 = v11;
  v17 = v10;
  iced_core::widget::text::Text<Theme,Renderer>::new(&v10, &v17);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v17, &v10, a7);
  iced_core::widget::text::Text<Theme,Renderer>::size(&v10, &v17, 50LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v17, v19, &v10);
  LOWORD(v10) = 2;
  DWORD2(v10) = 131073;
  return iced_widget::column::Column<Message,Theme,Renderer>::push(a1, &v17, &v10);
}