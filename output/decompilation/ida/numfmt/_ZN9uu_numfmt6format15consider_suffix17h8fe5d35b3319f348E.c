unsigned __int64 __fastcall uu_numfmt::format::consider_suffix(
        __int64 a1,
        char a2,
        char a3,
        unsigned __int64 a4,
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
  char v15; // bp
  double *v16; // r14
  __int64 v17; // r15
  double v18; // xmm1_8
  char v19; // al
  __int64 v20; // [rsp+0h] [rbp-38h] BYREF
  double v21; // [rsp+8h] [rbp-30h] BYREF

  v20 = 0x706050403020100LL;
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
      return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, v9, v10);
    case 1:
      v12 = (double *)&unk_1AAB8;
      v13 = 0;
      goto LABEL_8;
    case 2:
      v13 = a2 & 1;
      v12 = (double *)&unk_1AB08;
LABEL_8:
      v14 = fabs(a5);
      if ( v12[1] + -1.0 >= v14 )
        goto LABEL_11;
      v15 = 1;
      if ( v12[2] > v14 )
      {
        v16 = (double *)((char *)&v20 + 1);
        v17 = 1LL;
LABEL_26:
        v21 = v12[1];
        v18 = v12[v17];
        if ( a4 )
          a5 = uu_numfmt::format::round_with_precision(a3, a4, a5 / v18);
        else
          uu_numfmt::format::div_round(a3, a5, v18);
        if ( fabs(a5) >= v21 )
        {
          if ( !v15 )
            core::panicking::panic_bounds_check(8LL, 8LL, &off_102448);
          a5 = a5 / v21;
          v19 = *((_BYTE *)&v20 + v17);
        }
        else
        {
          v19 = *((_BYTE *)v16 - 1);
        }
        *(double *)(a1 + 8) = a5;
        *(_BYTE *)(a1 + 16) = v19;
        *(_BYTE *)(a1 + 17) = v13;
        result = 0x8000000000000000LL;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        return result;
      }
      if ( v12[3] > v14 )
      {
        v16 = (double *)((char *)&v20 + 2);
        v17 = 2LL;
        goto LABEL_26;
      }
      if ( v12[4] > v14 )
      {
        v16 = (double *)((char *)&v20 + 3);
        v17 = 3LL;
        goto LABEL_26;
      }
      if ( v12[5] > v14 )
      {
        v16 = (double *)((char *)&v20 + 4);
        v17 = 4LL;
        goto LABEL_26;
      }
      if ( v12[6] > v14 )
      {
        v16 = (double *)((char *)&v20 + 5);
        v17 = 5LL;
        goto LABEL_26;
      }
      if ( v12[7] > v14 )
      {
        v16 = (double *)((char *)&v20 + 6);
        v17 = 6LL;
        goto LABEL_26;
      }
      if ( v12[8] > v14 )
      {
        v16 = (double *)((char *)&v20 + 7);
        v17 = 7LL;
        goto LABEL_26;
      }
      if ( v12[9] > v14 )
      {
        v16 = &v21;
        v17 = 8LL;
        v15 = 0;
        goto LABEL_26;
      }
      v9 = aNumberIsTooBig;
      v10 = 33LL;
      return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, v9, v10);
    case 3:
LABEL_11:
      *(double *)(a1 + 8) = a5;
      *(_BYTE *)(a1 + 17) = 2;
      result = 0x8000000000000000LL;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      return result;
  }
}