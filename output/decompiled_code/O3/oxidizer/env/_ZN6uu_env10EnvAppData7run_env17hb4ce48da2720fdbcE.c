fn uu_env::EnvAppData::run_env(a0: i64, a1: i64) -> u64 {
    let v0: i64;  // [sp-0x1c0]
    let v1: i64;  // [sp-0x1b8]
    let v2: i64;  // [sp-0x1b0]
    let v3: i128;  // [sp-0x1a8]
    let v4: i128;  // [sp-0x198]
    let v5: i128;  // [sp-0x188]
    let v6: i64;  // [sp-0x178]
    let v7: struct24;  // [bp-0x170]
    let v8: i8;  // [bp-0x158]
    let v9: i8;  // [bp-0x118]
    let v10: i8;  // [bp-0xd7]
    let v11: i1280;  // [sp-0xd0], Other Possible Types: Result<struct160, struct24>
    let v13: i64;  // rdx
    let v15: i64;  // r14
    let v17: i8;  // bpl
    let v18: i8;  // cl
    let v21: i64;  // rsi

    v11 = uu_env::EnvAppData::parse_arguments(a0, a1, v13);
    v15 = *((&v11 as &char + 8) as &i64);
    match v11 {
        Err(_) => {
            return v15;
        },
        Ok(_) => {
            v6 = *((&v11 as &char + 72) as &i64);
            v5 = *((&v11 as &char + 56) as &i128);
            v4 = *((&v11 as &char + 40) as &i128);
            v3 = *((&v11 as &char + 24) as &i128);
            v0 = v11;
            v1 = v15;
            v2 = *((&v11 as &char + 16) as &i64);
            if !*(a0 as &i8) {
                clap_builder::parser::matches::arg_matches::ArgMatches::get_count(&v3, "debug");
            }
            *(a0 as &i8) = 1;
            v17 = *((a0 + 2) as &i8);
            v18 = (v17 != 2 ? v17 : ((-0x100 | (2 <= clap_builder::parser::matches::arg_matches::ArgMatches::get_count(&v3, "debug") as i8 as u8 as u64) as u8 as u64) & 4294967295 & 4294967295) as u8);
            *((a0 + 2) as &i8) = v18;
            if v18 {
                uu_env::debug_print_args(v1, v2, v13);
                *((a0 + 2) as &i8) = 0;
            }
            v11 = uu_env::make_options(&v3);
            v15 = *((&v11 as &char + 8) as &i64);
            match v11 {
                Ok(_) => {
                    memcpy(&v8, &v11, 136);
                    v7 = struct24 {
                        field_0: v19
                        field_8: v15
                        field_16: v20
                    };
                    v15 = uu_env::apply_change_directory(&v7, v21, v13);
                    if !v15 {
                        uu_env::apply_removal_of_all_env_vars(&v7, v21, v13);
                        v15 = uu_env::load_config_file(&v7);
                        if !v15 {
                            v15 = uu_env::apply_unset_env_vars(&v7, v21, v13);
                            if !v15 {
                                uu_env::apply_specified_env_vars(&v7, v21, v13);
                                v15 = uu_env::apply_ignore_signal(&v7, v21, v13);
                                if !v15 {
                                    if v9 {
                                        v15 = uu_env::EnvAppData::run_program(a0, &v7, *(a0 as &i8) as u8 as u64);
                                    } else {
                                        uu_env::print_env(v10 as u8 as u64, v21, v13);
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                },
                Err(_) => {
                },
            }
            return v15;
        },
    }
}
