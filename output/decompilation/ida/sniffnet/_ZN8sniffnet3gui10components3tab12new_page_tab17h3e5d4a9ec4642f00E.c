__int64 __fastcall sniffnet::gui::components::tab::new_page_tab(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 tab_label; // rax
  __int64 v10; // rdx
  _WORD v15[8]; // [rsp+20h] [rbp-3A8h] BYREF
  __int128 v16; // [rsp+30h] [rbp-398h] BYREF
  __int128 v17; // [rsp+40h] [rbp-388h]
  __m256i v18; // [rsp+50h] [rbp-378h]
  _WORD v19[2]; // [rsp+70h] [rbp-358h] BYREF
  int v20; // [rsp+74h] [rbp-354h]
  __int16 v21; // [rsp+78h] [rbp-350h]
  __int128 src; // [rsp+B0h] [rbp-318h] BYREF
  __int128 v23; // [rsp+C0h] [rbp-308h]
  __m256i v24[10]; // [rsp+D0h] [rbp-2F8h] BYREF
  __int128 dest; // [rsp+220h] [rbp-1A8h] BYREF
  __int64 v26; // [rsp+230h] [rbp-198h]
  unsigned __int64 v27; // [rsp+328h] [rbp-A0h]

  memset(&v24[0].m256i_u64[1], 0, 22);
  WORD4(v23) = 2;
  v24[0].m256i_i16[0] = 2;
  *(_QWORD *)&src = 0LL;
  *((_QWORD *)&src + 1) = 8LL;
  *(_QWORD *)&v23 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::height(&dest, &src);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(&src, &dest, 1LL);
  v15[0] = 0;
  v15[4] = 2;
  iced_widget::row::Row<Message,Theme,Renderer>::push(v19, &src, v15);
  sniffnet::gui::pages::types::running_page::RunningPage::icon(&src, a2);
  iced_core::widget::text::Text<Theme,Renderer>::size(&dest, &src, 15LL);
  iced_core::widget::text::Text<Theme,Renderer>::class(&src, &dest, 3 * (unsigned int)a3);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(&dest, &src);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(&src, &dest);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&dest, v19, &src);
  LOWORD(src) = 3;
  DWORD1(src) = 1092616192;
  WORD4(src) = 2;
  iced_widget::row::Row<Message,Theme,Renderer>::push(v19, &dest, &src);
  tab_label = sniffnet::gui::pages::types::running_page::RunningPage::get_tab_label((unsigned __int8)a2, a4);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&src, tab_label, v10);
  v26 = v23;
  dest = src;
  iced_core::widget::text::Text<Theme,Renderer>::new(&src, &dest);
  iced_core::widget::text::Text<Theme,Renderer>::font(&dest, &src, a5);
  iced_core::widget::text::Text<Theme,Renderer>::size(&src, &dest, 18.299999);
  iced_core::widget::text::Text<Theme,Renderer>::class(&dest, &src, (unsigned __int8)(3 * (a3 != 0)));
  iced_core::widget::text::Text<Theme,Renderer>::align_x(&src, &dest);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(&dest, &src);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v16, v19, &dest);
  if ( ((a8 != 0) & (unsigned __int8)a7) != 0 )
  {
    v24[0] = v18;
    v23 = v17;
    src = v16;
    v19[0] = 3;
    v20 = 1088421888;
    v21 = 2;
    iced_widget::row::Row<Message,Theme,Renderer>::push(&dest, &src, v19);
    sniffnet::gui::components::tab::notifications_badge(&src, a6);
    iced_widget::row::Row<Message,Theme,Renderer>::push(&v16, &dest, &src);
  }
  v24[0] = v18;
  v23 = v17;
  src = v16;
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v16, &src, v15);
  iced_widget::button::Button<Message,Theme,Renderer>::new(&src, &v16);
  iced_widget::button::Button<Message,Theme,Renderer>::height(&dest, &src);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(&src, &dest);
  iced_widget::button::Button<Message,Theme,Renderer>::width(&dest, &src);
  iced_widget::button::Button<Message,Theme,Renderer>::class(&src, &dest, a3 ^ 7u);
  LOBYTE(dest) = a2;
  v27 = 0x8000000000000015LL;
  return iced_widget::button::Button<Message,Theme,Renderer>::on_press(a1, &src, &dest);
}