        double a5)
{
  bool v6; // cf
  char v7; // al
  char v8; // si
  const char *v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 result; // rax
  double *v12; // rax
  char v13; // bl
  double v14; // xmm1_8
  double v15; // xmm3_8
  __int64 v16; // r14
  char v17; // bp
  double v18; // xmm1_8
  char v19; // al
  _QWORD v20[5]; // [rsp+10h] [rbp-28h]

  v20[0] = 0x706050403020100LL;
  v6 = (unsigned __int8)(a2 - 2) < 4u;
  v7 = a2 - 2;
  v8 = 2;
  if ( v6 )
    v8 = v7;
  switch ( v8 )
  {
    case 0:
      v9 = aUnitAutoIsnTSu;
      v10 = 45LL;
      return <T as alloc::slice::hack::ConvertVec>::to_vec(a1, v9, v10);
    case 1:
      v12 = (double *)&unk_231D8;
      v13 = 0;
      goto LABEL_8;
    case 2:
      v13 = a2 & 1;
      v12 = (double *)&unk_23228;
LABEL_8:
      v14 = fabs(a5);
      v15 = v12[1];
      if ( v15 + -1.0 >= v14 )
        goto LABEL_20;
      v16 = 1LL;
      v17 = 1;
      if ( v12[2] > v14 )
        goto LABEL_18;
      v16 = 2LL;
      if ( v12[3] > v14 )
        goto LABEL_18;
      v16 = 3LL;
      if ( v12[4] > v14 )
        goto LABEL_18;
      v16 = 4LL;
      if ( v12[5] > v14 )
        goto LABEL_18;
      v16 = 5LL;
      if ( v12[6] > v14 )
        goto LABEL_18;
      v16 = 6LL;
      if ( v12[7] > v14 )
        goto LABEL_18;
      v16 = 7LL;
      if ( v12[8] > v14 )
        goto LABEL_18;
      if ( v12[9] <= v14 )
      {
        v9 = aNumberIsTooBig;
        v10 = 33LL;
        return <T as alloc::slice::hack::ConvertVec>::to_vec(a1, v9, v10);
      }
      else
      {
        v16 = 8LL;
        v17 = 0;
LABEL_18:
        v18 = v12[v16];
        if ( a4 )
          a5 = uu_numfmt::format::round_with_precision(a3, a4, a5 / v18);
        else
          uu_numfmt::format::div_round(a3, a5, v18);
        if ( fabs(a5) >= v15 )
        {
          if ( !v17 )
            core::panicking::panic_bounds_check(8LL, 8LL, &off_136648);
          a5 = a5 / v15;
        }
        else
        {
          --v16;
        }
        v19 = *((_BYTE *)v20 + v16);
        *(double *)(a1 + 8) = a5;
        *(_BYTE *)(a1 + 16) = v19;
        *(_BYTE *)(a1 + 17) = v13;
        result = 0x8000000000000000LL;
        *(_QWORD *)a1 = 0x8000000000000000LL;
      }
      return result;
    case 3:
LABEL_20:
      *(double *)(a1 + 8) = a5;
      *(_BYTE *)(a1 + 17) = 2;
      result = 0x8000000000000000LL;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      return result;
  }
}
