        __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  bool v23; // cf
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 v28; // [rsp+8h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+10h] [rbp-98h] BYREF
  __int128 v30; // [rsp+20h] [rbp-88h]
  __int128 v31; // [rsp+30h] [rbp-78h]
  __int128 v32; // [rsp+40h] [rbp-68h]
  _QWORD v33[10]; // [rsp+58h] [rbp-50h] BYREF

  if ( a4 >= 9 )
  {
    v28 = 8 * a4;
    v33[0] = &v28;
    v33[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v33[2] = &anon_a94949093028d2d8e47277762c52d369_17_llvm_199664298606218765;
    v33[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&v29 = &anon_a94949093028d2d8e47277762c52d369_20_llvm_199664298606218765;
    *((_QWORD *)&v29 + 1) = 3LL;
    *(_QWORD *)&v31 = 0LL;
    *(_QWORD *)&v30 = v33;
    *((_QWORD *)&v30 + 1) = 2LL;
    core::panicking::panic_fmt(&v29, &anon_a94949093028d2d8e47277762c52d369_21_llvm_199664298606218765);
  }
  v32 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64))(a3 + 24))(a2);
  if ( !v9 )
    core::panicking::panic_const::panic_const_div_by_zero(
      &anon_a94949093028d2d8e47277762c52d369_22_llvm_199664298606218765,
      a2,
      v10,
      v11,
      v12,
      v13);
  v14 = v9;
  v15 = (*(__int64 (__fastcall **)(__int64))(a3 + 32))(a2);
  if ( v14 <= a4 )
  {
    v18 = (unsigned __int8)((unsigned __int8)a4 / (unsigned __int8)v14);
    v19 = a5 - v18 * v15;
    do
    {
      if ( HIDWORD(v19) )
        v20 = v19 / v18;
      else
        v20 = (unsigned int)v19 / (unsigned int)v18;
      v21 = (v18 == 0) + v18;
      v22 = 0LL;
      do
      {
        if ( v22 > 7 )
          core::panicking::panic_bounds_check(
            v22,
            8LL,
            &anon_a94949093028d2d8e47277762c52d369_23_llvm_199664298606218765,
            v21,
            v16,
            v17);
        *((_QWORD *)&v29 + v22) += v20;
        v19 -= v20;
        v22 += v14;
        --v21;
      }
      while ( v21 );
      v14 *= 2LL;
      v23 = v18 < 2;
      v18 >>= 1;
    }
    while ( !v23 );
  }
  v24 = v29;
  v25 = v30;
  v26 = v31;
  a1[3] = v32;
  a1[2] = v26;
  a1[1] = v25;
  *a1 = v24;
  return a1;
}
