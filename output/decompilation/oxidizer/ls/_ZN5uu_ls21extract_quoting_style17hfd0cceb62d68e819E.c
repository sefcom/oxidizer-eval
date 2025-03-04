fn uu_ls::extract_quoting_style(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0xf8], Other Possible Types: Result<struct40, struct8>, struct24
    let v1: i64;  // [sp-0xe8]
    let v2: Result<struct24, struct8>;  // [sp-0xc8]
    let v3: iNone;  // [sp-0xa8]
    let v4: iNone;  // [sp-0x88]
    let v5: i64;  // [sp-0x78]
    let v6: i64;  // [bp-0x68], Other Possible Types: char
    let v7: i64;  // [sp-0x58]
    let v8: Arguments;  // [sp-0x48]
    let v10: i64;  // rax
    let v11: i32;  // ebp
    let v12: i32;  // r14d
    let v14: i8;  // al

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "quoting-style");
    v10 = clap_builder::parser::error::MatchesError::unwrap("quoting-style", &v0);
    if v10 {
        v11 = uu_ls::match_quoting_style_name(*((v10 + 8) as &i64), *((v10 + 16) as &i64), a1 as u64) as i32;
        v12 = v11 >> 16;
        if v12 != 4 {
            a1 = v11 as u64 >> 8;
            return v11 | a1 as u64 * 0x100 | v12 as u64 * 0x10000;
        }
        panic!("internal error: entered unreachable code: Should have been caught by Clap");
    } else {
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "literal") as i8 {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "escape") as i8 {
                v12 = (a0 & -0x100 | 2) as u32;
                return 0 | a1 as u64 * 0x100 | v12 as u64 * 0x10000;
            } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "quote-name") as i8 {
                v11 = vvar_59{reg 56} & -0x100 | 2;
                v12 = (a0 & -0x100 | 2) as u32;
                return v11 | a1 as u64 * 0x100 | v12 as u64 * 0x10000;
            } else if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "dired") as i8 {
                v2 = std::env::var("QUOTING_STYLE");
                match v2 {
                    Ok(v3) => {
                        v11 = uu_ls::match_quoting_style_name((&v3)[8] as i64, *((&v2 as &char + 24) as &i64), a1 as u64) as i32;
                        v12 = v11 >> 16;
                        if v12 != 4 {
                            a1 = v11 >> 8;
                            return (v11 | (a1 as u64 * 0x100) as u32 | (v12 as u64 * 0x10000) as u32) as u64;
                        }
                        v8 = std::env::args();
                        <std::env::Args as core::iter::traits::iterator::Iterator>::next(&v6, &v8);
                        if v6 != 0x8000000000000000 {
                            v5 = v7;
                        } else {
                            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("ls");
                            v5 = v1;
                        }
                        v4 = *(&v6 as &i128);
                        eprintln!("{}: Ignoring invalid value of environment variable QUOTING_STYLE: '{}'", &v4, &v3);
                    },
                    Err(_) => {
                        v0 = std::io::stdio::stdout();
                        v14 = std::sys::pal::unix::io::is_terminal();
                    },
                }
                if v14 {
                    v11 = 1;
                } else {
                    v11 = a1;
                }
                v12 = (v14 ? 3 : a1);
                return v11 | 0 * 0x100 | v12 as u64 * 0x10000;
            }
        }
        v12 = (a0 & -0x100 | 3) as u32;
        v11 = a1;
        return v11 | a1 as u64 * 0x100 | v12 as u64 * 0x10000;
    }
}
