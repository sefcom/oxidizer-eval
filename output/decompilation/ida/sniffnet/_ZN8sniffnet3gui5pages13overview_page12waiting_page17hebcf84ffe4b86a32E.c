__int64 __fastcall sniffnet::gui::pages::overview_page::waiting_page(_QWORD *a1, __int64 a2)
{
  unsigned __int8 v2; // bp
  __int64 result; // rax
  _OWORD v4[2]; // [rsp+10h] [rbp-218h] BYREF
  __int128 v5; // [rsp+38h] [rbp-1F0h] BYREF
  __int128 v6; // [rsp+48h] [rbp-1E0h]
  __int16 v7; // [rsp+58h] [rbp-1D0h]
  __int128 v8; // [rsp+60h] [rbp-1C8h]
  __int64 v9; // [rsp+70h] [rbp-1B8h]
  __int16 v10; // [rsp+78h] [rbp-1B0h]
  _BYTE v11[72]; // [rsp+A8h] [rbp-180h] BYREF
  _BYTE v12[72]; // [rsp+F0h] [rbp-138h] BYREF
  _BYTE dest[240]; // [rsp+138h] [rbp-F0h] BYREF

  memcpy(dest, (const void *)(a2 + 1208), 0xD0uLL);
  v2 = *(_BYTE *)(a2 + 1497);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(&v5, dest);
  v4[1] = v6;
  v4[0] = v5;
  if ( !__OFSUB__(0LL, *(_QWORD *)(a2 + 2328)) )
  {
    sniffnet::gui::pages::overview_page::body_pcap_error(
      (unsigned int)v11,
      *(_QWORD *)(a2 + 2336),
      *(_QWORD *)(a2 + 2344),
      *(_QWORD *)(a2 + 472),
      *(_QWORD *)(a2 + 480),
      v2,
      (__int64)v4);
    goto LABEL_5;
  }
  if ( (*(_OWORD *)(a2 + 960) ^ (0LL - *(_OWORD *)(a2 + 976))) == (unsigned __int128)0LL )
  {
    sniffnet::gui::pages::overview_page::body_no_packets(
      v11,
      a2 + 720,
      v4,
      v2,
      *(_QWORD *)(a2 + 472),
      *(_QWORD *)(a2 + 480));
LABEL_5:
    v8 = 0LL;
    v9 = 0x7F80000000000000LL;
    WORD4(v6) = 2;
    v7 = 2;
    v10 = 0;
    *(_QWORD *)&v5 = 0LL;
    *((_QWORD *)&v5 + 1) = 8LL;
    *(_QWORD *)&v6 = 0LL;
    iced_widget::column::Column<Message,Theme,Renderer>::push(v12, &v5, v11);
    iced_widget::container::Container<Message,Theme,Renderer>::new(&v5, v12);
    return iced_widget::container::Container<Message,Theme,Renderer>::height(a1, &v5, 0LL);
  }
  result = 0x8000000000000003LL;
  *a1 = 0x8000000000000003LL;
  return result;
}