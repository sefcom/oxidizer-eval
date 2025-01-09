fn uu_ls::parse_time_style(a0: &struct57, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0xf0], Other Possible Types: i320, Option<struct24>, Result<struct40, struct8>
    let v1: struct24;  // [sp-0xe9]
    let v3: i128;  // [sp-0xc8], Other Possible Types: struct24, Option<struct24>
    let v4: i64;  // [sp-0xb8]
    let v5: i128;  // [sp-0xa8], Other Possible Types: struct24
    let v6: i64;  // [sp-0x98]
    let v7: i64;  // [sp-0x88]
    let v8: i64;  // [sp-0x80]
    let v9: i64;  // [sp-0x78]
    let v10: i128;  // [sp-0x68]
    let v11: i64;  // [sp-0x58]
    let v12: i128;  // [sp-0x48]
    let v13: i64;  // [sp-0x38]
    let v16: i64;  // r15
    let v17: i64;  // r15
    let v21: i64;  // rdx
    let v22: i64;  // r12
    let v23: i64;  // r14

    v16 = alloc::alloc::Global::alloc_impl();
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("full-iso");
    v10 = v0;
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("long-iso");
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("iso");
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("locale");
    v5 = v0;
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("+FORMAT (e.g., +%H:%M) for a 'date'-style format");
    *((v16 + 16) as &i64) = v11;
    *(v16 as &i128) = v10;
    *((v16 + 40) as &i64) = v13;
    *((v16 + 24) as &i128) = v12;
    *((v16 + 64) as &i64) = v9;
    *((v16 + 48) as &i192) = v7;
    *((v16 + 72) as &i128) = v5;
    *((v16 + 88) as &i64) = v6;
    *((v16 + 96) as &i128) = v3;
    *((v16 + 112) as &i64) = v4;
    v5 = alloc::slice::hack::into_vec(v16, 5);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "time-style");
    v17 = clap_builder::parser::error::MatchesError::unwrap("time-style", &v0);
    if v17 {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "full-time") as i8 {
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "full-time");
            match v0 {
                None => {
                    core::option::unwrap_failed("src/uu/ls/src/ls.rs"); /* do not return */
                },
                Some(_) => {
                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "time-style");
                    match v0 {
                        None => {
                            core::option::unwrap_failed("src/uu/ls/src/ls.rs"); /* do not return */
                        },
                        Some(_) => {
                            v3 = v0;
                            if core::iter::traits::iterator::Iterator::fold(&v3) && (!(core::iter::traits::iterator::Iterator::fold(&v3)) || !(v21 <= v21)) {
                                *((a0 + 8) as &i64) = 0x8000000000000000;
                            }
                        },
                    }
                },
            }
        }
        v22 = *((v17 + 8) as &i64);
        v23 = *((v17 + 16) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22, v23, "full-iso") as i8 {
            *((a0 + 8) as &i64) = 0x8000000000000000;
        }
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22, v23, "long-iso") as i8 {
            *((a0 + 8) as &i64) = 9223372036854775809;
        }
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22, v23, "iso") as i8 {
            *((a0 + 8) as &i64) = 9223372036854775810;
        }
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22, v23, "locale") as i8 {
            v7 = v22;
            v8 = v22 + v23;
            match ((core::str::validations::next_code_point(&v7) as i32 ? v21 as u32 : 0x110000)) {
                43 => {
                    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v22, v23), v21);
                    *((a0 + 24) as &i64) = *((&v0 as &char + 16) as &i64);
                    *((a0 + 8) as &i192) = v0;
                }
                1114112 => {
                    core::option::unwrap_failed("src/uu/ls/src/ls.rs"); /* do not return */
                }
                _ => {
                    v3 = <alloc::string::String as core::clone::Clone>::clone(v17);
                    v1 = v3;
                    return struct57 {
                        field_0: 6
                        field_1: v0
                        field_16: <UNKNOWN>
                        field_24: <UNKNOWN>
                        field_32: <UNKNOWN>
                        field_48: <UNKNOWN>
                    };
                }
            }
        }
    } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "full-time") as i8 {
        *((a0 + 8) as &i64) = 0x8000000000000000;
    }
    *((a0 + 8) as &i64) = 9223372036854775811;
}
