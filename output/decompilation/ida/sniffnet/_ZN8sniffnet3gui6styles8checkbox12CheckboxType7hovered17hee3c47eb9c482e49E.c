__int64 __fastcall sniffnet::gui::styles::checkbox::CheckboxType::hovered(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v3[16]; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v4; // [rsp+18h] [rbp-D0h]
  __int128 v5; // [rsp+58h] [rbp-90h]
  _BYTE v6[64]; // [rsp+68h] [rbp-80h] BYREF
  __int128 v7; // [rsp+A8h] [rbp-40h]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v3, a2);
  result = sniffnet::gui::styles::types::style_type::StyleType::get_extension(v6, a2);
  *(_OWORD *)(a1 + 24) = v7;
  *(_OWORD *)(a1 + 216) = v5;
  *(_OWORD *)(a1 + 232) = v4;
  *(_DWORD *)(a1 + 20) = 2;
  *(_OWORD *)(a1 + 248) = xmmword_26E510;
  *(_DWORD *)(a1 + 264) = 0x40000000;
  *(_DWORD *)a1 = 0;
  return result;
}