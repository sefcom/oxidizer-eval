__int64 __fastcall sniffnet::gui::styles::picklist::PicklistType::active(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v3[80]; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v4; // [rsp+58h] [rbp-90h]
  _BYTE v5[64]; // [rsp+68h] [rbp-80h] BYREF
  __int128 v6; // [rsp+A8h] [rbp-40h]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v3, a2);
  result = sniffnet::gui::styles::types::style_type::StyleType::get_extension(v5, a2);
  *(_OWORD *)(a1 + 228) = v4;
  *(_OWORD *)(a1 + 4) = v6;
  *(_OWORD *)(a1 + 196) = v4;
  *(_OWORD *)(a1 + 212) = v4;
  *(_DWORD *)a1 = 2;
  *(_OWORD *)(a1 + 244) = 0LL;
  *(_OWORD *)(a1 + 260) = xmmword_26D790;
  *(_DWORD *)(a1 + 276) = 0;
  return result;
}