fn uu_pr::print_error(a0: u32, a1: &struct32) -> u64 {
    let v0: u64;  // [sp-0x48]
    let v2: u64;  // rax

    v0 = a1;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "no-file-warnings");
    if !v2 {
        v2 = eprintln!("{:?}", &v0);
        return v2;
    }
    return v2;
}
