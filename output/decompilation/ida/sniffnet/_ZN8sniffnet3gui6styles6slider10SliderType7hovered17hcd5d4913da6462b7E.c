__int64 __fastcall sniffnet::gui::styles::slider::SliderType::hovered(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v3[16]; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v4; // [rsp+18h] [rbp-D0h]
  _BYTE v5[64]; // [rsp+68h] [rbp-80h] BYREF
  __int128 v6; // [rsp+A8h] [rbp-40h]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v3, a2);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v5, a2);
  *(_OWORD *)(a1 + 652) = v4;
  *(_OWORD *)(a1 + 436) = v4;
  *(_OWORD *)(a1 + 200) = v6;
  *(_OWORD *)(a1 + 4) = v4;
  *(_DWORD *)a1 = 2;
  *(_DWORD *)(a1 + 196) = 2;
  *(_DWORD *)(a1 + 392) = 1077936128;
  *(_OWORD *)(a1 + 396) = 0LL;
  *(_OWORD *)(a1 + 412) = xmmword_26EE20;
  result = 0x200000000LL;
  *(_QWORD *)(a1 + 428) = 0x200000000LL;
  *(_WORD *)(a1 + 628) = 0;
  *(_DWORD *)(a1 + 632) = 1090519040;
  *(_DWORD *)(a1 + 648) = 0;
  return result;
}