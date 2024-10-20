__int64 __fastcall uu_ptx::get_config(__int64 a1, __int64 a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r12
  _BYTE *v4; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rax
  char flag; // al
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // r15
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  char **v28; // rdx
  __int64 *v29; // [rsp+8h] [rbp-150h] BYREF
  __int64 v30; // [rsp+10h] [rbp-148h]
  _QWORD v31[4]; // [rsp+18h] [rbp-140h] BYREF
  _OWORD v32[2]; // [rsp+38h] [rbp-120h] BYREF
  __int64 v33; // [rsp+58h] [rbp-100h]
  __int128 v34; // [rsp+60h] [rbp-F8h]
  __m256i v35; // [rsp+70h] [rbp-E8h]
  __int128 v36; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-B8h]
  __int64 v38; // [rsp+B0h] [rbp-A8h]
  _BYTE v39[5]; // [rsp+B8h] [rbp-A0h]
  char v40; // [rsp+BDh] [rbp-9Bh]
  __int16 v41; // [rsp+BEh] [rbp-9Ah]
  _BYTE v42[8]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v43; // [rsp+C8h] [rbp-90h]
  _OWORD v44[2]; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v45; // [rsp+F0h] [rbp-68h]
  __int128 v46; // [rsp+F8h] [rbp-60h] BYREF
  _QWORD *v47; // [rsp+108h] [rbp-50h]
  __int64 v48; // [rsp+110h] [rbp-48h]
  __int64 v49; // [rsp+118h] [rbp-40h]

  v2 = (_WORD *)_rust_alloc(2LL, 1LL);
  if ( !v2 )
    alloc::raw_vec::handle_error(1LL, 2LL);
  v3 = v2;
  *v2 = 30840;
  v4 = (_BYTE *)_rust_alloc(1LL, 1LL);
  if ( !v4 )
    alloc::raw_vec::handle_error(1LL, 1LL);
  v5 = (__int64)v4;
  *v4 = 47;
  v6 = _rust_alloc(3LL, 1LL);
  if ( !v6 )
    alloc::raw_vec::handle_error(1LL, 3LL);
  v7 = v6;
  *(_BYTE *)(v6 + 2) = 43;
  *(_WORD *)v6 = 30556;
  v40 = 0;
  v39[0] = 1;
  *(_DWORD *)&v39[1] = 0;
  *(_QWORD *)&v34 = 2LL;
  *((_QWORD *)&v34 + 1) = v3;
  v35.m256i_i64[0] = 2LL;
  v35.m256i_i64[1] = 1LL;
  v35.m256i_i64[2] = v5;
  v35.m256i_i64[3] = 1LL;
  *(_QWORD *)&v36 = 3LL;
  *((_QWORD *)&v36 + 1) = v6;
  *(_QWORD *)&v37 = 3LL;
  *((_QWORD *)&v37 + 1) = 72LL;
  v38 = 3LL;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           a2,
                           anon_e23289579c9441ef21ddb87efb4b8a29_10_llvm_16528050568364581840,
                           11LL) )
  {
    v12 = _rust_alloc(24LL, 8LL);
    if ( v12 )
    {
      *(_BYTE *)v12 = 1;
      *(_QWORD *)(v12 + 8) = aGnuExtensions;
      *(_QWORD *)(v12 + 16) = 14LL;
      goto LABEL_14;
    }
LABEL_66:
    alloc::alloc::handle_alloc_error(8LL, 24LL);
  }
  v39[0] = 0;
  v40 = 1;
  *(_QWORD *)&v37 = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v36, 0LL, 7LL);
  v7 = *((_QWORD *)&v36 + 1);
  v8 = v37;
  *(_DWORD *)(*((_QWORD *)&v36 + 1) + v37 + 3) = 727517705;
  *(_DWORD *)(v7 + v8) = 153116251;
  *(_QWORD *)&v37 = v8 + 7;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)(a2 + 16);
  if ( v10 )
  {
    v11 = 0LL;
    while ( *(_QWORD *)(v9 + v11 + 8) != 15LL
         || anon_e23289579c9441ef21ddb87efb4b8a29_15_llvm_16528050568364581840 ^ **(_QWORD **)(v9 + v11) | *(__int64 *)((char *)&anon_e23289579c9441ef21ddb87efb4b8a29_15_llvm_16528050568364581840 + 7) ^ *(_QWORD *)(*(_QWORD *)(v9 + v11) + 7LL) )
    {
      v11 += 16LL;
      if ( 16 * v10 == v11 )
        goto LABEL_20;
    }
    v12 = _rust_alloc(24LL, 8LL);
    if ( v12 )
    {
      *(_BYTE *)v12 = 1;
      *(_QWORD *)(v12 + 8) = aS;
      *(_QWORD *)(v12 + 16) = 2LL;
LABEL_14:
      *(_QWORD *)(a1 + 8) = v12;
      *(_QWORD *)(a1 + 16) = &unk_27B3C0;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      if ( (_QWORD)v34 )
        _rust_dealloc(*((_QWORD *)&v34 + 1), v34, 1LL);
      if ( v35.m256i_i64[1] )
        _rust_dealloc(v35.m256i_i64[2], v35.m256i_i64[1], 1LL);
      if ( (_QWORD)v36 )
        _rust_dealloc(v7, v36, 1LL);
      return a1;
    }
    goto LABEL_66;
  }
