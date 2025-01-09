fn uu_ls::extract_quoting_style(a0: u32, a1: u32) -> u64 {
    let v0: i328;  // [sp-0xf8], Other Possible Types: struct24, Result<struct40, struct8>
    let v1: i64;  // [sp-0xe8]
    let v2: Result<struct24, struct8>;  // [sp-0xc8], Other Possible Types: i200
    let v3: i128;  // [sp-0xa8]
    let v4: i64;  // [sp-0x98]
    let v5: i128;  // [sp-0x88]
    let v6: i64;  // [sp-0x78]
    let v7: i8;  // [bp-0x68]
    let v8: i64;  // [sp-0x58]
    let v9: i320;  // [sp-0x48], Other Possible Types: Arguments
    let v11: i64;  // rax
    let v12: i32;  // ebp
    let v15: i32;  // ebp
    let v17: i8;  // al

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "quoting-style");
    v11 = clap_builder::parser::error::MatchesError::unwrap("quoting-style", &v0);
    if !v11 {
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "literal") as i8 {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "escape") as i8 {
                a1 = a0 | -0x100 | 2;
                return 0 | a1 * 0x100 | a1 * 0x10000;
            }
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "quote-name") as i8 {
                a1 = a0 | -0x100 | 2;
                v12 = vvar_61{reg 56} | -0x100 | 2;
                return v12 | a1 * 0x100 | a1 * 0x10000;
            }
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "dired") as i8 {
                v2 = std::env::var("QUOTING_STYLE");
                if !(!v2) {
                    goto LABEL_0x51fa44;
                }
                v3 = *((&v2 as &char + 8) as &i128);
                v4 = v2;
                v15 = uu_ls::match_quoting_style_name(*((&v3 as &char + 8) as &i64), v2, a1) as i32;
                a1 = v15 >> 16;
                if a1 == 4 {
                    v9 = std::env::args();
                    <std::env::Args as core::iter::traits::iterator::Iterator>::next(&v7, &v9);
                    if v7 != 0x8000000000000000 {
                        v6 = v8;
                    } else {
                        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("ls");
                        v6 = v1;
                    }
                    v5 = v7;
                    eprintln!("{:?}: Ignoring invalid value of environment variable QUOTING_STYLE: '{:?}'", &v5, &v3);
                    v0 = std::io::stdio::stdout();
                    v17 = std::sys::pal::unix::io::is_terminal();
                    if !v17 {
                        a1 = 3;
                    }
                    return v12 | 0 * 0x100 | a1 * 0x10000;
                } else {
                    a1 = v15 >> 8;
                    if v2 {
                        return v12 | a1 * 0x100 | a1 * 0x10000;
                    }
                }
                goto LABEL_51f9c3;
            }
        }
        a1 = a0 | -0x100 | 3;
        return v12 | a1 * 0x100 | a1 * 0x10000;
    } else {
        v12 = uu_ls::match_quoting_style_name(*((v11 + 8) as &i64), *((v11 + 16) as &i64), a1) as i32;
        a1 = v12 >> 16;
        if a1 == 4 {
            panic!("internal error: entered unreachable code: Should have been caught by Clap");
        }
        a1 = v12 >> 8;
LABEL_51f9c3:
        return v12 | a1 * 0x100 | a1 * 0x10000;
    }
}
