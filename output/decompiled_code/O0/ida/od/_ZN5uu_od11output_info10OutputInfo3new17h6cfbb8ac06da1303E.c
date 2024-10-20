        char a5)
{
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 *v18; // rdi
  unsigned __int128 v19; // rax
  unsigned __int64 v20; // kr00_8
  unsigned __int64 *v21; // r10
  __int64 v22; // r11
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // kr10_8
  unsigned __int64 v27; // rdx
  unsigned __int128 v28; // rax
  unsigned __int64 v29; // kr20_8
  __int64 v30; // r13
  unsigned __int64 v32; // [rsp+8h] [rbp-70h] BYREF
  unsigned __int64 v33; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v34[4]; // [rsp+18h] [rbp-60h] BYREF
  __int128 v35; // [rsp+38h] [rbp-40h] BYREF
  __int64 v36; // [rsp+48h] [rbp-30h]

  if ( a4 )
  {
    if ( a4 < 0 )
      core::panicking::panic_nounwind(anon_73050de727ff50a019884682d8624ba5_11_llvm_6296603921265638786, 71LL);
    if ( (unsigned __int64)(40 * a4) < 0x28 )
LABEL_43:
      core::panicking::panic_nounwind(anon_8269adb5962d5e09057255cc669604eb_9_llvm_1060656746639540340, 69LL);
    v9 = 40 * a4 / 0x28uLL;
    v10 = v9 & 3;
    if ( v9 - 1 >= 3 )
    {
      v17 = v9 & 0x3FFFFFFFFFFFFFCLL;
      v18 = a3 + 17;
      v11 = 1LL;
      v12 = 0LL;
      do
      {
        if ( v11 <= *(v18 - 15) )
          v11 = *(v18 - 15);
        if ( v11 <= *(v18 - 10) )
          v11 = *(v18 - 10);
        if ( v11 <= *(v18 - 5) )
          v11 = *(v18 - 5);
        if ( v11 <= *v18 )
          v11 = *v18;
        v12 += 4LL;
        v18 += 20;
      }
      while ( v17 != v12 );
    }
    else
    {
      v11 = 1LL;
      v12 = 0LL;
    }
    if ( v10 )
    {
      v13 = (__int64)&a3[5 * v12 + 2];
      v14 = 5LL * (unsigned int)(8 * v10);
      v12 = 0LL;
      do
      {
        if ( v11 <= *(_QWORD *)(v13 + v12) )
          v11 = *(_QWORD *)(v13 + v12);
        v12 += 40LL;
      }
      while ( v14 != v12 );
    }
    v15 = a3[2];
    if ( !v15 )
      goto LABEL_44;
    v12 = a3[3];
    if ( (v15 | v11) >> 32 )
      v16 = v11 / v15;
    else
      v16 = (unsigned int)v11 / (unsigned int)v15;
    v20 = v16;
    v19 = v16 * (unsigned __int128)v12;
    if ( !is_mul_ok(v20, v12) )
LABEL_45:
      core::panicking::panic_const::panic_const_mul_overflow(
        &anon_73050de727ff50a019884682d8624ba5_91_llvm_6296603921265638786,
        v12,
        *((_QWORD *)&v19 + 1));
    v12 = ((_QWORD)v19 == 0LL) + (_QWORD)v19;
    if ( a4 != 1 )
    {
      v21 = a3 + 8;
      v22 = -1LL;
      while ( 1 )
      {
        v23 = *(v21 - 1);
        if ( !v23 )
          break;
        v24 = *v21;
        if ( (v23 | v11) >> 32 )
          v25 = v11 / v23;
        else
          v25 = (unsigned int)v11 / (unsigned int)v23;
        v26 = v25;
        v19 = v25 * (unsigned __int128)v24;
        if ( !is_mul_ok(v26, v24) )
          goto LABEL_45;
        if ( v22 == 1 )
          goto LABEL_43;
        if ( v12 <= (unsigned __int64)v19 )
          v12 = v19;
        --v22;
        v21 += 5;
        if ( -a4 == v22 )
          goto LABEL_38;
      }
LABEL_44:
      core::panicking::panic_const::panic_const_div_by_zero(
        &anon_73050de727ff50a019884682d8624ba5_90_llvm_6296603921265638786,
        v12);
    }
  }
  else
  {
    v12 = 1LL;
    v11 = 1LL;
  }
LABEL_38:
  if ( (v11 | a2) >> 32 )
    v27 = a2 / v11;
  else
    v27 = (unsigned int)a2 / (unsigned int)v11;
  v29 = v27;
  v28 = v27 * (unsigned __int128)v12;
  if ( !is_mul_ok(v29, v12) )
    core::panicking::panic_const::panic_const_mul_overflow(&off_12D018, v12, *((_QWORD *)&v28 + 1));
  v30 = v28;
  v32 = v11;
  v33 = v12;
  v34[0] = a3;
  v34[1] = &a3[5 * a4];
  v34[2] = &v32;
  v34[3] = &v33;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v35, v34);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = v30;
  *(_QWORD *)(a1 + 40) = v11;
  *(_OWORD *)a1 = v35;
  *(_QWORD *)(a1 + 16) = v36;
  *(_BYTE *)(a1 + 48) = a5;
  return a1;
}
