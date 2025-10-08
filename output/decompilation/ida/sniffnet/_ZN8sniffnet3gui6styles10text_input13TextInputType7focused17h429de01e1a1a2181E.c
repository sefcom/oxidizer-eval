__int64 __fastcall sniffnet::gui::styles::text_input::TextInputType::focused(__int64 a1, __int64 a2)
{
  bool v2; // zf
  int v3; // xmm0_4
  __int64 result; // rax
  int v5; // [rsp+4h] [rbp-E4h]
  _OWORD v6[5]; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v7; // [rsp+58h] [rbp-90h]
  int v8; // [rsp+60h] [rbp-88h]
  _BYTE v9[128]; // [rsp+68h] [rbp-80h] BYREF

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v6, a2);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v9, a2);
  v2 = v9[108] == 0;
  *(_OWORD *)(a1 + 4) = v6[0];
  *(_OWORD *)(a1 + 196) = v6[1];
  if ( v2 )
    v3 = 1060320051;
  else
    v3 = 1045220557;
  v5 = v8;
  sniffnet::gui::styles::text_input::TextInputType::disabled_color(a1 + 248, a2);
  sniffnet::gui::styles::text_input::TextInputType::value_color(a1 + 264, a2);
  result = sniffnet::gui::styles::text_input::TextInputType::selection_color(a1 + 280, a2);
  *(_DWORD *)a1 = 2;
  *(_OWORD *)(a1 + 212) = xmmword_26E510;
  *(_DWORD *)(a1 + 228) = 0x40000000;
  *(_QWORD *)(a1 + 232) = v7;
  *(_DWORD *)(a1 + 240) = v5;
  *(_DWORD *)(a1 + 244) = v3;
  return result;
}