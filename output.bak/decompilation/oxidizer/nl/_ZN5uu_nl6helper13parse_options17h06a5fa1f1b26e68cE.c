fn uu_nl::helper::parse_options(a0: &struct24, a1: &struct16, a2: u64) -> int {
    let v0: i328;  // [sp-0x108], Other Possible Types: Result<struct40, struct8>, struct24
    let v1: i64;  // [sp-0x100]
    let v2: i64;  // [sp-0xf8]
    let v3: i64;  // [sp-0xf0]
    let v4: i64;  // [sp-0xe8]
    let v5: struct16;  // [sp-0xd0], Other Possible Types: i64
    let v6: i64;  // [sp-0xc8]
    let v7: i64;  // [sp-0xc0]
    let v8: struct24;  // [sp-0xb8], Other Possible Types: i64
    let v9: i64;  // [sp-0xb0]
    let v10: i64;  // [sp-0x98]
    let v11: struct24;  // [bp-0x90]
    let v12: i64;  // [sp-0x88]
    let v13: i64;  // [sp-0x80]
    let v14: struct24;  // [bp-0x78]
    let v15: i64;  // [sp-0x70]
    let v16: i64;  // [sp-0x68]
    let v17: struct24;  // [bp-0x60]
    let v18: i64;  // [sp-0x58]
    let v19: i64;  // [sp-0x50]
    let v20: i8;  // [bp-0x48]
    let v21: i8;  // [bp-0x38]
    let v23: i64;  // rax
    let v27: i64;  // r12
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: i64;  // rax
    let v33: i64;  // rax
    let v34: i64;  // rax
    let v35: i64;  // rax
    let v36: i64;  // rax
    let v37: i64;  // rax
    let v39: i64;  // rax

    v5 = 0;
    v6 = 8;
    v7 = 0;
    *((a1 + 128) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, "no-renumber") as i8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "section-delimiter");
    v23 = clap_builder::parser::error::MatchesError::unwrap("section-delimiter", &v0);
    if v23 {
        v10 = v23;
        if *((v23 + 16) as &i64) != 1 {
            v0 = <alloc::string::String as core::clone::Clone>::clone(v23);
        } else {
            v8 = &v10;
            v9 = <&T as core::fmt::Display>::fmt;
            v0 = &g_6d9f88;
            v1 = 2;
            v4 = 0;
            v2 = &v8;
            v3 = 1;
            core::option::Option<T>::map_or_else();
            v0 = v20;
            v2 = v21;
        }
        v27 = a1 + 48;
        *((v27 + 16) as &i64) = v2;
        *(v27 as &i192) = v0;
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "number-separator");
    v30 = clap_builder::parser::error::MatchesError::unwrap("number-separator", &v0);
    if v30 {
        <alloc::string::String as core::clone::Clone>::clone_from(a1 + 72, v30);
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "number-format");
    if clap_builder::parser::error::MatchesError::unwrap("number-format", &v0) {
        core::ops::function::FnOnce::call_once();
    }
    *((a1 + 129) as &i8) = 1;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "header-numbering");
    if clap_builder::parser::error::MatchesError::unwrap("header-numbering", &v0) {
        core::ops::function::FnOnce::call_once();
        core::ops::function::FnOnce::call_once();
        v31 = v0;
        if v31 != 9223372036854775809 {
            if v31 != 0x8000000000000000 {
                *(&v11.field_0 as &struct24) = struct24 {
                    field_0: v31
                    field_16: v2
                };
                v5 = alloc::vec::Vec<T,A>::push(&v11);
            } else {
                *(a1 as &i64) = v12;
                *((a1 + 8) as &i64) = v13;
            }
        }
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "body-numbering");
    if clap_builder::parser::error::MatchesError::unwrap("body-numbering", &v0) {
        core::ops::function::FnOnce::call_once();
        core::ops::function::FnOnce::call_once();
        v32 = v0;
        if v32 != 9223372036854775809 {
            if v32 != 0x8000000000000000 {
                *(&v14.field_0 as &struct24) = struct24 {
                    field_0: v32
                    field_16: v2
                };
                v5 = alloc::vec::Vec<T,A>::push(&v14);
            } else {
                *((a1 + 16) as &i64) = v15;
                *((a1 + 24) as &i64) = v16;
            }
        }
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "footer-numbering");
    if clap_builder::parser::error::MatchesError::unwrap("footer-numbering", &v0) {
        core::ops::function::FnOnce::call_once();
        core::ops::function::FnOnce::call_once();
        v33 = v0;
        if v33 != 9223372036854775809 {
            if v33 != 0x8000000000000000 {
                *(&v17.field_0 as &struct24) = struct24 {
                    field_0: v33
                    field_16: v2
                };
                v5 = alloc::vec::Vec<T,A>::push(&v17);
            } else {
                *((a1 + 32) as &i64) = v18;
                *((a1 + 40) as &i64) = v19;
            }
        }
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "number-width");
    v34 = clap_builder::parser::error::MatchesError::unwrap("number-width", &v0);
    if v34 {
        v35 = *(v34 as &i64);
        if v35 {
            *((a1 + 120) as &i64) = v35;
        } else {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("Invalid line number field width: ‘0’: Numerical result out of range");
            *(&v8.field_0 as &struct24) = struct24 {
                field_0: v25 as u128
                field_16: v2
            };
            v5 = alloc::vec::Vec<T,A>::push(&v8);
        }
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "join-blank-lines");
    v36 = clap_builder::parser::error::MatchesError::unwrap("join-blank-lines", &v0);
    if v36 {
        v37 = *(v36 as &i64);
        if v37 {
            *((a1 + 112) as &i64) = v37;
        } else {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("Invalid line number of blank lines: ‘0’: Numerical result out of range");
            *(&v8.field_0 as &struct24) = struct24 {
                field_0: v25 as u128
                field_16: v2
            };
            v5 = alloc::vec::Vec<T,A>::push(&v8);
        }
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "line-increment");
    v39 = clap_builder::parser::error::MatchesError::unwrap("line-increment", &v0);
    if v39 {
        *((a1 + 104) as &i64) = *(v39 as &i64);
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, "starting-line-number");
    return struct24 {
        field_0: v25 as u128
        field_16: v7
    };
    *((a1 + 96) as &i64) = *(clap_builder::parser::error::MatchesError::unwrap("starting-line-number", &v0) as &i64);
}
