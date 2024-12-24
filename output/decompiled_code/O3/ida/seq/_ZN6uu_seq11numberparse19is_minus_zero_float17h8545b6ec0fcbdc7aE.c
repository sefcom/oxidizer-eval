__int64 __fastcall uu_seq::numberparse::is_minus_zero_float(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __m256 v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+20h] [rbp-28h]

  v11.m256_f32[0] = 0.0;
  v4 = core::char::methods::encode_utf8_raw(45LL, &v11);
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, v4, 1LL) )
  {
    v11 = ymmword_1BCF8;
    v12 = 0LL;
    v9 = ((__int64 (__fastcall *)(__int64, __m256 *, __int64, __int64, __int64, __int64))bigdecimal::impl_cmp::<impl core::cmp::PartialEq for bigdecimal::BigDecimal>::eq)(
           a3,
           &v11,
           v5,
           v6,
           v7,
           v8);
    core::ptr::drop_in_place<bigdecimal::BigDecimal>(&v11);
  }
  else
  {
    return 0;
  }
  return v9;
}
