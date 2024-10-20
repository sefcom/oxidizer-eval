fn uu_factor::uumain(a0: i64, a1: i64) -> u64 {
    let v6: i64;  // [sp-0x420]
    let v7: i8;  // [sp-0x418]
    let v8: i32;  // [sp-0x40c]
    let v9: i64;  // [sp-0x408], Other Possible Types: struct16, struct64
    let v11: i8;  // [bp-0x3f8]
    let v12: i8;  // [bp-0x3e8]
    let v13: i8;  // [bp-0x3d8]
    let v18: i264;  // [sp-0x398], Other Possible Types: struct33
    let v19: i64;  // [sp-0x370]
    let v20: i64;  // [sp-0x368]
    let v21: i128;  // [sp-0x360]
    let v22: i128;  // [sp-0x350]
    let v23: i64;  // [sp-0x340]
    let v24: i64;  // [sp-0x338]
    let v27: i64;  // [sp-0x320]
    let v28: i64;  // [sp-0x318]
    let v30: i128;  // [sp-0x2f8], Other Possible Types: struct712, Enum
    let v32: i128;  // [bp-0x2e8]
    let v34: i128;  // [bp-0x2d8]
    let v36: i128;  // [bp-0x2c8]
    let v40: i64;  // r14
    let v41: i64;  // rbp
    let v42: i64;  // rsi
    let v43: i64;  // rdx
    let v44: i64;  // r14
    let v45: i64;  // r15
    let v46: i128;  // xmm0
    let v47: i128;  // xmm1
    let v48: i128;  // xmm2
    let v49: i64;  // rax
    let v51: i64;  // rdx

    v30 = uu_factor::uu_app();
    v9 = clap_builder::builder::command::Command::try_get_matches_from(&v30, a0, a1);
    v24 = 0x8000000000000000;
    if v19 == 0x8000000000000000 {
        v40 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
    }
    v23 = v13;
    v22 = v12;
    v21 = v11;
    v19 = v9;
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, _ZN9uu_factor7options9EXPONENTS17h290017ce7ecf20b6E, g_539900) as i32;
    v27 = std::io::stdio::stdout();
    v18 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x1000, std::io::stdio::Stderr::lock(&v27, v42, v43));
    v44 = _ZN9uu_factor7options6NUMBER17h2174a2e50e1eb8b7E;
    v45 = g_539910;
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v19, v44, v45);
    v9 = clap_builder::parser::error::MatchesError::unwrap(v44, v45, &v30);
    if !v9 {
        v28 = std::io::stdio::stdin();
        v6 = std::io::stdio::Stdin::lock(&v28);
        v51 = v43 | -0x100 | v43 & 1;
        v7 = v43 & 1;
        v8 = v41;
    } else {
        v46 = v9;
        v47 = *((&v9 as &char + 16) as &i128);
        v48 = *((&v9 as &char + 32) as &i128);
        v36 = *((&v9 as &char + 48) as &i128);
        v34 = v48;
        v32 = v47;
        v30 = v46;
        do {
            v49 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v30);
        } while ((v40 = uu_factor::print_factors_str(*((v49 + 8) as &i64), *((v49 + 16) as &i64), &v18, v41 & 4294967295 & 4294967295), !v40));
    }
}
