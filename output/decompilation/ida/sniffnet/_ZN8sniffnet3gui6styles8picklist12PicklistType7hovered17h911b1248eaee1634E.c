__int64 __fastcall sniffnet::gui::styles::picklist::PicklistType::hovered(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  double v3; // xmm1_8
  double v4; // xmm2_8
  float v5; // xmm0_4
  double v6; // xmm1_8
  double v7; // xmm2_8
  __int64 v8; // [rsp+8h] [rbp-E0h] BYREF
  float v9; // [rsp+10h] [rbp-D8h]
  __int128 v10; // [rsp+18h] [rbp-D0h]
  __int128 v11; // [rsp+58h] [rbp-90h]
  _BYTE v12[64]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v13; // [rsp+A8h] [rbp-40h]
  float v14; // [rsp+B0h] [rbp-38h]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(&v8, a2);
  result = sniffnet::gui::styles::types::style_type::StyleType::get_extension(v12, a2);
  v3 = v14;
  v4 = v9;
  *(_OWORD *)(a1 + 228) = v11;
  v5 = (v4 + v3) * 0.5;
  *(_OWORD *)(a1 + 244) = v10;
  *(_OWORD *)(a1 + 196) = v11;
  *(_OWORD *)(a1 + 212) = v11;
  v6 = *(float *)&v13;
  v7 = *(float *)&v8;
  *(_DWORD *)a1 = 2;
  *(double *)(a1 + 4) = (v7 + v6) * 0.5;
  *(float *)(a1 + 12) = v5;
  *(_DWORD *)(a1 + 16) = 1065353216;
  *(_OWORD *)(a1 + 260) = xmmword_26D790;
  *(_DWORD *)(a1 + 276) = 0x40000000;
  return result;
}