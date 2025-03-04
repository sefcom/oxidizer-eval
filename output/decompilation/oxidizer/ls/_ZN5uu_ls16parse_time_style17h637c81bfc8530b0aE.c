fn uu_ls::parse_time_style(a0: &struct57, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0xf0], Other Possible Types: Option<struct24>
    let v1: Option<struct24>;  // [sp-0xf0], Other Possible Types: Result<struct40, struct8>
    let v2: struct24;  // [sp-0xe9]
    let v4: Option<struct24>;  // [sp-0xc8], Other Possible Types: int, struct24
    let v5: i64;  // [sp-0xb8]
    let v6: iNone;  // [sp-0xa8], Other Possible Types: struct24
    let v7: i64;  // [sp-0x98]
    let v8: i64;  // [sp-0x88], Other Possible Types: int
    let v9: i64;  // [sp-0x80]
    let v10: i64;  // [sp-0x78]
    let v11: iNone;  // [sp-0x68]
    let v12: i64;  // [sp-0x58]
    let v13: iNone;  // [sp-0x48]
    let v14: i64;  // [sp-0x38]
    let v17: i64;  // r15
    let v18: i64;  // r15
    let v22: i64;  // rdx
    let v23: i64;  // r12
    let v24: i64;  // r14

    v17 = alloc::alloc::Global::alloc_impl(120);
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("full-iso");
    v11 = v0;
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("long-iso");
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("iso");
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("locale");
    v6 = v0;
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("+FORMAT (e.g., +%H:%M) for a 'date'-style format");
    *((v17 + 16) as &unsigned long) = v12;
    *(v17 as void*) = v11;
    *((v17 + 40) as &unsigned long) = v14;
    *((v17 + 24) as void*) = v13;
    *((v17 + 64) as &unsigned long) = v10;
    *((v17 + 48) as &i128) = v8 as i128;
    *((v17 + 72) as void*) = v6;
    *((v17 + 88) as &unsigned long) = v7;
    *((v17 + 96) as void*) = v4;
    *((v17 + 112) as &unsigned long) = v5;
    v6 = alloc::slice::hack::into_vec(v17, 5);
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "time-style");
    v18 = clap_builder::parser::error::MatchesError::unwrap("time-style", &v1);
    if v18 {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "full-time") as i8 {
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "full-time");
            match v0 {
                None => {
                    core::option::unwrap_failed("src/uu/ls/src/ls.rs"); /* do not return */
                },
                Some(_) => {
                    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "time-style");
                    match v1 {
                        None => {
                            core::option::unwrap_failed("src/uu/ls/src/ls.rs"); /* do not return */
                        },
                        Some(_) => {
                            v4 = v1;
                            if core::iter::traits::iterator::Iterator::fold(&v4) && (!(core::iter::traits::iterator::Iterator::fold(&v4)) || !(v22 <= v22)) {
                                *((a0 + 8) as &i64) = 0x8000000000000000;
                            }
                        },
                    }
                },
            }
        }
        v23 = *((v18 + 8) as &i64);
        v24 = *((v18 + 16) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, v24, "full-iso") as i8 {
            *((a0 + 8) as &i64) = 0x8000000000000000;
        }
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, v24, "long-iso") as i8 {
            *((a0 + 8) as &i64) = 9223372036854775809;
        }
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, v24, "iso") as i8 {
            *((a0 + 8) as &i64) = 9223372036854775810;
        }
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, v24, "locale") as i8 {
            v8 = v23;
            v9 = v23 + v24;
            match ((core::str::validations::next_code_point(&v8) as i32 ? v22 as u32 : 0x110000)) {
                43 => {
                    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v23, v24), v22);
                    *((a0 + 24) as &u64) = v0.field_16;
                    *((a0 + 8) as &i128) = *(&v0.field_0 as &i128);
                }
                1114112 => {
                    core::option::unwrap_failed("src/uu/ls/src/ls.rs"); /* do not return */
                }
                _ => {
                    v4 = <alloc::string::String as core::clone::Clone>::clone(v18);
                    v2 = v4;
                    return struct57 {
                        field_0: 6
                        field_1: v1 as i128
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
