__int64 __fastcall uu_od::prn_float::format_flo32(__int64 a1, __m128i a2)
{
  int v3; // [rsp+4h] [rbp-54h] BYREF
  _QWORD v4[3]; // [rsp+8h] [rbp-50h] BYREF
  __int16 v5; // [rsp+20h] [rbp-38h]
  _QWORD v6[6]; // [rsp+28h] [rbp-30h] BYREF

  v3 = _mm_cvtsi128_si32(a2);
  if ( (v3 & 0x7FFFFF) == 0 || (v3 & 0x7FFFFFFF) == 0x7F800000 || (v3 & 0x7F800000) != 0 )
    return uu_od::prn_float::format_float(a1, 14LL, 8LL, *(float *)a2.m128i_i32);
  v4[0] = &v3;
  v4[1] = core::fmt::float::<impl core::fmt::LowerExp for f32>::fmt;
  v4[2] = 0LL;
  v5 = 14;
  v6[0] = &unk_1A940;
  v6[1] = 1LL;
  v6[4] = &unk_1D228;
  v6[5] = 1LL;
  v6[2] = v4;
  v6[3] = 2LL;
  return core::option::Option<T>::map_or_else(a1, v6);
}