fn uu_nl::helper::parse_options(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: alloc::string::String;  // [bp-0xf8], Other Possible Types: Result<struct40, struct16>, struct24, u128
    let v1: u64;  // [bp-0xf8]
    let v2: struct24;  // [bp-0xf8]
    let v3: struct24;  // [bp-0xf8]
    let v4: struct24;  // [bp-0xf8], Other Possible Types: u8
    let v5: Result<struct40, struct16>;  // [bp-0xf8]
    let v6: u64;  // [bp-0xf0]
    let v7: u64;  // [bp-0xe8]
    let v8: void*;  // [bp-0xc0], Other Possible Types: struct16
    let v9: struct16;  // [bp-0xc0]
    let v10: u64;  // [bp-0xb8]
    let v11: void*;  // [bp-0xb0]
    let v12: alloc::string::String;  // [bp-0xa8], Other Possible Types: struct24
    let v13: u64;  // [bp-0x98]
    let v14: i64;  // [bp-0x88]
    let v15: struct24;  // [bp-0x70]
    let v16: struct24;  // [bp-0x58]
    let v17: struct24;  // [bp-0x40]
    let v19: i64;  // rax
    let v20: u64;  // rax
    let v21: u64;  // rax
    let v22: struct24;  // al
    let v23: i64;  // rax
    let v24: i64;  // rax
    let v25: i64;  // rax
    let v26: i64;  // rax
    let v27: i64;  // rax
    let v28: i64;  // rax
    let v29: i64;  // rax

    v8 = 0;
    v10 = 8;
    v11 = 0;
    *((a1 + 128) as &u8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, "no-renumber");
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, a2, "section-delimiter");
    v19 = clap_builder::parser::error::MatchesError::unwrap("section-delimiter", &v4);
    if v19 {
        v14 = v19;
        if *((v19 + 16) as &i64) == 1 {
            v12 = format!("{}:", &v14);
            v0 = *(&v12.vec.buf.inner.cap as &i128);
            v7 = v13;
        } else {
            v0 = <alloc::string::String as core::clone::Clone>::clone(v19);
        }
        *((a1 + 64) as &u64) = v7;
        *((a1 + 48) as &i128) = *(&v1 as &i128);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, a2, "number-separator");
    v20 = clap_builder::parser::error::MatchesError::unwrap("number-separator", &v4);
    if v20 {
        <alloc::string::String as core::clone::Clone>::clone_from(a1 + 72, v20);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, a2, "number-format");
    v21 = clap_builder::parser::error::MatchesError::unwrap("number-format", &v4);
    if v21 {
        <uu_nl::NumberFormat as core::convert::From<T>>::from(v21);
    }
    *((a1 + 129) as &struct24) = v22;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, a2, "header-numbering");
    v23 = clap_builder::parser::error::MatchesError::unwrap("header-numbering", &v4);
    if v23 {
        v2 = <uu_nl::NumberingStyle as core::convert::TryFrom<&str>>::try_from(*((v23 + 8) as &i64), *((v23 + 16) as &i64));
        if (((0 ^ v2.field_0 as i64) & (0 ^ -(v1))) >> 63) as char {
            *(a1 as &u64) = v6;
            *((a1 + 8) as &u64) = v7;
        } else if v2.field_0 as i64 != 9223372036854775809 {
            v15 = struct24 {
                field_0: v2.field_0 as i64
                field_16: v7
            };
            v8 = alloc::vec::Vec<T,A>::push(&v15, "src/uu/nl/src/helper.rs");
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, a2, "body-numbering");
    v24 = clap_builder::parser::error::MatchesError::unwrap("body-numbering", &v4);
    if v24 {
        v3 = <uu_nl::NumberingStyle as core::convert::TryFrom<&str>>::try_from(*((v24 + 8) as &i64), *((v24 + 16) as &i64));
        if (((0 ^ v3.field_0 as i64) & (0 ^ -(v1))) >> 63) as char {
            *((a1 + 16) as &u64) = v6;
            *((a1 + 24) as &u64) = v7;
        } else if v3.field_0 as i64 != 9223372036854775809 {
            v16 = struct24 {
                field_0: v3.field_0 as i64
                field_16: v7
            };
            v8 = alloc::vec::Vec<T,A>::push(&v16, "src/uu/nl/src/helper.rs");
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, a2, "footer-numbering");
    v25 = clap_builder::parser::error::MatchesError::unwrap("footer-numbering", &v4);
    if v25 {
        v0 = <uu_nl::NumberingStyle as core::convert::TryFrom<&str>>::try_from(*((v25 + 8) as &i64), *((v25 + 16) as &i64));
        if (((0 ^ v0.field_0 as i64) & (0 ^ -(v1))) >> 63) as char {
            *((a1 + 32) as &u64) = v6;
            *((a1 + 40) as &u64) = v7;
        } else if v0.field_0 as i64 != 9223372036854775809 {
            v17 = struct24 {
                field_0: v0.field_0 as i64
                field_16: v7
            };
            v8 = alloc::vec::Vec<T,A>::push(&v17, "src/uu/nl/src/helper.rs");
        }
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2);
    v26 = clap_builder::parser::error::MatchesError::unwrap(&v0);
    if v26 {
        if *(v26 as &i64) {
            *((a1 + 120) as &i64) = *(v26 as &i64);
        } else {
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Invalid line number field width: ‘0’: Numerical result out of range");
            v12 = v4;
            v9 = alloc::vec::Vec<T,A>::push(&v12, "src/uu/nl/src/helper.rs");
        }
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2);
    v27 = clap_builder::parser::error::MatchesError::unwrap(&v0);
    if v27 {
        if *(v27 as &i64) {
            *((a1 + 112) as &i64) = *(v27 as &i64);
        } else {
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Invalid line number of blank lines: ‘0’: Numerical result out of range");
            v12 = v4;
            v8 = alloc::vec::Vec<T,A>::push(&v12, "src/uu/nl/src/helper.rs");
        }
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "line-increment");
    v28 = clap_builder::parser::error::MatchesError::unwrap("line-increment", &v0);
    if v28 {
        *((a1 + 104) as &i64) = *(v28 as &i64);
    }
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "starting-line-number");
    v29 = clap_builder::parser::error::MatchesError::unwrap("starting-line-number", &v5);
    if v29 {
        *((a1 + 96) as &i64) = *(v29 as &i64);
    }
    return struct24 {
        field_0: *((&v5 as &char + 56) as &i128)
        field_16: 0
    };
}
