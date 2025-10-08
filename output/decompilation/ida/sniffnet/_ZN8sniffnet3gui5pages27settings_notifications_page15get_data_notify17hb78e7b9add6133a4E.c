__int64 __fastcall sniffnet::gui::pages::settings_notifications_page::get_data_notify(
        __int64 a1,
        __int64 *a2,
        unsigned __int8 a3,
        __int64 a4)
{
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  char *v8; // rsi
  __int64 v9; // r13
  unsigned __int8 v10; // r12
  _OWORD v13[4]; // [rsp+18h] [rbp-350h] BYREF
  __int64 v14; // [rsp+58h] [rbp-310h]
  _OWORD dest[4]; // [rsp+60h] [rbp-308h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-2C8h]
  _QWORD v17[3]; // [rsp+110h] [rbp-258h] BYREF
  __int16 v18; // [rsp+128h] [rbp-240h]
  __int16 v19; // [rsp+130h] [rbp-238h]
  __int128 v20; // [rsp+138h] [rbp-230h]
  __int64 v21; // [rsp+148h] [rbp-220h]
  __int16 v22; // [rsp+150h] [rbp-218h]
  _BYTE v23[64]; // [rsp+1B8h] [rbp-1B0h] BYREF
  __int64 src; // [rsp+1F8h] [rbp-170h] BYREF
  char v25; // [rsp+200h] [rbp-168h]
  char v26; // [rsp+201h] [rbp-167h]
  unsigned __int8 v27; // [rsp+202h] [rbp-166h]
  _BYTE v28[88]; // [rsp+2A0h] [rbp-C8h] BYREF
  _BYTE v29[112]; // [rsp+2F8h] [rbp-70h] BYREF

  v6 = a3 - 1;
  if ( (unsigned __int8)(a3 - 1) > 0x15u )
  {
    v8 = (char *)&unk_497D14;
    v7 = 23LL;
  }
  else
  {
    v7 = qword_18E9558[v6];
    v8 = (char *)dword_18E9608 + dword_18E9608[v6];
  }
  v9 = *a2;
  iced_widget::checkbox::Checkbox<Message,Theme,Renderer>::new(dest, v8, v7, (unsigned int)*a2);
  v10 = *((_BYTE *)a2 + 24);
  v27 = v10;
  v25 = *((_BYTE *)a2 + 26);
  v26 = *((_BYTE *)a2 + 25);
  src = a2[2];
  iced_widget::checkbox::Checkbox<Message,Theme,Renderer>::on_toggle(v17, dest);
  iced_widget::checkbox::Checkbox<Message,Theme,Renderer>::size(&src, v17);
  iced_widget::checkbox::Checkbox<Message,Theme,Renderer>::font(dest, &src);
  v20 = 0LL;
  v21 = 0x7F80000000000000LL;
  v18 = 2;
  v19 = 2;
  v22 = 0;
  v17[0] = 0LL;
  v17[1] = 8LL;
  v17[2] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&src, v17, 15LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v13, &src, dest);
  if ( v9 )
  {
    sniffnet::gui::pages::settings_notifications_page::row_data_representation(v23, a2, a3, a4, v10);
    sniffnet::gui::pages::settings_notifications_page::input_group_bytes(v28, a2, a4, a3);
    sniffnet::gui::pages::settings_notifications_page::sound_buttons(v29, a2, a4, a3);
    v16 = v14;
    dest[3] = v13[3];
    dest[2] = v13[2];
    dest[1] = v13[1];
    dest[0] = v13[0];
    iced_widget::column::Column<Message,Theme,Renderer>::push(v17, dest, v29);
    iced_widget::column::Column<Message,Theme,Renderer>::push(dest, v17, v23);
    iced_widget::column::Column<Message,Theme,Renderer>::push(v13, dest, v28);
  }
  iced_widget::container::Container<Message,Theme,Renderer>::new(dest, v13);
  iced_widget::container::Container<Message,Theme,Renderer>::padding(v17, dest, 15LL);
  iced_widget::container::Container<Message,Theme,Renderer>::width(dest, v17, 700LL);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, dest, 4LL);
}