LABEL_20:
  v39[1] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             a2,
             anon_e23289579c9441ef21ddb87efb4b8a29_9_llvm_16528050568364581840,
             14LL);
  v39[2] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             a2,
             anon_e23289579c9441ef21ddb87efb4b8a29_23_llvm_16528050568364581840,
             10LL);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_e23289579c9441ef21ddb87efb4b8a29_14_llvm_16528050568364581840,
           15LL);
  v39[3] = (v39[3] != 0) & flag;
  v39[4] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             a2,
             anon_e23289579c9441ef21ddb87efb4b8a29_19_llvm_16528050568364581840,
             11LL);
  if ( !v10 )
    goto LABEL_57;
  v14 = 16 * v10;
  v15 = 0LL;
  while ( *(_QWORD *)(v9 + v15 + 8) != 10LL
       || anon_e23289579c9441ef21ddb87efb4b8a29_12_llvm_16528050568364581840 ^ **(_QWORD **)(v9 + v15) | *(_WORD *)(*(_QWORD *)(v9 + v15) + 8LL) ^ 0x656Du )
  {
    v15 += 16LL;
    if ( v14 == v15 )
      goto LABEL_30;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v32);
  v29 = &anon_e23289579c9441ef21ddb87efb4b8a29_12_llvm_16528050568364581840;
  v30 = 10LL;
  if ( LODWORD(v32[0]) != 2 )
    goto LABEL_67;
  if ( !*((_QWORD *)&v32[0] + 1) )
  {
    v28 = &off_27B430;
    goto LABEL_72;
  }
  <alloc::string::String as core::clone::Clone>::clone(&v46);
  if ( (_QWORD)v34 )
    _rust_dealloc(*((_QWORD *)&v34 + 1), v34, 1LL);
  v35.m256i_i64[0] = (__int64)v47;
  v34 = v46;
LABEL_30:
  v20 = 0LL;
  while ( *(_QWORD *)(v9 + v20 + 8) != 15LL
       || anon_e23289579c9441ef21ddb87efb4b8a29_11_llvm_16528050568364581840 ^ **(_QWORD **)(v9 + v20) | *(__int64 *)((char *)&anon_e23289579c9441ef21ddb87efb4b8a29_11_llvm_16528050568364581840 + 7) ^ *(_QWORD *)(*(_QWORD *)(v9 + v20) + 7LL) )
  {
    v20 += 16LL;
    if ( v14 == v20 )
      goto LABEL_39;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v32);
  v29 = &anon_e23289579c9441ef21ddb87efb4b8a29_11_llvm_16528050568364581840;
  v30 = 15LL;
  if ( LODWORD(v32[0]) != 2 )
    goto LABEL_67;
  if ( !*((_QWORD *)&v32[0] + 1) )
  {
    v28 = &off_27B448;
    goto LABEL_72;
  }
  <alloc::string::String as core::clone::Clone>::clone(&v46);
  if ( v35.m256i_i64[1] )
    _rust_dealloc(v35.m256i_i64[2], v35.m256i_i64[1], 1LL);
  v35.m256i_i64[3] = (__int64)v47;
  *(_OWORD *)&v35.m256i_u64[1] = v46;
