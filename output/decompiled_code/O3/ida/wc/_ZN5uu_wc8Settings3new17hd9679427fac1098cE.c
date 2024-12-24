__int64 __fastcall uu_wc::Settings::new(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v7; // xmm0
  char v9; // [rsp+Ch] [rbp-9Ch]
  __int128 v10; // [rsp+10h] [rbp-98h] BYREF
  __int128 v11; // [rsp+20h] [rbp-88h]
  __int128 v12; // [rsp+30h] [rbp-78h]
  __int64 v13; // [rsp+40h] [rbp-68h]
  __int128 v14; // [rsp+50h] [rbp-58h] BYREF
  __int64 v15; // [rsp+60h] [rbp-48h]
  int v16; // [rsp+68h] [rbp-40h]
  __int16 v17; // [rsp+6Ch] [rbp-3Ch]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v14,
    a2,
    anon_8aac807fac66dc3af2ac0bbb77a0c346_4_llvm_9965479195333595493,
    11LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(
         anon_8aac807fac66dc3af2ac0bbb77a0c346_4_llvm_9965479195333595493,
         11LL,
         &v14);
  if ( v2 )
  {
    core::ops::function::FnOnce::call_once(&v14, v2);
    v13 = v15;
    v12 = v14;
  }
  else
  {
    *(_QWORD *)&v12 = 0x8000000000000002LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v14,
    a2,
    anon_8aac807fac66dc3af2ac0bbb77a0c346_7_llvm_9965479195333595493,
    5LL);
  v3 = clap_builder::parser::error::MatchesError::unwrap(
         anon_8aac807fac66dc3af2ac0bbb77a0c346_7_llvm_9965479195333595493,
         5LL,
         &v14);
  if ( v3 )
    v9 = core::ops::function::FnOnce::call_once(v3);
  else
    v9 = 0;
  *(_QWORD *)&v11 = v13;
  v10 = v12;
  BYTE8(v11) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 anon_8aac807fac66dc3af2ac0bbb77a0c346_2_llvm_9965479195333595493,
                 5LL);
  BYTE9(v11) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 anon_8aac807fac66dc3af2ac0bbb77a0c346_3_llvm_9965479195333595493,
                 5LL);
  BYTE10(v11) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                  a2,
                  anon_8aac807fac66dc3af2ac0bbb77a0c346_5_llvm_9965479195333595493,
                  5LL);
  BYTE11(v11) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                  a2,
                  "wordsFilesDisabledextraStdinReprNotAllowedZeroLengthFileNameZeroLengthFileNameCtxidx",
                  5LL);
  BYTE12(v11) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                  a2,
                  anon_8aac807fac66dc3af2ac0bbb77a0c346_6_llvm_9965479195333595493,
                  15LL);
  BYTE13(v11) = v9;
  if ( (unsigned int)uu_wc::Settings::number_enabled(
                       (__int64)&v10,
                       (__int64)anon_8aac807fac66dc3af2ac0bbb77a0c346_6_llvm_9965479195333595493,
                       v4,
                       v13,
                       v5,
                       v6) )
  {
    v7 = v10;
    *(_OWORD *)(a1 + 16) = v11;
    *(_OWORD *)a1 = v7;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v11;
    *(_OWORD *)a1 = v10;
    v16 = 16842753;
    v17 = 0;
    *(_QWORD *)&v14 = 0x8000000000000002LL;
    *(_DWORD *)(a1 + 24) = 16842753;
    *(_BYTE *)(a1 + 28) = 0;
    *(_BYTE *)(a1 + 29) = v9;
    core::ptr::drop_in_place<uu_wc::Settings>(&v14);
  }
  return a1;
}
