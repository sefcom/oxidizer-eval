// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_uptime::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // [rsp+0h] [rbp-318h] BYREF
  __int64 v9; // [rsp+8h] [rbp-310h]
  __int128 v10; // [rsp+10h] [rbp-308h]
  __int128 v11; // [rsp+20h] [rbp-2F8h]
  __int64 v12; // [rsp+30h] [rbp-2E8h]
  _QWORD dest[2]; // [rsp+38h] [rbp-2E0h] BYREF
  __int128 v14; // [rsp+48h] [rbp-2D0h]
  __int128 v15; // [rsp+58h] [rbp-2C0h]
  __int64 v16; // [rsp+68h] [rbp-2B0h]

  uu_uptime::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v8, dest, a1, a2);
  if ( __OFSUB__(-v8, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v9,
             dest,
             v2,
             -v8);
  v16 = v12;
  v15 = v11;
  v14 = v10;
  dest[0] = v8;
  dest[1] = v9;
  v4 = (__int64)*(&uu_uptime::options::PATH + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, dest, aPath, v4);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aPath, v4, &v8);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          dest,
                          "since(uutils coreutils) 0.0.30Display the current time, the length of time the system has been"
                          " up,\n"
                          "the number of users on the system, and the average number of jobs\n"
                          "in the run queue over the last 1, 5 and 15 minutes.{} [OPTION]...system up sincefile to search"
                          " boot time from: \n"
                          "up ???? days ??:??,couldn't get boot time\n"
                          "%Y-%m-%d %H:%M:%Ssrc/uu/uptime/src/uptime.rs,     couldn't get boot time: couldn't get boot ti"
                          "me: Is a directorycouldn't get boot time: Illegal seek",
                          *(&uu_uptime::options::SINCE + 1)) )
  {
    v6 = uu_uptime::uptime_since();
  }
  else if ( v5 )
  {
    v6 = uu_uptime::uptime_with_file(v5);
  }
  else
  {
    v6 = uu_uptime::default_uptime();
  }
  v7 = v6;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(dest);
  return v7;
}