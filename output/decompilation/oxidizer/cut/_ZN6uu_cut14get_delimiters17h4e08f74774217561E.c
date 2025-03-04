fn uu_cut::get_delimiters(a0: &Result<struct32, struct16>, a1: u32, a2: u8) -> u64 {
    let v0: Result<struct40, struct8>;  // [sp-0x58], Other Possible Types: struct24
    let v1: i32;  // [sp-0x40]
    let v3: i8;  // r15b
    let v4: i64;  // rax
    let v5: i64;  // r12
    let v6: i64;  // rsi
    let v7: i64;  // rdx
    let v8: i64;  // r15
    let v9: i64;  // r13
    let v10: i64;  // rbp
    let v11: i64;  // r15
    let v12: i64;  // rdx
    let v14: i64;  // rax
    let v15: i64;  // rax

    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "whitespace-delimited") as i32;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "delimiter");
    v4 = clap_builder::parser::error::MatchesError::unwrap("delimiter", &v0);
    if !v4 {
        v5 = (!v3 ? &g_41dc19 : 0);
        v8 = 1;
        goto LABEL_4b749c;
    } else {
        if v3 {
            v6 = &g_41dc38;
            v7 = 73;
            goto LABEL_4b73a4;
        }
        v8 = 1;
        if a2 {
            v5 = &g_41dcc0;
            goto LABEL_4b749c;
        }
        v9 = v4;
        v5 = &g_41dcbf;
        if !(!<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v4 + 8) as &i64), *((v4 + 16) as &i64)) as i8) || !((v10 = *((v9 + 16) as &i64), v10)) {
LABEL_4b749c:
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "output-delimiter");
            v14 = clap_builder::parser::error::MatchesError::unwrap("output-delimiter", &v0);
            v15 = (!v14 ? 0 : uu_cut::get_delimiters::{{closure}}(*((v14 + 8) as &i64), *((v14 + 16) as &i64)));
            *((a0 + 8) as &unsigned long) = v5;
            *((a0 + 16) as &unsigned long) = v8;
            *((a0 + 24) as &unsigned long) = v15;
            *((a0 + 32) as &unsigned long) = v12;
        } else {
            v11 = *((v9 + 8) as &i64);
            v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v11, v10);
            if (!(!v0 as i64) || !(<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64) + *((&v0 as &char + 8) as &i64)) > 1)) && !((v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v11, v10), !(v10 == 1) && !(!v0 as i64))) {
                v5 = <uu_cut::Delimiter as core::convert::From<&std::ffi::os_str::OsString>>::from(v9);
                v8 = v12;
                goto LABEL_4b749c;
            } else {
                v6 = &g_41dc81;
                v7 = 40;
LABEL_4b73a4:
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v6, v7);
                v1 = 1;
                *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
                *((a0 + 16) as &&i64) = &g_528da0;
            }
        }
    }
    return struct8 {
        field_0: v13
    };
}
