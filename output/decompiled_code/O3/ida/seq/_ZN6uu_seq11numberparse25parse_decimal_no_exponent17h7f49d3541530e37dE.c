        __int64 a4)
{
  _BOOL8 v6; // r14
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  __int128 v9; // xmm0
  __int64 v11; // [rsp+0h] [rbp-88h]
  _BYTE v12[40]; // [rsp+8h] [rbp-80h] BYREF
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  __m256i v14; // [rsp+38h] [rbp-50h]

  bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(&v13);
  if ( v13 == 0x8000000000000000LL )
  {
    if ( v14.m256i_i64[0] >= (__int64)0x8000000000000004LL && v14.m256i_i64[0] )
      _rust_dealloc(v14.m256i_i64[1], v14.m256i_i64[0], 1LL);
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0x8000000000000004LL;
  }
  else
  {
    *(_OWORD *)&v12[9] = *(_OWORD *)&v14.m256i_i8[1];
    *(_OWORD *)&v12[24] = *(_OWORD *)&v14.m256i_u64[2];
    v11 = v13;
    *(_QWORD *)v12 = v13;
    v12[8] = v14.m256i_i8[0];
    v6 = a3 >= 2 && *(unsigned __int16 *)a2 == 11821;
    v7 = a4 + v6;
    v8 = a3 + ~a4;
    if ( (unsigned __int8)uu_seq::numberparse::is_minus_zero_float(a2, a3, (__int64)v12) )
    {
      *(_QWORD *)a1 = 0x8000000000000002LL;
      *(_QWORD *)(a1 + 40) = v7;
      *(_QWORD *)(a1 + 48) = v8;
      if ( v11 )
        _rust_dealloc(*(_QWORD *)&v12[8], 8 * v11, 8LL);
    }
    else
    {
      *(_QWORD *)(a1 + 32) = *(_QWORD *)&v12[32];
      v9 = *(_OWORD *)v12;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v12[16];
      *(_OWORD *)a1 = v9;
      *(_QWORD *)(a1 + 40) = v7;
      *(_QWORD *)(a1 + 48) = v8;
    }
  }
  return a1;
}
