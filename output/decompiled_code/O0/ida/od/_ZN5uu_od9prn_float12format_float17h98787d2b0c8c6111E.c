__int64 __fastcall uu_od::prn_float::format_float(__int64 a1, __int64 a2, __int64 a3, __m128 a4)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  char *v8; // r14
  double v9; // xmm0_8
  __int64 v10; // rbp
  bool v11; // of
  unsigned __int64 v12; // r15
  bool v13; // cf
  unsigned __int64 v14; // r15
  void *v16; // [rsp+0h] [rbp-338h] BYREF
  __int64 v17; // [rsp+8h] [rbp-330h]
  _QWORD *v18; // [rsp+10h] [rbp-328h]
  __int64 v19; // [rsp+18h] [rbp-320h]
  _QWORD *v20; // [rsp+20h] [rbp-318h]
  __int64 v21; // [rsp+28h] [rbp-310h]
  unsigned __int64 v22; // [rsp+30h] [rbp-308h] BYREF
  _QWORD v23[4]; // [rsp+38h] [rbp-300h] BYREF
  _QWORD v24[4]; // [rsp+58h] [rbp-2E0h] BYREF
  _QWORD v25[4]; // [rsp+78h] [rbp-2C0h] BYREF
  _QWORD v26[6]; // [rsp+98h] [rbp-2A0h] BYREF
  _QWORD v27[6]; // [rsp+C8h] [rbp-270h] BYREF
  _QWORD v28[6]; // [rsp+F8h] [rbp-240h] BYREF
  _QWORD v29[6]; // [rsp+128h] [rbp-210h] BYREF
  char v30; // [rsp+158h] [rbp-1E0h]
  _QWORD v31[6]; // [rsp+160h] [rbp-1D8h] BYREF
  char v32; // [rsp+190h] [rbp-1A8h]
  _QWORD v33[6]; // [rsp+198h] [rbp-1A0h] BYREF
  char v34; // [rsp+1C8h] [rbp-170h]
  __m128 v35; // [rsp+1D0h] [rbp-168h]
  _QWORD v36[6]; // [rsp+1E0h] [rbp-158h] BYREF
  char v37; // [rsp+210h] [rbp-128h]
  _QWORD v38[6]; // [rsp+218h] [rbp-120h] BYREF
  char v39; // [rsp+248h] [rbp-F0h]
  _QWORD v40[6]; // [rsp+250h] [rbp-E8h] BYREF
  char v41; // [rsp+280h] [rbp-B8h]
  char v42; // [rsp+288h] [rbp-B0h] BYREF
  char v43; // [rsp+2A0h] [rbp-98h] BYREF
  char v44; // [rsp+2B8h] [rbp-80h] BYREF
  char v45; // [rsp+2D0h] [rbp-68h] BYREF
  char v46; // [rsp+2E8h] [rbp-50h] BYREF
  char v47; // [rsp+300h] [rbp-38h] BYREF

  v22 = a4.m128_u64[0];
  v6 = a4.m128_u64[0] & 0x7FF0000000000000LL;
  v7 = a4.m128_u64[0] << 12;
  if ( a4.m128_u64[0] << 12 )
  {
    if ( !v6 )
      goto LABEL_6;
  }
  else if ( !v6 || v6 == 0x7FF0000000000000LL )
  {
LABEL_6:
    if ( *(double *)a4.m128_u64 == 0.0 )
    {
      if ( a4.m128_i64[0] < 0 )
      {
        v23[0] = &off_12E3A8;
        v23[1] = <&T as core::fmt::Display>::fmt;
        v23[2] = a2;
        v23[3] = 0LL;
        v36[0] = 2LL;
        v36[2] = 1LL;
        v36[3] = 1LL;
        v36[4] = 0LL;
        v36[5] = 32LL;
        v37 = 1;
        v16 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        v17 = 1LL;
        v18 = v23;
        v19 = 2LL;
        v20 = v36;
        v21 = 1LL;
        v8 = &v42;
        goto LABEL_27;
      }
    }
    else if ( fabs(*(double *)a4.m128_u64) < INFINITY )
    {
      v25[0] = &v22;
      v25[1] = core::fmt::float::<impl core::fmt::LowerExp for f64>::fmt;
      v25[2] = a2;
      v25[3] = 0LL;
      v40[0] = 2LL;
      v40[2] = 1LL;
      v40[3] = 1LL;
      v40[4] = 0LL;
      v40[5] = 32LL;
      v41 = 3;
      v16 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
      v17 = 1LL;
      v18 = v25;
      v19 = 2LL;
      v20 = v40;
      v21 = 1LL;
      v8 = &v44;
      goto LABEL_27;
    }
    v24[0] = &v22;
    v24[1] = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v24[2] = a2;
    v24[3] = 0LL;
    v38[0] = 2LL;
    v38[2] = 1LL;
    v38[3] = 1LL;
    v38[4] = 0LL;
    v38[5] = 32LL;
    v39 = 3;
    v16 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
    v17 = 1LL;
    v18 = v24;
    v19 = 2LL;
    v20 = v38;
    v21 = 1LL;
    v8 = &v43;
    goto LABEL_27;
  }
  v35 = a4;
  v9 = log10(fabs(*(double *)a4.m128_u64));
  v10 = (unsigned int)(int)fmin(fmax(floor(v9), -2147483648.0), 2147483647.0);
  _powidf2(v10, v7, 10.0);
  if ( *(double *)v35.m128_u64 > 0.0 && *(double *)v35.m128_u64 < 10.0
    || *(double *)v35.m128_u64 < 0.0 && *(double *)v35.m128_u64 > -10.0 )
  {
    v11 = __OFSUB__((_DWORD)v10, 1);
    LODWORD(v10) = v10 - 1;
    if ( v11 )
      core::panicking::panic_const::panic_const_sub_overflow(&off_12E3B8);
  }
  if ( (int)v10 < 0 )
  {
    if ( (_DWORD)v10 == -1 )
    {
      v27[0] = &v22;
      v27[1] = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
      v27[2] = a3;
      v27[3] = 0LL;
      v27[4] = a2;
      v27[5] = 0LL;
      v31[0] = 1LL;
      v31[1] = 1LL;
      v31[2] = 1LL;
      v31[3] = 2LL;
      v31[4] = 0LL;
      v31[5] = 32LL;
      v32 = 3;
      v16 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
      v17 = 1LL;
      v18 = v27;
      v19 = 3LL;
      v20 = v31;
      v21 = 1LL;
      v8 = &v46;
      goto LABEL_27;
    }
  }
  else
  {
    if ( __OFSUB__((_DWORD)a3, 1) )
      core::panicking::panic_const::panic_const_sub_overflow(&off_12E3D0);
    if ( (int)v10 <= (int)a3 - 1 )
    {
      if ( !a3 || (v12 = a3 - 1, v13 = v12 < (unsigned int)v10, v14 = v12 - (unsigned int)v10, v13) )
        core::panicking::panic_const::panic_const_sub_overflow(&off_12E400);
      v26[0] = &v22;
      v26[1] = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
      v26[2] = v14;
      v26[3] = 0LL;
      v26[4] = a2;
      v26[5] = 0LL;
      v29[0] = 1LL;
      v29[1] = 1LL;
      v29[2] = 1LL;
      v29[3] = 2LL;
      v29[4] = 0LL;
      v29[5] = 32LL;
      v30 = 3;
      v16 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
      v17 = 1LL;
      v18 = v26;
      v19 = 3LL;
      v20 = v29;
      v21 = 1LL;
      v8 = &v45;
      goto LABEL_27;
    }
  }
  if ( !a3 )
    core::panicking::panic_const::panic_const_sub_overflow(&off_12E3E8);
  v28[0] = &v22;
  v28[1] = core::fmt::float::<impl core::fmt::LowerExp for f64>::fmt;
  v28[2] = a3 - 1;
  v28[3] = 0LL;
  v28[4] = a2;
  v28[5] = 0LL;
  v33[0] = 1LL;
  v33[1] = 1LL;
  v33[2] = 1LL;
  v33[3] = 2LL;
  v33[4] = 0LL;
  v33[5] = 32LL;
  v34 = 3;
  v16 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
  v17 = 1LL;
  v18 = v28;
  v19 = 3LL;
  v20 = v33;
  v21 = 1LL;
  v8 = &v47;
LABEL_27:
  alloc::fmt::format::format_inner(v8, &v16);
  *(_QWORD *)(a1 + 16) = *((_QWORD *)v8 + 2);
  *(_OWORD *)a1 = *(_OWORD *)v8;
  return a1;
}
