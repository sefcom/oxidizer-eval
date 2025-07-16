fn uu_mv::determine_overwrite_mode(a0: i64) -> long long {
    let v1: u64;  // rax

    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "no-clobber") as i8 {
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "interactive");
        return v1 & -0x100 | 2 - v1;
    }
    return 0;
}
