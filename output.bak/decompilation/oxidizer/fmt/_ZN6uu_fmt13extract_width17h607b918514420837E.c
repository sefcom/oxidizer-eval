fn uu_fmt::extract_width(a0: &Option<Result<struct16, struct8>>, a1: u32) -> u64 {
    let v0: i320;  // [sp-0xb8], Other Possible Types: Result<struct40, struct8>
    let v1: i64;  // [sp-0xb0]
    let v2: i64;  // [sp-0xa8]
    let v3: i64;  // [sp-0xa0]
    let v4: i64;  // [sp-0x98]
    let v5: i72;  // [sp-0x88], Other Possible Types: Result<struct8, struct1>
    let v6: i64;  // [sp-0x78]
    let v7: i64;  // [sp-0x70]
    let v8: i64;  // [sp-0x68]
    let v9: i64;  // [sp-0x60]
    let v10: i64;  // [sp-0x58]
    let v11: i8;  // [sp-0x50]
    let v12: i8;  // [bp-0x48]
    let v13: i32;  // [sp-0x30]
    let v15: i64;  // rax
    let v16: i64;  // r14
    let v17: i64;  // r15
    let v18: i64;  // rax
    let v20: i64;  // r13
    let v21: i64;  // rcx
    let v24: i64;  // rdx
    let v25: i64;  // rax
    let v26: i64;  // r15

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "width");
    v15 = clap_builder::parser::error::MatchesError::unwrap("width", &v0);
    if !v15 {
        v18 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a1, "files");
        v20 = 8;
        v21 = 0;
        if v18 != 1 {
            *((a0 + v20) as &i64) = v21;
            return struct8 {
                field_0: 0
            };
        }
        v21 = 0;
        if v24 == 1 {
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "files");
            v25 = clap_builder::parser::error::MatchesError::unwrap("files", &v0);
            v26 = *((v25 + 16) as &i64);
            v0 = 0;
            v18 = <&str as core::str::pattern::Pattern>::strip_prefix_of(core::char::methods::encode_utf8_raw(&v0), core::option::unwrap(v25), v26);
            if !v18 {
                v21 = 0;
            } else {
                v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v18, v24);
                *((a0 + 8) as &u64) = v0 ^ 1;
                v20 = 16;
                v21 = v1;
            }
        }
    } else {
        v16 = *((v15 + 8) as &i64);
        v17 = *((v15 + 16) as &i64);
        v5 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v16, v17);
        if !v5 {
            return struct24 {
                field_0: v23
                field_8: v18
                field_16: v22
            };
        }
        v8 = 0;
        v9 = v16;
        v10 = v17;
        v11 = 1;
        v6 = &v8;
        v7 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(&v0 as &&str) = "invalid width: ";
        v1 = 1;
        v4 = 0;
        v2 = &v6;
        v3 = 1;
        core::option::Option<T>::map_or_else();
        v13 = 1;
        alloc::boxed::Box<T>::new(&v12);
    }
}
