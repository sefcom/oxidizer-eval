fn uu_factor::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x408]
    let v1: i8;  // [sp-0x400]
    let v7: i512;  // [bp-0x3c0], Other Possible Types: struct64
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
    let v20: i264;  // [sp-0x320], Other Possible Types: struct33
    let v21: i5696;  // [sp-0x2f8], Other Possible Types: struct712, struct56
    let v23: i128;  // [bp-0x2e8]
    let v24: i128;  // [bp-0x2d8]
    let v25: i128;  // [bp-0x2c8]
    let v29: i32;  // ebp
    let v30: i128;  // xmm0
    let v31: i128;  // xmm1
    let v32: i128;  // xmm2
    let v33: struct8;  // rax
    let v36: i8;  // rdx

    v21 = uu_factor::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v7, &v21, a0, a1);
    if v15 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
    }
    v19 = v11;
    v18 = v10;
    v17 = v9;
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
        v30 = v7;
        v31 = *((&v7 as &char + 16) as &i128);
        v32 = *((&v7 as &char + 32) as &i128);
        v25 = *((&v7 as &char + 48) as &i128);
        v24 = v32;
        v23 = v31;
        v21 = v30;
        do {
            v33 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
        } while (!uu_factor::print_factors_str(*((v33 + 8) as &i64), *((v33 + 16) as &i64), &v20, v29));
    }
}
