fn uu_comm::comm(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: u8;  // [bp-0x1d1]
    let v1: u64;  // [bp-0x1d0]
    let v2: u64;  // [bp-0x1c8]
    let v3: u64;  // [bp-0x1c0]
    let v4: u32;  // [bp-0x1ac]
    let v5: struct24;  // [bp-0x1a8]
    let v6: u64;  // [bp-0x1a0]
    let v7: void*;  // [bp-0x198]
    let v8: struct24;  // [bp-0x190]
    let v9: u64;  // [bp-0x188]
    let v10: void*;  // [bp-0x180]
    let v11: u32;  // [bp-0x174]
    let v12: u32;  // [bp-0x170]
    let v13: u32;  // [bp-0x16c]
    let v14: u32;  // [bp-0x168]
    let v15: u32;  // [bp-0x164]
    let v16: u64;  // [bp-0x160]
    let v17: Result<struct24, struct24>;  // [bp-0x160]
    let v18: u64;  // [bp-0x160]
    let v19: Result<struct24, struct24>;  // [bp-0x160]
    let v20: Result<struct40, struct16>;  // [bp-0x148], Other Possible Types: core::fmt::rt::Argument
    let v21: u128;  // [bp-0x148]
    let v22: u128;  // [bp-0x148]
    let v23: Result<struct40, struct16>;  // [bp-0x148]
    let v24: struct9;  // [bp-0x148]
    let v25: struct24;  // [bp-0x148]
    let v26: core::fmt::rt::Argument;  // [bp-0x138], Other Possible Types: u64
    let v27: u128;  // [bp-0x138]
    let v28: u32;  // [bp-0x130]
    let v29: u64;  // [bp-0x130], Other Possible Types: unsigned long
    let v30: core::fmt::rt::Argument;  // [bp-0x128]
    let v31: u128;  // [bp-0x128]
    let v32: core::fmt::rt::Argument;  // [bp-0x118]
    let v33: u128;  // [bp-0x118]
    let v34: core::fmt::rt::Argument;  // [bp-0x108]
    let v35: u128;  // [bp-0x108]
    let v36: core::fmt::Arguments;  // [bp-0xf8], Other Possible Types: struct24, u64, unsigned long
    let v37: u64;  // [bp-0xf8]
    let v38: Result<struct24, struct24>;  // [bp-0xf8]
    let v39: u64;  // [bp-0xe8]
    let v40: u64;  // [bp-0xe8], Other Possible Types: unsigned long
    let v41: void*;  // [bp-0xc0]
    let v42: u64;  // [bp-0xb8]
    let v43: void*;  // [bp-0xb0]
    let v44: u8;  // [bp-0xa8]
    let v45: u8;  // [bp-0xa7]
    let v46: u8;  // [bp-0xa6]
    let v47: void*;  // [bp-0xa0]
    let v48: u64;  // [bp-0x98]
    let v49: void*;  // [bp-0x90]
    let v50: u8;  // [bp-0x88]
    let v51: u8;  // [bp-0x87]
    let v52: u8;  // [bp-0x86]
    let v53: u128;  // [bp-0x78]
    let v54: u64;  // [bp-0x68]
    let v55: struct24;  // [bp-0x58]
    let v56: struct16;  // [bp-0x40]
    let v58: u32;  // r15
    let v59: u8;  // al
    let v60: u64;  // rdx
    let v61: struct24;  // r15
    let v62: u64;  // rbp
    let v63: u32;  // ebp
    let v64: i64;  // r12
    let v65: i64;  // r14
    let v67: u8;  // cl
    let v68: u8;  // al
    let v69: u32;  // ebp
    let v70: void*;  // r13
    let v71: u64;  // rax
    let v72: u64;  // rax
    let v78: void*;  // r12

    v56 = struct16 {
        field_0: a2
        field_8: a3
    };
    v58 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "1") ^ 1;
    v59 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "2");
    v55 = alloc::slice::<impl [T]>::repeat(a2, a3, v58);
    v25 = alloc::slice::<impl [T]>::repeat(a2, a3, (v59 ^ 1) + v58);
    v54 = v26;
    v53 = v25.field_0;
    v5 = 0;
    v6 = 1;
    v7 = 0;
    v2 = v60;
    v61 = uu_comm::LineReader::read_line(a0, &v5);
    v8 = 0;
    v9 = 1;
    v10 = 0;
    v1 = uu_comm::LineReader::read_line(a1, &v8);
    v3 = v60;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "check-order");
    v62 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "nocheck-order");
    if !v0 && !v62 {
        v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a4, &g_419263);
        v64 = clap_builder::parser::error::MatchesError::unwrap(&g_419263, &v20);
        v23 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a4, &g_419268);
        v65 = clap_builder::parser::error::MatchesError::unwrap(&g_419268, &v23);
        v63 = v62 & -0x100 | 1;
        if !!v65 && !!v64 && !uucore::features::fs::paths_refer_to_same_file(v64, v65) {
            v24 = uu_comm::are_files_identical(*((v64 + 8) as &i64), *((v64 + 16) as &i64), *((v65 + 8) as &i64), *((v65 + 16) as &i64));
        }
    }
    v4 = v63;
    v41 = 0;
    v42 = 1;
    v43 = 0;
    v44 = 0;
    v45 = v0;
    v46 = 0;
    v47 = 0;
    v48 = 1;
    v49 = 0;
    v50 = 1;
    v51 = v0;
    v52 = 0;
    v67 = !v61;
    v68 = !v1;
    v69 = 0;
    if (v67 | !v1) == 1 {
        do {
            if (v67 & 1) {
                if (v68 & 1) {
                    if !v2 && !v3 {
                        break;
                    }
                    if !v2 {
                        goto LABEL_457c18;
                    }
                    if v3 {
                        v71 = <alloc::vec::Vec<T,A> as core::cmp::Ord>::cmp(v6, None, v9, 0);
                        if !v71 {
                            if (v4 as i8 & 1) && (!uu_comm::OrderChecker::verify_order(&v41, v6, 0) || !uu_comm::OrderChecker::verify_order(&v47, v9, 0)) {
                                break;
                            }
                            v36 = v36;
                            v40 = v40;
                            v29 = v29;
                            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "3") {
                                v17 = alloc::string::String::from_utf8_lossy(v6, 0);
                                print!("{}{}", &v53 as u8, &v17);
                                v36 = v37;
                                v40 = v39;
                                v29 = v28;
                            }
                            v7 = 0;
                            v10 = 0;
                            v72 = uu_comm::LineReader::read_line(a0, &v5);
                            v2 = v60;
                            v11 += 1;
                            v15 = v11;
                            v3 = v60;
                            v1 = uu_comm::LineReader::read_line(a1, &v8);
                            v2 = v60;
                            v61 = v72;
                            continue;
                        }
                        if v71 == 1 {
                            goto LABEL_457c18;
                        }
                    }
                }
                if (v4 as i8 & 1) && !uu_comm::OrderChecker::verify_order(&v41, v6, 0) {
                    break;
                }
                v16 = v16;
                v29 = v29;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "1") {
                    v38 = alloc::string::String::from_utf8_lossy(v6, 0);
                    print!("{}", &v38);
                    v16 = v18;
                    v29 = v28;
                }
                v7 = 0;
                v12 += 1;
                v13 = v12;
                v2 = v60;
                v61 = uu_comm::LineReader::read_line(a0, &v5);
                continue;
            } else {
                if !(v68 & 1) {
                    core::panicking::panic("internal error: entered unreachable code"); /* do not return */
                }
LABEL_457c18:
                if (v4 as i8 & 1) && !uu_comm::OrderChecker::verify_order(&v47, v9, 0) {
                    break;
                }
                v36 = v36;
                v40 = v40;
                v29 = v29;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "2") {
                    v19 = alloc::string::String::from_utf8_lossy(v9, 0);
                    print!("{}{}", &v55, &v19);
                    v36 = v37;
                    v40 = v39;
                    v29 = v28;
                }
                v10 = 0;
                v69 += 1;
                v14 = v69;
                v3 = v60;
                v1 = uu_comm::LineReader::read_line(a1, &v8);
            }
            v68 = !v1;
            v67 = !v61;
        } while (!v61 || !v1);
    }
    v36 = v36;
    v40 = v40;
    v29 = v29;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "total") {
        v18 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "zero-terminated") ? 0 : 10);
        v20 = core::fmt::rt::Argument {
            ty: &v13
        };
        v26 = core::fmt::rt::Argument {
            ty: &v56
        };
        v30 = core::fmt::rt::Argument {
            ty: &v14
        };
        v32 = core::fmt::rt::Argument {
            ty: &v15
        };
        v34 = core::fmt::rt::Argument {
            ty: &v18 as u64
        };
        v36 = core::fmt::Arguments {
            pieces: [&g_4e0cd0, &g_4e0ce0, &g_4e0cf0, &g_4e0d00, &g_4e0d10, &g_4e0d20, "total"]
            args: [v21, v27, v31, v33, v35]
            fmt: &g_419288
        };
        std::io::stdio::_print(&v36);
        v36 = v37;
        v40 = v39;
        v29 = v28;
    }
    if (v4 & 1) && (v46 || v52 == 1) {
        if (v70 as u8 & 1) {
            eprintln!("comm: input is not in sorted order");
        }
        v36 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(0x1, 0);
        v26 = v40;
        v22 = v36.field_0;
        v28 = 1;
        v78 = alloc::boxed::Box<T>::new(&v23) as u64;
    }
    return v78;
}
