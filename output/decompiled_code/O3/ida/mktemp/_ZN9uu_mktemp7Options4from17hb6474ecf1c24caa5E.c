__int64 __fastcall uu_mktemp::Options::from(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r15
  unsigned __int64 v6; // rcx
  const char *v7; // rsi
  __int64 v8; // rdx
  char v9; // al
  char v10; // r13
  char flag; // bp
  char v12; // r15
  char v13; // r12
  __int64 v14; // rax
  char v15; // al
  _BYTE v17[48]; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v18; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-B8h]
  __int128 v20; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-98h]
  _BYTE v22[24]; // [rsp+70h] [rbp-88h]
  __int128 v23; // [rsp+90h] [rbp-68h]
  __int64 v24; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v25; // [rsp+B0h] [rbp-48h] BYREF
  __int128 v26; // [rsp+B8h] [rbp-40h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v17, a2, aTmpdir, 6LL);
  v3 = clap_builder::parser::error::MatchesError::unwrap(aTmpdir, 6LL, v17);
  v4 = core::option::Option<T>::or_else(v3, a2);
  if ( v4 )
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v25, v4);
  else
    v25 = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v17, a2, &unk_15CA8, 8LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(&unk_15CA8, 8LL, v17);
  if ( v5 )
  {
    std::env::var(v17, aTmpdir_0, 6LL);
    if ( *(_QWORD *)v17 )
    {
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v17);
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v17);
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aT, 1LL) )
      {
        std::env::var_os(v17, aTmpdir_0, 6LL);
        v6 = *(_QWORD *)v17;
        if ( *(_QWORD *)v17 == 0x8000000000000000LL )
          goto LABEL_17;
        goto LABEL_16;
      }
    }
    v6 = v25;
    if ( v25 != 0x8000000000000000LL )
    {
      v23 = v26;
      v10 = 0;
      goto LABEL_19;
    }
    v7 = aT;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aT, 1LL) )
    {
      v7 = aTmpdir;
      v9 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aTmpdir, 6LL);
      v6 = 0x8000000000000000LL;
      v10 = 1;
      if ( !v9 )
        goto LABEL_19;
    }
    std::env::temp_dir(v17, v7, v8, v6);
    v6 = *(_QWORD *)v17;
LABEL_16:
    v23 = *(_OWORD *)&v17[8];
LABEL_17:
    v10 = 1;
LABEL_19:
    *(_QWORD *)v22 = v6;
    *(_OWORD *)&v22[8] = v23;
    <alloc::string::String as core::clone::Clone>::clone(&v20, v5);
    v19 = *(_QWORD *)&v22[16];
    v18 = *(_OWORD *)v22;
    *(_OWORD *)v17 = v20;
    *(_QWORD *)&v17[16] = v21;
    goto LABEL_22;
  }
  if ( v25 == 0x8000000000000000LL )
  {
    core::ops::function::FnOnce::call_once(v17);
  }
  else
  {
    *(_OWORD *)&v17[8] = v26;
    *(_QWORD *)v17 = v25;
  }
  v21 = *(_QWORD *)&v17[16];
  v20 = *(_OWORD *)v17;
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v18, aTmpXxxxxxxxxx, 14LL);
  *(_QWORD *)&v17[16] = v19;
  *(_OWORD *)v17 = v18;
  v18 = v20;
  v19 = v21;
  v10 = 0;
LABEL_22:
  v24 = v19;
  v23 = v18;
  *(_QWORD *)&v22[16] = *(_QWORD *)&v17[16];
  *(_OWORD *)v22 = *(_OWORD *)v17;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDirectory, 9LL);
  v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDryRun, 7LL);
  v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL);
  v21 = v24;
  v20 = v23;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v17, a2, aSuffix, 6LL);
  v14 = clap_builder::parser::error::MatchesError::unwrap(aSuffix, 6LL, v17);
  if ( v14 )
  {
    core::ops::function::FnOnce::call_once(v17, v14);
    v19 = *(_QWORD *)&v17[16];
    v18 = *(_OWORD *)v17;
  }
  else
  {
    *(_QWORD *)&v18 = 0x8000000000000000LL;
  }
  v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aT, 1LL);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&v22[16];
  *(_OWORD *)a1 = *(_OWORD *)v22;
  *(_BYTE *)(a1 + 72) = flag;
  *(_BYTE *)(a1 + 73) = v12;
  *(_BYTE *)(a1 + 74) = v13;
  *(_OWORD *)(a1 + 24) = v20;
  *(_QWORD *)(a1 + 40) = v21;
  *(_OWORD *)(a1 + 48) = v18;
  *(_QWORD *)(a1 + 64) = v19;
  *(_BYTE *)(a1 + 75) = v15;
  if ( v10 )
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v25);
  return a1;
}
