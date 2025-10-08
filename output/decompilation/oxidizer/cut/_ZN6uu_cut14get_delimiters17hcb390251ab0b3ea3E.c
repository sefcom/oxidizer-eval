fn uu_cut::get_delimiters(a1: i64) -> Result<struct32, struct16> {
    let a0: i64;  // rdi
    let v0: Result<struct40, struct16>;  // [bp-0x58]
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x58]
    let v2: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x58]
    let v3: u64;  // [bp-0x50]
    let v4: u64;  // [bp-0x48]
    let v7: u8;  // bpl
    let v8: struct40;  // rax
    let v9: struct56;  // rsi
    let v10: i64;  // r14
    let v11: u64;  // rdx
    let v12: i64;  // r15
    let v13: u64;  // r12
    let v14: u64;  // rdx
    let v15: void*;  // r15
    let v16: u64;  // rax
    let v17: u64;  // rax
    let v18: u64;  // r12
    let v19: i64;  // rax
    let v20: u64;  // rax
    let v21: void*;  // rax

    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "whitespace-delimited");
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "delimiter");
    v8 = clap_builder::parser::error::MatchesError::unwrap("delimiter", &v0);
    if !v8 {
LABEL_46a136:
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "output-delimiter");
        v19 = clap_builder::parser::error::MatchesError::unwrap("output-delimiter", &v0);
        v20 = (!v19 ? 0 : uu_cut::get_delimiters::{{closure}}(*((v19 + 8) as &i64), *((v19 + 16) as &i64)));
        *((a0 + 8) as &void*) = v15;
        *((a0 + 16) as &u64) = v18;
        *((a0 + 24) as &u64) = v20;
        *((a0 + 32) as &u64) = v14;
        v21 = 0;
    }
    if !v7 {
        v12 = v8;
        v13 = *((v8 + 16) as &i64);
        if !v13 || <std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v8 + 8) as &i64), v13, v14) {
            goto LABEL_46a136;
        }
        v1 = core::str::converts::from_utf8(*((v8 + 8) as &i64), v13);
        if v1 as i32 == 1 || <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v3, v4 + v3) <= 1 {
            v2 = core::str::converts::from_utf8(*((v12 + 8) as &i64), *((v12 + 16) as &i64));
            if v13 == 1 || !v2 as i64 {
                v15 = <uu_cut::Delimiter as core::convert::From<&std::ffi::os_str::OsString>>::from(v12);
                goto LABEL_46a136;
            }
        }
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v10, v9, v11);
    v16 = 1;
    return struct24 {
        field_0: v17
        field_8: alloc::boxed::Box<T>::new(v10) as u64
        field_16: &g_4f9218
    };
}
