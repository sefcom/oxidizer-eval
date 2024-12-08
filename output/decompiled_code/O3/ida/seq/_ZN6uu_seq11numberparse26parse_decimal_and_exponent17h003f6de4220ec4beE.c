        unsigned __int64 a5)
{
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  bool v15; // cc
  unsigned __int64 v16; // r14
  __int128 v17; // xmm0
  __int64 v18; // [rsp+8h] [rbp-B0h]
  __int64 v19; // [rsp+10h] [rbp-A8h]
  __int64 v20; // [rsp+18h] [rbp-A0h]
  __int64 v21; // [rsp+20h] [rbp-98h] BYREF
  __m256i v22; // [rsp+28h] [rbp-90h]
  _BYTE v23[40]; // [rsp+48h] [rbp-70h] BYREF
  __int128 v24; // [rsp+70h] [rbp-48h] BYREF
  __int64 v25; // [rsp+80h] [rbp-38h]

  v8 = a5 + 1;
  v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a5 + 1);
  if ( !v9 )
    core::str::slice_error_fail(a2, a3, v8, a3, &off_146890);
  core::num::<impl core::str::traits::FromStr for i64>::from_str(&v21, v9);
  if ( (_BYTE)v21 )
    goto LABEL_5;
  v20 = v22.m256i_i64[0];
  bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(&v21);
  if ( v21 != 0x8000000000000000LL )
  {
    *(_OWORD *)&v23[9] = *(_OWORD *)&v22.m256i_i8[1];
    *(_OWORD *)&v23[24] = *(_OWORD *)&v22.m256i_u64[2];
    *(_QWORD *)v23 = v21;
    v23[8] = v22.m256i_i8[0];
    if ( a5 )
    {
      if ( a5 >= a3 )
      {
        if ( a5 != a3 )
LABEL_10:
          core::str::slice_error_fail(a2, a3, 0LL, a5, &off_1468A8);
      }
      else if ( *(char *)(a2 + a5) <= -65 )
      {
        goto LABEL_10;
      }
    }
    core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(&v21, a2, a5);
    if ( (_BYTE)v21 )
      goto LABEL_18;
    v11 = 2LL;
    if ( v20 > 0 )
      v11 = v20 + 2;
    v12 = 1LL;
    if ( v22.m256i_i64[0] < 0 )
      v12 = v11;
    v18 = v12;
    if ( __OFADD__(v20, a4) )
      goto LABEL_18;
    v19 = v20 + a4;
    if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(a2, a3, asc_24486, 2LL) )
    {
      v13 = v19 + 1;
      if ( __OFADD__(1LL, v19) )
        goto LABEL_18;
    }
    else
    {
      v13 = v20 + a4;
    }
    if ( v13 < v18 || (v18 = v13, v13 >= 0) )
    {
      v14 = a5 + ~a4;
      v15 = v14 < v20;
      v16 = v14 - v20;
      if ( v15 )
        v16 = 0LL;
      else
        core::result::Result<T,E>::unwrap(v16 >> 63);
      if ( !(unsigned __int8)uu_seq::numberparse::is_minus_zero_float(a2, a3, (__int64)v23) )
      {
        *(_QWORD *)(a1 + 32) = *(_QWORD *)&v23[32];
        v17 = *(_OWORD *)v23;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)&v23[16];
        *(_OWORD *)a1 = v17;
        *(_QWORD *)(a1 + 40) = v18;
        *(_QWORD *)(a1 + 48) = v16;
        return a1;
      }
      *(_QWORD *)a1 = 0x8000000000000002LL;
      *(_QWORD *)(a1 + 40) = v18;
      *(_QWORD *)(a1 + 48) = v16;
      goto LABEL_19;
    }
LABEL_18:
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0x8000000000000004LL;
LABEL_19:
    core::ptr::drop_in_place<bigdecimal::BigDecimal>(v23);
    return a1;
  }
  v25 = v22.m256i_i64[2];
  v24 = *(_OWORD *)v22.m256i_i8;
  core::ptr::drop_in_place<bigdecimal::ParseBigDecimalError>(&v24, a2);
LABEL_5:
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0x8000000000000004LL;
  return a1;
}
