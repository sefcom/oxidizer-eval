__int64 __fastcall sniffnet::gui::pages::initial_page::get_col_data_source(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  unsigned int v7; // r12d
  __int128 v8; // rax
  __int64 v9; // rcx
  const char *v10; // r8
  const char *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  const char *v14; // rsi
  __int64 result; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int128 v19; // [rsp+8h] [rbp-B50h] BYREF
  __int128 v20; // [rsp+18h] [rbp-B40h]
  __int128 v21; // [rsp+28h] [rbp-B30h]
  __int128 v22; // [rsp+38h] [rbp-B20h]
  __int64 v23; // [rsp+48h] [rbp-B10h]
  __int128 v24; // [rsp+50h] [rbp-B08h] BYREF
  const char *v25; // [rsp+60h] [rbp-AF8h]
  __int64 v26; // [rsp+68h] [rbp-AF0h]
  __int64 v27; // [rsp+A0h] [rbp-AB8h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-AB0h]
  __int64 v29; // [rsp+B0h] [rbp-AA8h]
  __int16 v30; // [rsp+B8h] [rbp-AA0h]
  __int16 v31; // [rsp+C0h] [rbp-A98h]
  __int128 v32; // [rsp+C8h] [rbp-A90h]
  __int64 v33; // [rsp+D8h] [rbp-A80h]
  __int16 v34; // [rsp+E0h] [rbp-A78h]
  __int128 src; // [rsp+420h] [rbp-738h] BYREF
  __int128 v36; // [rsp+430h] [rbp-728h]
  __int128 v37; // [rsp+440h] [rbp-718h]
  __int128 v38; // [rsp+450h] [rbp-708h]
  __int64 v39; // [rsp+460h] [rbp-6F8h]
  _BYTE dest[952]; // [rsp+7A0h] [rbp-3B8h] BYREF

  v7 = a4;
  if ( *(_BYTE *)(a2 + 1664) )
  {
    switch ( a4 )
    {
      case 1u:
        *(_QWORD *)&v8 = sniffnet::translations::translations::network_adapter_translation(1LL);
        v9 = 15LL;
        v10 = aFileDiCattura;
        goto LABEL_13;
      case 2u:
        *(_QWORD *)&v8 = sniffnet::translations::translations::network_adapter_translation(2LL);
        v9 = 18LL;
        v10 = aFichierDeCaptu;
        goto LABEL_18;
      case 3u:
        *(_QWORD *)&v8 = sniffnet::translations::translations::network_adapter_translation(3LL);
        v9 = 18LL;
        v10 = aArchivoDeCaptu;
        goto LABEL_18;
      case 5u:
        *(_QWORD *)&v8 = sniffnet::translations::translations::network_adapter_translation(5LL);
        v9 = 18LL;
        v10 = aAufzeichnungsd;
LABEL_18:
        v12 = 18LL;
        v11 = v10;
        break;
      case 7u:
        *(_QWORD *)&v8 = sniffnet::translations::translations::network_adapter_translation(7LL);
        v9 = 12LL;
        v10 = (const char *)&unk_49799D;
        goto LABEL_11;
      case 8u:
        *(_QWORD *)&v8 = sniffnet::translations::translations::network_adapter_translation(8LL);
        v9 = 12LL;
        v10 = (const char *)&unk_4979A9;
LABEL_11:
        v12 = 12LL;
        v11 = v10;
        break;
      case 9u:
        *(_QWORD *)&v8 = sniffnet::translations::translations::network_adapter_translation(9LL);
        v9 = 21LL;
        v10 = aFisierulDeCapt;
        v12 = 21LL;
        v11 = aFisierulDeCapt;
        break;
      case 0xEu:
        *(_QWORD *)&v8 = sniffnet::translations::translations::network_adapter_translation(14LL);
        v9 = 35LL;
        v10 = aArEiouKatagraE;
        v12 = 35LL;
        v11 = aArEiouKatagraE;
        break;
      case 0x11u:
        *(_QWORD *)&v8 = sniffnet::translations::translations::network_adapter_translation(17LL);
        v9 = 27LL;
        v10 = aAi_0;
        v12 = 27LL;
        v11 = aAi_0;
        break;
      case 0x12u:
        *(_QWORD *)&v8 = sniffnet::translations::translations::network_adapter_translation(18LL);
        v9 = 14LL;
        v10 = aTahlilFaylini;
        goto LABEL_22;
      case 0x14u:
        *(_QWORD *)&v8 = sniffnet::translations::translations::network_adapter_translation(20LL);
        v9 = 14LL;
        v10 = aFileTangkapan;
LABEL_22:
        v12 = 14LL;
        v11 = v10;
        break;
      case 0x15u:
        *(_QWORD *)&v8 = sniffnet::translations::translations::network_adapter_translation(21LL);
        v9 = 15LL;
        v10 = aCaptureBestand;
LABEL_13:
        v12 = 15LL;
        v11 = v10;
        break;
      case 0x16u:
        *(_QWORD *)&v8 = sniffnet::translations::translations::network_adapter_translation(22LL);
        v9 = 17LL;
        v10 = aSouborZachycen;
        v12 = 17LL;
        v11 = aSouborZachycen;
        break;
      default:
        *(_QWORD *)&v8 = sniffnet::translations::translations::network_adapter_translation(a4);
        v10 = aCaptureFile;
        v9 = 12LL;
        goto LABEL_5;
    }
  }
  else
  {
    *(_QWORD *)&v8 = sniffnet::translations::translations::network_adapter_translation(a4);
    v9 = *((_QWORD *)&v8 + 1);
    v10 = (const char *)v8;
LABEL_5:
    v11 = aCaptureFile;
    v12 = 12LL;
    switch ( v7 )
    {
      case 1u:
        v11 = aFileDiCattura;
        v12 = 15LL;
        break;
      case 2u:
        v11 = aFichierDeCaptu;
        v12 = 18LL;
        break;
      case 3u:
        v11 = aArchivoDeCaptu;
        v12 = 18LL;
        break;
      case 5u:
        v11 = aAufzeichnungsd;
        v12 = 18LL;
        break;
      case 7u:
        v11 = (const char *)&unk_49799D;
        break;
      case 8u:
        v11 = (const char *)&unk_4979A9;
        break;
      case 9u:
        v11 = aFisierulDeCapt;
        v12 = 21LL;
        break;
      case 0xEu:
        v11 = aArEiouKatagraE;
        v12 = 35LL;
        break;
      case 0x11u:
        v11 = aAi_0;
        v12 = 27LL;
        break;
      case 0x12u:
        v11 = aTahlilFaylini;
        v12 = 14LL;
        break;
      case 0x14u:
        v11 = aFileTangkapan;
        v12 = 14LL;
        break;
      case 0x15u:
        v11 = aCaptureBestand;
        v12 = 15LL;
        break;
      case 0x16u:
        v11 = aSouborZachycen;
        v12 = 17LL;
        break;
      default:
        break;
    }
  }
  v24 = v8;
  v25 = v11;
  v26 = v12;
  iced_widget::pick_list::PickList<T,L,V,Message,Theme,Renderer>::new(&v27, &v24, v10, v9, v7);
  iced_widget::pick_list::PickList<T,L,V,Message,Theme,Renderer>::padding(&src, &v27);
  iced_widget::pick_list::PickList<T,L,V,Message,Theme,Renderer>::font(dest, &src);
  v32 = 0LL;
  v33 = 0x7F80000000000000LL;
  v30 = 2;
  v31 = 2;
  v34 = 0;
  v27 = 0LL;
  v28 = 8LL;
  v29 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&src, &v27, 1LL);
  v24 = xmmword_271B40;
  iced_widget::column::Column<Message,Theme,Renderer>::padding(&v27, &src, &v24);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&src, &v27, 30LL);
  iced_widget::column::Column<Message,Theme,Renderer>::height(&v27, &src);
  iced_widget::column::Column<Message,Theme,Renderer>::width(&v24, &v27, 65537LL);
  v32 = 0LL;
  LODWORD(v33) = 0;
  v30 = 2;
  v31 = 2;
  WORD2(v33) = 0;
  v27 = 0LL;
  v28 = 8LL;
  v29 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v19, &v27, 10LL);
  if ( (_BYTE)v7 == 1 )
  {
    v13 = 18LL;
    v14 = aFonteDelTraffi;
  }
  else if ( v7 == 22 )
  {
    v13 = 13LL;
    v14 = aZdrojProvozu;
  }
  else
  {
    v13 = 14LL;
    v14 = aTrafficSource;
  }
  iced_core::widget::text::Text<Theme,Renderer>::new(&v27, v14, v13);
  iced_core::widget::text::Text<Theme,Renderer>::font(&src, &v27, a3);
  iced_core::widget::text::Text<Theme,Renderer>::class(&v27, &src, 3LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(&src, &v27, 19.9);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v27, &v19, &src);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&src, &v27, dest);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v19, &v24, &src);
  if ( *(_BYTE *)(a2 + 1664) == 1 )
  {
    v39 = v23;
    v38 = v22;
    v37 = v21;
    v36 = v20;
    src = v19;
    sniffnet::gui::pages::initial_page::get_col_import_pcap(&v27, v7, a3, *(_QWORD *)(a2 + 720), a2 + 1616);
  }
  else
  {
    v39 = v23;
    v38 = v22;
    v37 = v21;
    v36 = v20;
    src = v19;
    sniffnet::gui::pages::initial_page::get_col_adapter(&v27, a2, a3, v7);
  }
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v19, &src, &v27);
  result = v23;
  *(_QWORD *)(a1 + 64) = v23;
  v16 = v19;
  v17 = v20;
  v18 = v21;
  *(_OWORD *)(a1 + 48) = v22;
  *(_OWORD *)(a1 + 32) = v18;
  *(_OWORD *)(a1 + 16) = v17;
  *(_OWORD *)a1 = v16;
  return result;
}