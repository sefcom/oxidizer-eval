long long uu_env::EnvAppData::run_env::hb4ce48da2720fdbc(char a0[3], unsigned long long a1)
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
    unsigned long long v21;  // rdx
    unsigned long long v23;  // r14
    char v25;  // bpl
    char v26;  // cl
    unsigned long long v27;  // r13
    unsigned long long v29;  // rsi

    uu_env::EnvAppData::parse_arguments::h47cb1f0f90b7d809(&v13, a0, a1, v21);
    v23 = *((long long *)&v14);
    if (v0 == 0x8000000000000000)
        return v23;
    v6 = *((long long *)&v19);
    *((int128_t *)&v5) = *((int128_t *)&v18);
    *((int128_t *)&v4) = *((int128_t *)&v17);
    *((int128_t *)&v3) = *((int128_t *)&v16);
    v0 = *((long long *)&v13);
    v1 = v23;
    v2 = *((long long *)&v15);
    if (!a0[0])
        clap_builder::parser::matches::arg_matches::ArgMatches::get_count::hcb3b4c4920b13f45(&v3, "debug", 5);
    a0[0] = 1;
    v25 = a0[2];
    v26 = (v25 != 2 ? v25 : (char)((-0x100 | 2 <= (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_count::hcb3b4c4920b13f45(&v3, "debug", 5)) & 4294967295 & 4294967295));
    a0[2] = v26;
    if (v26)
    {
        uu_env::debug_print_args::hd3db9b945e2eb806(v1, v2, v21);
        a0[2] = 0;
    }
    uu_env::make_options::hd816f43de847a3f1(&v13, &v3);
    v27 = *((long long *)&v13);
    v23 = *((long long *)&v14);
    if (v27 != 0x8000000000000000)
    {
        memcpy(&v10, &v16, 136);
        v7 = v27;
        v8 = v23;
        v9 = *((long long *)&v15);
        v23 = uu_env::apply_change_directory::h5f1ee9a1a10774ef(&v7, v29, v21);
        if (!v23)
        {
            uu_env::apply_removal_of_all_env_vars::h09eefde5910dcb41(&v7, v29, v21);
            v23 = uu_env::load_config_file::h2a4494190599b2f8(&v7);
            if (!v23)
            {
                v23 = uu_env::apply_unset_env_vars::h8afb57340744dec6(&v7, v29, v21);
                if (!v23)
                {
                    uu_env::apply_specified_env_vars::ha3594bca2a6ba901(&v7, v29, v21);
                    v23 = uu_env::apply_ignore_signal::he31db2d66f139fba(&v7, v29, v21);
                    if (!v23)
                    {
                        if (*((long long *)&v11))
                        {
                            v23 = uu_env::EnvAppData::run_program::h967855fe39cb6352(a0, &v7, a0[0]);
                        }
                        else
                        {
                            uu_env::print_env::h30dfb29f9cf66d5e(v12, v29, v21);
                            core::ptr::drop_in_place$LT$uu_env..Options$GT$::hde2dd6f50dd895d2(&v7);
                            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9dff4e72faf293f7(&v3);
                            ::0x476b20::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h0eb13b3ed5558df4(&v0);
                            return 0;
                        }
                    }
                }
            }
        }
        core::ptr::drop_in_place$LT$uu_env..Options$GT$::hde2dd6f50dd895d2(&v7);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9dff4e72faf293f7(&v3);
    ::0x476b20::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h0eb13b3ed5558df4(&v0);
    return v23;
}
