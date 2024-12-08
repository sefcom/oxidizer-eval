fn uu_factor::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x408]
    let v1: i8;  // [sp-0x400]
    let v2: i64;  // [sp-0x3f8]
    let v3: i64;  // [sp-0x3f0]
    let v4: i64;  // [sp-0x3e8]
    let v5: i64;  // [sp-0x3e0]
    let v6: i64;  // [sp-0x3d8], Other Possible Types: Option<Result<struct24, struct16>>
    let v7: i8;  // [bp-0x3c0], Other Possible Types: struct64
    let v8: i64;  // [sp-0x3b8]
    let v9: i8;  // [bp-0x3b0]
    let v10: i8;  // [bp-0x3a0]
    let v11: i8;  // [bp-0x390]
    let v12: i64;  // [sp-0x380]
    let v13: i64;  // [sp-0x378]
    let v14: i64;  // [sp-0x370]
    let v15: i64;  // [sp-0x358]
    let v16: i64;  // [sp-0x350]
    let v17: i128;  // [sp-0x348]
    let v18: i128;  // [sp-0x338]
    let v19: i64;  // [sp-0x328]
    let v20: struct33;  // [sp-0x320], Other Possible Types: i264
    let v21: i128;  // [sp-0x2f8], Other Possible Types: struct56, struct712
    let v22: i128;  // [bp-0x2e8]
    let v23: i128;  // [bp-0x2d8]
    let v24: i128;  // [bp-0x2c8]
    let v26: i64;  // rdx
    let v27: i64;  // rax
    let v28: i32;  // ebp
    let v29: i64;  // rsi
    let v30: i128;  // xmm0
    let v31: i128;  // xmm1
    let v32: i128;  // xmm2
    let v33: i64;  // rsi
    let v34: i64;  // rdx
    let v35: struct8;  // rax
    let v37: i64;  // rax
    let v38: i64;  // rdx
    let v39: struct8;  // rax
    let v40: i64;  // rax

    v21 = uu_factor::uu_app(a1, v26);
    clap_builder::builder::command::Command::try_get_matches_from(&v7, &v21, a0, a1);
    if v15 == 0x8000000000000000 {
        v27 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
        return v27;
    }
    v19 = v11;
    v18 = v10;
    v17 = v9;
    v15 = v7;
    v16 = v8;
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, _ZN9uu_factor7options9EXPONENTS17hb6053a3601130180E, g_58dec8) as i32;
    v13 = std::io::stdio::stdout();
    v20 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x1000, std::io::stdio::Stderr::lock(&v13, v29, v26));
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v15, _ZN9uu_factor7options6NUMBER17hf8aa9b1766dbccc5E, g_58ded8);
    v7 = clap_builder::parser::error::MatchesError::unwrap(_ZN9uu_factor7options6NUMBER17hf8aa9b1766dbccc5E, g_58ded8, &v21);
    if !v7 {
        v14 = std::io::stdio::stdin();
        v0 = std::io::stdio::Stdin::lock(&v14);
        v1 = v26 & 1;
        v12 = 9223372036854775809;
        loop {
            v6 = <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v0, v26 | -0x100 | v26 & 1);
            v37 = v6;
            if v37 == v12 {
LABEL_4a12dc:
                v40 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v20);
                if !v40 {
                    return 0;
                }
                v6 = v40;
                v7 = uucore::util_name();
                v7.8 = vvar_323{reg 32};
                eprint!("{:?}: ", &v7);
                eprintln!("{:?}", &v6);
            }
            if v37 == 0x8000000000000000 {
                break;
            }
            v2 = v37;
            v3 = v5;
            v4 = v21.field_8;
            v21.field_16 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(vvar_497{stack -1008}, vvar_498{stack -1000});
            v21 = 0;
            v21.field_8 = vvar_498{stack -1000};
            v21.56 = 1;
            loop {
                v39 = core::iter::traits::iterator::Iterator::try_fold(&v21, v38);
                if !v39 {
                    break;
                }
                v27 = uu_factor::print_factors_str(v39, v26, &v20, v28);
                if v27 {
                    goto LABEL_4a129e;
                }
            }
        }
        v5 = v3;
        uucore::mods::error::set_exit_code();
        v2 = uucore::util_name();
        v3 = v26;
        eprint!("{:?}: ", &v2);
        eprintln!("error reading input: {:?}", &v5);
        v27 = 0;
LABEL_4a129e:
    } else {
        v30 = v7;
        v31 = *((&v7 as &char + 16) as &i128);
        v32 = *((&v7 as &char + 32) as &i128);
        v24 = *((&v7 as &char + 48) as &i128);
        v23 = v32;
        v22 = v31;
        v21 = v30;
        do {
            v35 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v33, v34);
            if !v35 {
                goto LABEL_4a12dc;
            }
        } while ((v27 = uu_factor::print_factors_str(*((v35 + 8) as &i64), *((v35 + 16) as &i64), &v20, v28 as u32 as u64), !v27));
    }
    return v27;
}
