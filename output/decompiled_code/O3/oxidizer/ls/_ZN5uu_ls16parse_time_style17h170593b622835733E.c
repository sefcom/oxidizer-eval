fn uu_ls::parse_time_style(a0: i64, a1: i64) -> u64 {
    let v0: i192;  // [sp-0xf0], Other Possible Types: struct24, Option<struct24>, Result<struct40, struct16>
    let v1: i192;  // [bp-0xe9]
    let v2: i64;  // [sp-0xd9]
    let v3: i192;  // [bp-0xc8], Other Possible Types: struct24
    let v4: i64;  // [sp-0xb8]
    let v5: i192;  // [bp-0xa8], Other Possible Types: struct24
    let v6: i64;  // [sp-0x98]
    let v7: i192;  // [bp-0x88]
    let v8: i64;  // [sp-0x80]
    let v9: i64;  // [sp-0x78]
    let v10: i192;  // [bp-0x68]
    let v11: i64;  // [sp-0x58]
    let v12: i192;  // [bp-0x48]
    let v13: i64;  // [sp-0x38]
    let v15: i64;  // r15
    let v16: i64;  // r15
    let v17: i64;  // rsi
    let v18: i64;  // rdx
    let v21: i64;  // r12
    let v22: i64;  // r14
    let v23: i64;  // rax
    let v25: i64;  // rax
    let v26: i64;  // rax

    v15 = alloc::alloc::Global::alloc_impl(120);
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("full-iso");
    v10 = v0;
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("long-iso");
    v12 = v0;
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("iso");
    v7 = v0;
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
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "full-time") as i8 {
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "full-time");
            if !v0 {
                core::option::unwrap_failed(); /* do not return */
            }
            v3 = v0;
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "time-style");
            if !v0 {
                core::option::unwrap_failed(); /* do not return */
            }
            v3 = v0;
            if core::iter::traits::iterator::Iterator::fold(&v3, v17, v18) && (!(core::iter::traits::iterator::Iterator::fold(&v3, v17, v18)) || !(v18 <= v18)) {
                goto LABEL_51e9d8;
            }
        }
        v21 = *((v16 + 8) as &i64);
        v22 = *((v16 + 16) as &i64);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, "full-iso") as i8 {
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, "long-iso") as i8 {
                v23 = 9223372036854775809;
            } else {
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, "iso") as i8 {
                    v23 = 9223372036854775810;
                } else {
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, "locale") as i8 {
                        v7 = v21;
                        v8 = v21 + v22;
                        switch ((core::str::validations::next_code_point(&v7) as i32 ? v18 as u32 : 0x110000)) {
                        case 43:
                            v25 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v21, v22);
                            if v25 {
                                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v25, v18);
                                *((a0 + 24) as &i64) = *((&v0 as &char + 16) as &i64);
                                *((a0 + 8) as &i192) = v0;
                                return struct1 {
                                    field_0: 7
                                };
                            }
                            core::str::slice_error_fail(); /* do not return */
                        case 1114112:
                            core::option::unwrap_failed(); /* do not return */
                        default:
                            v3 = <alloc::string::String as core::clone::Clone>::clone(v16);
                            *((a0 + 48) as &struct24) = v5.field_16;
                            *((a0 + 32) as &i128) = v5;
                            v1 = v3;
                            *(a0 as &i8) = 6;
                            v26 = *((&v1 as &char + 8) as &i64);
                            *((a0 + 1) as &i320) = v0;
                            *((a0 + 16) as &i64) = v26;
                            *((a0 + 24) as &i64) = v2;
                            return v26;
                        }
                    }
LABEL_51ea2a:
                    v23 = 9223372036854775811;
                }
            }
            return struct9 {
                field_0: 7
                field_8: <UNKNOWN>
            };
        }
    } else if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "full-time") as i8 {
        goto LABEL_51ea2a;
    }
LABEL_51e9d8:
    return struct9 {
        field_0: 7
        field_8: <UNKNOWN>
    };
}
