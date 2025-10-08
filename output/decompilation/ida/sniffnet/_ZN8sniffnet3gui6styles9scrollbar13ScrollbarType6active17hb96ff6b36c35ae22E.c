__int64 __fastcall sniffnet::gui::styles::scrollbar::ScrollbarType::active(__int64 a1, __int64 a2)
{
  int v2; // xmm0_4
  int v3; // xmm1_4
  __int64 v4; // xmm4_8
  __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-78h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+64h] [rbp-14h]

  sniffnet::gui::styles::types::style_type::StyleType::get_extension(&v6, a2);
  v2 = v8;
  v3 = v9;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 20) = 3;
  *(_OWORD *)(a1 + 216) = 0LL;
  *(_OWORD *)(a1 + 232) = 0LL;
  *(_OWORD *)(a1 + 248) = 0LL;
  *(_OWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 280) = 2;
  *(_OWORD *)(a1 + 284) = 0LL;
  *(_OWORD *)(a1 + 476) = 0LL;
  *(_OWORD *)(a1 + 492) = xmmword_26EE20;
  *(_DWORD *)(a1 + 508) = 0;
  v4 = v7;
  *(_QWORD *)(a1 + 512) = v7;
  *(_DWORD *)(a1 + 520) = v2;
  *(_DWORD *)(a1 + 524) = v3;
  *(_OWORD *)(a1 + 528) = 0LL;
  *(_OWORD *)(a1 + 544) = xmmword_26EE20;
  *(_QWORD *)(a1 + 560) = 0x200000000LL;
  *(_OWORD *)(a1 + 568) = 0LL;
  *(_OWORD *)(a1 + 760) = 0LL;
  *(_OWORD *)(a1 + 776) = xmmword_26EE20;
  *(_DWORD *)(a1 + 792) = 0;
  *(_QWORD *)(a1 + 796) = v4;
  *(_DWORD *)(a1 + 804) = v2;
  *(_DWORD *)(a1 + 808) = v3;
  *(_OWORD *)(a1 + 812) = 0LL;
  *(_OWORD *)(a1 + 828) = xmmword_26EE20;
  result = 0x300000000LL;
  *(_QWORD *)(a1 + 844) = 0x300000000LL;
  return result;
}