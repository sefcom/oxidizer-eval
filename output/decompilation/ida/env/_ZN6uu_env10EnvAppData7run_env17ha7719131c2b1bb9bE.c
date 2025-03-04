__int64 __fastcall uu_env::EnvAppData::run_env(bool *a1, __int64 a2, __int64 a3)
{
  __int64 config_file; // r14
  bool v4; // al
  char v5; // bp
  bool v6; // cl
  __int64 v8; // [rsp+8h] [rbp-1C0h] BYREF
  __int64 v9; // [rsp+10h] [rbp-1B8h]
  __int64 v10; // [rsp+18h] [rbp-1B0h]
  _OWORD v11[3]; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-178h]
  _QWORD v13[3]; // [rsp+58h] [rbp-170h] BYREF
  _QWORD dest[17]; // [rsp+70h] [rbp-158h] BYREF
  __int64 v15; // [rsp+F8h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+100h] [rbp-C8h]
  __int64 v17; // [rsp+108h] [rbp-C0h]
  _OWORD src[11]; // [rsp+110h] [rbp-B8h] BYREF

  uu_env::EnvAppData::parse_arguments((__int64)&v15, (__int64)a1, a2, a3);
  config_file = v16;
  if ( v15 != 0x8000000000000000LL )
  {
    v12 = *(_QWORD *)&src[3];
    v11[2] = src[2];
    v11[1] = src[1];
    v11[0] = src[0];
    v8 = v15;
    v9 = v16;
    v10 = v17;
    v4 = 1;
    if ( !*a1 )
      v4 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_count(v11, aDebug, 5LL) != 0;
    *a1 = v4;
    v5 = a1[2];
    v6 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_count(v11, aDebug, 5LL) >= 2u;
    if ( v5 != 2 )
      v6 = v5;
    a1[2] = v6;
    if ( v6 )
    {
      uu_env::debug_print_args(v9, v10);
      a1[2] = 0;
    }
    uu_env::make_options(&v15, (__int64)v11);
    config_file = v16;
    if ( v15 != 0x8000000000000000LL )
    {
      memcpy(dest, src, sizeof(dest));
      v13[0] = v15;
      v13[1] = v16;
      v13[2] = v17;
      config_file = uu_env::apply_change_directory(v13);
      if ( !config_file )
      {
        uu_env::apply_removal_of_all_env_vars((__int64)v13);
        config_file = uu_env::load_config_file((__int64)v13);
        if ( !config_file )
        {
          config_file = uu_env::apply_unset_env_vars((__int64)v13);
          if ( !config_file )
          {
            uu_env::apply_specified_env_vars((__int64)v13);
            config_file = uu_env::apply_ignore_signal((__int64)v13);
            if ( !config_file )
            {
              if ( !dest[8] )
              {
                uu_env::print_env(SBYTE1(dest[16]));
                core::ptr::drop_in_place<uu_env::Options>(v13);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v11);
                core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v8);
                return 0LL;
              }
              config_file = uu_env::EnvAppData::run_program((__int64)a1, v13, *a1);
            }
          }
        }
      }
      core::ptr::drop_in_place<uu_env::Options>(v13);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v11);
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v8);
  }
  return config_file;
}
