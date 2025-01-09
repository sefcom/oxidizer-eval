__int64 __fastcall uu_ptx::get_config(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  char flag; // al
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  char **v26; // rdx
  __int128 v27; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+10h] [rbp-A8h]
  _DWORD v29[2]; // [rsp+28h] [rbp-90h]
  char v30; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int8 v31; // [rsp+31h] [rbp-87h]
  __int64 v32; // [rsp+38h] [rbp-80h]
  __int128 v33; // [rsp+40h] [rbp-78h] BYREF
  __m256i v34; // [rsp+50h] [rbp-68h] BYREF
  __int128 v35; // [rsp+70h] [rbp-48h] BYREF
  __int128 v36; // [rsp+80h] [rbp-38h]
  __int64 v37; // [rsp+90h] [rbp-28h]
  int v38; // [rsp+98h] [rbp-20h]
  char v39; // [rsp+9Ch] [rbp-1Ch]
  char v40; // [rsp+9Dh] [rbp-1Bh]
  __int16 v41; // [rsp+9Eh] [rbp-1Ah]

  <uu_ptx::Config as core::default::Default>::default(&v33);
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           a2,
                           anon_7bad5d3cfcfc6941f72c3bc4e85b9543_19_llvm_7942943287365551935,
                           11LL) )
  {
    *((_QWORD *)&v27 + 1) = aGnuExtensions;
    v28 = 14LL;
    LOBYTE(v27) = 1;
    v11 = ((__int64 (__fastcall *)(__int128 *, const char *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
            &v27,
            anon_7bad5d3cfcfc6941f72c3bc4e85b9543_19_llvm_7942943287365551935,
            v3,
            v4,
            v5,
            v6);
    goto LABEL_5;
  }
  LOBYTE(v38) = 0;
  v40 = 1;
  alloc::str::<impl alloc::borrow::ToOwned for str>::clone_into(&v35);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          a2,
                          anon_7bad5d3cfcfc6941f72c3bc4e85b9543_24_llvm_7942943287365551935,
                          15LL) )
  {
    *((_QWORD *)&v27 + 1) = aS_2;
    v28 = 2LL;
    LOBYTE(v27) = 1;
    v11 = ((__int64 (__fastcall *)(__int128 *, const char *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
            &v27,
            anon_7bad5d3cfcfc6941f72c3bc4e85b9543_24_llvm_7942943287365551935,
            v7,
            v8,
            v9,
            v10);
LABEL_5:
    *(_QWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 16) = &unk_2EDC08;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<uu_ptx::Config>(&v33);
    return a1;
  }
  BYTE1(v38) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 anon_7bad5d3cfcfc6941f72c3bc4e85b9543_18_llvm_7942943287365551935,
                 14LL);
  BYTE2(v38) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 anon_7bad5d3cfcfc6941f72c3bc4e85b9543_32_llvm_7942943287365551935,
                 10LL);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_7bad5d3cfcfc6941f72c3bc4e85b9543_23_llvm_7942943287365551935,
           15LL);
  HIBYTE(v38) = (HIBYTE(v38) != 0) & flag;
  v39 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_7bad5d3cfcfc6941f72c3bc4e85b9543_28_llvm_7942943287365551935,
          11LL);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          a2,
                          anon_7bad5d3cfcfc6941f72c3bc4e85b9543_21_llvm_7942943287365551935,
                          10LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27);
    v14 = clap_builder::parser::error::MatchesError::unwrap(
            anon_7bad5d3cfcfc6941f72c3bc4e85b9543_21_llvm_7942943287365551935,
            10LL,
            &v27);
    if ( !v14 )
    {
      v26 = &off_2EDC78;
      goto LABEL_38;
    }
    <alloc::string::String as core::clone::Clone>::clone(&v27, v14);
    core::ptr::drop_in_place<alloc::string::String>(&v33);
    v34.m256i_i64[0] = v28;
    v33 = v27;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          a2,
                          anon_7bad5d3cfcfc6941f72c3bc4e85b9543_20_llvm_7942943287365551935,
                          15LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27);
    v15 = clap_builder::parser::error::MatchesError::unwrap(
            anon_7bad5d3cfcfc6941f72c3bc4e85b9543_20_llvm_7942943287365551935,
            15LL,
            &v27);
    if ( !v15 )
    {
      v26 = &off_2EDC90;
      goto LABEL_38;
    }
    <alloc::string::String as core::clone::Clone>::clone(&v27, v15);
    core::ptr::drop_in_place<alloc::string::String>(&v34.m256i_u64[1]);
    v34.m256i_i64[3] = v28;
    *(_OWORD *)&v34.m256i_u64[1] = v27;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          a2,
                          anon_7bad5d3cfcfc6941f72c3bc4e85b9543_33_llvm_7942943287365551935,
                          5LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27);
    v16 = clap_builder::parser::error::MatchesError::unwrap(
            anon_7bad5d3cfcfc6941f72c3bc4e85b9543_33_llvm_7942943287365551935,
            5LL,
            &v27);
    if ( !v16 )
    {
      v26 = &off_2EDCA8;
      goto LABEL_38;
    }
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v30, *(_QWORD *)(v16 + 8), *(_QWORD *)(v16 + 16));
    if ( v30 )
    {
      v17 = v31;
      core::ops::function::FnOnce::call_once(&v27, v31);
      v29[0] = *(_DWORD *)((char *)&v27 + 1);
      *(_DWORD *)((char *)v29 + 3) = DWORD1(v27);
      if ( (_BYTE)v27 != 3 )
        goto LABEL_32;
      v20 = *((_QWORD *)&v27 + 1);
    }
    else
    {
      v20 = v32;
    }
    *((_QWORD *)&v36 + 1) = v20;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          a2,
                          anon_7bad5d3cfcfc6941f72c3bc4e85b9543_29_llvm_7942943287365551935,
                          8LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27);
    v21 = clap_builder::parser::error::MatchesError::unwrap(
            anon_7bad5d3cfcfc6941f72c3bc4e85b9543_29_llvm_7942943287365551935,
            8LL,
            &v27);
    if ( v21 )
    {
      core::num::<impl core::str::traits::FromStr for usize>::from_str(
        &v30,
        *(_QWORD *)(v21 + 8),
        *(_QWORD *)(v21 + 16));
      if ( !v30 )
      {
        v22 = v32;
        goto LABEL_26;
      }
      v17 = v31;
      core::ops::function::FnOnce::call_once(&v27, v31);
      v29[0] = *(_DWORD *)((char *)&v27 + 1);
      *(_DWORD *)((char *)v29 + 3) = DWORD1(v27);
      if ( (_BYTE)v27 == 3 )
      {
        v22 = *((_QWORD *)&v27 + 1);
LABEL_26:
        v37 = v22;
        goto LABEL_27;
      }
LABEL_32:
      DWORD1(v27) = *(_DWORD *)((char *)v29 + 3);
      *(_DWORD *)((char *)&v27 + 1) = v29[0];
      v11 = ((__int64 (__fastcall *)(__int128 *, __int64, _QWORD, _QWORD, __int64, __int64))alloc::boxed::Box<T>::new)(
              &v27,
              v17,
              *(_DWORD *)((char *)v29 + 3),
              v29[0],
              v18,
              v19);
      goto LABEL_5;
    }
    v26 = &off_2EDCC0;
LABEL_38:
    core::option::expect_failed(aParsingOptions_0, 22LL, v26);
  }
LABEL_27:
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_7bad5d3cfcfc6941f72c3bc4e85b9543_22_llvm_7942943287365551935,
                          11LL) )
    v40 = 1;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_7bad5d3cfcfc6941f72c3bc4e85b9543_25_llvm_7942943287365551935,
                          10LL) )
    v40 = 2;
  *(_QWORD *)(a1 + 80) = v37;
  *(_DWORD *)(a1 + 88) = v38;
  *(_BYTE *)(a1 + 92) = v39;
  *(_BYTE *)(a1 + 93) = v40;
  *(_WORD *)(a1 + 94) = v41;
  *(_OWORD *)(a1 + 64) = v36;
  v23 = v33;
  v24 = *(_OWORD *)v34.m256i_i8;
  v25 = *(_OWORD *)&v34.m256i_u64[2];
  *(_OWORD *)(a1 + 48) = v35;
  *(_OWORD *)(a1 + 32) = v25;
  *(_OWORD *)(a1 + 16) = v24;
  *(_OWORD *)a1 = v23;
  return a1;
}
