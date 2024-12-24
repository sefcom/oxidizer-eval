fn uu_cut::get_delimiters(a0: u32, a1: u32, a2: u8) -> u64 {
    let v0: i128;  // [sp-0x58], Other Possible Types: Result<struct16, struct10>, struct24
    let v1: i32;  // [sp-0x40]
    let v3: i8;  // r15b
    let v4: i64;  // rax
    let v5: i64;  // r12
    let v6: i64;  // rsi
    let v7: i64;  // rdx
    let v8: i64;  // r15
    let v10: i64;  // r13
    let v11: i64;  // rbp
    let v12: i64;  // r15
    let v13: i64;  // rdx
    let v14: i64;  // rax
    let v15: i64;  // rax
    let v16: i64;  // rax

    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "whitespace-delimited") as i32;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "delimiter");
    v4 = clap_builder::parser::error::MatchesError::unwrap("delimiter", &v0);
    if !v4 {
        v5 = (!v3 ? &g_41dd21 : 0);
        goto LABEL_4b785c;
    } else {
        if v3 {
            v6 = &g_41dd80;
            v7 = 73;
            goto LABEL_4b7764;
        }
        v8 = 1;
        if a2 {
            v5 = &g_41dd7f;
            goto LABEL_4b785c;
        }
        v10 = v4;
        v5 = &g_41dd7e;
        if !(!<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v4 + 8) as &i64), *((v4 + 16) as &i64)) as i8) || !((v11 = *((v10 + 16) as &i64), v11)) {
LABEL_4b785c:
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "output-delimiter");
            v15 = clap_builder::parser::error::MatchesError::unwrap("output-delimiter", &v0);
            v16 = (!v15 ? 0 : uu_cut::get_delimiters::{{closure}}(*((v15 + 8) as &i64), *((v15 + 16) as &i64)));
            *((a0 + 8) as &i64) = v5;
            *((a0 + 16) as &i64) = 1;
            *((a0 + 24) as &i64) = v16;
            *((a0 + 32) as &i64) = v13;
            v14 = 0;
        } else {
            v12 = *((v10 + 8) as &i64);
            v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v12, v11);
            if (!(!v0) || !(<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64) + *((&v0 as &char + 8) as &i64), v13) > 1)) && !((v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v12, v11), !(v11 == 1) && !(!v0))) {
                v5 = <uu_cut::Delimiter as core::convert::From<&std::ffi::os_str::OsString>>::from(v10);
                goto LABEL_4b785c;
            } else {
                v6 = &g_41dd56;
                v7 = 40;
LABEL_4b7764:
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v6, v7);
                v1 = 1;
                *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
                *((a0 + 16) as &&i64) = &g_529df0;
                v14 = 1;
            }
        }
    }
    return struct8 {
        field_0: v14
    };
}
