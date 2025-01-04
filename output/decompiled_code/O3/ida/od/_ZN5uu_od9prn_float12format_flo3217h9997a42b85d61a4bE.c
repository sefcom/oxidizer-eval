__int64 __fastcall uu_od::prn_float::format_flo32(__int64 a1, __m128 a2)
{
  __m128i v2; // xmm1
  __int32 v4; // [rsp+Ch] [rbp-8Ch] BYREF
  _QWORD v5[4]; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v6[6]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v7[6]; // [rsp+60h] [rbp-38h] BYREF
  char v8; // [rsp+90h] [rbp-8h]

  v4 = a2.m128_i32[0];
  v2 = (__m128i)_mm_and_ps((__m128)xmmword_DB40, a2);
  if ( *(float *)v2.m128i_i32 == INFINITY
    || !_mm_cvtsi128_si32(v2)
    || (_mm_cvtsi128_si32((__m128i)a2) & 0x7F800000) != 0 )
  {
    return uu_od::prn_float::format_float(a1, 14LL, 8LL, a2.m128_f32[0]);
  }
  v5[0] = &v4;
  v5[1] = core::fmt::float::<impl core::fmt::LowerExp for f32>::fmt;
  v5[2] = 14LL;
  v5[3] = 0LL;
  v7[0] = 2LL;
  v7[2] = 1LL;
  v7[3] = 1LL;
  v7[4] = 0LL;
  v7[5] = 32LL;
  v8 = 3;
  v6[0] = &xmmword_DAD0;
  v6[1] = 1LL;
  v6[4] = v7;
  v6[5] = 1LL;
  v6[2] = v5;
  v6[3] = 2LL;
  return core::option::Option<T>::map_or_else(a1, v6);
}
