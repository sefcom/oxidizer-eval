fn uu_factor::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x408]
    let v1: i8;  // [sp-0x400]
    let v2: i64;  // [sp-0x3f8]
    let v3: i64;  // [sp-0x3f0]
    let v4: i64;  // [sp-0x3e8]
    let v5: i64;  // [sp-0x3e0]
    let v6: struct1;  // [sp-0x3d8], Other Possible Types: unsigned long, Option<Result<struct24, struct8>>
    let v7: i64;  // [sp-0x3c0], Other Possible Types: char, struct64
    let v8: i64;  // [sp-0x3b8]
    let v9: i8;  // [bp-0x3b0]
    let v10: i8;  // [bp-0x3a0]
    let v11: i8;  // [bp-0x390]
    let v12: i64;  // [sp-0x380]
    let v13: i64;  // [sp-0x378]
    let v14: i64;  // [sp-0x370]
    let v15: i64;  // [sp-0x358]
    let v16: i64;  // [sp-0x350]
    let v17: iNone;  // [sp-0x348]
    let v18: iNone;  // [sp-0x338]
    let v19: i64;  // [sp-0x328]
    let v20: struct33;  // [sp-0x320]
    let v21: iNone;  // [sp-0x2f8], Other Possible Types: struct712, struct56, unsigned long
    let v22: i64;  // [sp-0x2f0]
    let v23: iNone;  // [bp-0x2e8], Other Possible Types: struct40
    let v24: iNone;  // [bp-0x2d8]
    let v25: iNone;  // [bp-0x2c8]
    let v26: i16;  // [sp-0x2c0]
    let v28: i64;  // r15
    let v29: i32;  // ebp
    let v30: iNone;  // xmm0
    let v31: iNone;  // xmm1
    let v32: iNone;  // xmm2
    let v33: struct8;  // rax
    let v34: i64;  // rax
    let v35: struct8;  // rax
    let v36: i64;  // rdx, Other Possible Types: char
    let v37: struct1;  // rax

    v21 = uu_factor::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v7, &v21, a0, a1);
    if v15 == 0x8000000000000000 {
        v28 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
        return v28;
    }
    v19 = *(&v11 as &i64);
    v18 = *(&v10 as &i128);
    v17 = *(&v9 as &i128);
    v15 = v7;
    v16 = v8;
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, _ZN9uu_factor7options9EXPONENTS17he776d04d341a4ac5E, g_58ddd8) as i32;
    v13 = std::io::stdio::stdout();
    v20 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x1000, std::io::stdio::Stderr::lock(&v13));
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v15, _ZN9uu_factor7options6NUMBER17hef2df56071e79773E, g_58dde8);
    v7 = clap_builder::parser::error::MatchesError::unwrap(_ZN9uu_factor7options6NUMBER17hef2df56071e79773E, g_58dde8, &v21);
    if !v7 {
        v14 = std::io::stdio::stdin();
        v0 = std::io::stdio::Stdin::lock(&v14);
        v1 = v36 & 1;
        v12 = 9223372036854775809;
    } else {
        v30 = v7.field_0;
        v31 = v7.field_16;
        v32 = v7.field_32;
        *(&v25 as &u128) = v7.field_48;
        v24 = v32;
        v23 = v31;
        v21 = v30;
        do {
            v33 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
            if !v33 {
                goto LABEL_4a48cc;
            }
        } while (!uu_factor::print_factors_str(*((v33 + 8) as &i64), *((v33 + 16) as &i64), &v20, v29 as u64));
        goto LABEL_4a4aef;
    }
    loop {
LABEL_4a47c3:
        v6 = <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v0);
        v34 = v6;
        if v34 == v12 {
LABEL_4a48cc:
            v37 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
            if !v37 {
                return 0;
            }
            v6 = v37;
            v8 = v36;
            show_error!("{}", &v6);
        }
        if v34 == 0x8000000000000000 {
            v5 = v3;
            uucore::mods::error::set_exit_code(1);
            v3 = v36;
            show_error!("error reading input: {}", &v5);
LABEL_4a4aef:
            return v28;
        }
        v2 = v34;
        v3 = v5;
        v4 = v22;
        v23 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v3, v4);
        v21 = 0;
        v22 = v4;
        v26 = 1;
        do {
            v35 = core::iter::traits::iterator::Iterator::try_fold(&v21);
            if !v35 {
                goto LABEL_4a47c3;
            }
        } while (!uu_factor::print_factors_str(v35, v36, &v20, v29 as u64));
    }
}
