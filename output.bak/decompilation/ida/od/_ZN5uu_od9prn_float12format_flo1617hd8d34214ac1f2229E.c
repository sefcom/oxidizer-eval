__int64 __fastcall uu_od::prn_float::format_flo16(__int64 a1, unsigned int a2, __m128 a3)
{
  if ( (unsigned __int8)std_detect::detect::cache::test(a1) )
    *(double *)a3.m128_u64 = half::binary16::arch::x86::f16_to_f32_x86_f16c(a2);
  else
    half::binary16::arch::f16_to_f64_fallback(a2);
  return uu_od::prn_float::format_float(a1, (__int128 **)byte_9, (__int128 **)&byte_4, a3);
}
