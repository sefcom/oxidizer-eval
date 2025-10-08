__int64 __fastcall uu_od::prn_float::format_item_flo16(__int64 a1, double a2)
{
  float v2; // xmm0_4
  unsigned int v3; // eax
  _QWORD v5[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v6[6]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v7[40]; // [rsp+50h] [rbp-28h] BYREF

  if ( (unsigned __int8)std_detect::detect::cache::test() )
  {
    v2 = a2;
    v3 = half::binary16::arch::x86::f32_to_f16_x86_f16c(v2);
  }
  else
  {
    v3 = half::binary16::arch::f64_to_f16_fallback(a2);
  }
  uu_od::prn_float::format_flo16(v7, v3);
  v5[0] = v7;
  v5[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v6[0] = &off_103838;
  v6[1] = 1LL;
  v6[4] = 0LL;
  v6[2] = v5;
  v6[3] = 1LL;
  core::option::Option<T>::map_or_else(a1, v6);
  core::ptr::drop_in_place<alloc::string::String>(v7);
  return a1;
}