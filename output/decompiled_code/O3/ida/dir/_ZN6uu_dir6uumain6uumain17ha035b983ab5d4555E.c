__int64 __fastcall uu_dir::uumain::uumain(__int64 a1, __int64 a2)
{
  char v2; // bl
  char v3; // bp
  __int64 v4; // r14
  __int64 v5; // r14
  _BYTE v7[56]; // [rsp+8h] [rbp-5A0h] BYREF
  __int128 v8; // [rsp+40h] [rbp-568h] BYREF
  __int64 v9; // [rsp+50h] [rbp-558h]
  __int128 v10; // [rsp+58h] [rbp-550h] BYREF
  __int64 v11; // [rsp+68h] [rbp-540h]
  _OWORD v12[4]; // [rsp+70h] [rbp-538h] BYREF
  __int128 v13; // [rsp+B0h] [rbp-4F8h] BYREF
  _OWORD src[15]; // [rsp+C0h] [rbp-4E8h] BYREF
  __int128 v15; // [rsp+1B8h] [rbp-3F0h] BYREF
  __int64 v16; // [rsp+1C8h] [rbp-3E0h]
  _BYTE dest[232]; // [rsp+1D0h] [rbp-3D8h] BYREF
  _BYTE v18[752]; // [rsp+2B8h] [rbp-2F0h] BYREF

  uu_dir::uu_app(v18);
  clap_builder::builder::command::Command::get_matches_from(v7, v18, a1, a2);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          v7,
                          anon_34cd953b2c946f74a585889e96ce9d7a_21_llvm_16853030268703478466,
                          *(&uu_ls::options::QUOTING_STYLE + 1))
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_fab34c35a86c36917711c18ae4d7480d_2_llvm_13771626934311262642,
                          *(&uu_ls::options::quoting::C + 1))
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_fab34c35a86c36917711c18ae4d7480d_0_llvm_13771626934311262642,
                          *(&uu_ls::options::quoting::ESCAPE + 1)) )
  {
    v2 = 0;
  }
  else
  {
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v7,
           anon_fab34c35a86c36917711c18ae4d7480d_1_llvm_13771626934311262642,
           *(&uu_ls::options::quoting::LITERAL + 1)) ^ 1;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          v7,
                          anon_34cd953b2c946f74a585889e96ce9d7a_27_llvm_16853030268703478466,
                          *(&uu_ls::options::FORMAT + 1))
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_93c251adab0f837eec2f5865e5b29e23_28_llvm_10262286748963977039,
                          uu_ls::options::format::ACROSS[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_93c251adab0f837eec2f5865e5b29e23_27_llvm_10262286748963977039,
                          uu_ls::options::format::COLUMNS[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_93c251adab0f837eec2f5865e5b29e23_30_llvm_10262286748963977039,
                          uu_ls::options::format::COMMAS[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_93c251adab0f837eec2f5865e5b29e23_26_llvm_10262286748963977039,
                          *(&uu_ls::options::format::LONG + 1))
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_93c251adab0f837eec2f5865e5b29e23_32_llvm_10262286748963977039,
                          uu_ls::options::format::LONG_NO_GROUP[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_93c251adab0f837eec2f5865e5b29e23_31_llvm_10262286748963977039,
                          uu_ls::options::format::LONG_NO_OWNER[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          anon_93c251adab0f837eec2f5865e5b29e23_33_llvm_10262286748963977039,
                          *(&uu_ls::options::format::LONG_NUMERIC_UID_GID + 1)) )
  {
    v3 = 0;
  }
  else
  {
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v7,
           anon_93c251adab0f837eec2f5865e5b29e23_25_llvm_10262286748963977039,
           uu_ls::options::format::ONE_LINE[1]) ^ 1;
  }
  uu_ls::Config::from(&v13, v7);
  v4 = *((_QWORD *)&v13 + 1);
  if ( (_QWORD)v13 != 0x8000000000000000LL )
  {
    memcpy(dest, (char *)src + 8, sizeof(dest));
    v15 = v13;
    v16 = *(_QWORD *)&src[0];
    if ( v2 )
    {
      dest[221] = 0;
      dest[223] = 2;
    }
    if ( v3 )
      dest[224] = 0;
    v5 = (__int64)*(&uu_ls::options::PATHS + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
      &v13,
      v7,
      anon_34cd953b2c946f74a585889e96ce9d7a_36_llvm_16853030268703478466,
      v5);
    clap_builder::parser::error::MatchesError::unwrap(
      v12,
      anon_34cd953b2c946f74a585889e96ce9d7a_36_llvm_16853030268703478466,
      v5,
      &v13);
    if ( *(_QWORD *)&v12[0] )
    {
      src[2] = v12[3];
      src[1] = v12[2];
      src[0] = v12[1];
      v13 = v12[0];
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v10, &v13);
      v8 = v10;
      v9 = v11;
    }
    else
    {
      uu_dir::uumain::uumain::{{closure}}(&v8);
    }
    *(_QWORD *)&src[0] = v9;
    v13 = v8;
    v4 = uu_ls::list(&v13, &v15);
    core::ptr::drop_in_place<uu_ls::Config>(&v15);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v7);
  return v4;
}
