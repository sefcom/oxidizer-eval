__int64 __fastcall uu_seq::numberparse::parse_decimal_no_exponent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v6; // bp
  char is_minus_zero_float; // al
  __int64 v8; // rcx
  __int64 v9; // r14
  __int128 v10; // xmm0
  _BYTE v12[40]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v13; // [rsp+28h] [rbp-70h] BYREF
  __m256i v14; // [rsp+30h] [rbp-68h]
  __int128 v15; // [rsp+50h] [rbp-48h] BYREF
  __int64 v16; // [rsp+60h] [rbp-38h]

  bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(&v13);
  if ( v13 == 0x8000000000000000LL )
  {
    v16 = v14.m256i_i64[2];
    v15 = *(_OWORD *)v14.m256i_i8;
    core::ptr::drop_in_place<bigdecimal::ParseBigDecimalError>(&v15, a2);
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0x8000000000000004LL;
  }
  else
  {
    *(_OWORD *)&v12[9] = *(_OWORD *)&v14.m256i_i8[1];
    *(_OWORD *)&v12[24] = *(_OWORD *)&v14.m256i_u64[2];
    *(_QWORD *)v12 = v13;
    v12[8] = v14.m256i_i8[0];
    v6 = core::slice::<impl [T]>::starts_with(a2, a3, asc_24160, 2LL);
    is_minus_zero_float = uu_seq::numberparse::is_minus_zero_float(a2, a3, (__int64)v12);
    v8 = a4 + v6;
    v9 = a3 + ~a4;
    if ( is_minus_zero_float )
    {
      *(_QWORD *)a1 = 0x8000000000000002LL;
      *(_QWORD *)(a1 + 40) = v8;
      *(_QWORD *)(a1 + 48) = v9;
      core::ptr::drop_in_place<bigdecimal::BigDecimal>(v12);
    }
    else
    {
      *(_QWORD *)(a1 + 32) = *(_QWORD *)&v12[32];
      v10 = *(_OWORD *)v12;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v12[16];
      *(_OWORD *)a1 = v10;
      *(_QWORD *)(a1 + 40) = v8;
      *(_QWORD *)(a1 + 48) = v9;
    }
  }
  return a1;
}
