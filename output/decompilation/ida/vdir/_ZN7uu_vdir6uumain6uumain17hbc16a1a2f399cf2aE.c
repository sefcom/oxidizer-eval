__int64 __fastcall uu_vdir::uumain::uumain(__int64 a1, __int64 a2)
{
  char v2; // bl
  char v3; // bp
  __int64 v4; // r14
  __int64 v5; // r14
  _BYTE v7[56]; // [rsp+0h] [rbp-598h] BYREF
  __int64 v8; // [rsp+38h] [rbp-560h] BYREF
  __int128 v9; // [rsp+40h] [rbp-558h]
  __int64 v10; // [rsp+50h] [rbp-548h] BYREF
  __int128 v11; // [rsp+58h] [rbp-540h]
  _BYTE src[240]; // [rsp+68h] [rbp-530h] BYREF
  _QWORD v13[8]; // [rsp+160h] [rbp-438h] BYREF
  __int64 v14; // [rsp+1A0h] [rbp-3F8h] BYREF
  __int128 v15; // [rsp+1A8h] [rbp-3F0h]
  _WORD dest[120]; // [rsp+1B8h] [rbp-3E0h] BYREF
  _BYTE v17[752]; // [rsp+2A8h] [rbp-2F0h] BYREF

  uu_vdir::uu_app(v17);
  clap_builder::builder::command::Command::get_matches_from(v7, v17, a1, a2);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          v7,
                          aQuotingStyle,
                          *(&uu_ls::options::QUOTING_STYLE + 1))
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          aQuoteName,
                          *(&uu_ls::options::quoting::C + 1))
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          aEscape,
                          *(&uu_ls::options::quoting::ESCAPE + 1)) )
  {
    v2 = 0;
  }
  else
  {
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v7,
           aLiteral,
           *(&uu_ls::options::quoting::LITERAL + 1)) ^ 1;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          v7,
                          aFormat,
                          *(&uu_ls::options::FORMAT + 1))
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          asc_D1DEB,
                          uu_ls::options::format::ACROSS[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          aC,
                          uu_ls::options::format::COLUMNS[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          aM,
                          uu_ls::options::format::COMMAS[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          aLong,
                          *(&uu_ls::options::format::LONG + 1))
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          aO,
                          uu_ls::options::format::LONG_NO_GROUP[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          aG,
                          uu_ls::options::format::LONG_NO_OWNER[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v7,
                          aNumericUidGid,
                          *(&uu_ls::options::format::LONG_NUMERIC_UID_GID + 1)) )
  {
    v3 = 0;
  }
  else
  {
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v7, ::a1, uu_ls::options::format::ONE_LINE[1]) ^ 1;
  }
  uu_ls::Config::from(&v10, v7);
  v4 = v11;
  if ( !__OFSUB__(-v10, 1LL) )
  {
    memcpy(dest, src, sizeof(dest));
    v14 = v10;
    v15 = v11;
    if ( v2 )
      dest[114] = 2;
    if ( v3 )
      LOBYTE(dest[116]) = 1;
    v5 = (__int64)*(&uu_ls::options::PATHS + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v10, v7, aPaths, v5);
    clap_builder::parser::error::MatchesError::unwrap(v13, aPaths, v5, &v10);
    if ( v13[0] )
    {
      core::iter::traits::iterator::Iterator::collect(&v10, v13);
      v9 = v11;
      v8 = v10;
    }
    else
    {
      uu_vdir::uumain::uumain::{{closure}}(&v8);
    }
    v10 = v8;
    v11 = v9;
    v4 = uu_ls::list(&v10, &v14);
    core::ptr::drop_in_place<uu_ls::Config>(&v14);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v7);
  return v4;
}