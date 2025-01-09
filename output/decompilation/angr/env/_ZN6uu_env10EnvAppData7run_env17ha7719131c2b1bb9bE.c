long long uu_env::EnvAppData::run_env::ha7719131c2b1bb9b(char a0[3], unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x1c0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x1b8]
    unsigned long long v2;  // [sp-0x1b0]
    int v3;  // [sp-0x1a8]
    int v4;  // [sp-0x198]
    int v5;  // [sp-0x188]
    unsigned long long v6;  // [sp-0x178]
    unsigned long v7;  // [sp-0x170], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x168]
    unsigned long long v9;  // [sp-0x160]
    char v10;  // [bp-0x158]
    char v11;  // [bp-0x118]
    char v12;  // [bp-0xd7]
    char v13;  // [bp-0xd0]
    char v14;  // [bp-0xc8]
    char v15;  // [bp-0xc0]
    char v16;  // [bp-0xb8]
    char v17;  // [bp-0xa8]
    char v18;  // [bp-0x98]
    char v19;  // [bp-0x88]
    unsigned long long v22;  // r14
    char v24;  // bpl
    char v25;  // cl
    unsigned long long v26;  // r13

    uu_env::EnvAppData::parse_arguments::hd6f5805c37ad784f(&v13, a0);
    v22 = *((long long *)&v14);
    if (v0 == 0x8000000000000000)
        return v22;
    v6 = *((long long *)&v19);
    *((int128_t *)&v5) = *((int128_t *)&v18);
    *((int128_t *)&v4) = *((int128_t *)&v17);
    *((int128_t *)&v3) = *((int128_t *)&v16);
    v0 = *((long long *)&v13);
    v1 = v22;
    v2 = *((long long *)&v15);
    if (!a0[0])
        clap_builder::parser::matches::arg_matches::ArgMatches::get_count::h3e01e377eb4ddd10(&v3, "debugTry ' --help' for more information.\n", 5);
    a0[0] = 1;
    v24 = a0[2];
    v25 = (v24 != 2 ? v24 : 2 <= (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_count::h3e01e377eb4ddd10(&v3, "debugTry ' --help' for more information.\n", 5));
    a0[2] = v25;
    if (v25)
    {
        uu_env::debug_print_args::hc6b0deb8b4ab006f(v1, v2);
        a0[2] = 0;
    }
    uu_env::make_options::h1d1233ee0c3e2ece(&v13, &v3);
    v26 = *((long long *)&v13);
    v22 = *((long long *)&v14);
    if (v26 != 0x8000000000000000)
    {
        memcpy(&v10, &v16, 136);
        v7 = v26;
        v8 = v22;
        v9 = *((long long *)&v15);
        v22 = uu_env::apply_change_directory::h505c531f1c72246e(&v7);
        if (!v22)
        {
            uu_env::apply_removal_of_all_env_vars::h7a792f149fdec8bf(&v7);
            v22 = uu_env::load_config_file::h0196c19fc75eeaa1(&v7);
            if (!v22)
            {
                v22 = uu_env::apply_unset_env_vars::hc3a5ba6187e1f001(&v7);
                if (!v22)
                {
                    uu_env::apply_specified_env_vars::ha326473558d292da(&v7);
                    v22 = uu_env::apply_ignore_signal::h50dc2527ab008a21(&v7);
                    if (!v22)
                    {
                        if (*((long long *)&v11))
                        {
                            v22 = uu_env::EnvAppData::run_program::h150b93669ea43850(a0, &v7, a0[0]);
                        }
                        else
                        {
                            uu_env::print_env::h67417add1e73f63a(v12);
                            core::ptr::drop_in_place$LT$uu_env..Options$GT$::h50c38fdde1ff93c5(&v7);
                            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdd0b4c6e9f262526(&v3);
                            ::0x47a700::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h7647f138f93ed945(&v0);
                            return 0;
                        }
                    }
                }
            }
        }
        core::ptr::drop_in_place$LT$uu_env..Options$GT$::h50c38fdde1ff93c5(&v7);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdd0b4c6e9f262526(&v3);
    ::0x47a700::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h7647f138f93ed945(&v0);
    return v22;
}
