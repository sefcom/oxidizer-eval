__int64 __fastcall sniffnet::gui::pages::connection_details_page::get_button_copy(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5)
{
  _BYTE *v8; // rsi
  __int64 v9; // rdx
  __int128 v10; // rax
  _QWORD v12[2]; // [rsp+8h] [rbp-4D0h] BYREF
  _BYTE v13[24]; // [rsp+18h] [rbp-4C0h] BYREF
  _QWORD dest[46]; // [rsp+30h] [rbp-4A8h] BYREF
  _BYTE v15[96]; // [rsp+1A0h] [rbp-338h] BYREF
  _BYTE src[368]; // [rsp+200h] [rbp-2D8h] BYREF
  __int128 v17; // [rsp+370h] [rbp-168h] BYREF
  char v18; // [rsp+380h] [rbp-158h]
  unsigned __int64 v19; // [rsp+478h] [rbp-60h]

  if ( (unsigned __int8)sniffnet::gui::types::timing_events::TimingEvents::was_just_copy_ip(a5, a4) )
  {
    iced_core::widget::text::Text<Theme,Renderer>::new(src, asc_497949, 3LL);
    iced_core::widget::text::Text<Theme,Renderer>::font(dest, src, a3);
    v8 = dest;
    v9 = 14LL;
  }
  else
  {
    sniffnet::utils::types::icon::Icon::to_text(src, 10LL);
    v8 = src;
    v9 = 12LL;
  }
  iced_core::widget::text::Text<Theme,Renderer>::size(v15, v8, v9);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(src, v15);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(dest, src);
  iced_widget::button::Button<Message,Theme,Renderer>::new(src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, src);
  iced_widget::button::Button<Message,Theme,Renderer>::height(src, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::width(dest, src);
  v18 = *((_BYTE *)a4 + 16);
  v17 = *a4;
  v19 = 0x800000000000002BLL;
  iced_widget::button::Button<Message,Theme,Renderer>::on_press(src, dest, &v17);
  *(_QWORD *)&v10 = sniffnet::translations::translations_3::copy_translation(a2);
  v17 = v10;
  v12[0] = &v17;
  v12[1] = <&T as core::fmt::Display>::fmt;
  dest[0] = &unk_2DFEFA8;
  dest[1] = 2LL;
  dest[4] = 0LL;
  dest[2] = v12;
  dest[3] = 1LL;
  core::option::Option<T>::map_or_else(v13, 0LL, *((_QWORD *)&v10 + 1), dest);
  iced_core::widget::text::Text<Theme,Renderer>::new(dest, v13);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v17, dest, a3);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(dest, src, &v17, 3LL);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::gap(src, dest, 5LL);
  return iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::class(a1, src, 5LL);
}