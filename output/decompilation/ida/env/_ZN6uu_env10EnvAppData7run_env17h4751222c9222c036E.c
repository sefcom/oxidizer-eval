__int64 __fastcall uu_env::EnvAppData::run_env(bool *a1, __int64 a2, __int64 a3)
{
  __int64 config_file; // r14
  __int64 v4; // r15
  bool v5; // al
  unsigned __int8 v6; // bp
  bool v7; // cl
  _QWORD v9[3]; // [rsp+8h] [rbp-1C0h] BYREF
  _OWORD v10[3]; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-178h]
  _QWORD v12[3]; // [rsp+60h] [rbp-168h] BYREF
  _QWORD dest[17]; // [rsp+78h] [rbp-150h] BYREF
  __int64 v14; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+108h] [rbp-C0h]
  __int64 v16; // [rsp+110h] [rbp-B8h]
  _OWORD src[11]; // [rsp+118h] [rbp-B0h] BYREF

  uu_env::EnvAppData::parse_arguments((__int64)&v14, (__int64)a1, a2, a3);
  config_file = v15;
  v4 = v16;
  if ( !__OFSUB__(-v14, 1LL) )
  {
    v11 = *(_QWORD *)&src[3];
    v10[2] = src[2];
    v10[1] = src[1];
    v10[0] = src[0];
    v9[0] = v14;
    v9[1] = v15;
    v9[2] = v16;
    v5 = 1;
    if ( !*a1 )
      v5 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_count(v10, aDebug, 5LL) != 0;
    *a1 = v5;
    v6 = a1[2];
    v7 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_count(v10, aDebug, 5LL) >= 2u;
    if ( v6 != 2 )
      v7 = v6;
    a1[2] = v7;
    if ( v7 )
    {
      uu_env::debug_print_args(config_file, v4);
      a1[2] = 0;
    }
    uu_env::make_options(&v14, v10);
    config_file = v15;
    if ( v14 != 0x8000000000000000LL )
    {
      memcpy(dest, src, sizeof(dest));
      v12[0] = v14;
      v12[1] = v15;
      v12[2] = v16;
      config_file = uu_env::apply_change_directory(v12);
      if ( !config_file )
      {
        uu_env::apply_removal_of_all_env_vars(v12);
        config_file = uu_env::load_config_file(v12);
        if ( !config_file )
        {
          config_file = uu_env::apply_unset_env_vars(v12);
          if ( !config_file )
          {
            uu_env::apply_specified_env_vars(v12);
            config_file = uu_env::apply_ignore_signal(v12);
            if ( !config_file )
            {
              if ( !dest[8] )
              {
                uu_env::print_env(BYTE1(dest[16]));
                core::ptr::drop_in_place<uu_env::Options>(v12);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v10);
                core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v9);
                return 0LL;
              }
              config_file = uu_env::EnvAppData::run_program(a1, v12, *a1);
            }
          }
        }
      }
      core::ptr::drop_in_place<uu_env::Options>(v12);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v10);
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v9);
  }
  return config_file;
}