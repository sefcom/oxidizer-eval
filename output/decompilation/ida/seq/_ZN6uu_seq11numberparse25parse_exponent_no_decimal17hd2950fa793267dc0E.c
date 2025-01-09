__int64 __fastcall uu_seq::numberparse::parse_exponent_no_decimal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v10; // r12
  bool v11; // of
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbp
  __int128 v15; // xmm0
  _BYTE v16[40]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v17; // [rsp+28h] [rbp-70h] BYREF
  __m256i v18; // [rsp+30h] [rbp-68h]
  __int128 v19; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]

  v6 = a4 + 1;
  v7 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a4 + 1);
  if ( !v7 )
    core::str::slice_error_fail(a2, a3, v6, a3, &off_143F40);
  core::num::<impl core::str::traits::FromStr for i64>::from_str(&v17, v7);
  if ( (_BYTE)v17 )
    goto LABEL_5;
  v8 = v18.m256i_i64[0];
  bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(&v17);
  if ( v17 != 0x8000000000000000LL )
  {
    *(_OWORD *)&v16[9] = *(_OWORD *)&v18.m256i_i8[1];
    *(_OWORD *)&v16[24] = *(_OWORD *)&v18.m256i_u64[2];
    *(_QWORD *)v16 = v17;
    v16[8] = v18.m256i_i8[0];
    if ( (unsigned __int8)uu_seq::numberparse::is_minus_zero_float(a2, a3, (__int64)v16) )
    {
      v10 = 2LL;
      if ( v8 > 0 )
        v10 = v8 + 2;
    }
    else
    {
      v11 = __OFADD__(v8, a4);
      v12 = v8 + a4;
      if ( v11 )
      {
        *(_BYTE *)(a1 + 8) = 0;
        *(_QWORD *)a1 = 0x8000000000000004LL;
LABEL_18:
        core::ptr::drop_in_place<bigdecimal::BigDecimal>(v16);
        return a1;
      }
      v13 = 1LL;
      if ( v12 >= 2 )
        v13 = v12;
      v10 = (v16[24] == 0) + v13;
    }
    v14 = -v8 & (v8 >> 63);
    if ( !(unsigned __int8)uu_seq::numberparse::is_minus_zero_float(a2, a3, (__int64)v16) )
    {
      *(_QWORD *)(a1 + 32) = *(_QWORD *)&v16[32];
      v15 = *(_OWORD *)v16;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v16[16];
      *(_OWORD *)a1 = v15;
      *(_QWORD *)(a1 + 40) = v10;
      *(_QWORD *)(a1 + 48) = v14;
      return a1;
    }
    *(_QWORD *)a1 = 0x8000000000000002LL;
    *(_QWORD *)(a1 + 40) = v10;
    *(_QWORD *)(a1 + 48) = v14;
    goto LABEL_18;
  }
  v20 = v18.m256i_i64[2];
  v19 = *(_OWORD *)v18.m256i_i8;
  core::ptr::drop_in_place<bigdecimal::ParseBigDecimalError>(&v19, a2);
LABEL_5:
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0x8000000000000004LL;
  return a1;
}
