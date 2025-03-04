fn uu_cp::OverwriteMode::from_matches(a0: u32) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // rbp

    v0 = v2;
    v3 = vvar_20{reg 56} & -0x100 | 1;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "interactive") as i8 {
LABEL_50141f:
        uu_cp::ClobberMode::from_matches(a0);
    } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "no-clobber") as i8 {
        v3 = v3 & -0x100 | 2;
    } else {
        v3 = 0;
        goto LABEL_50141f;
    }
    return v3 & 4294967295;
}
