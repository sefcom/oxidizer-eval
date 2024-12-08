__int64 __fastcall uu_wc::Settings::new(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int128 v4; // xmm0
  char v6; // [rsp+Ch] [rbp-9Ch]
  __int128 v7; // [rsp+10h] [rbp-98h] BYREF
  __int128 v8; // [rsp+20h] [rbp-88h]
  __int128 v9; // [rsp+30h] [rbp-78h]
  __int64 v10; // [rsp+40h] [rbp-68h]
  __int128 v11; // [rsp+50h] [rbp-58h] BYREF
  __int64 v12; // [rsp+60h] [rbp-48h]
  int v13; // [rsp+68h] [rbp-40h]
  __int16 v14; // [rsp+6Ch] [rbp-3Ch]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v11,
    a2,
    anon_8aac807fac66dc3af2ac0bbb77a0c346_4_llvm_9965479195333595493,
    11LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(
         anon_8aac807fac66dc3af2ac0bbb77a0c346_4_llvm_9965479195333595493,
         11LL,
         &v11);
  if ( v2 )
  {
    core::ops::function::FnOnce::call_once(&v11, v2);
    v10 = v12;
    v9 = v11;
  }
  else
  {
    *(_QWORD *)&v9 = 0x8000000000000002LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v11,
    a2,
    anon_8aac807fac66dc3af2ac0bbb77a0c346_7_llvm_9965479195333595493,
    5LL);
  v3 = clap_builder::parser::error::MatchesError::unwrap(
         anon_8aac807fac66dc3af2ac0bbb77a0c346_7_llvm_9965479195333595493,
         5LL,
         &v11);
  if ( v3 )
    v6 = core::ops::function::FnOnce::call_once(v3);
  else
    v6 = 0;
  *(_QWORD *)&v8 = v10;
  v7 = v9;
  BYTE8(v8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                a2,
                anon_8aac807fac66dc3af2ac0bbb77a0c346_2_llvm_9965479195333595493,
                5LL);
  BYTE9(v8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                a2,
                anon_8aac807fac66dc3af2ac0bbb77a0c346_3_llvm_9965479195333595493,
                5LL);
  BYTE10(v8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 anon_8aac807fac66dc3af2ac0bbb77a0c346_5_llvm_9965479195333595493,
                 5LL);
  BYTE11(v8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 "wordsFilesDisabledextraStdinReprNotAllowedZeroLengthFileNameZeroLengthFileNameCtxidx",
                 5LL);
  BYTE12(v8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 anon_8aac807fac66dc3af2ac0bbb77a0c346_6_llvm_9965479195333595493,
                 15LL);
  BYTE13(v8) = v6;
  if ( (unsigned int)uu_wc::Settings::number_enabled(&v7) )
  {
    v4 = v7;
    *(_OWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v4;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v7;
    v13 = 16842753;
    v14 = 0;
    *(_QWORD *)&v11 = 0x8000000000000002LL;
    *(_DWORD *)(a1 + 24) = 16842753;
    *(_BYTE *)(a1 + 28) = 0;
    *(_BYTE *)(a1 + 29) = v6;
    core::ptr::drop_in_place<uu_wc::Settings>(&v11);
  }
  return a1;
}
