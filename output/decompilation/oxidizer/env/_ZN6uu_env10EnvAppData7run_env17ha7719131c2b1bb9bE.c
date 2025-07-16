fn uu_env::EnvAppData::run_env(a1: i64, a2: i64) -> : struct80 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x1c0]
    let v1: u64;  // [bp-0x1b8]
    let v2: u64;  // [bp-0x1b0]
    let v3: u128;  // [bp-0x1a8]
    let v4: u128;  // [bp-0x198]
    let v5: u8;  // [bp-0x188]
    let v6: u64;  // [bp-0x178]
    let v7: u192;  // [bp-0x170]
    let v8: u8;  // [bp-0x158]
    let v9: i8;  // [bp-0x118]
    let v10: u8;  // [bp-0xd7]
    let v11: u64;  // [bp-0xd0]
    let v12: u64;  // [bp-0xc8]
    let v13: u64;  // [bp-0xc0]
    let v14: u128;  // [bp-0xb8]
    let v15: u128;  // [bp-0xa8]
    let v16: u8;  // [bp-0x98]
    let v17: i8;  // [bp-0x88]
    let v19: u8;  // al
    let v20: u64;  // rax
    let v21: u8;  // cl
    let v22: u64;  // r14

    uu_env::EnvAppData::parse_arguments(a0, a1, a2);
    if v11 == 0x8000000000000000 {
        return v12;
    }
    v6 = *(&v17 as &i64);
    memcpy(&v5, &v16, 16);
    v4 = v15;
    v3 = v14;
    v0 = v11;
    v1 = v12;
    v2 = v13;
    v19 = 1;
    if !*(a0 as &i8) {
        v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_count(&v3, "debug") as i8;
    }
    *(a0 as &u8) = v19;
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_count(&v3, "debug");
    v21 = (*((a0 + 2) as &i8) != 2 ? *((a0 + 2) as &i8) : 2 <= (v20 & 255));
    *((a0 + 2) as &u8) = v21;
    if v21 {
        uu_env::debug_print_args(v1, v2);
        *((a0 + 2) as &i8) = 0;
    }
    uu_env::make_options(&v11, &v3);
    v22 = v12;
    if v11 == 0x8000000000000000 {
        return v22;
    }
    memcpy(&v8, &v14, 136);
    v7 = struct24 {
        field_0: v11
        field_8: v22
        field_16: v13
    };
    v22 = uu_env::apply_change_directory(&v7);
    if !v22 {
        uu_env::apply_removal_of_all_env_vars(&v7);
        v22 = uu_env::load_config_file(&v7);
        if !v22 {
            v22 = uu_env::apply_unset_env_vars(&v7);
            if !v22 {
                uu_env::apply_specified_env_vars(&v7);
                v22 = uu_env::apply_ignore_signal(&v7);
                if !v22 {
                    if *(&v9 as &i64) {
                        v22 = uu_env::EnvAppData::run_program(a0, &v7, *(a0 as &i8));
                    } else {
                        uu_env::print_env(v10);
                        return 0;
                    }
                }
            }
        }
    }
    return v22;
}
