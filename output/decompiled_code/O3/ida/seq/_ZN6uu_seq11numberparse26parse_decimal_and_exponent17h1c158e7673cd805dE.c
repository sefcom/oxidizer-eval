        unsigned __int64 a5)
{
  unsigned __int64 v9; // rsi
  _BOOL8 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  signed __int64 v15; // r15
  bool v16; // sf
  bool v17; // cc
  signed __int64 v18; // r15
  __int128 v19; // xmm0
  char **v20; // r8
  __int64 v21; // [rsp+0h] [rbp-98h]
  __int64 v22; // [rsp+8h] [rbp-90h]
  __int64 v23; // [rsp+10h] [rbp-88h]
  __int64 v24; // [rsp+18h] [rbp-80h] BYREF
  __m256i v25; // [rsp+20h] [rbp-78h]
  _BYTE v26[40]; // [rsp+40h] [rbp-58h] BYREF

  v9 = a5 + 1;
  if ( a5 != -1LL )
  {
    if ( a3 <= v9 )
    {
      if ( a3 != v9 )
LABEL_4:
        core::str::slice_error_fail(a2, a3, v9, a3, &off_1075E0);
    }
    else if ( (char)a2[v9] <= -65 )
    {
      goto LABEL_4;
    }
  }
  core::num::<impl core::str::traits::FromStr for i64>::from_str(&v24, &a2[v9], a3 - v9);
  if ( (_BYTE)v24 )
    goto LABEL_7;
  v23 = v25.m256i_i64[0];
  bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(&v24);
  if ( v24 == 0x8000000000000000LL )
  {
    if ( v25.m256i_i64[0] >= (__int64)0x8000000000000004LL && v25.m256i_i64[0] )
      _rust_dealloc(v25.m256i_i64[1], v25.m256i_i64[0], 1LL);
LABEL_7:
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0x8000000000000004LL;
    return a1;
  }
  *(_OWORD *)&v26[9] = *(_OWORD *)&v25.m256i_i8[1];
  *(_OWORD *)&v26[24] = *(_OWORD *)&v25.m256i_u64[2];
  v21 = v24;
  *(_QWORD *)v26 = v24;
  v26[8] = v25.m256i_i8[0];
  if ( a5 )
  {
    if ( a5 >= a3 )
    {
      if ( a5 != a3 )
LABEL_16:
        core::str::slice_error_fail(a2, a3, 0LL, a5, &off_1075F8);
    }
    else if ( (char)a2[a5] <= -65 )
    {
      goto LABEL_16;
    }
  }
  core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(&v24, a2, a5);
  if ( !(_BYTE)v24 )
  {
    v11 = a3 >= 2 && *(unsigned __int16 *)a2 == 11821;
    v12 = 2LL;
    if ( v23 > 0 )
      v12 = v23 + 2;
    v13 = 1LL;
    if ( v25.m256i_i64[0] < 0 )
      v13 = v12;
    v14 = a4 + v23 + v11;
    v22 = v13;
    if ( v14 >= v13 )
    {
      if ( v14 < 0 )
      {
        v20 = &off_107610;
        goto LABEL_40;
      }
      v22 = v14;
    }
    v15 = a5 + ~a4;
    v16 = v15 - v23 < 0;
    v17 = v15 < v23;
    v18 = v15 - v23;
    if ( v17 )
    {
      v18 = 0LL;
LABEL_33:
      if ( !(unsigned __int8)uu_seq::numberparse::is_minus_zero_float(a2, a3, (__int64)v26) )
      {
        *(_QWORD *)(a1 + 32) = *(_QWORD *)&v26[32];
        v19 = *(_OWORD *)v26;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)&v26[16];
        *(_OWORD *)a1 = v19;
        *(_QWORD *)(a1 + 40) = v22;
        *(_QWORD *)(a1 + 48) = v18;
        return a1;
      }
      *(_QWORD *)a1 = 0x8000000000000002LL;
      *(_QWORD *)(a1 + 40) = v22;
      *(_QWORD *)(a1 + 48) = v18;
      goto LABEL_35;
    }
    if ( !v16 )
      goto LABEL_33;
    v20 = &off_107628;
LABEL_40:
    core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v24, &unk_107588, v20);
  }
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0x8000000000000004LL;
LABEL_35:
  if ( v21 )
    _rust_dealloc(*(_QWORD *)&v26[8], 8 * v21, 8LL);
  return a1;
}
