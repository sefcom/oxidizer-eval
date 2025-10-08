__int64 __fastcall sniffnet::gui::components::tab::new_settings_tab(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 a5)
{
  __int64 tab_label; // rax
  __int64 v7; // rdx
  _WORD v11[8]; // [rsp+20h] [rbp-3A8h] BYREF
  _BYTE v12[64]; // [rsp+30h] [rbp-398h] BYREF
  __int128 src; // [rsp+70h] [rbp-358h] BYREF
  __int64 v14; // [rsp+80h] [rbp-348h]
  __int16 v15; // [rsp+88h] [rbp-340h]
  __int16 v16; // [rsp+90h] [rbp-338h]
  __int128 v17; // [rsp+98h] [rbp-330h]
  int v18; // [rsp+A8h] [rbp-320h]
  __int16 v19; // [rsp+ACh] [rbp-31Ch]
  __int128 dest; // [rsp+1E0h] [rbp-1E8h] BYREF
  __int64 v21; // [rsp+1F0h] [rbp-1D8h]
  unsigned __int64 v22; // [rsp+2E8h] [rbp-E0h]
  _BYTE v23[112]; // [rsp+358h] [rbp-70h] BYREF

  v17 = 0LL;
  v18 = 0;
  v15 = 2;
  v16 = 2;
  v19 = 0;
  *(_QWORD *)&src = 0LL;
  *((_QWORD *)&src + 1) = 8LL;
  v14 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::height(&dest, &src);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(&src, &dest, 1LL);
  v11[0] = 0;
  v11[4] = 2;
  iced_widget::row::Row<Message,Theme,Renderer>::push(v12, &src, v11);
  sniffnet::gui::pages::types::settings_page::SettingsPage::icon(&src, a2);
  iced_core::widget::text::Text<Theme,Renderer>::size(&dest, &src, 15LL);
  iced_core::widget::text::Text<Theme,Renderer>::class(&src, &dest, 3 * (unsigned int)a3);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(&dest, &src);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(&src, &dest);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&dest, v12, &src);
  LOWORD(src) = 3;
  DWORD1(src) = 1092616192;
  WORD4(src) = 2;
  iced_widget::row::Row<Message,Theme,Renderer>::push(v12, &dest, &src);
  tab_label = sniffnet::gui::pages::types::settings_page::SettingsPage::get_tab_label((unsigned __int8)a2, a4);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&src, tab_label, v7);
  v21 = v14;
  dest = src;
  iced_core::widget::text::Text<Theme,Renderer>::new(&src, &dest);
  iced_core::widget::text::Text<Theme,Renderer>::font(&dest, &src, a5);
  iced_core::widget::text::Text<Theme,Renderer>::size(&src, &dest, 18.299999);
  iced_core::widget::text::Text<Theme,Renderer>::class(&dest, &src, (unsigned __int8)(3 * (a3 != 0)));
  iced_core::widget::text::Text<Theme,Renderer>::align_x(&src, &dest);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(&dest, &src);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&src, v12, &dest);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v23, &src, v11);
  iced_widget::button::Button<Message,Theme,Renderer>::new(&src, v23);
  iced_widget::button::Button<Message,Theme,Renderer>::height(&dest, &src);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(&src, &dest);
  iced_widget::button::Button<Message,Theme,Renderer>::width(&dest, &src);
  iced_widget::button::Button<Message,Theme,Renderer>::class(&src, &dest, a3 ^ 7u);
  LOBYTE(dest) = a2;
  v22 = 0x8000000000000011LL;
  return iced_widget::button::Button<Message,Theme,Renderer>::on_press(a1, &src, &dest);
}