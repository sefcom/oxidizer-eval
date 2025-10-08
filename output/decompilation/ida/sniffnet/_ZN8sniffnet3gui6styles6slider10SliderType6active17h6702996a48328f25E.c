__int64 __fastcall sniffnet::gui::styles::slider::SliderType::active(__int64 a1, __int64 a2)
{
  float v2; // xmm0_4
  double v3; // xmm1_8
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+8h] [rbp-E0h] BYREF
  float v6[20]; // [rsp+18h] [rbp-D0h]
  _BYTE v7[64]; // [rsp+68h] [rbp-80h] BYREF
  float v8[16]; // [rsp+A8h] [rbp-40h]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v5, a2);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v7, a2);
  v2 = (v8[2] + v6[2]) * 0.5;
  v3 = (v8[0] + v6[0]) * 0.5;
  *(_OWORD *)(a1 + 200) = *(_OWORD *)v8;
  *(_OWORD *)(a1 + 652) = *(_OWORD *)v6;
  *(_DWORD *)a1 = 2;
  *(double *)(a1 + 4) = v3;
  *(float *)(a1 + 12) = v2;
  *(_DWORD *)(a1 + 16) = 1065353216;
  *(_DWORD *)(a1 + 196) = 2;
  *(_DWORD *)(a1 + 392) = 1077936128;
  *(_OWORD *)(a1 + 396) = 0LL;
  *(_OWORD *)(a1 + 412) = xmmword_26EE20;
  result = 0x200000000LL;
  *(_QWORD *)(a1 + 428) = 0x200000000LL;
  *(double *)(a1 + 436) = v3;
  *(float *)(a1 + 444) = v2;
  *(_DWORD *)(a1 + 448) = 1065353216;
  *(_WORD *)(a1 + 628) = 0;
  *(_DWORD *)(a1 + 632) = 1085276160;
  *(_DWORD *)(a1 + 648) = 0;
  return result;
}