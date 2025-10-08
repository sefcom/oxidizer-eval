__int64 __fastcall sniffnet::gui::styles::checkbox::CheckboxType::active(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v5; // xmm0_4
  _OWORD v6[6]; // [rsp+0h] [rbp-E8h] BYREF
  _BYTE v7[64]; // [rsp+60h] [rbp-88h] BYREF
  __int128 v8; // [rsp+A0h] [rbp-48h]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v6, a2);
  result = sniffnet::gui::styles::types::style_type::StyleType::get_extension(v7, a2);
  *(_OWORD *)(a1 + 24) = v8;
  *(_OWORD *)(a1 + 216) = v6[5];
  if ( a3 )
    v5 = 0x40000000;
  else
    v5 = 0;
  *(_OWORD *)(a1 + 232) = v6[1];
  *(_DWORD *)(a1 + 20) = 2;
  *(_OWORD *)(a1 + 248) = xmmword_26E510;
  *(_DWORD *)(a1 + 264) = v5;
  *(_DWORD *)a1 = 0;
  return result;
}