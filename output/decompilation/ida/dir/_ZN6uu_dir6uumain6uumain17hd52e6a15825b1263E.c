__int64 __fastcall uu_dir::uumain::uumain(__int64 a1, __int64 a2)
{
  char v2; // bl
  char v3; // bp
  __int64 v4; // r14
  __int64 v5; // r14
  _BYTE v7[56]; // [rsp+8h] [rbp-5A0h] BYREF
  __int64 v8; // [rsp+40h] [rbp-568h] BYREF
  __int128 v9; // [rsp+48h] [rbp-560h]
  __int64 v10; // [rsp+58h] [rbp-550h] BYREF
  __int128 v11; // [rsp+60h] [rbp-548h]
  _OWORD v12[4]; // [rsp+70h] [rbp-538h] BYREF
  _OWORD v13[16]; // [rsp+B0h] [rbp-4F8h] BYREF
  __int128 v14; // [rsp+1B8h] [rbp-3F0h] BYREF
  __int64 v15; // [rsp+1C8h] [rbp-3E0h]
  _BYTE dest[232]; // [rsp+1D0h] [rbp-3D8h] BYREF
  _BYTE v17[752]; // [rsp+2B8h] [rbp-2F0h] BYREF

  uu_dir::uu_app(v17);
  clap_builder::builder::command::Command::get_matches_from(v7, v17, a1, a2);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          v7,
                          anon_3f7e092f2ea554bdd060175bd8ea63d9_14_llvm_16502254941234113161,
                          *(&uu_ls::options::QUOTING_STYLE + 1))
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_9938bf1084d6f67f99da587aeb78cfa9_30_llvm_7263189302602752264,
                          *(&uu_ls::options::quoting::C + 1))
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_9938bf1084d6f67f99da587aeb78cfa9_28_llvm_7263189302602752264,
                          *(&uu_ls::options::quoting::ESCAPE + 1)) )
  {
    v2 = 0;
  }
  else
  {
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v7,
           anon_9938bf1084d6f67f99da587aeb78cfa9_29_llvm_7263189302602752264,
           *(&uu_ls::options::quoting::LITERAL + 1)) ^ 1;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          v7,
                          anon_3f7e092f2ea554bdd060175bd8ea63d9_20_llvm_16502254941234113161,
                          *(&uu_ls::options::FORMAT + 1))
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_8bf1419b86641518549345aedc57e906_3_llvm_11260003342554782039,
                          uu_ls::options::format::ACROSS[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_8bf1419b86641518549345aedc57e906_2_llvm_11260003342554782039,
                          uu_ls::options::format::COLUMNS[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_8bf1419b86641518549345aedc57e906_5_llvm_11260003342554782039,
                          uu_ls::options::format::COMMAS[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_8bf1419b86641518549345aedc57e906_1_llvm_11260003342554782039,
                          *(&uu_ls::options::format::LONG + 1))
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_8bf1419b86641518549345aedc57e906_7_llvm_11260003342554782039,
                          uu_ls::options::format::LONG_NO_GROUP[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_8bf1419b86641518549345aedc57e906_6_llvm_11260003342554782039,
                          uu_ls::options::format::LONG_NO_OWNER[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_8bf1419b86641518549345aedc57e906_8_llvm_11260003342554782039,
                          *(&uu_ls::options::format::LONG_NUMERIC_UID_GID + 1)) )
  {
    v3 = 0;
  }
  else
  {
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v7,
           anon_8bf1419b86641518549345aedc57e906_0_llvm_11260003342554782039,
           uu_ls::options::format::ONE_LINE[1]) ^ 1;
  }
  uu_ls::Config::from(v13, v7);
  v4 = *((_QWORD *)&v13[0] + 1);
  if ( *(_QWORD *)&v13[0] != 0x8000000000000000LL )
  {
    memcpy(dest, (char *)&v13[1] + 8, sizeof(dest));
    v14 = v13[0];
    v15 = *(_QWORD *)&v13[1];
    if ( v2 )
    {
      dest[221] = 0;
      dest[223] = 2;
    }
    if ( v3 )
      dest[224] = 0;
    v5 = (__int64)*(&uu_ls::options::PATHS + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
      v13,
      v7,
      anon_3f7e092f2ea554bdd060175bd8ea63d9_29_llvm_16502254941234113161,
      v5);
    clap_builder::parser::error::MatchesError::unwrap(
      v12,
      anon_3f7e092f2ea554bdd060175bd8ea63d9_29_llvm_16502254941234113161,
      v5,
      v13);
    if ( *(_QWORD *)&v12[0] )
    {
      v13[3] = v12[3];
      v13[2] = v12[2];
      v13[1] = v12[1];
      v13[0] = v12[0];
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v10, v13);
      v9 = v11;
      v8 = v10;
    }
    else
    {
      uu_dir::uumain::uumain::{{closure}}(&v8);
    }
    *(_QWORD *)&v13[0] = v8;
    *(_OWORD *)((char *)v13 + 8) = v9;
    v4 = uu_ls::list(v13, &v14);
    core::ptr::drop_in_place<uu_ls::Config>(&v14);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v7);
  return v4;
}
