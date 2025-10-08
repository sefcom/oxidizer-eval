fn uu_env::EnvAppData::run_env(a0: i64, a1: u64, a2: i64) -> long long {
    let v0: u64;  // [bp-0x1c0]
    let v1: u64;  // [bp-0x1b8]
    let v2: u64;  // [bp-0x1b0]
    let v3: u128;  // [bp-0x1a8]
    let v4: iNone;  // [bp-0x198]
    let v5: iNone;  // [bp-0x188]
    let v6: u64;  // [bp-0x178]
    let v7: struct24;  // [bp-0x168]
    let v8: u8;  // [bp-0x150]
    let v9: i8;  // [bp-0x110]
    let v10: u8;  // [bp-0xcf]
    let v11: Result<struct80, struct24>;  // [bp-0xc8]
    let v12: Result<struct160, struct24>;  // [bp-0xc8], Other Possible Types: u64
    let v13: u64;  // [bp-0xc0]
    let v14: u64;  // [bp-0xb8]
    let v15: iNone;  // [bp-0xb0]
    let v16: iNone;  // [bp-0xa0]
    let v17: iNone;  // [bp-0x90]
    let v19: u8;  // al
    let v20: u64;  // rax
    let v21: u8;  // cl
    let v22: u64;  // r14

    v11 = uu_env::EnvAppData::parse_arguments(a0, a1);
    if (((0 ^ v11 as i64) & (0 ^ -(v12))) >> 63) as char {
        return v13;
    }
    v6 = *((&v11 as &char + 72) as &i64);
    v5 = v17;
    v4 = v16;
    v3 = v15;
    v0 = v11 as i64;
    v1 = v13;
    v2 = v14;
    v19 = 1;
    if !*(a0 as &i8) {
        v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_count(&v3, "debug");
    }
    *(a0 as &u8) = v19;
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_count(&v3, "debug");
    v21 = (*((a0 + 2) as &i8) != 2 ? *((a0 + 2) as &i8) : 2 <= (v20 & 255));
    *((a0 + 2) as &u8) = v21;
    if (v21 & 1) {
        uu_env::debug_print_args(v1, v14);
        *((a0 + 2) as &i8) = 0;
    }
    v12 = uu_env::make_options(&v3);
    v22 = v13;
    if let Err(_) = v12 {
        return v22;
    }
    memcpy(&v8, &v12 as u128, 136);
    v7 = struct24 {
        field_0: v12 as i64
        field_8: v22
        field_16: v14
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