LABEL_39:
  v21 = 0LL;
  while ( *(_QWORD *)(v9 + v21 + 8) != 5LL
       || anon_e23289579c9441ef21ddb87efb4b8a29_24_llvm_16528050568364581840 ^ **(_DWORD **)(v9 + v21) | *(_BYTE *)(*(_QWORD *)(v9 + v21) + 4LL) ^ 0x68 )
  {
    v21 += 16LL;
    if ( v14 == v21 )
      goto LABEL_47;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v32);
  v29 = (__int64 *)&anon_e23289579c9441ef21ddb87efb4b8a29_24_llvm_16528050568364581840;
  v30 = 5LL;
  if ( LODWORD(v32[0]) != 2 )
    goto LABEL_67;
  if ( !*((_QWORD *)&v32[0] + 1) )
  {
    v28 = &off_27B460;
    goto LABEL_72;
  }
  core::num::<impl core::str::traits::FromStr for usize>::from_str(
    v42,
    *(_QWORD *)(*((_QWORD *)&v32[0] + 1) + 8LL),
    *(_QWORD *)(*((_QWORD *)&v32[0] + 1) + 16LL));
  if ( v42[0] )
    goto LABEL_54;
  *((_QWORD *)&v37 + 1) = v43;
LABEL_47:
  v22 = 0LL;
  while ( *(_QWORD *)(v9 + v22 + 8) != 8LL
       || **(_QWORD **)(v9 + v22) != *(_QWORD *)anon_e23289579c9441ef21ddb87efb4b8a29_20_llvm_16528050568364581840 )
  {
    v22 += 16LL;
    if ( v14 == v22 )
      goto LABEL_57;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v32);
  v29 = (__int64 *)anon_e23289579c9441ef21ddb87efb4b8a29_20_llvm_16528050568364581840;
  v30 = 8LL;
  if ( LODWORD(v32[0]) != 2 )
  {
LABEL_67:
    v45 = v33;
    v44[1] = v32[1];
    v44[0] = v32[0];
    v31[0] = &v29;
    v31[1] = <&T as core::fmt::Display>::fmt;
    v31[2] = v44;
    v31[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v46 = &anon_982ebfe6603d1d7445e24895863ba0e8_2_llvm_17676394313059082282;
    *((_QWORD *)&v46 + 1) = 2LL;
    v49 = 0LL;
    v47 = v31;
    v48 = 2LL;
    core::panicking::panic_fmt(
      &v46,
      &anon_982ebfe6603d1d7445e24895863ba0e8_4_llvm_17676394313059082282,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !*((_QWORD *)&v32[0] + 1) )
  {
    v28 = &off_27B478;
LABEL_72:
    core::option::expect_failed(aParsingOptions_0, 22LL, v28);
  }
  core::num::<impl core::str::traits::FromStr for usize>::from_str(
    v42,
    *(_QWORD *)(*((_QWORD *)&v32[0] + 1) + 8LL),
    *(_QWORD *)(*((_QWORD *)&v32[0] + 1) + 16LL));
  if ( v42[0] )
  {
LABEL_54:
    v23 = v42[1];
    v12 = _rust_alloc(24LL, 8LL);
    if ( v12 )
    {
      *(_BYTE *)v12 = 2;
      *(_BYTE *)(v12 + 1) = v23;
      goto LABEL_14;
    }
    goto LABEL_66;
  }
  v38 = v43;
LABEL_57:
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_e23289579c9441ef21ddb87efb4b8a29_13_llvm_16528050568364581840,
                          11LL) )
    v40 = 1;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_e23289579c9441ef21ddb87efb4b8a29_16_llvm_16528050568364581840,
                          10LL) )
    v40 = 2;
  *(_QWORD *)(a1 + 80) = v38;
  *(_DWORD *)(a1 + 88) = *(_DWORD *)v39;
  *(_BYTE *)(a1 + 92) = v39[4];
  *(_BYTE *)(a1 + 93) = v40;
  *(_WORD *)(a1 + 94) = v41;
  *(_OWORD *)(a1 + 64) = v37;
  v24 = v34;
  v25 = *(_OWORD *)v35.m256i_i8;
  v26 = *(_OWORD *)&v35.m256i_u64[2];
  *(_OWORD *)(a1 + 48) = v36;
  *(_OWORD *)(a1 + 32) = v26;
  *(_OWORD *)(a1 + 16) = v25;
  *(_OWORD *)a1 = v24;
  return a1;
}
