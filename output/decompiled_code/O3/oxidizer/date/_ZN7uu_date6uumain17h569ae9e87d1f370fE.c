fn uu_date::uumain() -> u32 {
    let v0: i64;  // [sp-0x708], Other Possible Types: Enum
    let v1: i64;  // [sp-0x700]
    let v2: i64;  // [sp-0x6f8]
    let v3: i128;  // [sp-0x6c8]
    let v4: i64;  // [sp-0x6b8]
    let v5: i64;  // [sp-0x698]
    let v6: i64;  // [sp-0x690]
    let v7: i64;  // [sp-0x680]
    let v8: i128;  // [sp-0x678], Other Possible Types: struct16, struct64
    let v9: i64;  // [sp-0x670]
    let v10: i8;  // [bp-0x668]
    let v11: i8;  // [sp-0x660]
    let v12: i128;  // [sp-0x658]
    let v13: i64;  // [sp-0x648]
    let v14: i32;  // [sp-0x640]
    let v15: i32;  // [sp-0x63c]
    let v16: i64;  // [sp-0x638]
    let v17: i8;  // [sp-0x630]
    let v18: i96;  // [bp-0x5f8]
    let v19: i64;  // [sp-0x5e8]
    let v20: i32;  // [sp-0x5e0]
    let v21: i32;  // [sp-0x5dc]
    let v22: i64;  // [sp-0x5d8]
    let v23: i64;  // [sp-0x5b8]
    let v24: i8;  // [bp-0x5b0]
    let v25: i64;  // [sp-0x5a8]
    let v26: i64;  // [sp-0x5a0]
    let v27: i128;  // [sp-0x598]
    let v28: i32;  // [sp-0x590]
    let v29: i64;  // [sp-0x588]
    let v30: i128;  // [sp-0x580]
    let v31: i64;  // [sp-0x578]
    let v32: i128;  // [sp-0x570]
    let v33: i128;  // [sp-0x560]
    let v34: i64;  // [sp-0x550]
    let v35: i96;  // [bp-0x548], Other Possible Types: Enum, struct24, struct712, struct12
    let v36: i64;  // [sp-0x540]
    let v37: i64;  // [sp-0x538]
    let v38: i64;  // [bp-0x530]
    let v39: i64;  // [bp-0x528]
    let v40: i128;  // [sp-0x518]
    let v41: i96;  // [bp-0x268]
    let v42: Enum;  // [sp-0x258], Other Possible Types: i96
    let v43: i128;  // [sp-0x158]
    let v44: String;  // [sp-0x120], Other Possible Types: i192
    let v45: String;  // [sp-0x108], Other Possible Types: i192
    let v46: String;  // [sp-0xf0], Other Possible Types: i192
    let v48: i64;  // r15
    let v49: i64;  // rdi
    let v50: i64;  // rsi
    let v51: i64;  // rbx
    let v52: i64;  // rax
    let v53: i64;  // r14
    let v54: i64;  // rbx
    let v55: i128;  // xmm0
    let v56: i128;  // xmm1
    let v57: i64;  // rbx
    let v60: i128;  // xmm0
    let v61: i64;  // r12
    let v62: i64;  // rax
    let v63: i64;  // rax
    let v64: i64;  // rbx
    let v65: i64;  // rbx
    let v66: i64;  // rdx
    let v67: i64;  // rcx
    let v68: i64;  // r8
    let v69: i64;  // r9
    let v70: i64;  // rax
    let v71: i64;  // r14
    let v72: i64;  // rax
    let v73: i64;  // r15
    let v74: i64;  // rbx
    let v75: i64;  // rcx
    let v76: i64;  // r14
    let v77: i64;  // rbx
    let v78: i64;  // r12
    let v79: i64;  // rdx
    let v80: i128;  // xmm1
    let v81: i128;  // xmm0
    let v82: i64;  // rbp
    let v83: i64;  // rsi
    let v84: i64;  // rdi
    let v86: i64;  // rax

    v48 = &v35;
    v35 = uu_date::uu_app();
    v8 = clap_builder::builder::command::Command::try_get_matches_from(&v35, v49, v50);
    if v30 == 0x8000000000000000 {
        v51 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v31);
        v7 = v66;
        if !v51 {
            goto LABEL_4ef531;
        }
LABEL_4edd04:
        v19 = v51;
        v20 = v7;
        v8 = &v19;
        v9 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v35 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
        v36 = 1;
        v39 = 0;
        v37 = &v8;
        v38 = 1;
        v44 = alloc::fmt::format::format_inner(&v35);
        v8 = v44;
        v83 = *((&v44 as &char + 16) as &i64);
        v10 = *((&v44 as &char + 16) as &i64);
        v84 = v9;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, *((&v44 as &char + 16) as &i64), 1, 0) as i8 {
            v0 = uucore::util_name();
            v1 = v66;
            v30 = &v0;
            v31 = <&T as core::fmt::Display>::fmt;
            v35 = &g_68d8f8;
            v36 = 2;
            v39 = 0;
            v37 = &v30;
            v38 = 1;
            std::io::stdio::_eprint(&v35);
            v0 = &v8;
            v1 = <alloc::string::String as core::fmt::Display>::fmt;
            v35 = &g_68d918;
            v36 = 2;
            v39 = 0;
            v37 = &v0;
            v38 = 1;
            std::io::stdio::_eprint(&v35);
        }
        if *((v20 + 104) as &i64)() {
            v0 = uucore::execution_phrase();
            v1 = v66;
            v30 = &v0;
            v31 = <&T as core::fmt::Display>::fmt;
            *(&v35 as &&str) = "Try '";
            v36 = 2;
            v39 = 0;
            v37 = &v30;
            v38 = 1;
            std::io::stdio::_eprint(&v35);
        }
        *((v20 + 96) as &i64)();
        v86 = *(v20 as &i64);
        if v86 {
            v86();
        }
    } else {
        v34 = v13;
        v33 = v12;
        v32 = v10;
        v30 = v8;
        v35 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v30, &g_45e58c, 6);
        v52 = clap_builder::parser::error::MatchesError::unwrap(&g_45e58c, 6, &v35);
        if !v52 {
            v35 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v30, &g_45e150, 8);
            v8 = clap_builder::parser::error::MatchesError::unwrap(&g_45e150, 8, &v35);
            if v8 {
                v55 = v8;
                v56 = *((&v8 as &char + 16) as &i128);
                v40 = *((&v8 as &char + 48) as &i128);
                v39 = v12;
                v37 = v56;
                v35 = v55;
                v0 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(4, 0);
                v48 = v1;
                v62 = v2;
                *(v62 as &i32) = 1702125924;
                v0 = v48;
                v1 = v62;
                v2 = 4;
                v24 = <uu_date::Iso8601Format as core::convert::From<&str>>::from(*((v64 + 8) as &i64), *((v64 + 16) as &i64)) as i32;
                v23 = 0x8000000000000000;
                goto LABEL_4ed8d9;
            } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v30, &g_45e5f6, 9) as i8 {
                v23 = 9223372036854775809;
                goto LABEL_4ed8d9;
            } else {
                v35 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v30, &g_45e080, 8);
                v63 = clap_builder::parser::error::MatchesError::unwrap(&g_45e080, 8, &v35);
                if !v63 {
                    v23 = 9223372036854775812;
                    goto LABEL_4ed8d9;
                } else {
                    v24 = <uu_date::Rfc3339Format as core::convert::From<&str>>::from(*((v63 + 8) as &i64), *((v63 + 16) as &i64)) as i8;
                    v23 = 9223372036854775810;
                    goto LABEL_4ed8d9;
                }
            }
        } else {
            v53 = *((v52 + 8) as &i64);
            v54 = *((v52 + 16) as &i64);
            v35 = 43;
            if !core::slice::<impl [T]>::starts_with(v53, v54, &v35, 1) as i8 {
                v8 = 0;
                v9 = v53;
                v10 = v54;
                v11 = 1;
                v0 = &v8;
                v1 = <os_display::Quoted as core::fmt::Display>::fmt;
                *(&v35 as &&str) = "invalid date ";
                v36 = 1;
                v39 = 0;
                v37 = &v0;
                v38 = 1;
                v45 = alloc::fmt::format::format_inner(&v35);
                v38 = 1;
                v35 = v45;
                v37 = *((&v45 as &char + 16) as &i64);
                v51 = __rust_alloc(32, 8);
                v60 = v35;
                *((v51 + 16) as &i64) = v37;
                *(v51 as &i128) = v60;
                v7 = &g_68d9a0;
            } else {
                if v54 < 2 {
                    if v54 != 1 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                } else {
                    if *((v53 + 1) as &i8) <= 191 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                }
                v57 = v54 - 1;
                v35 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v57, 0);
                v48 = v36;
                v61 = v37;
                memcpy(v61, v53 + 1, v57);
                v23 = v48;
                v24 = v61;
                v25 = v57;
LABEL_4ed8d9:
                v35 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v30, &g_45bb00, 4);
                v65 = clap_builder::parser::error::MatchesError::unwrap(&g_45bb00, 4, &v35);
                if v65 {
                    v42 = chrono::offset::local::Local::now(v50, v66);
                    v67 = *((v65 + 16) as &i64);
                    parse_datetime::parse_datetime_at_date(&v8, &v42, *((v65 + 8) as &i64), *((v65 + 16) as &i64), v68, v69);
                    if v8 != 9223372036854775810 {
                        v35 = <alloc::string::String as core::clone::Clone>::clone(v65);
                        v29 = v37;
                        v27 = v35;
                        v26 = 1;
                        if !(v8 < 9223372036854775811) {
                            goto LABEL_4eda82;
                        }
                    } else {
                        v43 = *((&v8 as &char + 8) as &i128);
                        v27 = chrono::naive::datetime::NaiveDateTime::signed_duration_since(&v43, &v42);
                        v28 = v66;
                        v26 = 4;
                        if v8 >= 9223372036854775811 {
LABEL_4eda82:
                        }
                    }
                } else {
                    v35 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v30, &g_45d8a0, 4);
                    v70 = clap_builder::parser::error::MatchesError::unwrap(&g_45d8a0, 4, &v35);
                    if !v70 {
                        v26 = 0;
                    } else {
                        v65 = *((v70 + 8) as &i64);
                        v71 = *((v70 + 16) as &i64);
                        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v65, v71, &g_45e5ff, 1) as i8 {
                            v26 = 3;
                        } else {
                            v35 = std::sys::os_str::bytes::Slice::to_owned(v65, v71);
                            v29 = v37;
                            v27 = v35;
                            v26 = 2;
                        }
                    }
                }
                v35 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v30, &g_45e600, 3);
                v72 = clap_builder::parser::error::MatchesError::unwrap(&g_45e600, 3, &v35);
                if !v72 {
                    v76 = 0;
                    goto LABEL_4edc25;
                }
                v73 = *((v72 + 8) as &i64);
                v74 = *((v72 + 16) as &i64);
                parse_datetime::parse_datetime(&v0, v73, v74, v75, v68, v69);
                if v0 == 9223372036854775810 {
                    v76 = v1;
                    v48 = v76 >> 32;
                    v77 = v2;
                    goto LABEL_4edc25;
                } else {
                    v10 = v2;
                    v8 = v0;
                    v35 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v74, 0);
                    v78 = v36;
                    v76 = v37;
                    v79 = v74;
                    memcpy(v76, v73, v74);
                    v3 = v0;
                    v4 = v2;
                    v48 = v76 >> 32;
                    if v78 != 0x8000000000000000 {
                        v19 = v78;
                        v20 = v76;
                        v21 = v48;
                        v22 = v74;
                        v2 = v4;
                        v0 = v3;
                        v8 = 0;
                        v9 = v20;
                        v10 = v74;
                        v11 = 1;
                        v5 = &v8;
                        v6 = <os_display::Quoted as core::fmt::Display>::fmt;
                        *(&v35 as &&str) = "invalid date ";
                        v36 = 1;
                        v39 = 0;
                        v37 = &v5;
                        v38 = 1;
                        v46 = alloc::fmt::format::format_inner(&v35);
                        v38 = 1;
                        v35 = v46;
                        v37 = *((&v46 as &char + 16) as &i64);
                        v51 = __rust_alloc(32, 8);
                        v81 = v35;
                        *((v51 + 16) as &i64) = v37;
                        *(v51 as &i128) = v81;
                        v82 = 0x8000000000000000 ^ v23;
                        v7 = &g_68d9a0;
                    } else {
LABEL_4edc25:
                        v13 = v25;
                        v12 = v23;
                        v80 = *((&v27 as &char + 8) as &i128);
                        v8 = v26;
                        v10 = v80;
                        v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v30, &g_45e603, 9) as i8;
                        v14 = v76;
                        v15 = v48;
                        v16 = v77;
                        if v14 {
                            v41 = v14;
                            v51 = uu_date::set_system_datetime(&v41);
                            v7 = v66;
                        } else if !v17 {
                            v35 = chrono::offset::local::Local::now(v50, v66);
                            v18 = v35;
                            goto *((0x45aa00 + (stack_base)[1656] as i64 * 4) as &i32) + 0x45aa00;
                        } else {
                            v35 = chrono::offset::utc::Utc::now(v50, v66);
                            v18 = v35;
                            goto *((0x45aa00 + (stack_base)[1656] as i64 * 4) as &i32) + 0x45aa00;
                        }
                    }
                }
            }
            if !(!v51) {
                goto LABEL_4edd04;
            }
LABEL_4ef531:
            uucore::mods::error::get_exit_code();
        }
    }
    return;
}
