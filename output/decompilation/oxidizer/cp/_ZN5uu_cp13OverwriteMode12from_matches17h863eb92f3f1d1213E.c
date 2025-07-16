fn uu_cp::OverwriteMode::from_matches(a0: i64) -> long long {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // rbp

    v0 = v2;
    v3 = vvar_22{reg 56} & -0x100 | 1;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "interactive") as i8 || !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "no-clobber") as i8 {
        uu_cp::ClobberMode::from_matches(a0);
    }
    return v3 & 4294967295;
}
