__int64 __fastcall sniffnet::gui::sniffer::Sniffer::view(__int64 a1)
{
  unsigned __int8 v1; // bp
  int v2; // r14d
  __int64 v3; // r14
  __int16 v4; // ax
  int v5; // eax
  __int16 v6; // dx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rax
  unsigned __int8 v11; // [rsp+Fh] [rbp-429h]
  _OWORD v12[2]; // [rsp+10h] [rbp-428h] BYREF
  _OWORD v13[2]; // [rsp+30h] [rbp-408h] BYREF
  _OWORD v14[5]; // [rsp+50h] [rbp-3E8h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-398h]
  _OWORD v16[16]; // [rsp+B0h] [rbp-388h] BYREF
  unsigned __int64 v17; // [rsp+1B8h] [rbp-280h]
  __int16 v18; // [rsp+1ECh] [rbp-24Ch]
  __int128 v19; // [rsp+1EEh] [rbp-24Ah]
  _BYTE v20[26]; // [rsp+1FEh] [rbp-23Ah]
  _OWORD v21[7]; // [rsp+218h] [rbp-220h] BYREF
  _BYTE v22[88]; // [rsp+288h] [rbp-1B0h] BYREF
  _BYTE v23[88]; // [rsp+2E0h] [rbp-158h] BYREF
  _BYTE dest[256]; // [rsp+338h] [rbp-100h] BYREF

  memcpy(dest, (const void *)(a1 + 1208), 0xD0uLL);
  v11 = *(_BYTE *)(a1 + 1496);
  v1 = *(_BYTE *)(a1 + 1497);
  memcpy(v16, (const void *)(a1 + 1208), 0xD0uLL);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v21, v16);
  v12[0] = v21[0];
  v12[1] = v21[1];
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v16, dest);
  v13[1] = v16[3];
  v13[0] = v16[2];
  sniffnet::gui::components::header::header((__int64)v22, a1);
  if ( *(_BYTE *)(a1 + 2436) )
  {
    sniffnet::gui::pages::thumbnail_page::thumbnail_page((__int64)v14, a1);
  }
  else
  {
    v2 = *(unsigned __int8 *)(a1 + 2439);
    if ( v2 == 3 )
    {
      sniffnet::gui::pages::initial_page::initial_page((__int64)v14, a1);
    }
    else
    {
      sniffnet::gui::pages::overview_page::waiting_page(v16, a1);
      if ( *(_QWORD *)&v16[0] == 0x8000000000000003LL )
      {
        core::ptr::drop_in_place<core::option::Option<iced_widget::container::Container<sniffnet::gui::types::message::Message,sniffnet::gui::styles::types::style_type::StyleType>>>(v16);
        if ( v2 )
        {
          if ( v2 == 1 )
            sniffnet::gui::pages::inspect_page::inspect_page((__int64)v14, a1);
          else
            sniffnet::gui::pages::notifications_page::notifications_page((__int64)v14, a1);
        }
        else
        {
          sniffnet::gui::pages::overview_page::overview_page((__int64)v14, a1);
        }
      }
      else
      {
        v15 = *(_QWORD *)&v16[5];
        v14[4] = v16[4];
        v14[3] = v16[3];
        v14[2] = v16[2];
        v14[1] = v16[1];
        v14[0] = v16[0];
      }
    }
  }
  sniffnet::gui::components::footer::footer(
    (__int64)v23,
    *(unsigned __int8 *)(a1 + 2436),
    v1,
    v11,
    (__int64)v12,
    (__int64)v13,
    *(_BYTE *)(a1 + 2437),
    *(_QWORD *)(a1 + 480),
    *(_DWORD *)(a1 + 488));
  *(_OWORD *)((char *)&v16[2] + 8) = 0LL;
  *((_QWORD *)&v16[3] + 1) = 0x7F80000000000000LL;
  WORD4(v16[1]) = 2;
  LOWORD(v16[2]) = 2;
  LOWORD(v16[4]) = 0;
  *(_QWORD *)&v16[0] = 0LL;
  *((_QWORD *)&v16[0] + 1) = 8LL;
  *(_QWORD *)&v16[1] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v21, v16, v22);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v16, v21, v14);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v21, v16, v23);
  v3 = alloc::boxed::Box<T>::new(v21);
  v4 = *(_WORD *)(a1 + 2392);
  if ( v4 == 5 )
  {
    v5 = *(unsigned __int8 *)(a1 + 2438);
    switch ( v5 )
    {
      case 3:
        return v3;
      case 2:
        sniffnet::gui::pages::settings_general_page::settings_general_page((__int64)v16, a1);
        break;
      case 1:
        sniffnet::gui::pages::settings_style_page::settings_style_page((__int64)v16, a1);
        break;
      default:
        sniffnet::gui::pages::settings_notifications_page::settings_notifications_page((__int64)v16, a1);
        break;
    }
    v9 = alloc::boxed::Box<T>::new(v16);
    v17 = 0x8000000000000014LL;
  }
  else
  {
    v6 = 3;
    if ( (unsigned __int16)(v4 - 2) < 3u )
      v6 = v4 - 2;
    switch ( v6 )
    {
      case 0:
        v17 = 0x800000000000000DLL;
        sniffnet::gui::components::modal::get_exit_overlay((__int64)v21, (__int64)v16, v11, (__int64)v12, (int)v13, v1);
        break;
      case 1:
        v17 = 0x800000000000002ALL;
        sniffnet::gui::components::modal::get_exit_overlay((__int64)v21, (__int64)v16, v11, (__int64)v12, (int)v13, v1);
        break;
      case 2:
        sniffnet::gui::components::modal::get_clear_all_overlay((__int64)v21, v11, (__int64)v12, (int)v13, v1);
        break;
      case 3:
        v7 = *(_OWORD *)(a1 + 2394);
        v8 = *(_OWORD *)(a1 + 2410);
        *(_OWORD *)&v20[10] = *(_OWORD *)(a1 + 2420);
        *(_OWORD *)v20 = v8;
        v19 = v7;
        v18 = v4;
        sniffnet::gui::pages::connection_details_page::connection_details_page((__int64)v21);
        break;
    }
    v9 = alloc::boxed::Box<T>::new(v21);
    v17 = 0x8000000000000013LL;
  }
  return sniffnet::gui::components::modal::modal(v3, (__int64)&off_2DF4368, v9, (__int64)v16);
}