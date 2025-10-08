fn uu_factor::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0x3f0]
    let v1: u64;  // [bp-0x3e0]
    let v2: u64;  // [bp-0x3d8]
    let v3: u64;  // [bp-0x3d0]
    let v4: u64;  // [bp-0x3c8]
    let v6: struct16;  // [bp-0x3b0], Other Possible Types: struct64, u64
    let v7: struct56;  // [bp-0x3b0], Other Possible Types: u64
    let v8: u64;  // [bp-0x3a8]
    let v9: core::fmt::Arguments;  // [bp-0x3a0]
    let v10: iNone;  // [bp-0x390]
    let v11: u128;  // [bp-0x380]
    let v12: u64;  // [bp-0x370]
    let v13: std::io::stdio::Stdout;  // [bp-0x368]
    let v14: std::io::stdio::Stdin;  // [bp-0x360]
    let v15: struct56;  // [bp-0x358]
    let v16: u64;  // [bp-0x350]
    let v17: struct33;  // [bp-0x320]
    let v18: void*;  // [bp-0x2f8], Other Possible Types: struct712, u128
    let v20: u64;  // [bp-0x2f0]
    let v21: core::fmt::Arguments;  // [bp-0x2e8], Other Possible Types: struct40
    let v22: iNone;  // [bp-0x2d8]
    let v23: u128;  // [bp-0x2c8]
    let v24: u16;  // [bp-0x2c0]
    let v26: u8;  // bpl
    let v28: iNone;  // xmm0
    let v29: i64;  // rax
    let v30: void*;  // rax
    let v31: u8;  // dl
    let v32: i64;  // rdi
    let v33: i64;  // rsi
    let v34: u64;  // rax

    v18 = uu_factor::uu_app();
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v18, a0, a1);
    if (((0 ^ v6.field_0) & (0 ^ -(v7))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
    }
    v15 = v7;
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, _ZN9uu_factor7options9EXPONENTS17h64e0a670b6588ba1E.field_0, g_544b50.field_0);
    v13 = std::io::stdio::stdout();
    v17 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(std::io::stdio::Stderr::lock(&v13));
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v15, _ZN9uu_factor7options6NUMBER17h74c352ca63a4ac2aE.field_0, g_544b60.field_0);
    v6 = clap_builder::parser::error::MatchesError::unwrap(_ZN9uu_factor7options6NUMBER17h74c352ca63a4ac2aE.field_0, g_544b60.field_0, &v18);
    if v6.field_0 as i64 {
        v28 = v6.field_0;
        v23 = v11;
        v22 = v10;
        v21 = v9;
        *(&v18 as void*) = v28;
        loop {
            v29 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v18);
            if !v29 {
                break;
            }
            uu_factor::print_factors_str(*((v29 + 8) as &i64), *((v29 + 16) as &i64), &v17, v26);
            if v30 {
                return v30;
            }
        }
    } else {
        v14 = std::io::stdio::stdin();
        v0 = struct16 {
            field_0: std::io::stdio::Stdin::lock(&v14) as u64
            field_8: v31 & 1
        };
        v12 = 9223372036854775809;
        loop {
            <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(v32, v33);
            if v6.field_0 as i64 == 9223372036854775809 {
                break;
            }
            if v6.field_0 as i64 == 0x8000000000000000 {
                v2 = v8;
                uucore::mods::error::set_exit_code(1);
                v3 = uucore::util_name();
                v4 = v31;
                eprint!("{}: ", &v3);
                eprintln!("error reading input: {}", &v2);
                return v30;
            }
            v1 = v8;
            v21 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v8, v9.pieces.ptr);
            v18 = 0;
            v20 = v9.pieces.ptr;
            v24 = 1;
            loop {
                v34 = core::iter::traits::iterator::Iterator::try_fold(&v18);
                if !v34 {
                    break;
                }
                uu_factor::print_factors_str(v34, v31, &v17, v26);
                if v30 {
                    return v30;
                }
            }
        }
    }
    if !<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v17) {
        return 0;
    }
    v6 = uucore::util_name();
    v8 = v31;
    eprint!("{}: ", &v6);
    eprintln!("{}", &v5);
    return 0;
}
