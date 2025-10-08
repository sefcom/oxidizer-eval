__int64 __fastcall sniffnet::gui::pages::settings_notifications_page::get_favorite_notify(
        __int64 a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned __int8 v6; // bp
  __int64 v8; // rax
  __int64 v9; // rdx
  _OWORD v11[4]; // [rsp+8h] [rbp-2B0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-270h]
  _OWORD dest[4]; // [rsp+50h] [rbp-268h] BYREF
  __int64 v14; // [rsp+90h] [rbp-228h]
  _QWORD v15[3]; // [rsp+F8h] [rbp-1C0h] BYREF
  __int16 v16; // [rsp+110h] [rbp-1A8h]
  __int16 v17; // [rsp+118h] [rbp-1A0h]
  __int128 v18; // [rsp+120h] [rbp-198h]
  __int64 v19; // [rsp+130h] [rbp-188h]
  __int16 v20; // [rsp+138h] [rbp-180h]
  _BYTE v21[64]; // [rsp+1A0h] [rbp-118h] BYREF
  _BYTE src[216]; // [rsp+1E0h] [rbp-D8h] BYREF

  v6 = a4;
  v8 = sniffnet::translations::translations::favorite_transmitted_translation(a4);
  iced_widget::checkbox::Checkbox<Message,Theme,Renderer>::new(dest, v8, v9, a2);
  iced_widget::checkbox::Checkbox<Message,Theme,Renderer>::on_toggle(v15, dest);
  iced_widget::checkbox::Checkbox<Message,Theme,Renderer>::size(src, v15);
  iced_widget::checkbox::Checkbox<Message,Theme,Renderer>::font(dest, src);
  v18 = 0LL;
  v19 = 0x7F80000000000000LL;
  v16 = 2;
  v17 = 2;
  v20 = 0;
  v15[0] = 0LL;
  v15[1] = 8LL;
  v15[2] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(src, v15, 15LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v11, src, dest);
  if ( a2 )
  {
    BYTE8(dest[0]) = 1;
    BYTE9(dest[0]) = a3;
    *(_QWORD *)&dest[0] = 2LL;
    sniffnet::gui::pages::settings_notifications_page::sound_buttons(v21, dest, a5, v6);
    v14 = v12;
    dest[3] = v11[3];
    dest[2] = v11[2];
    dest[1] = v11[1];
    dest[0] = v11[0];
    iced_widget::column::Column<Message,Theme,Renderer>::push(v11, dest, v21);
  }
  iced_widget::container::Container<Message,Theme,Renderer>::new(dest, v11);
  iced_widget::container::Container<Message,Theme,Renderer>::padding(v15, dest, 15LL);
  iced_widget::container::Container<Message,Theme,Renderer>::width(dest, v15, 700LL);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, dest, 4LL);
}