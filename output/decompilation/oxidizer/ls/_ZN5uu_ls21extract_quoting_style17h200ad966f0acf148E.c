fn uu_ls::extract_quoting_style(a0: u64, a1: u32) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0xf8], Other Possible Types: struct24
    let v2: iNone;  // [bp-0xc8]
    let v4: u128;  // [bp-0xa8]
    let v5: u64;  // [bp-0xa0]
    let v6: u64;  // [bp-0x98]
    let v7: core::option::Option<alloc::string::String>;  // [bp-0x88]
    let v8: u64;  // [bp-0x88]
    let v10: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x68]
    let v11: u128;  // [bp-0x60]
    let v12: u64;  // [bp-0x50]
    let v13: std::env::Args;  // [bp-0x48]
    let v15: i64;  // rax
    let v17: u8;  // al
    let v18: u8;  // bpl
    let v20: iNone;  // xmm0
    let v21: u8;  // al

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "quoting-style");
    v15 = clap_builder::parser::error::MatchesError::unwrap("quoting-style", &v0);
    if v15 {
        if uu_ls::match_quoting_style_name(*((v15 + 8) as &i64), *((v15 + 16) as &i64), a1) == 4 {
            panic!("internal error: entered unreachable code: Should have been caught by Clap");
        }
    } else {
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "literal") && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "escape") && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "quote-name") && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "dired") {
            v10 = std::env::var("QUOTING_STYLE");
            if let Ok(_) = v10 {
                v4 = v11;
                v6 = v12;
                if uu_ls::match_quoting_style_name(v5, v12, a1 as u64) as u8 != 4 {
                    return (v17 as u32 | v18 as u32 * 0x100 | a1 * 0x10000) as u64;
                }
                v13 = std::env::args();
                v7 = <std::env::Args as core::iter::traits::iterator::Iterator>::next(&v13);
                if (((0 ^ v7 as i64) & (0 ^ -(v8))) >> 63) as char {
                    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("ls");
                }
                v2 = v20;
                eprintln!("{}: Ignoring invalid value of environment variable QUOTING_STYLE: '{}'", &v2, &v4 as u8);
            }
            std::io::stdio::stdout();
            v21 = std::sys::io::is_terminal::isatty::is_terminal();
        }
    }
    return v17 | v18 * 0x100 | a1 * 0x10000;
}
