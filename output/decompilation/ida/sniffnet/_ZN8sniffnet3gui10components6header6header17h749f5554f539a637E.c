__int64 __fastcall sniffnet::gui::components::header::header(__int64 a1, __int64 a2)
{
  char v2; // bl
  unsigned __int8 v3; // bp
  __int64 v5; // rbx
  char v6; // r12
  unsigned __int8 v7; // [rsp+0h] [rbp-368h]
  unsigned __int8 v8; // [rsp+1h] [rbp-367h]
  int v9; // [rsp+2h] [rbp-366h]
  __int16 v10; // [rsp+6h] [rbp-362h]
  _WORD v11[2]; // [rsp+8h] [rbp-360h] BYREF
  int v12; // [rsp+Ch] [rbp-35Ch]
  __int16 v13; // [rsp+10h] [rbp-358h]
  int v14; // [rsp+12h] [rbp-356h]
  __int16 v15; // [rsp+16h] [rbp-352h]
  _WORD v16[2]; // [rsp+18h] [rbp-350h] BYREF
  int v17; // [rsp+1Ch] [rbp-34Ch]
  __int16 v18; // [rsp+20h] [rbp-348h]
  int v19; // [rsp+22h] [rbp-346h]
  __int16 v20; // [rsp+26h] [rbp-342h]
  __int64 v21; // [rsp+28h] [rbp-340h]
  _WORD v22[5]; // [rsp+30h] [rbp-338h] BYREF
  int v23; // [rsp+3Ah] [rbp-32Eh]
  __int16 v24; // [rsp+3Eh] [rbp-32Ah]
  _OWORD v25[7]; // [rsp+40h] [rbp-328h] BYREF
  _OWORD v26[2]; // [rsp+B0h] [rbp-2B8h] BYREF
  _BYTE v27[64]; // [rsp+D0h] [rbp-298h] BYREF
  _OWORD v28[13]; // [rsp+110h] [rbp-258h] BYREF
  _OWORD v29[2]; // [rsp+1E0h] [rbp-188h] BYREF
  _BYTE v30[96]; // [rsp+208h] [rbp-160h] BYREF
  _BYTE dest[256]; // [rsp+268h] [rbp-100h] BYREF

  v21 = a1;
  v2 = *(_BYTE *)(a2 + 2436);
  memcpy(dest, (const void *)(a2 + 1208), 0xD0uLL);
  v3 = *(_BYTE *)(a2 + 1496);
  v7 = *(_BYTE *)(a2 + 1497);
  memcpy(v28, (const void *)(a2 + 1208), sizeof(v28));
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v25, v28);
  v26[0] = v25[0];
  v26[1] = v25[1];
  if ( v2 )
  {
    sniffnet::gui::styles::types::style_type::StyleType::get_extension(v28, dest);
    v29[1] = v28[3];
    v29[0] = v28[2];
    return sniffnet::gui::components::header::thumbnail_header(v21, v26, v29, v7, v3, *(_QWORD *)(a2 + 2376));
  }
  else
  {
    v5 = v21;
    v8 = *(_BYTE *)(a2 + 1668);
    v6 = *(_BYTE *)(a2 + 2439);
    sniffnet::utils::types::icon::Icon::to_text(v28, 32LL);
    iced_core::widget::text::Text<Theme,Renderer>::align_y(v25, v28);
    iced_core::widget::text::Text<Theme,Renderer>::height(v28, v25);
    iced_core::widget::text::Text<Theme,Renderer>::line_height(v25, v28, 0.69999999);
    iced_core::widget::text::Text<Theme,Renderer>::size(v30, v25, 80LL);
    *(_OWORD *)((char *)&v28[2] + 8) = 0LL;
    DWORD2(v28[3]) = 0;
    WORD4(v28[1]) = 2;
    LOWORD(v28[2]) = 2;
    WORD6(v28[3]) = 0;
    *(_QWORD *)&v28[0] = 0LL;
    *((_QWORD *)&v28[0] + 1) = 8LL;
    *(_QWORD *)&v28[1] = 0LL;
    iced_widget::row::Row<Message,Theme,Renderer>::padding(v25, v28, 1310720LL);
    iced_widget::row::Row<Message,Theme,Renderer>::align_y(v27, v25, 1LL);
    if ( v6 == 3 )
    {
      LOWORD(v25[0]) = 3;
      DWORD1(v25[0]) = 1114636288;
      WORD4(v25[0]) = 2;
      iced_widget::container::Container<Message,Theme,Renderer>::new(v28, v25);
    }
    else
    {
      sniffnet::gui::components::header::get_button_reset(v25, v26, v7);
      iced_widget::container::Container<Message,Theme,Renderer>::new(v28, v25);
    }
    iced_widget::row::Row<Message,Theme,Renderer>::push(v25, v27, v28);
    v22[0] = 0;
    v22[4] = 2;
    v23 = v9;
    v24 = v10;
    iced_widget::row::Row<Message,Theme,Renderer>::push(v27, v25, v22);
    v11[0] = 3;
    v12 = 1109393408;
    v13 = 2;
    v14 = v9;
    v15 = v10;
    iced_widget::container::Container<Message,Theme,Renderer>::new(v28, v11);
    iced_widget::row::Row<Message,Theme,Renderer>::push(v25, v27, v28);
    v16[0] = 3;
    v17 = 1101004800;
    v18 = 2;
    v19 = v9;
    v20 = v10;
    iced_widget::row::Row<Message,Theme,Renderer>::push(v28, v25, v16);
    iced_widget::row::Row<Message,Theme,Renderer>::push(v25, v28, v30);
    iced_widget::row::Row<Message,Theme,Renderer>::push(v27, v25, v16);
    if ( v6 == 3 )
    {
      iced_widget::container::Container<Message,Theme,Renderer>::new(v28, v11);
    }
    else
    {
      sniffnet::gui::components::header::get_button_minimize(v25, v26, v7, 0LL);
      iced_widget::container::Container<Message,Theme,Renderer>::new(v28, v25);
    }
    iced_widget::row::Row<Message,Theme,Renderer>::push(v25, v27, v28);
    iced_widget::row::Row<Message,Theme,Renderer>::push(v28, v25, v22);
    sniffnet::gui::components::header::get_button_settings(v27, v26, v7, v8);
    iced_widget::row::Row<Message,Theme,Renderer>::push(v25, v28, v27);
    iced_widget::container::Container<Message,Theme,Renderer>::new(v28, v25);
    iced_widget::container::Container<Message,Theme,Renderer>::height(v25, v28, 70LL);
    iced_widget::container::Container<Message,Theme,Renderer>::align_y(v28, v25);
    return iced_widget::container::Container<Message,Theme,Renderer>::class(v5, v28, v3);
  }
}