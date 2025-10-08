__int64 __fastcall uu_mktemp::Options::from(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r15
  char v5; // r12
  unsigned __int64 v6; // rcx
  char v7; // al
  char v8; // r13
  char flag; // bp
  char v10; // r15
  char v11; // r12
  __int64 v12; // rax
  char v13; // al
  _BYTE v15[24]; // [rsp+8h] [rbp-E0h] BYREF
  _BYTE v16[24]; // [rsp+30h] [rbp-B8h]
  __int128 v17; // [rsp+50h] [rbp-98h]
  __int64 v18; // [rsp+60h] [rbp-88h]
  __int128 v19; // [rsp+70h] [rbp-78h]
  __int64 v20; // [rsp+80h] [rbp-68h]
  unsigned __int64 v21; // [rsp+88h] [rbp-60h] BYREF
  __int128 v22; // [rsp+90h] [rbp-58h]
  __int128 v23; // [rsp+A0h] [rbp-48h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v15, a2, aTmpdir, 6LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(aTmpdir, 6LL, v15);
  v3 = core::option::Option<T>::or_else(v2, a2);
  if ( v3 )
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v21, *(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 16));
  else
    v21 = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v15, a2, aTemplate, 8LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aTemplate, 8LL, v15);
  if ( v4 )
  {
    std::env::var(v15);
    v5 = v15[0];
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v15);
    if ( (v5 & 1) != 0
      || !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aT, 1LL) )
    {
      v6 = v21;
      if ( v21 != 0x8000000000000000LL )
      {
        v23 = v22;
        v8 = 0;
        goto LABEL_18;
      }
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aT, 1LL) )
      {
        v7 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aTmpdir, 6LL);
        v6 = 0x8000000000000000LL;
        v8 = 1;
        if ( !v7 )
          goto LABEL_18;
      }
      std::env::temp_dir(v15);
      v6 = *(_QWORD *)v15;
    }
    else
    {
      std::env::var_os(v15);
      v6 = *(_QWORD *)v15;
      if ( *(_QWORD *)v15 == 0x8000000000000000LL )
        goto LABEL_14;
    }
    v23 = *(_OWORD *)&v15[8];
LABEL_14:
    v8 = 1;
LABEL_18:
    *(_QWORD *)v16 = v6;
    *(_OWORD *)&v16[8] = v23;
    <alloc::string::String as core::clone::Clone>::clone(v15, v4);
    v18 = *(_QWORD *)&v16[16];
    v17 = *(_OWORD *)v16;
    v19 = *(_OWORD *)v15;
    v20 = *(_QWORD *)&v15[16];
    goto LABEL_21;
  }
  if ( v21 == 0x8000000000000000LL )
  {
    std::env::temp_dir(v15);
  }
  else
  {
    *(_OWORD *)&v15[8] = v22;
    *(_QWORD *)v15 = v21;
  }
  *(_QWORD *)&v16[16] = *(_QWORD *)&v15[16];
  *(_OWORD *)v16 = *(_OWORD *)v15;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v15, aTmpXxxxxxxxxx, 14LL);
  v20 = *(_QWORD *)&v15[16];
  v19 = *(_OWORD *)v15;
  v17 = *(_OWORD *)v16;
  v18 = *(_QWORD *)&v16[16];
  v8 = 0;
LABEL_21:
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDirectory, 9LL);
  v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDryRun, 7LL);
  v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v15, a2, aSuffix, 6LL);
  v12 = clap_builder::parser::error::MatchesError::unwrap(aSuffix, 6LL, v15);
  if ( v12 )
  {
    <alloc::string::String as core::clone::Clone>::clone(v15, v12);
    *(_QWORD *)&v16[16] = *(_QWORD *)&v15[16];
    *(_OWORD *)v16 = *(_OWORD *)v15;
  }
  else
  {
    *(_QWORD *)v16 = 0x8000000000000000LL;
  }
  v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aT, 1LL);
  *(_QWORD *)(a1 + 16) = v20;
  *(_OWORD *)a1 = v19;
  *(_BYTE *)(a1 + 72) = flag;
  *(_BYTE *)(a1 + 73) = v10;
  *(_BYTE *)(a1 + 74) = v11;
  *(_OWORD *)(a1 + 24) = v17;
  *(_QWORD *)(a1 + 40) = v18;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)v16;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)&v16[16];
  *(_BYTE *)(a1 + 75) = v13;
  if ( v8 )
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v21);
  return a1;
}