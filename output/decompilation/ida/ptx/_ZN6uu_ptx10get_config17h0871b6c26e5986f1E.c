__int64 __fastcall uu_ptx::get_config(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char flag; // al
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r12
  char v12; // al
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rdx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  char **v19; // rdx
  char v20; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v21; // [rsp+10h] [rbp-C8h] BYREF
  char *v22; // [rsp+20h] [rbp-B8h]
  __int128 v23; // [rsp+28h] [rbp-B0h]
  _BYTE v24[8]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v25; // [rsp+48h] [rbp-90h]
  __int128 v26; // [rsp+50h] [rbp-88h] BYREF
  __m256i v27; // [rsp+60h] [rbp-78h] BYREF
  __int128 v28; // [rsp+80h] [rbp-58h] BYREF
  __int128 v29; // [rsp+90h] [rbp-48h]
  __int64 v30; // [rsp+A0h] [rbp-38h]
  int v31; // [rsp+A8h] [rbp-30h]
  char v32; // [rsp+ACh] [rbp-2Ch]
  char v33; // [rsp+ADh] [rbp-2Bh]
  __int16 v34; // [rsp+AEh] [rbp-2Ah]

  <uu_ptx::Config as core::default::Default>::default(&v26);
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aTraditional, 11LL) )
  {
    *((_QWORD *)&v21 + 1) = aGnuExtensions;
    v22 = byte_9 + 5;
    LOBYTE(v21) = 1;
    v2 = alloc::boxed::Box<T>::new(&v21);
    goto LABEL_5;
  }
  LOBYTE(v31) = 0;
  v33 = 1;
  alloc::str::<impl alloc::borrow::ToOwned for str>::clone_into(&v28);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aSentenceRegexp, 15LL) )
  {
    *((_QWORD *)&v21 + 1) = aS_1;
    v22 = (_BYTE *)(&dword_0 + 2);
    LOBYTE(v21) = 1;
    v2 = alloc::boxed::Box<T>::new(&v21);
LABEL_5:
    *(_QWORD *)(a1 + 8) = v2;
    *(_QWORD *)(a1 + 16) = &unk_251798;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<uu_ptx::Config>(&v26);
    return a1;
  }
  BYTE1(v31) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aAutoReference, 14LL);
  BYTE2(v31) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aReferences, 10LL);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aRightSideRefs, 15LL);
  HIBYTE(v31) &= flag;
  v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aIgnoreCase, 11LL);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aMacroName, 10LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v21);
    v5 = clap_builder::parser::error::MatchesError::unwrap(aMacroName, 10LL, &v21);
    if ( !v5 )
    {
      v19 = &off_251800;
      goto LABEL_35;
    }
    <alloc::string::String as core::clone::Clone>::clone(&v21, v5);
    core::ptr::drop_in_place<alloc::string::String>(&v26);
    v27.m256i_i64[0] = (__int64)v22;
    v26 = v21;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aFlagTruncation, 15LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v21);
    v6 = clap_builder::parser::error::MatchesError::unwrap(aFlagTruncation, 15LL, &v21);
    if ( !v6 )
    {
      v19 = &off_251818;
      goto LABEL_35;
    }
    <alloc::string::String as core::clone::Clone>::clone(&v21, v6);
    core::ptr::drop_in_place<alloc::string::String>(&v27.m256i_u64[1]);
    v27.m256i_i64[3] = (__int64)v22;
    *(_OWORD *)&v27.m256i_u64[1] = v21;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aWidth, 5LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v21);
    v7 = clap_builder::parser::error::MatchesError::unwrap(aWidth, 5LL, &v21);
    if ( !v7 )
    {
      v19 = &off_251830;
      goto LABEL_35;
    }
    core::num::<impl usize>::from_ascii_radix(v24, *(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 16));
    if ( v24[0] == 1 )
    {
LABEL_16:
      LOBYTE(v21) = 2;
      BYTE1(v21) = v24[1];
      v2 = alloc::boxed::Box<T>::new(&v21);
      goto LABEL_5;
    }
    *((_QWORD *)&v29 + 1) = v25;
  }
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aGapSize, 8LL) )
    goto LABEL_22;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v21);
  v8 = clap_builder::parser::error::MatchesError::unwrap(aGapSize, 8LL, &v21);
  if ( !v8 )
  {
    v19 = &off_251848;
LABEL_35:
    core::option::expect_failed(aParsingOptions_0, 22LL, v19);
  }
  core::num::<impl usize>::from_ascii_radix(v24, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
  if ( v24[0] )
    goto LABEL_16;
  v30 = v25;
LABEL_22:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v21);
  v9 = clap_builder::parser::error::MatchesError::unwrap(aFormat, 6LL, &v21);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 8);
    v11 = *(_QWORD *)(v9 + 16);
    v12 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aRoff, 4LL);
    LOBYTE(v13) = 1;
    if ( !v12 )
    {
      v14 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aTex, 3LL);
      LOBYTE(v13) = 2;
      if ( !v14 )
      {
        *(_QWORD *)&v21 = &off_251768;
        *((_QWORD *)&v21 + 1) = 1LL;
        v22 = &v20;
        v23 = 0LL;
        core::panicking::panic_fmt(&v21, &off_251860, v15, v13);
      }
    }
    v33 = v13;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aRoff, 4LL) )
    v33 = 1;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aTex, 3LL) )
    v33 = 2;
  *(_QWORD *)(a1 + 80) = v30;
  *(_DWORD *)(a1 + 88) = v31;
  *(_BYTE *)(a1 + 92) = v32;
  *(_BYTE *)(a1 + 93) = v33;
  *(_WORD *)(a1 + 94) = v34;
  *(_OWORD *)(a1 + 64) = v29;
  v16 = v26;
  v17 = *(_OWORD *)v27.m256i_i8;
  v18 = *(_OWORD *)&v27.m256i_u64[2];
  *(_OWORD *)(a1 + 48) = v28;
  *(_OWORD *)(a1 + 32) = v18;
  *(_OWORD *)(a1 + 16) = v17;
  *(_OWORD *)a1 = v16;
  return a1;
}