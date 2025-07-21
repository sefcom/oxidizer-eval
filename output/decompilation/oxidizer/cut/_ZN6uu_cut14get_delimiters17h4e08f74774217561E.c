fn uu_cut::get_delimiters(a1: i64, a2: i32) -> Result<struct32, struct16> {
    let a0: u64;  // rsi
    let v0: Result<struct40, struct16>;  // [bp-0x58]
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x58]
    let v2: u64;  // [bp-0x50]
    let v3: u64;  // [bp-0x48]
    let v6: u8;  // r15b
    let v7: i64;  // rax
    let v8: struct40;  // r12
    let v9: u64;  // rsi
    let v10: i64;  // r14
    let v11: u64;  // rdx
    let v14: i64;  // r13
    let v15: u64;  // rbp
    let v16: struct28;  // rdx
    let v17: i64;  // rdi
    let v18: u64;  // rax
    let v19: i64;  // rax
    let v20: u64;  // rax

    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "whitespace-delimited") as i32;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "delimiter");
    v7 = clap_builder::parser::error::MatchesError::unwrap("delimiter", &v0);
    if v7 {
        if v6 {
LABEL_4b73a4:
            <T as alloc::slice::hack::ConvertVec>::to_vec(v9, v11, a2);
            *((v17 + 8) as &double) = alloc::boxed::Box<T>::new(v10);
            *((v17 + 16) as &&u128) = &g_528da0.field_0;
            *(v17 as &u64) = v18;
            return;
        } else if !a1 {
            v14 = v7;
            if !<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v7 + 8) as &i64), *((v7 + 16) as &i64), a1) && (v15 = *((v14 + 16) as &i64), v15) {
                v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((v14 + 8) as &i64), v15);
                if !((v0 as i64 || <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v2, v3 + v2) <= 1) && (v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((v14 + 8) as &i64), v15), v15 == 1 || !v1 as i64)) {
                    goto LABEL_4b73a4;
                }
                <uu_cut::Delimiter as core::convert::From<&std::ffi::os_str::OsString>>::from(v14);
            }
        }
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "output-delimiter");
    v19 = clap_builder::parser::error::MatchesError::unwrap("output-delimiter", &v0);
    v20 = (!v19 ? 0 : uu_cut::get_delimiters::{{closure}}(*((v19 + 8) as &i64), *((v19 + 16) as &i64)));
    *((v17 + 8) as &struct40) = v8;
    *((v17 + 16) as &i64) = 1;
    *((v17 + 24) as &u64) = v20;
    *((v17 + 32) as &struct28) = v16;
    *(v17 as &u64) = v18;
    return;
}
