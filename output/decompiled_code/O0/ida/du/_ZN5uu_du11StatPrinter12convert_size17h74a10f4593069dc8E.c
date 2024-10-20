__int64 __fastcall uu_du::StatPrinter::convert_size(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __m128d v4; // xmm1
  double v5; // xmm0_8
  double v6; // xmm1_8
  __int64 v7; // rsi
  __m128d v8; // xmm1
  unsigned __int64 v9; // rcx
  bool v10; // cf
  bool v11; // zf
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  char v16; // [rsp+Fh] [rbp-79h] BYREF
  __int128 v17; // [rsp+10h] [rbp-78h] BYREF
  __int64 v18; // [rsp+20h] [rbp-68h]
  unsigned __int64 v19; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v21[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v22; // [rsp+48h] [rbp-40h]
  __int128 *v23; // [rsp+58h] [rbp-30h]
  __int64 (__fastcall **v24)(); // [rsp+60h] [rbp-28h]
  __int64 v25; // [rsp+68h] [rbp-20h]
  char v26; // [rsp+70h] [rbp-18h]

  v19 = a3;
  if ( (*(_BYTE *)(a2 + 73) & 1) != 0 )
  {
    *(_QWORD *)&v17 = 0LL;
    *((_QWORD *)&v17 + 1) = 1LL;
    v18 = 0LL;
    v25 = 32LL;
    v26 = 3;
    v21[0] = 0LL;
    v22 = 0LL;
    v23 = &v17;
    v24 = &anon_af4f526f2bb93cc55be513d58d93e125_7_llvm_17079165128840404064;
    if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt(&v19, v21) )
      core::result::unwrap_failed(
        anon_af4f526f2bb93cc55be513d58d93e125_9_llvm_17079165128840404064,
        55LL,
        &v16,
        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
        &anon_af4f526f2bb93cc55be513d58d93e125_11_llvm_17079165128840404064);
    goto LABEL_16;
  }
  v3 = *(_QWORD *)(a2 + 32);
  if ( !v3 )
  {
    v8 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)a3, (__m128i)xmmword_1D700), (__m128d)xmmword_1D690);
    v5 = _mm_unpackhi_pd(v8, v8).m128d_f64[0] + v8.m128d_f64[0];
    v6 = 1000.0;
    v7 = 0x706050403020100LL;
    goto LABEL_8;
  }
  if ( v3 != 1 )
  {
    v9 = *(_QWORD *)(a2 + 40);
    v10 = __CFADD__(v9, a3);
    v11 = v9 + a3 == 0;
    v12 = v9 + a3;
    if ( v10 )
      core::panicking::panic_const::panic_const_add_overflow(&off_164EF8);
    if ( v11 )
      core::panicking::panic_const::panic_const_sub_overflow(&off_164F10, a2, v12);
    if ( !v9 )
      core::panicking::panic_const::panic_const_div_by_zero(&off_164F10, a2, v12);
    v13 = v12 - 1;
    if ( (v9 | v13) >> 32 )
      v14 = v13 / v9;
    else
      v14 = (unsigned int)v13 / (unsigned int)v9;
    v20 = v14;
    *(_QWORD *)&v17 = 0LL;
    *((_QWORD *)&v17 + 1) = 1LL;
    v18 = 0LL;
    v25 = 32LL;
    v26 = 3;
    v21[0] = 0LL;
    v22 = 0LL;
    v23 = &v17;
    v24 = &anon_af4f526f2bb93cc55be513d58d93e125_7_llvm_17079165128840404064;
    if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt(&v20, v21) )
      core::result::unwrap_failed(
        anon_af4f526f2bb93cc55be513d58d93e125_9_llvm_17079165128840404064,
        55LL,
        &v16,
        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
        &anon_af4f526f2bb93cc55be513d58d93e125_11_llvm_17079165128840404064);
LABEL_16:
    *(_QWORD *)(a1 + 16) = v18;
    *(_OWORD *)a1 = v17;
    return a1;
  }
  v4 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)a3, (__m128i)xmmword_1D700), (__m128d)xmmword_1D690);
  v5 = _mm_unpackhi_pd(v4, v4).m128d_f64[0] + v4.m128d_f64[0];
  v6 = 1024.0;
  v7 = 0xF0E0D0C0B0A0908LL;
LABEL_8:
  number_prefix::NumberPrefix<F>::format_number(v21, v7, v5, v6);
  uucore::features::format::human::format_prefixed(a1, v21);
  return a1;
}
