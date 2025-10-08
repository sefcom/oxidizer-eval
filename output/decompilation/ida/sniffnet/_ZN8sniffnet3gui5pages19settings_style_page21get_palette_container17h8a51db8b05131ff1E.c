__int64 __fastcall sniffnet::gui::pages::settings_style_page::get_palette_container(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  char v7; // bl
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  unsigned __int8 v11; // bl
  __int64 v12; // r13
  __int128 v14; // [rsp+10h] [rbp-458h] BYREF
  _OWORD v15[2]; // [rsp+20h] [rbp-448h] BYREF
  __int128 src; // [rsp+40h] [rbp-428h] BYREF
  __int128 v17; // [rsp+50h] [rbp-418h]
  __int16 v18; // [rsp+60h] [rbp-408h]
  __int128 v19; // [rsp+68h] [rbp-400h]
  __int64 v20; // [rsp+78h] [rbp-3F0h]
  __int128 v21; // [rsp+80h] [rbp-3E8h]
  char v22; // [rsp+ACh] [rbp-3BCh]
  _OWORD v23[5]; // [rsp+1B0h] [rbp-2B8h] BYREF
  _BYTE v24[64]; // [rsp+200h] [rbp-268h] BYREF
  _BYTE dest[264]; // [rsp+240h] [rbp-228h] BYREF
  unsigned __int64 v26; // [rsp+348h] [rbp-120h]
  _BYTE v27[64]; // [rsp+3B0h] [rbp-B8h] BYREF
  _BYTE v28[120]; // [rsp+3F0h] [rbp-78h] BYREF

  sniffnet::gui::styles::types::style_type::StyleType::get_extension(&src, a2);
  v15[1] = v17;
  v15[0] = src;
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(&src, a4);
  v14 = v21;
  v7 = v22;
  v19 = 0LL;
  LODWORD(v20) = 0;
  WORD4(v17) = 2;
  v18 = 2;
  WORD2(v20) = 0;
  *(_QWORD *)&src = 0LL;
  *((_QWORD *)&src + 1) = 8LL;
  *(_QWORD *)&v17 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(v23, &src, 7LL);
  iced_core::widget::text::Text<Theme,Renderer>::new(&src, a3);
  iced_core::widget::text::Text<Theme,Renderer>::font(dest, &src, v15);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v24, v23, dest);
  if ( v7 )
  {
    sniffnet::utils::types::icon::Icon::to_text(&src, 24LL);
    iced_core::widget::text::Text<Theme,Renderer>::size(dest, &src, 15LL);
  }
  else
  {
    sniffnet::utils::types::icon::Icon::to_text(dest, 37LL);
  }
  iced_widget::row::Row<Message,Theme,Renderer>::push(v27, v24, dest);
  v19 = 0LL;
  v20 = 0x7F80000000000000LL;
  WORD4(v17) = 2;
  v18 = 2;
  LOWORD(v21) = 0;
  *(_QWORD *)&src = 0LL;
  *((_QWORD *)&src + 1) = 8LL;
  *(_QWORD *)&v17 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::width(dest, &src, 0LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&src, dest, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(dest, &src, 5LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v23, dest, v27);
  sniffnet::gui::styles::types::style_type::StyleType::get_palette(&src, a4);
  sniffnet::gui::pages::settings_style_page::get_palette_rule(dest, &src, &v14);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v28, v23, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::new(&src, v28);
  iced_widget::button::Button<Message,Theme,Renderer>::height(dest, &src);
  iced_widget::button::Button<Message,Theme,Renderer>::width(&src, dest);
  v23[0] = 0x41200000u;
  iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, &src);
  v8 = *a4 - 16LL;
  LODWORD(v9) = 4;
  if ( v8 < 4 )
    v9 = *a4 - 16LL;
  v10 = *a2 - 16LL;
  if ( v10 >= 4 )
    LODWORD(v10) = 4;
  v11 = 4;
  if ( (_DWORD)v9 == (_DWORD)v10 )
  {
    v12 = a1;
    if ( v8 < 4
      || (unsigned __int8)<sniffnet::gui::styles::types::custom_palette::ExtraStyles as core::cmp::PartialEq>::eq(
                            a4,
                            a2) )
    {
      v11 = 5;
    }
  }
  else
  {
    v12 = a1;
  }
  iced_widget::button::Button<Message,Theme,Renderer>::class(&src, dest, v11);
  memcpy(dest, a4, 0xD0uLL);
  v26 = 0x800000000000000ELL;
  return iced_widget::button::Button<Message,Theme,Renderer>::on_press(v12, &src, dest);
}