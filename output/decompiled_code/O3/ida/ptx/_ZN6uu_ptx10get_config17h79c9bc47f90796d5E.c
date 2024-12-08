__int64 __fastcall uu_ptx::get_config(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  char flag; // al
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  char **v22; // rdx
  __int128 v23; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+10h] [rbp-A8h]
  _DWORD v25[2]; // [rsp+28h] [rbp-90h]
  char v26; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int8 v27; // [rsp+31h] [rbp-87h]
  __int64 v28; // [rsp+38h] [rbp-80h]
  __int128 v29; // [rsp+40h] [rbp-78h] BYREF
  __m256i v30; // [rsp+50h] [rbp-68h] BYREF
  __int128 v31; // [rsp+70h] [rbp-48h] BYREF
  __int128 v32; // [rsp+80h] [rbp-38h]
  __int64 v33; // [rsp+90h] [rbp-28h]
  int v34; // [rsp+98h] [rbp-20h]
  char v35; // [rsp+9Ch] [rbp-1Ch]
  char v36; // [rsp+9Dh] [rbp-1Bh]
  __int16 v37; // [rsp+9Eh] [rbp-1Ah]

  <uu_ptx::Config as core::default::Default>::default(&v29);
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           a2,
                           anon_2a006399170f7188a90d81ab0d3d1c41_10_llvm_26549548904132577,
                           11LL) )
  {
    *((_QWORD *)&v23 + 1) = aGnuExtensions;
    v24 = 14LL;
    LOBYTE(v23) = 1;
    v7 = ((__int64 (__fastcall *)(__int128 *))alloc::boxed::Box<T>::new)(&v23);
    goto LABEL_5;
  }
  LOBYTE(v34) = 0;
  v36 = 1;
  alloc::str::<impl alloc::borrow::ToOwned for str>::clone_into(&v31);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          a2,
                          anon_2a006399170f7188a90d81ab0d3d1c41_15_llvm_26549548904132577,
                          15LL) )
  {
    *((_QWORD *)&v23 + 1) = aS_2;
    v24 = 2LL;
    LOBYTE(v23) = 1;
    v7 = ((__int64 (__fastcall *)(__int128 *, const char *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
           &v23,
           anon_2a006399170f7188a90d81ab0d3d1c41_15_llvm_26549548904132577,
           v3,
           v4,
           v5,
           v6);
LABEL_5:
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 16) = &unk_2EE4D0;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<uu_ptx::Config>(&v29);
    return a1;
  }
  BYTE1(v34) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 anon_2a006399170f7188a90d81ab0d3d1c41_9_llvm_26549548904132577,
                 14LL);
  BYTE2(v34) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 anon_2a006399170f7188a90d81ab0d3d1c41_23_llvm_26549548904132577,
                 10LL);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_2a006399170f7188a90d81ab0d3d1c41_14_llvm_26549548904132577,
           15LL);
  HIBYTE(v34) = (HIBYTE(v34) != 0) & flag;
  v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_2a006399170f7188a90d81ab0d3d1c41_19_llvm_26549548904132577,
          11LL);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          a2,
                          anon_2a006399170f7188a90d81ab0d3d1c41_12_llvm_26549548904132577,
                          10LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v23);
    v10 = clap_builder::parser::error::MatchesError::unwrap(
            anon_2a006399170f7188a90d81ab0d3d1c41_12_llvm_26549548904132577,
            10LL,
            &v23);
    if ( !v10 )
    {
      v22 = &off_2EE540;
      goto LABEL_38;
    }
    <alloc::string::String as core::clone::Clone>::clone(&v23, v10);
    core::ptr::drop_in_place<alloc::string::String>(&v29);
    v30.m256i_i64[0] = v24;
    v29 = v23;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          a2,
                          anon_2a006399170f7188a90d81ab0d3d1c41_11_llvm_26549548904132577,
                          15LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v23);
    v11 = clap_builder::parser::error::MatchesError::unwrap(
            anon_2a006399170f7188a90d81ab0d3d1c41_11_llvm_26549548904132577,
            15LL,
            &v23);
    if ( !v11 )
    {
      v22 = &off_2EE558;
      goto LABEL_38;
    }
    <alloc::string::String as core::clone::Clone>::clone(&v23, v11);
    core::ptr::drop_in_place<alloc::string::String>(&v30.m256i_u64[1]);
    v30.m256i_i64[3] = v24;
    *(_OWORD *)&v30.m256i_u64[1] = v23;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          a2,
                          anon_2a006399170f7188a90d81ab0d3d1c41_24_llvm_26549548904132577,
                          5LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v23);
    v12 = clap_builder::parser::error::MatchesError::unwrap(
            anon_2a006399170f7188a90d81ab0d3d1c41_24_llvm_26549548904132577,
            5LL,
            &v23);
    if ( !v12 )
    {
      v22 = &off_2EE570;
      goto LABEL_38;
    }
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v26, *(_QWORD *)(v12 + 8), *(_QWORD *)(v12 + 16));
    if ( v26 )
    {
      v13 = v27;
      core::ops::function::FnOnce::call_once(&v23, v27);
      v25[0] = *(_DWORD *)((char *)&v23 + 1);
      *(_DWORD *)((char *)v25 + 3) = DWORD1(v23);
      if ( (_BYTE)v23 != 3 )
        goto LABEL_32;
      v16 = *((_QWORD *)&v23 + 1);
    }
    else
    {
      v16 = v28;
    }
    *((_QWORD *)&v32 + 1) = v16;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          a2,
                          anon_2a006399170f7188a90d81ab0d3d1c41_20_llvm_26549548904132577,
                          8LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v23);
    v17 = clap_builder::parser::error::MatchesError::unwrap(
            anon_2a006399170f7188a90d81ab0d3d1c41_20_llvm_26549548904132577,
            8LL,
            &v23);
    if ( v17 )
    {
      core::num::<impl core::str::traits::FromStr for usize>::from_str(
        &v26,
        *(_QWORD *)(v17 + 8),
        *(_QWORD *)(v17 + 16));
      if ( !v26 )
      {
        v18 = v28;
        goto LABEL_26;
      }
      v13 = v27;
      core::ops::function::FnOnce::call_once(&v23, v27);
      v25[0] = *(_DWORD *)((char *)&v23 + 1);
      *(_DWORD *)((char *)v25 + 3) = DWORD1(v23);
      if ( (_BYTE)v23 == 3 )
      {
        v18 = *((_QWORD *)&v23 + 1);
LABEL_26:
        v33 = v18;
        goto LABEL_27;
      }
LABEL_32:
      DWORD1(v23) = *(_DWORD *)((char *)v25 + 3);
      *(_DWORD *)((char *)&v23 + 1) = v25[0];
      v7 = ((__int64 (__fastcall *)(__int128 *, __int64, _QWORD, _QWORD, __int64, __int64))alloc::boxed::Box<T>::new)(
             &v23,
             v13,
             *(_DWORD *)((char *)v25 + 3),
             v25[0],
             v14,
             v15);
      goto LABEL_5;
    }
    v22 = &off_2EE588;
LABEL_38:
    core::option::expect_failed(aParsingOptions_0, 22LL, v22);
  }
LABEL_27:
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_2a006399170f7188a90d81ab0d3d1c41_13_llvm_26549548904132577,
                          11LL) )
    v36 = 1;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_2a006399170f7188a90d81ab0d3d1c41_16_llvm_26549548904132577,
                          10LL) )
    v36 = 2;
  *(_QWORD *)(a1 + 80) = v33;
  *(_DWORD *)(a1 + 88) = v34;
  *(_BYTE *)(a1 + 92) = v35;
  *(_BYTE *)(a1 + 93) = v36;
  *(_WORD *)(a1 + 94) = v37;
  *(_OWORD *)(a1 + 64) = v32;
  v19 = v29;
  v20 = *(_OWORD *)v30.m256i_i8;
  v21 = *(_OWORD *)&v30.m256i_u64[2];
  *(_OWORD *)(a1 + 48) = v31;
  *(_OWORD *)(a1 + 32) = v21;
  *(_OWORD *)(a1 + 16) = v20;
  *(_OWORD *)a1 = v19;
  return a1;
}
