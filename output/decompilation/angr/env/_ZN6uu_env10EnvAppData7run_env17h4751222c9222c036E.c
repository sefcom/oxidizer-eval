long long uu_env::EnvAppData::run_env(char a0[3], unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x1c0]
    unsigned long long v1;  // [bp-0x1b8]
    unsigned long long v2;  // [bp-0x1b0]
    int v3;  // [bp-0x1a8]
    int v4;  // [bp-0x198]
    char v5;  // [bp-0x188]
    unsigned long long v6;  // [bp-0x178]
    unsigned long long v7;  // [bp-0x168]
    unsigned long long v8;  // [bp-0x160]
    unsigned long long v9;  // [bp-0x158]
    char v10;  // [bp-0x150]
    char v11;  // [bp-0x110]
    char v12;  // [bp-0xcf]
    char v13;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0xc0]
    unsigned long long v15;  // [bp-0xb8]
    int v16;  // [bp-0xb0]
    int v17;  // [bp-0xa0]
    char v18;  // [bp-0x90]
    char v19;  // [bp-0x80]
    char v21;  // al
    unsigned long long v22;  // rax
    char v23;  // cl
    unsigned long long v24;  // r14

    v13.parse_arguments(a0, a1);
    if ((char)(((0 ^ v13) & (0 ^ -(v13))) >> 63))
        return v14;
    v6 = *((long long *)&v19);
    memcpy(&v5, &v18, 16);
    v4 = v17;
    v3 = v16;
    v0 = v13;
    v1 = v14;
    v2 = v15;
    v21 = 1;
    if (!a0[0])
        v21 = (char)v3.get_count("debugTry ' --help' for more information.\n", 5);
    a0[0] = v21;
    v22 = v3.get_count("debugTry ' --help' for more information.\n", 5);
    v23 = (a0[2] != 2 ? a0[2] : 2 <= (v22 & 255));
    a0[2] = v23;
    if ((v23 & 1))
    {
        uu_env::debug_print_args(v1, v15);
        a0[2] = 0;
    }
    uu_env::make_options(&v13, &v3);
    v24 = v14;
    if (v13 != 0x8000000000000000)
    {
        memcpy(&v10, &v16, 136);
        v7 = v13;
        v8 = v24;
        v9 = v15;
        v24 = uu_env::apply_change_directory(&v7);
        if (!v24)
        {
            uu_env::apply_removal_of_all_env_vars(&v7);
            v24 = uu_env::load_config_file(&v7);
            if (!v24)
            {
                v24 = uu_env::apply_unset_env_vars(&v7);
                if (!v24)
                {
                    uu_env::apply_specified_env_vars(&v7);
                    v24 = uu_env::apply_ignore_signal(&v7);
                    if (!v24)
                    {
                        if (*((long long *)&v11))
                        {
                            v24 = a0.run_program(&v7, a0[0]);
                        }
                        else
                        {
                            uu_env::print_env(v12);
                            core::ptr::drop_in_place<uu_env::Options>(&v7);
                            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
                            core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v0);
                            return 0;
                        }
                    }
                }
            }
        }
        core::ptr::drop_in_place<uu_env::Options>(&v7);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v0);
    return v24;
}
