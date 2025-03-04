fn uu_env::EnvAppData::run_env(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x1c0]
    let v1: i64;  // [sp-0x1b8]
    let v2: i64;  // [sp-0x1b0]
    let v3: iNone;  // [sp-0x1a8]
    let v4: iNone;  // [sp-0x198]
    let v5: iNone;  // [sp-0x188]
    let v6: i64;  // [sp-0x178]
    let v7: i64;  // [sp-0x170]
    let v8: i64;  // [sp-0x168]
    let v9: i64;  // [sp-0x160]
    let v10: i8;  // [bp-0x158]
    let v11: i8;  // [bp-0x118]
    let v12: i8;  // [bp-0xd7]
    let v13: struct80;  // [sp-0xd0], Other Possible Types: struct160
    let v16: i64;  // r14
    let v18: i8;  // bpl
    let v19: i8;  // cl
    let v20: i64;  // r13

    v13 = uu_env::EnvAppData::parse_arguments(a0);
    v16 = *((&v13.field_0 as &char + 8) as &i64);
    if v0 == 0x8000000000000000 {
        return v16;
    }
    v6 = *((&v13.field_64 as &char + 8) as &i64);
    v5 = *((&v13.field_48 as &char + 8) as &i128);
    v4 = *(&v13.field_40 as &i128);
    v3 = *(&v13.field_24 as &i128);
    v0 = v13.field_0 as i64;
    v1 = v16;
    v2 = v13.field_16;
    if !*(a0 as &i8) {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_count(&v3, "debug");
    }
    *(a0 as &i8) = 1;
    v18 = *((a0 + 2) as &i8);
    v19 = (v18 != 2 ? v18 : 2 <= clap_builder::parser::matches::arg_matches::ArgMatches::get_count(&v3, "debug") as i8);
    *((a0 + 2) as &char) = v19;
    if v19 {
        uu_env::debug_print_args(v1, v2);
        *((a0 + 2) as &i8) = 0;
    }
    v13 = uu_env::make_options(&v3);
    v20 = v13.field_0 as i64;
    v16 = *((&v13.field_0 as &char + 8) as &i64);
    if v20 == 0x8000000000000000 {
        return v16;
    }
    memcpy(&v10, &v13, 136);
    v7 = v20;
    v8 = v16;
    v9 = *((&v13.field_0 as &char + 16) as &i64);
    v16 = uu_env::apply_change_directory(&v7);
    if v16 {
        return v16;
    }
    uu_env::apply_removal_of_all_env_vars(&v7);
    v16 = uu_env::load_config_file(&v7);
    if v16 {
        return v16;
    }
    v16 = uu_env::apply_unset_env_vars(&v7);
    if v16 {
        return v16;
    }
    uu_env::apply_specified_env_vars(&v7);
    v16 = uu_env::apply_ignore_signal(&v7);
    if v16 {
        return v16;
    } else if *(&v11 as &i64) {
        v16 = uu_env::EnvAppData::run_program(a0, &v7, *(a0 as &i8));
        return v16;
    } else {
        uu_env::print_env(v12);
        return 0;
    }
}
