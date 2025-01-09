fn uu_env::EnvAppData::run_env(a0: &u64, a1: u32, a2: u32) -> u64 {
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
    let v11: Result<struct80, struct16>;  // [sp-0xd0], Other Possible Types: i648
    let v14: i64;  // r14
    let v16: i8;  // bpl
    let v17: i8;  // cl

    v11 = uu_env::EnvAppData::parse_arguments(a0);
    v14 = *((&v11 as &char + 8) as &i64);
    match v11 {
        Err(_) => {
            return v14;
        },
        Ok(_) => {
            v6 = *((&v11 as &char + 72) as &i64);
            v5 = *((&v11 as &char + 56) as &i128);
            v4 = *((&v11 as &char + 40) as &i128);
            v3 = *((&v11 as &char + 24) as &i128);
            v0 = v11;
            v1 = v14;
            v2 = *((&v11 as &char + 16) as &i64);
            if !*(a0 as &i8) {
                clap_builder::parser::matches::arg_matches::ArgMatches::get_count(&v3, "debug");
            }
            *(a0 as &i8) = 1;
            v16 = *((a0 + 2) as &i8);
            v17 = (v16 != 2 ? v16 : ((-0x100 | (2 <= clap_builder::parser::matches::arg_matches::ArgMatches::get_count(&v3, "debug") as i8 as u8 as u64) as u8 as u64) & 4294967295 & 4294967295) as u8);
            *((a0 + 2) as &i8) = v17;
            if v17 {
                uu_env::debug_print_args(v1, v2);
                *((a0 + 2) as &i8) = 0;
            }
            v11 = uu_env::make_options(&v3);
            v14 = *((&v11 as &char + 8) as &i64);
            match v11 {
                Ok(_) => {
                    memcpy(&v8, &v11, 136);
                    v7 = struct24 {
                        field_0: v18
                        field_8: v14
                        field_16: v19
                    };
                    v14 = uu_env::apply_change_directory(&v7);
                    if !v14 {
                        uu_env::apply_removal_of_all_env_vars(&v7);
                        v14 = uu_env::load_config_file(&v7);
                        if !v14 {
                            v14 = uu_env::apply_unset_env_vars(&v7);
                            if !v14 {
                                uu_env::apply_specified_env_vars(&v7);
                                v14 = uu_env::apply_ignore_signal(&v7);
                                if !v14 {
                                    if v9 {
                                        v14 = uu_env::EnvAppData::run_program(a0, &v7, *(a0 as &i8) as u8 as u64);
                                    } else {
                                        uu_env::print_env(v10 as u8 as u64);
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
            return v14;
        },
    }
}
