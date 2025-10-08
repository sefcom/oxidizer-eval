fn uu_cp::ClobberMode::from_matches(a0: u64) -> long long {
    let v1: u64;  // rax

    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "force") {
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "remove-destination");
        return v1 & -0x100 | 2 - v1;
    }
    return 0;
}
