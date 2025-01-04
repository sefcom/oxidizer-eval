fn uu_factor::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x408]
    let v1: i8;  // [sp-0x400]
    let v2: i64;  // [sp-0x3f8]
    let v3: i64;  // [sp-0x3f0]
    let v4: i64;  // [sp-0x3e8]
    let v5: i64;  // [sp-0x3e0]
    let v6: i64;  // [sp-0x3d8], Other Possible Types: Option<Result<struct24, struct16>>
    let v7: i64;  // [sp-0x3c0], Other Possible Types: Result<struct56, struct16>, struct64
    let v8: i64;  // [sp-0x3b8]
    let v9: i64;  // [sp-0x380]
    let v10: i64;  // [sp-0x378]
    let v11: i64;  // [sp-0x370]
    let v12: i64;  // [sp-0x358]
    let v13: i64;  // [sp-0x350]
    let v14: i128;  // [sp-0x348]
    let v15: i128;  // [sp-0x338]
    let v16: i64;  // [sp-0x328]
    let v17: struct33;  // [sp-0x320], Other Possible Types: i264
    let v18: i64;  // [sp-0x2f8], Other Possible Types: struct712, struct56
    let v19: i64;  // [sp-0x2f0]
    let v20: i128;  // [bp-0x2e8], Other Possible Types: struct40
    let v21: i128;  // [bp-0x2d8]
    let v22: i128;  // [bp-0x2c8]
    let v23: i16;  // [sp-0x2c0]
    let v25: i64;  // r8
    let v26: i64;  // r9
    let v27: i64;  // rax
    let v28: i32;  // ebp
    let v29: i64;  // rsi
    let v30: i64;  // rdx
    let v31: i128;  // xmm0
    let v32: i128;  // xmm1
    let v33: i128;  // xmm2
    let v34: i64;  // rsi
    let v35: i64;  // rdx
    let v36: struct8;  // rax
    let v38: i64;  // rax
    let v39: i64;  // rdx
    let v40: struct8;  // rax
    let v41: i64;  // rax

    v18 = uu_factor::uu_app(a1, a2);
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v18, a0, a1, v25, v26);
    if v12 == 0x8000000000000000 {
        v27 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
        return v27;
    }
    v16 = *((&v7 as &char + 48) as &i64);
    v15 = *((&v7 as &char + 32) as &i128);
    v14 = *((&v7 as &char + 16) as &i128);
    v12 = v7;
    v13 = v8;
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, _ZN9uu_factor7options9EXPONENTS17he776d04d341a4ac5E, g_58ddd8) as i32;
    v10 = std::io::stdio::stdout();
    v17 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x1000, std::io::stdio::Stderr::lock(&v10, v29, v30));
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12, _ZN9uu_factor7options6NUMBER17hef2df56071e79773E, g_58dde8);
    v7 = clap_builder::parser::error::MatchesError::unwrap(_ZN9uu_factor7options6NUMBER17hef2df56071e79773E, g_58dde8, &v18);
    if !v7 {
        v11 = std::io::stdio::stdin();
        v0 = std::io::stdio::Stdin::lock(&v11);
        v1 = v30 & 1;
        v9 = 9223372036854775809;
        loop {
            v6 = <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v0, v30 | -0x100 | v30 & 1);
            v38 = v6;
            if v38 == v9 {
LABEL_4a48cc:
                v41 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v17);
                if !v41 {
                    return 0;
                }
                v6 = v41;
                v7 = uucore::util_name();
                v8 = v30;
                eprint!("{:?}: ", &v7);
                eprintln!("{:?}", &v6);
            }
            if v38 == 0x8000000000000000 {
                break;
            }
            v2 = v38;
            v3 = v5;
            v4 = v19;
            v20 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v3, v4);
            v18 = 0;
            v19 = v4;
            v23 = 1;
            loop {
                v40 = core::iter::traits::iterator::Iterator::try_fold(&v18, v39);
                if !v40 {
                    break;
                }
                v27 = uu_factor::print_factors_str(v40, v30, &v17, v28);
                if v27 {
                    goto LABEL_4a488e;
                }
            }
        }
        v5 = v3;
        uucore::mods::error::set_exit_code();
        v2 = uucore::util_name();
        v3 = v30;
        eprint!("{:?}: ", &v2);
        eprintln!("error reading input: {:?}", &v5);
        v27 = 0;
LABEL_4a488e:
    } else {
        v31 = v7;
        v32 = *((&v7 as &char + 16) as &i128);
        v33 = *((&v7 as &char + 32) as &i128);
        v22 = *((&v7 as &char + 48) as &i128);
        v21 = v33;
        v20 = v32;
        v18 = v31;
        do {
            v36 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v34, v35);
            if !v36 {
                goto LABEL_4a48cc;
            }
        } while ((v27 = uu_factor::print_factors_str(*((v36 + 8) as &i64), *((v36 + 16) as &i64), &v17, v28 as u32 as u64), !v27));
    }
    return v27;
}
