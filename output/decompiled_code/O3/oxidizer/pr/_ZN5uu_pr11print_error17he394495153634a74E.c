fn uu_pr::print_error(a0: u32, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x48]
    let v1: Argument;  // [bp-0x40]
    let v2: Arguments;  // [bp-0x30]
    let v4: u64;  // rax

    v0 = a1;
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &g_459dd0, 16);
    if !v4 {
        v1 = Argument {
            value: &v0
            formatter: <&T as core::fmt::Display>::fmt
        };
        v2 = Arguments {
            pieces: [&g_68ea00, "\n"]
            args: [&v1]
            fmt: None
        };
        v4 = std::io::stdio::_eprint(&v2);
        return v4;
    }
    return v4;
}
