fn uu_ls::parse_time_style(a0: &struct57, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0xf0], Other Possible Types: i192, Option<struct24>, Result<struct40, struct8>
    let v1: struct24;  // [sp-0xe9]
    let v3: i128;  // [sp-0xc8], Other Possible Types: struct24, Option<struct24>
    let v4: i64;  // [sp-0xb8]
    let v5: i128;  // [sp-0xa8], Other Possible Types: struct24
    let v6: i64;  // [sp-0x98]
    let v7: i64;  // [sp-0x88]
    let v8: i64;  // [sp-0x80]
    let v9: i64;  // [sp-0x78]
    let v10: i192;  // [sp-0x68]
    let v11: i64;  // [sp-0x58]
    let v12: i128;  // [sp-0x48]
    let v13: i64;  // [sp-0x38]
    let v15: i64;  // r15
    let v16: i64;  // r15
    let v20: i64;  // rdx
    let v21: i64;  // r12
    let v22: i64;  // r14
    let v25: i64;  // rax

    v15 = alloc::alloc::Global::alloc_impl();
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("full-iso");
    v10 = v0;
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("long-iso");
    v12 = v0;
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("iso");
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("locale");
    v5 = v0;
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("+FORMAT (e.g., +%H:%M) for a 'date'-style format");
    v3 = v0;
    *((v15 + 16) as &i64) = v11;
    *(v15 as &i128) = v10;
    *((v15 + 40) as &i64) = v13;
    *((v15 + 24) as &i128) = v12;
    *((v15 + 64) as &i64) = v9;
    *((v15 + 48) as &i192) = v7;
    *((v15 + 72) as &i128) = v5;
    *((v15 + 88) as &i64) = v6;
    *((v15 + 96) as &i128) = v3;
    *((v15 + 112) as &i64) = v4;
    v5 = alloc::slice::hack::into_vec(v15, 5);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "time-style");
    v16 = clap_builder::parser::error::MatchesError::unwrap("time-style", &v0);
    if v16 {
        v4 = v4;
        v3 = v3;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "full-time") as i8 {
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "full-time");
            if !v0 {
                core::option::unwrap_failed("src/uu/ls/src/ls.rs"); /* do not return */
            }
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "time-style");
            if !v0 {
                core::option::unwrap_failed("src/uu/ls/src/ls.rs"); /* do not return */
            }
            v3 = v0;
            v4 = v4;
            v3 = v3;
            if core::iter::traits::iterator::Iterator::fold(&v3) && (!(core::iter::traits::iterator::Iterator::fold(&v3)) || !((v4 = v4, v3 = v3, v20 <= v20))) {
                goto LABEL_51ea78;
            }
        }
        v21 = *((v16 + 8) as &i64);
        v22 = *((v16 + 16) as &i64);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, "full-iso") as i8 {
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, "long-iso") as i8 {
                goto LABEL_51ea9f;
            } else {
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, "iso") as i8 {
LABEL_51ea9f:
                } else {
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, "locale") as i8 {
                        v7 = v21;
                        v8 = v21 + v22;
                        switch ((core::str::validations::next_code_point(&v7) as i32 ? v20 as u32 : 0x110000)) {
                        case 43:
                            v25 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v21, v22);
                            if v25 {
                                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v25, v20);
                                return struct25 {
                                    field_0: 7
                                    field_8: <UNKNOWN>
                                    field_24: <UNKNOWN>
                                };
                            }
                            core::str::slice_error_fail(v21, v22, 1, v22, "src/uu/ls/src/ls.rs"); /* do not return */
                        case 1114112:
                            core::option::unwrap_failed("src/uu/ls/src/ls.rs"); /* do not return */
                        default:
                            v3 = <alloc::string::String as core::clone::Clone>::clone(v16);
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
LABEL_51eaca:
                    goto LABEL_51ea9f;
                }
            }
            return struct9 {
                field_0: 7
                field_8: <UNKNOWN>
            };
        }
    } else if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "full-time") as i8 {
        goto LABEL_51eaca;
    }
LABEL_51ea78:
    goto LABEL_51ea9f;
}
