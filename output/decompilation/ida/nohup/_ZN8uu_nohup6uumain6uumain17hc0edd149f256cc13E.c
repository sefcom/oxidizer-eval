__int64 __fastcall uu_nohup::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  __int128 v7; // [rsp+8h] [rbp-360h] BYREF
  _BYTE v8[48]; // [rsp+18h] [rbp-350h]
  __int128 v9; // [rsp+48h] [rbp-320h] BYREF
  int v10; // [rsp+58h] [rbp-310h]
  __int128 v11; // [rsp+5Ch] [rbp-30Ch]
  __int128 v12; // [rsp+6Ch] [rbp-2FCh]
  int v13; // [rsp+7Ch] [rbp-2ECh]
  char **argv[2]; // [rsp+80h] [rbp-2E8h] BYREF
  __int128 v15; // [rsp+90h] [rbp-2D8h]
  __int128 v16; // [rsp+A0h] [rbp-2C8h]
  __int128 v17; // [rsp+B0h] [rbp-2B8h]

  uu_nohup::uu_app(argv);
  clap_builder::builder::command::Command::try_get_matches_from(&v7, argv, a1, a2);
  if ( __OFSUB__(-(__int64)v7, 1LL) )
    return alloc::boxed::Box<T>::new(*((_QWORD *)&v7 + 1), argv, v2, -(__int64)v7);
  v11 = *(_OWORD *)&v8[4];
  v12 = *(_OWORD *)&v8[20];
  v13 = *(_DWORD *)&v8[36];
  v9 = v7;
  v10 = *(_DWORD *)v8;
  v4 = uu_nohup::replace_fds();
  if ( v4 )
  {
    v5 = v4;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v9);
    return v5;
  }
  else
  {
    signal(1, (__sighandler_t)((char *)&dword_0 + 1));
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(argv, &v9);
    clap_builder::parser::error::MatchesError::unwrap(&v7, argv);
    if ( !(_QWORD)v7 )
      core::option::unwrap_failed(&off_DE208);
    v17 = *(_OWORD *)&v8[32];
    v16 = *(_OWORD *)&v8[16];
    v15 = *(_OWORD *)v8;
    *(_OWORD *)argv = v7;
    core::iter::traits::iterator::Iterator::collect(&v7, argv);
    core::iter::traits::iterator::Iterator::collect(
      argv,
      *((_QWORD *)&v7 + 1),
      *((_QWORD *)&v7 + 1) + 16LL * *(_QWORD *)v8);
    alloc::vec::Vec<T,A>::push(argv);
    if ( !(_QWORD)v15 )
      core::panicking::panic_bounds_check(0LL, 0LL, &off_DE238);
    v6 = execvp(*(const char **)argv[1], argv[1]);
    uucore::mods::error::set_exit_code((v6 == 2) | 0x7Eu);
    core::ptr::drop_in_place<alloc::vec::Vec<usize>>(argv[0], argv[1]);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::ffi::c_str::CString>>(&v7);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v9);
    return 0LL;
  }
}