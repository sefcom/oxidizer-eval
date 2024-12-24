fn uu_nl::helper::parse_options(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64) -> int {
    let v0: i192;  // [sp-0x108], Other Possible Types: Result<struct40, struct16>, Option<struct24>, struct24
    let v1: i64;  // [sp-0xf8]
    let v2: struct16;  // [sp-0xd0], Other Possible Types: i64
    let v3: i64;  // [sp-0xc8]
    let v4: i64;  // [sp-0xc0]
    let v5: i128;  // [bp-0xb8]
    let v6: i64;  // [sp-0xa8]
    let v7: i64;  // [sp-0x98]
    let v8: struct24;  // [bp-0x90]
    let v9: i64;  // [sp-0x88]
    let v10: i64;  // [sp-0x80]
    let v11: struct24;  // [bp-0x78]
    let v12: i64;  // [sp-0x70]
    let v13: i64;  // [sp-0x68]
    let v14: struct24;  // [bp-0x60]
    let v15: i64;  // [sp-0x58]
    let v16: i64;  // [sp-0x50]
    let v17: i192;  // [sp-0x48]
    let v19: i64;  // rax
    let v20: i128;  // xmm0
    let v21: i256;  // ymm0
    let v23: i64;  // r12
    let v24: i128;  // xmm0
    let v25: i256;  // ymm0
    let v26: i64;  // rax
    let v27: i64;  // rax
    let v28: i64;  // rsi
    let v29: i64;  // rdx
    let v30: i64;  // rax
    let v31: i64;  // rcx
    let v32: i64;  // r8
    let v33: i64;  // r9
    let v34: i64;  // rax
    let v35: i64;  // rax
    let v36: i64;  // rax
    let v37: i64;  // rax
    let v38: i64;  // rax
    let v39: i64;  // rax
    let v40: i64;  // rax
    let v41: i128;  // xmm0
    let v42: i64;  // rax
    let v43: i64;  // rax
    let v44: i128;  // xmm0
    let v45: i256;  // ymm0
    let v46: i64;  // rax
    let v47: i64;  // rax
    let v48: i128;  // xmm0

    v2 = 0;
    v3 = 8;
    v4 = 0;
    *((a1 + 128) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, "no-renumber") as i8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "section-delimiter");
    v19 = clap_builder::parser::error::MatchesError::unwrap("section-delimiter", &v0);
    if v19 {
        v7 = v19;
        if *((v19 + 16) as &i64) != 1 {
            v0 = <alloc::string::String as core::clone::Clone>::clone(v19);
        } else {
            v17 = format!("{:?}:", &v7);
            v20 = v17;
            v0 = v20;
            v1 = *((&v17 as &char + 16) as &i64);
        }
        v23 = a1 + 48;
        *((v23 + 16) as &i64) = v1;
        v24 = v0;
        v25 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24;
        *(v23 as &i128) = v24;
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "number-separator");
    v26 = clap_builder::parser::error::MatchesError::unwrap("number-separator", &v0);
    if v26 {
        <alloc::string::String as core::clone::Clone>::clone_from(a1 + 72, v26);
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "number-format");
    v27 = clap_builder::parser::error::MatchesError::unwrap("number-format", &v0);
    if v27 {
        core::ops::function::FnOnce::call_once(v27, v28, v29);
    }
    *((a1 + 129) as &i8) = 1;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "header-numbering");
    v30 = clap_builder::parser::error::MatchesError::unwrap("header-numbering", &v0);
    if v30 {
        v0 = core::ops::function::FnOnce::call_once(core::ops::function::FnOnce::call_once(*((v30 + 8) as &i64), *((v30 + 16) as &i64)), v29, v31, v32, v33);
        v34 = v0;
        if v34 != 9223372036854775809 {
            if v34 != 0x8000000000000000 {
                *(&v8.field_0 as &struct24) = struct24 {
                    field_0: v34
                    field_16: v1
                };
                v2 = alloc::vec::Vec<T,A>::push(&v8, v29);
            } else {
                *(a1 as &i64) = v9;
                *((a1 + 8) as &i64) = v10;
            }
        }
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "body-numbering");
    v35 = clap_builder::parser::error::MatchesError::unwrap("body-numbering", &v0);
    if v35 {
        v0 = core::ops::function::FnOnce::call_once(core::ops::function::FnOnce::call_once(*((v35 + 8) as &i64), *((v35 + 16) as &i64)), v29, v31, v32, v33);
        v36 = v0;
        if v36 != 9223372036854775809 {
            if v36 != 0x8000000000000000 {
                *(&v11.field_0 as &struct24) = struct24 {
                    field_0: v36
                    field_16: v1
                };
                v2 = alloc::vec::Vec<T,A>::push(&v11, v29);
            } else {
                *((a1 + 16) as &i64) = v12;
                *((a1 + 24) as &i64) = v13;
            }
        }
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "footer-numbering");
    v37 = clap_builder::parser::error::MatchesError::unwrap("footer-numbering", &v0);
    if v37 {
        v0 = core::ops::function::FnOnce::call_once(core::ops::function::FnOnce::call_once(*((v37 + 8) as &i64), *((v37 + 16) as &i64)), v29, v31, v32, v33);
        v38 = v0;
        if v38 != 9223372036854775809 {
            if v38 != 0x8000000000000000 {
                *(&v14.field_0 as &struct24) = struct24 {
                    field_0: v38
                    field_16: v1
                };
                v2 = alloc::vec::Vec<T,A>::push(&v14, v29);
            } else {
                *((a1 + 32) as &i64) = v15;
                *((a1 + 40) as &i64) = v16;
            }
        }
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "number-width");
    v39 = clap_builder::parser::error::MatchesError::unwrap("number-width", &v0);
    if v39 {
        v40 = *(v39 as &i64);
        if v40 {
            *((a1 + 120) as &i64) = v40;
        } else {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("Invalid line number field width: ‘0’: Numerical result out of range");
            v6 = v0.field_16;
            v41 = v0;
            v25 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41;
            v5 = v41;
            v2 = alloc::vec::Vec<T,A>::push(&v5, v29);
        }
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "join-blank-lines");
    v42 = clap_builder::parser::error::MatchesError::unwrap("join-blank-lines", &v0);
    if v42 {
        v43 = *(v42 as &i64);
        if v43 {
            *((a1 + 112) as &i64) = v43;
        } else {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("Invalid line number of blank lines: ‘0’: Numerical result out of range");
            v6 = v0.field_16;
            v44 = v0;
            v45 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44;
            v5 = v44;
            v2 = alloc::vec::Vec<T,A>::push(&v5, v29);
        }
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "line-increment");
    v46 = clap_builder::parser::error::MatchesError::unwrap("line-increment", &v0);
    if v46 {
        *((a1 + 104) as &i64) = *(v46 as &i64);
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "starting-line-number");
    v47 = clap_builder::parser::error::MatchesError::unwrap("starting-line-number", &v0);
    if v47 {
        *((a1 + 96) as &i64) = *(v47 as &i64);
    }
    v48 = v2;
    return struct24 {
        field_0: v48
        field_16: v4
    };
}
