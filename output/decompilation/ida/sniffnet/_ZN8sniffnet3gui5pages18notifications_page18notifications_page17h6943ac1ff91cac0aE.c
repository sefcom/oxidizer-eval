__int64 __fastcall sniffnet::gui::pages::notifications_page::notifications_page(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bp
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _BYTE *v6; // rdx
  __int64 _30_translation; // rax
  __int64 v8; // rdx
  char v10; // [rsp+7h] [rbp-481h]
  __int128 v11; // [rsp+8h] [rbp-480h] BYREF
  __int128 v12; // [rsp+18h] [rbp-470h]
  __int128 v13; // [rsp+28h] [rbp-460h]
  __int128 v14; // [rsp+38h] [rbp-450h]
  __int64 v15; // [rsp+48h] [rbp-440h]
  _OWORD v16[13]; // [rsp+50h] [rbp-438h] BYREF
  int v17; // [rsp+12Ah] [rbp-35Eh]
  __int16 v18; // [rsp+12Eh] [rbp-35Ah]
  __int64 v19; // [rsp+130h] [rbp-358h]
  __int64 v20; // [rsp+138h] [rbp-350h]
  _OWORD v21[2]; // [rsp+140h] [rbp-348h] BYREF
  _OWORD v22[7]; // [rsp+160h] [rbp-328h] BYREF
  int v23; // [rsp+1D0h] [rbp-2B8h] BYREF
  _BYTE v24[60]; // [rsp+1D4h] [rbp-2B4h] BYREF
  _OWORD v25[2]; // [rsp+210h] [rbp-278h] BYREF
  _BYTE v26[72]; // [rsp+230h] [rbp-258h] BYREF
  _OWORD v27[4]; // [rsp+278h] [rbp-210h] BYREF
  _BYTE v28[64]; // [rsp+2B8h] [rbp-1D0h] BYREF
  _BYTE v29[72]; // [rsp+2F8h] [rbp-190h] BYREF
  _BYTE v30[72]; // [rsp+340h] [rbp-148h] BYREF
  _BYTE dest[256]; // [rsp+388h] [rbp-100h] BYREF

  v19 = a1;
  memcpy(dest, (const void *)(a2 + 1208), 0xD0uLL);
  v2 = *(_BYTE *)(a2 + 1497);
  v20 = *(_QWORD *)(a2 + 1168);
  v10 = *(_BYTE *)(a2 + 1200);
  memcpy(v16, (const void *)(a2 + 1208), sizeof(v16));
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v22, v16);
  v21[0] = v22[0];
  v21[1] = v22[1];
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v16, dest);
  v25[1] = v16[3];
  v25[0] = v16[2];
  *(_OWORD *)((char *)&v16[2] + 8) = 0LL;
  *((_QWORD *)&v16[3] + 1) = 0x7F80000000000000LL;
  WORD4(v16[1]) = 2;
  LOWORD(v16[2]) = 2;
  LOWORD(v16[4]) = 0;
  *(_QWORD *)&v16[0] = 0LL;
  *((_QWORD *)&v16[0] + 1) = 8LL;
  *(_QWORD *)&v16[1] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(v22, v16, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::height(&v11, v22);
  sniffnet::gui::components::tab::get_pages_tabs(v27, 2, (int)v21, (int)v25, v2, *(_QWORD *)(a2 + 2376));
  *(_QWORD *)&v16[4] = v15;
  v16[3] = v14;
  v16[2] = v13;
  v16[1] = v12;
  v16[0] = v11;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v11, v16, v27);
  if ( v20 != 1 && (v10 & 1) == 0 && !*(_QWORD *)(a2 + 1832) )
  {
    sniffnet::gui::pages::notifications_page::body_no_notifications_set(v29, v21, v2);
    *(_QWORD *)&v16[4] = v15;
    v16[3] = v14;
    v16[2] = v13;
    v16[1] = v12;
    v16[0] = v11;
    v6 = v29;
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(a2 + 1832) )
  {
    sniffnet::gui::pages::notifications_page::body_no_notifications_received(
      v30,
      v21,
      v2,
      *(_QWORD *)(a2 + 472),
      *(_QWORD *)(a2 + 480));
    *(_QWORD *)&v16[4] = v15;
    v16[3] = v14;
    v16[2] = v13;
    v16[1] = v12;
    v16[0] = v11;
    v6 = v30;
LABEL_11:
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v11, v16, v6);
    goto LABEL_12;
  }
  sniffnet::gui::pages::notifications_page::logged_notifications(v26, a2);
  *(_OWORD *)((char *)&v16[2] + 8) = 0LL;
  DWORD2(v16[3]) = 0;
  WORD4(v16[1]) = 2;
  LOWORD(v16[2]) = 2;
  WORD6(v16[3]) = 0;
  *(_QWORD *)&v16[0] = 0LL;
  *((_QWORD *)&v16[0] + 1) = 8LL;
  *(_QWORD *)&v16[1] = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(v22, v16, 10LL);
  v16[0] = xmmword_26FBE0;
  iced_widget::row::Row<Message,Theme,Renderer>::padding(&v23, v22, v16, v3, v4, v5);
  if ( *(_QWORD *)(a2 + 1832) >= 0x1EuLL )
  {
    _30_translation = sniffnet::translations::translations::only_last_30_translation(v2);
    iced_core::widget::text::Text<Theme,Renderer>::new(v16, _30_translation, v8);
    iced_core::widget::text::Text<Theme,Renderer>::font(v22, v16, v21);
  }
  else
  {
    iced_core::widget::text::Text<Theme,Renderer>::new(v22, 1LL, 0LL);
  }
  iced_widget::container::Container<Message,Theme,Renderer>::new(v16, v22);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v22, v16, 150LL);
  iced_widget::container::Container<Message,Theme,Renderer>::height(v16, v22, 0LL);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(v22, v16);
  iced_widget::container::Container<Message,Theme,Renderer>::align_y(v16, v22);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v22, &v23, v16);
  sniffnet::gui::styles::scrollbar::ScrollbarType::properties(v24);
  v23 = 2;
  iced_widget::scrollable::Scrollable<Message,Theme,Renderer>::with_direction(v16, v26, &v23);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v23, v22, v16);
  sniffnet::gui::pages::notifications_page::get_button_clear_all(v22, v21, v2);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v16, v22);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v22, v16, 150LL);
  iced_widget::container::Container<Message,Theme,Renderer>::height(v16, v22, 0LL);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(v22, v16);
  iced_widget::container::Container<Message,Theme,Renderer>::align_y(v16, v22);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v28, &v23, v16);
  *(_QWORD *)&v16[4] = v15;
  v16[3] = v14;
  v16[2] = v13;
  v16[1] = v12;
  v16[0] = v11;
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v11, v16, v28);
LABEL_12:
  *((_QWORD *)&v16[3] + 1) = 0x7F80000000000000LL;
  *(_OWORD *)((char *)&v16[2] + 8) = 0LL;
  WORD4(v16[1]) = 2;
  *(_DWORD *)((char *)&v16[1] + 10) = v17;
  HIWORD(v16[1]) = v18;
  LOWORD(v16[2]) = 2;
  *(_DWORD *)((char *)&v16[2] + 2) = v17;
  WORD3(v16[2]) = v18;
  LOWORD(v16[4]) = 0;
  *(_QWORD *)&v16[0] = 0LL;
  *((_QWORD *)&v16[0] + 1) = 8LL;
  *(_QWORD *)&v16[1] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v22, v16, &v11);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v16, v22);
  return iced_widget::container::Container<Message,Theme,Renderer>::height(v19, v16, 0LL);
}