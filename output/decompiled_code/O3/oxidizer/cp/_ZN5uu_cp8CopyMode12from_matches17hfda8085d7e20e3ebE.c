fn uu_cp::CopyMode::from_matches(a0: i64) -> u64 {
    let v0: i64;  // [sp-0xd0]
    let v1: i64;  // [sp-0xc8]
    let v2: i64;  // [sp-0xc0]
    let v3: i64;  // [sp-0xb8]
    let v4: i64;  // [sp-0xb0]
    let v5: i64;  // [sp-0xa8]
    let v6: i8;  // [bp-0xa0]
    let v7: i8;  // [bp-0x98]
    let v8: i8;  // [bp-0x90]
    let v9: i8;  // [bp-0x80]
    let v10: i64;  // [sp-0x78], Other Possible Types: struct40
    let v11: i64;  // [sp-0x70]
    let v12: i64;  // [sp-0x68]
    let v13: i64;  // [sp-0x60]
    let v14: i64;  // [sp-0x58]
    let v15: i128;  // [sp-0x48]
    let v16: i128;  // [sp-0x38]
    let v17: i64;  // [sp-0x28]
    let v19: i64;  // rbp

    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &g_41874c, 4) as i8 {
        v19 = 0;
    } else {
        v19 = vvar_14{reg 56} | -0x100 | 1;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &g_4266ae, 13) as i8 {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a0, &anon.66ef24e3f07859015e0038a4432ebbf2.108.llvm.10434181731454514353, 6);
            v0 = &anon.66ef24e3f07859015e0038a4432ebbf2.108.llvm.10434181731454514353;
            v1 = 6;
            if v6 != 2 {
                v17 = v9;
                v16 = v8;
                v15 = v6;
                v2 = &v0;
                v3 = <&T as core::fmt::Display>::fmt;
                v4 = &v15;
                v5 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                v10 = "Mismatch between definition and access of `";
                v11 = 2;
                v14 = 0;
                v12 = &v2;
                v13 = 2;
                v10 = core::panicking::panic_fmt();
            }
            v19 = v19 | -0x100 | 3;
            if !v7 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &anon.66ef24e3f07859015e0038a4432ebbf2.109.llvm.10434181731454514353, 1) as i8 {
                v19 = v19 | -0x100 | 2;
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &g_4266bb, 15) as i8 {
                    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &g_4268bf, 18) as i32 | -0x100 | (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &g_4268bf, 18) as i32 ^ 1) * 2 + 2;
                }
            }
        }
    }
    return v19 & 4294967295;
}
