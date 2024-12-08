__int64 __fastcall uu_seq::numberparse::is_minus_zero_int(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  _OWORD v7[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+20h] [rbp-28h]

  LODWORD(v7[0]) = 0;
  v4 = core::char::methods::encode_utf8_raw(45LL, v7);
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, v4, 1LL) )
  {
    v7[1] = xmmword_1BD08;
    v7[0] = xmmword_1BCF8;
    v8 = 0LL;
    v5 = ((__int64 (__fastcall *)(__int64, _OWORD *))bigdecimal::impl_cmp::<impl core::cmp::PartialEq for bigdecimal::BigDecimal>::eq)(
           a3,
           v7);
    core::ptr::drop_in_place<bigdecimal::BigDecimal>(v7);
  }
  else
  {
    return 0;
  }
  return v5;
}
