fn uu_tail::args::FilterMode::from(a0: i64, a1: u64) -> int {
    let v0: Result<struct40, struct16>;  // [bp-0xd8], Other Possible Types: struct28
    let v1: struct32;  // [bp-0xa8]
    let v2: u128;  // [bp-0x98]
    let v3: u128;  // [bp-0x78]
    let v4: iNone;  // [bp-0x68]
    let v5: alloc::string::String;  // [bp-0x58]
    let v6: u64;  // [bp-0x48]
    let v7: alloc::string::String;  // [bp-0x40]
    let v9: u8;  // bpl
    let v10: i64;  // rax
    let v11: u64;  // rdx
    let v12: u64;  // rax
    let v13: u64;  // rax
    let v14: i64;  // rax
    let v15: u64;  // rcx

    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "zero-terminated");
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "bytes");
    v10 = clap_builder::parser::error::MatchesError::unwrap("bytes", &v0);
    if v10 {
        v1 = uu_tail::args::parse_num(*((v10 + 8) as &i64), *((v10 + 16) as &i64));
        if v1.field_0 as i32 != 4 {
            v4 = v2;
            v3 = *(&v1.field_0 as &i128);
            v5 = format!("invalid number of bytes: '{}'", &v3);
            v0 = struct28 {
                field_0: *(&v5.vec.buf.inner.cap as &i128)
                field_16: v6
                field_24: 1
            };
            v13 = alloc::boxed::Box<T>::new(&v0) as u64;
            return struct24 {
                field_0: 5
                field_8: v13
                field_16: &g_572f18
            };
        }
    } else {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "lines");
        v14 = clap_builder::parser::error::MatchesError::unwrap("lines", &v0);
        if v14 {
            v1 = uu_tail::args::parse_num(*((v14 + 8) as &i64), *((v14 + 16) as &i64));
            if v1.field_0 as i32 != 4 {
                v4 = v2;
                v3 = *(&v1.field_0 as &i128);
                v7 = format!("invalid number of lines: {}", &v3);
                v0 = struct28 {
                    field_0: *(&v7.vec.buf.inner.cap as &i128)
                    field_16: v7.vec.len
                    field_24: 1
                };
                v13 = alloc::boxed::Box<T>::new(&v0) as u64;
                return struct24 {
                    field_0: 5
                    field_8: v13
                    field_16: &g_572f18
                };
            }
        }
    }
    return struct24 {
        field_0: v12
        field_8: v15
        field_16: v11
    };
}
