fn uu_mv::determine_overwrite_mode(a0: u64) -> u64 {
    let v1: u64;  // rax

    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &g_420bf8, 10) as i8 {
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &g_420bed, 11);
        return v1 | -0x100 | 2 - (v1 & 4294967295);
    }
    return 0;
}
