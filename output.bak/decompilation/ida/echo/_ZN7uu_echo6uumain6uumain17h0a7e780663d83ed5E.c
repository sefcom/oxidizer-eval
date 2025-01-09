__int64 __fastcall uu_echo::uumain::uumain(__int64 a1, __int64 a2)
{
  char flag; // bl
  char v3; // bp
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v8; // [rsp+8h] [rbp-370h] BYREF
  _BYTE v9[56]; // [rsp+10h] [rbp-368h] BYREF
  __int128 v10[4]; // [rsp+48h] [rbp-330h] BYREF
  _QWORD dest[94]; // [rsp+88h] [rbp-2F0h] BYREF

  uu_echo::uu_app(dest);
  clap_builder::builder::command::Command::get_matches_from(v9, dest, a1, a2);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v9, aNoNewline, 10LL);
  v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v9, aEnableBackslas, 23LL);
  dest[0] = std::io::stdio::stdout();
  v8 = std::io::stdio::Stdout::lock(dest);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v9, aString, 6LL);
  clap_builder::parser::error::MatchesError::unwrap(v10, dest);
  if ( !*(_QWORD *)&v10[0] )
  {
    if ( flag )
      goto LABEL_8;
    v5 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v8, asc_12F52, 1LL);
    if ( !v5 )
      goto LABEL_8;
    v4 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
LABEL_7:
    v6 = v4;
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v8);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v9);
    return v6;
  }
  v4 = uu_echo::execute((__int64)&v8, flag ^ 1u, v3, v10);
  if ( v4 )
    goto LABEL_7;
LABEL_8:
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v8);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v9);
  return 0LL;
}
