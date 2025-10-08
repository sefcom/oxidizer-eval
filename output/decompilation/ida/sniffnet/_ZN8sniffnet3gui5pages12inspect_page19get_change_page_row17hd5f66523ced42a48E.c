__int64 __fastcall sniffnet::gui::pages::inspect_page::get_change_page_row(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7)
{
  _WORD v12[8]; // [rsp+10h] [rbp-3A8h] BYREF
  _BYTE v13[64]; // [rsp+20h] [rbp-398h] BYREF
  _QWORD src[3]; // [rsp+60h] [rbp-358h] BYREF
  __int16 v15; // [rsp+78h] [rbp-340h]
  __int16 v16; // [rsp+80h] [rbp-338h]
  __int128 v17; // [rsp+88h] [rbp-330h]
  int v18; // [rsp+98h] [rbp-320h]
  __int16 v19; // [rsp+9Ch] [rbp-31Ch]
  _BYTE v20[64]; // [rsp+1D0h] [rbp-1E8h] BYREF
  _WORD dest[2]; // [rsp+210h] [rbp-1A8h] BYREF
  int v22; // [rsp+214h] [rbp-1A4h]
  __int16 v23; // [rsp+218h] [rbp-1A0h]

  v17 = 0LL;
  v18 = 0;
  v15 = 2;
  v16 = 2;
  v19 = 0;
  src[0] = 0LL;
  src[1] = 8LL;
  src[2] = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::height(dest, src, 40LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(src, dest, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(dest, src, 10LL);
  v12[0] = 0;
  v12[4] = 2;
  iced_widget::row::Row<Message,Theme,Renderer>::push(v13, dest, v12);
  if ( a4 <= 1 )
  {
    dest[0] = 3;
    v22 = 1103626240;
    v23 = 2;
    iced_widget::container::Container<Message,Theme,Renderer>::new(src, dest);
  }
  else
  {
    sniffnet::gui::pages::inspect_page::get_button_change_page((__int64)src, 0);
    iced_widget::button::Button<Message,Theme,Renderer>::width(dest, src);
    iced_widget::container::Container<Message,Theme,Renderer>::new(src, dest);
  }
  iced_widget::row::Row<Message,Theme,Renderer>::push(v20, v13, src);
  sniffnet::translations::translations_2::showing_results_translation(dest, a3, a5, a6, a7);
  iced_core::widget::text::Text<Theme,Renderer>::new(src, dest);
  iced_core::widget::text::Text<Theme,Renderer>::font(dest, src, a2);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v13, v20, dest);
  if ( __PAIR128__(a4, 0xCCCCCCCCCCCCCCCLL) >= __PAIR128__(a7 / 0x14, __ROR8__(0xCCCCCCCCCCCCCCCDLL * a7, 2)) )
  {
    dest[0] = 3;
    v22 = 1103626240;
    v23 = 2;
    iced_widget::container::Container<Message,Theme,Renderer>::new(src, dest);
  }
  else
  {
    sniffnet::gui::pages::inspect_page::get_button_change_page((__int64)src, 1);
    iced_widget::button::Button<Message,Theme,Renderer>::width(dest, src);
    iced_widget::container::Container<Message,Theme,Renderer>::new(src, dest);
  }
  iced_widget::row::Row<Message,Theme,Renderer>::push(dest, v13, src);
  return iced_widget::row::Row<Message,Theme,Renderer>::push(a1, dest, v12);
}