void *__fastcall sniffnet::gui::styles::scrollbar::ScrollbarType::hovered(__int64 a1, __int64 a2, int a3, int a4)
{
  void *result; // rax
  _QWORD v7[3]; // [rsp+8h] [rbp-340h] BYREF
  _BYTE v8[64]; // [rsp+20h] [rbp-328h] BYREF
  char v9; // [rsp+60h] [rbp-2E8h] BYREF
  char v10; // [rsp+84h] [rbp-2C4h] BYREF
  _BYTE v11[16]; // [rsp+90h] [rbp-2B8h] BYREF
  char v12; // [rsp+A0h] [rbp-2A8h] BYREF
  _BYTE src[284]; // [rsp+F0h] [rbp-258h] BYREF
  _BYTE v14[284]; // [rsp+20Ch] [rbp-13Ch] BYREF

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v11, a2);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v8, a2);
  v7[0] = &v10;
  v7[1] = &v9;
  v7[2] = &v12;
  core::array::drain::drain_array_with(src, a3 | (unsigned int)(a4 << 8), v7);
  memcpy((void *)(a1 + 564), src, 0x11CuLL);
  result = memcpy((void *)(a1 + 280), v14, 0x11CuLL);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 20) = 3;
  *(_OWORD *)(a1 + 216) = 0LL;
  *(_OWORD *)(a1 + 232) = 0LL;
  *(_OWORD *)(a1 + 248) = 0LL;
  *(_OWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 848) = 3;
  return result;
}