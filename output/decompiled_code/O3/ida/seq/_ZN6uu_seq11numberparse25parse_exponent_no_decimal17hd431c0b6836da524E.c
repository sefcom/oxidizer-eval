        __int64 a4)
{
  unsigned __int64 v7; // rsi
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbp
  __int128 v14; // xmm0
  _BYTE v15[40]; // [rsp+8h] [rbp-80h] BYREF
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  __m256i v17; // [rsp+38h] [rbp-50h]

  v7 = a4 + 1;
  if ( a4 != -1 )
  {
    if ( a3 <= v7 )
    {
      if ( a3 != v7 )
LABEL_4:
        core::str::slice_error_fail(a2, a3, a4 + 1, a3, &off_1075C8);
    }
    else if ( (char)a2[v7] <= -65 )
    {
      goto LABEL_4;
    }
  }
  core::num::<impl core::str::traits::FromStr for i64>::from_str(&v16, &a2[v7], a3 - v7);
  if ( (_BYTE)v16 )
    goto LABEL_7;
  v9 = v17.m256i_i64[0];
  bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(&v16);
  if ( v16 == 0x8000000000000000LL )
  {
    if ( v17.m256i_i64[0] >= (__int64)0x8000000000000004LL && v17.m256i_i64[0] )
      _rust_dealloc(v17.m256i_i64[1], v17.m256i_i64[0], 1LL);
LABEL_7:
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0x8000000000000004LL;
    return a1;
  }
  *(_OWORD *)&v15[9] = *(_OWORD *)&v17.m256i_i8[1];
  *(_OWORD *)&v15[24] = *(_OWORD *)&v17.m256i_u64[2];
  *(_QWORD *)v15 = v16;
  v15[8] = v17.m256i_i8[0];
  if ( (unsigned __int8)uu_seq::numberparse::is_minus_zero_float(a2, a3, (__int64)v15) )
  {
    v10 = 2LL;
    if ( v9 > 0 )
      v10 = v9 + 2;
  }
  else
  {
    v11 = v9 + a4;
    v12 = 1LL;
    if ( v11 >= 2 )
      v12 = v11;
    v10 = (v15[24] == 0) + v12;
  }
  v13 = -v9 & (v9 >> 63);
  if ( (unsigned __int8)uu_seq::numberparse::is_minus_zero_float(a2, a3, (__int64)v15) )
  {
    *(_QWORD *)a1 = 0x8000000000000002LL;
    *(_QWORD *)(a1 + 40) = v10;
    *(_QWORD *)(a1 + 48) = v13;
    if ( *(_QWORD *)v15 )
      _rust_dealloc(*(_QWORD *)&v15[8], 8LL * *(_QWORD *)v15, 8LL);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v15[32];
    v14 = *(_OWORD *)v15;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v15[16];
    *(_OWORD *)a1 = v14;
    *(_QWORD *)(a1 + 40) = v10;
    *(_QWORD *)(a1 + 48) = v13;
  }
  return a1;
}
