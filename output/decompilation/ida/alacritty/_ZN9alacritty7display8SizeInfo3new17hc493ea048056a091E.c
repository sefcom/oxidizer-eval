void __fastcall alacritty::display::SizeInfo::new(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        double a7,
        float a8)
{
  float v9; // xmm1_4
  __int64 v10; // rdi
  __int64 v11; // rax
  float v12; // xmm1_4
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r15
  float v16; // xmm0_4
  float v17; // [rsp+0h] [rbp-38h]
  float v18; // [rsp+0h] [rbp-38h]
  float v19; // [rsp+0h] [rbp-38h]
  float v20; // [rsp+4h] [rbp-34h]
  float v21; // [rsp+4h] [rbp-34h]
  float v22; // [rsp+4h] [rbp-34h]

  if ( a2 )
  {
    v20 = a8;
    v17 = floorf(a7);
    v18 = (float)(fmodf(a3 - (float)(v17 + v17), a5) * 0.5) + v17;
    v21 = floorf(COERCE_DOUBLE((unsigned __int64)LODWORD(v20)));
    a8 = (float)(fmodf(a4 - (float)(v21 + v21), a6) * 0.5) + v21;
  }
  else
  {
    v18 = *(float *)&a7;
  }
  v22 = a8;
  v9 = (float)(a4 - (float)(a8 + a8)) / a6;
  v10 = (unsigned int)(int)v9;
  if ( v9 < 0.0 )
    v10 = 0LL;
  if ( v9 > 1.8446743e19 )
    v10 = -1LL;
  v11 = core::cmp::Ord::max(v10, 1LL);
  v12 = (float)(a3 - (float)(v18 + v18)) / a5;
  v13 = (unsigned int)(int)v12;
  if ( v12 < 0.0 )
    v13 = 0LL;
  v14 = v11;
  if ( v12 > 1.8446743e19 )
    v13 = -1LL;
  v15 = core::cmp::Ord::max(v13, 2LL);
  v19 = floorf(COERCE_DOUBLE((unsigned __int64)LODWORD(v18)));
  v16 = floorf(COERCE_DOUBLE((unsigned __int64)LODWORD(v22)));
  *(float *)(a1 + 16) = a3;
  *(float *)(a1 + 20) = a4;
  *(float *)(a1 + 24) = a5;
  *(float *)(a1 + 28) = a6;
  *(float *)(a1 + 32) = v19;
  *(float *)(a1 + 36) = v16;
  *(_QWORD *)a1 = v14;
  *(_QWORD *)(a1 + 8) = v15;
}