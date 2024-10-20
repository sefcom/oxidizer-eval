__int64 __fastcall uu_ls::display_len_or_rdev(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned int v9; // edx
  char v11; // [rsp+Fh] [rbp-C9h] BYREF
  __int128 v12; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+20h] [rbp-B8h]
  unsigned int v14; // [rsp+28h] [rbp-B0h] BYREF
  int v15; // [rsp+2Ch] [rbp-ACh] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-98h]
  __int128 *v18; // [rsp+50h] [rbp-88h]
  __int64 (__fastcall **v19)(); // [rsp+58h] [rbp-80h]
  __int64 v20; // [rsp+60h] [rbp-78h]
  char v21; // [rsp+68h] [rbp-70h]
  __int128 v22; // [rsp+70h] [rbp-68h]
  __int64 v23; // [rsp+80h] [rbp-58h]
  __int128 v24; // [rsp+90h] [rbp-48h]
  __int64 v25; // [rsp+A0h] [rbp-38h]
  __int128 v26; // [rsp+A8h] [rbp-30h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-20h]

  if ( (*(_DWORD *)(a2 + 56) & 0xB000 | 0x4000) != 0x6000 )
  {
    v5 = *(_QWORD *)(a3 + 208);
    if ( !v5 )
      core::panicking::panic_const::panic_const_div_by_zero(&off_1FF7D0);
    v7 = *(_QWORD *)(a2 + 80);
    if ( (v5 | v7) >> 32 )
    {
      v8 = v7 / v5;
      if ( !(*(_QWORD *)(a2 + 80) % v5) )
        goto LABEL_11;
    }
    else
    {
      v9 = (unsigned int)v7 % (unsigned int)v5;
      v8 = (unsigned int)v7 / (unsigned int)v5;
      if ( !v9 )
      {
LABEL_11:
        uucore::features::format::human::human_readable(&v26, v8, *(unsigned __int8 *)(a3 + 241));
        *(_QWORD *)(a1 + 16) = v27;
        *(_OWORD *)a1 = v26;
        *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
        return a1;
      }
    }
    if ( !++v8 )
      core::panicking::panic_const::panic_const_add_overflow(&off_1FF7E8);
    goto LABEL_11;
  }
  v4 = *(_QWORD *)(a2 + 72);
  v14 = ((unsigned int)v4 >> 8) & 0xFFF | HIDWORD(v4) & 0xFFFFF000;
  v15 = (unsigned __int8)v4 | (v4 >> 12) & 0xFFFFFF00;
  *(_QWORD *)&v12 = 0LL;
  *((_QWORD *)&v12 + 1) = 1LL;
  v13 = 0LL;
  v20 = 32LL;
  v21 = 3;
  v16[0] = 0LL;
  v17 = 0LL;
  v18 = &v12;
  v19 = &anon_af4f526f2bb93cc55be513d58d93e125_7_llvm_17079165128840404064;
  if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt(&v14, v16) )
    core::result::unwrap_failed(
      anon_af4f526f2bb93cc55be513d58d93e125_9_llvm_17079165128840404064,
      55LL,
      &v11,
      &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
      &anon_af4f526f2bb93cc55be513d58d93e125_11_llvm_17079165128840404064);
  v22 = v12;
  v23 = v13;
  *(_QWORD *)&v12 = 0LL;
  *((_QWORD *)&v12 + 1) = 1LL;
  v13 = 0LL;
  v20 = 32LL;
  v21 = 3;
  v16[0] = 0LL;
  v17 = 0LL;
  v18 = &v12;
  v19 = &anon_af4f526f2bb93cc55be513d58d93e125_7_llvm_17079165128840404064;
  if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt(&v15, v16) )
    core::result::unwrap_failed(
      anon_af4f526f2bb93cc55be513d58d93e125_9_llvm_17079165128840404064,
      55LL,
      &v11,
      &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
      &anon_af4f526f2bb93cc55be513d58d93e125_11_llvm_17079165128840404064);
  v24 = v12;
  v25 = v13;
  *(_QWORD *)(a1 + 16) = v23;
  *(_OWORD *)a1 = v22;
  *(_OWORD *)(a1 + 24) = v24;
  *(_QWORD *)(a1 + 40) = v25;
  return a1;
}
