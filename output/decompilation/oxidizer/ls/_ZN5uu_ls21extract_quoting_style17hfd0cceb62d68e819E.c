fn uu_ls::extract_quoting_style(a0: i64, a1: i32) -> long long {
    let v0: std::io::stdio::Stdout;  // [bp-0xf8], Other Possible Types: Result<struct40, struct16>, struct24
    let v2: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0xc8]
    let v3: u64;  // [bp-0xb0]
    let v4: u64;  // [bp-0xa0]
    let v5: u64;  // [bp-0x98]
    let v6: u128;  // [bp-0x88]
    let v8: core::option::Option<alloc::string::String>;  // [bp-0x68]
    let v10: std::env::Args;  // [bp-0x48]
    let v12: i64;  // rax
    let v14: u8;  // r14b
    let v15: u8;  // bpl
    let v17: u128;  // xmm0
    let v18: u8;  // al

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "quoting-style");
    v12 = clap_builder::parser::error::MatchesError::unwrap("quoting-style", &v0);
    if v12 {
        if uu_ls::match_quoting_style_name(*((v12 + 8) as &i64), *((v12 + 16) as &i64), a1) as i32 >> 16 == 4 {
            panic!("internal error: entered unreachable code: Should have been caught by Clap");
        }
    } else {
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "literal") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "escape") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "quote-name") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "dired") as i8 {
            v2 = std::env::var("QUOTING_STYLE");
            if let Ok(_) = v2 {
                memcpy(&v2 as u8, &v2 as u128, 16);
                v5 = v3;
                if uu_ls::match_quoting_style_name(v4, v3, a1 as u64) as i32 >> 16 != 4 {
                    return (v15 as u32 | a1 * 0x100 | v14 as u32 * 0x10000) as u64;
                }
                v10 = std::env::args();
                v8 = <std::env::Args as core::iter::traits::iterator::Iterator>::next(&v10);
                if let None = v8 {
                    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("ls");
                }
                v6 = v17;
                eprintln!("{}: Ignoring invalid value of environment variable QUOTING_STYLE: '{}'", &v6, &v2 as u8);
            }
            v0 = std::io::stdio::stdout();
            v18 = std::sys::pal::unix::io::is_terminal();
        }
    }
    return v15 | a1 * 0x100 | v14 * 0x10000;
}
