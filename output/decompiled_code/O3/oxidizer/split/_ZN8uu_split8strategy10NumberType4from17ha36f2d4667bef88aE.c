fn uu_split::strategy::NumberType::from() -> u32 {
    let v0: i64;  // [sp-0x198]
    let v1: i8;  // [bp-0x190], Other Possible Types: struct8
    let v2: i64;  // [bp-0x188]
    let v3: i64;  // [sp-0x180]
    let v4: i16;  // [sp-0x170]
    let v5: i8;  // [sp-0x16e]
    let v6: i64;  // [sp-0x168]
    let v7: i64;  // [sp-0x160]
    let v8: i64;  // [sp-0x158]
    let v9: i8;  // [sp-0x150]
    let v10: i64;  // [bp-0x148], Other Possible Types: Arguments, struct24
    let v11: i64;  // [sp-0x140]
    let v12: i64;  // [sp-0x138]
    let v13: i64;  // [sp-0x128]
    let v14: i64;  // [sp-0x120]
    let v15: i64;  // [sp-0x118]
    let v16: i8;  // [sp-0x110]
    let v17: struct32;  // [sp-0x108], Other Possible Types: i256
    let v18: i64;  // [sp-0xe8], Other Possible Types: Argument
    let v19: String;  // [sp-0xd0], Other Possible Types: i192
    let v20: i128;  // [sp-0xb8]
    let v21: i128;  // [sp-0xa8]
    let v22: struct24;  // [sp-0x90], Other Possible Types: i192
    let v23: struct57;  // [bp-0x78]
    let v24: i16;  // [sp-0x38]
    let v26: i64;  // rdx
    let v27: i64;  // rsi
    let v28: i64;  // rbp
    let v29: i64;  // rax
    let v30: i64;  // rcx
    let v31: i64;  // rax
    let v32: i64;  // rbp
    let v33: i64;  // rbx
    let v34: i64;  // rax
    let v36: i64;  // rbx
    let v37: i64;  // r15
    let v38: i64;  // rbx
    let v39: i64;  // r15
    let v40: i64;  // rbx
    let v41: i64;  // r15
    let v42: i64;  // rax
    let v43: i64;  // r12
    let v44: i64;  // rax
    let v45: i64;  // rbx
    let v46: i64;  // r15
    let v47: i64;  // rdi
    let v48: i64;  // rbx
    let v49: i64;  // r15
    let v50: i64;  // rbx
    let v51: i64;  // rax
    let v52: i64;  // r12
    let v53: i64;  // r13
    let v54: i64;  // rbx
    let v55: i64;  // rbx
    let v56: i64;  // r15
    let v57: i64;  // rax
    let v58: i64;  // r15
    let v59: i64;  // r12
    let v60: i64;  // r15
    let v61: i64;  // rax
    let v62: i64;  // rax
    let v63: i64;  // rax
    let v64: i64;  // rcx
    let v65: i64;  // rcx
    let v66: i64;  // rcx
    let v67: i64;  // rdi
    let v68: i64;  // r8
    let v69: i64;  // r9
    let v70: i64;  // rax
    let v71: i64;  // r8
    let v72: i64;  // r9
    let v73: i64;  // r8
    let v74: i64;  // r9
    let v75: i64;  // rcx
    let v76: i64;  // rdi
    let v77: i64;  // rdi
    let v78: i64;  // rdi
    let v79: i64;  // rdx
    let v80: i64;  // rcx
    let v81: i64;  // rdx
    let v82: i64;  // rcx
    let v83: i64;  // rdi
    let v84: i64;  // rdi

    v23 = struct57 {
        field_0: 0
        field_8: v26
        field_16: v27
        field_24: v26
        field_32: 0
        field_40: v26
        field_48: 201863462959
        field_56: 1
    };
    v24 = 1;
    v22 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v23, v26);
    v28 = *((&v22 as &char + 8) as &i64);
    v29 = *((&v22 as &char + 16) as &i64);
    if v29 == 3 {
        if !(*((v28 + 8) as &i64) == 1) {
            goto LABEL_4a5c80;
        }
        switch (*(v31 as &i8)) {
        case 108:
            v36 = *((v28 + 32) as &i64);
            v0 = v28;
            v37 = *((v28 + 40) as &i64);
            v4 = 0;
            v5 = 0;
            v3 = 0;
            v17 = uucore::parser::parse_size::Parser::parse(&v1, v36, v37);
            if v17 != 3 {
                goto LABEL_4a5aee;
            }
            if !*((&v17 as &char + 24) as &i64) {
                v43 = *((&v17 as &char + 16) as &i64);
                v44 = v0;
                v45 = *((v44 + 16) as &i64);
                v46 = *((v44 + 24) as &i64);
                v4 = 0;
                v5 = 0;
                v3 = 0;
                v17 = uucore::parser::parse_size::Parser::parse(&v1, v45, v46);
                if v17 != 3 {
                    goto LABEL_4a6171;
                }
                if !*((&v17 as &char + 24) as &i64) {
                    v63 = *((&v17 as &char + 16) as &i64);
                    v64 = v63 - 1;
                    if v64 >= v43 {
                        v10 = <T as alloc::string::ToString>::to_string(v0 + 16, v26, v64, v68, v69, v28, 0);
                        *((v84 + 24) as &i64) = v12;
                        *((v84 + 8) as &i192) = v10;
                        *(v84 as &i64) = 1;
                        return;
                    }
                    *((v67 + 8) as &i64) = 3;
                    *((v67 + 16) as &i64) = v63;
                    *((v67 + 24) as &i64) = v43;
                    *(v67 as &i64) = 2;
                    break;
                } else {
                    v6 = 0;
                    v7 = v45;
                    v8 = v46;
                    v9 = 1;
                    v18 = &v6;
                    v10 = Arguments {
                        pieces: [&anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326, ": Value too large for defined data type"]
                        args: [&v18]
                        fmt: None
                    };
                    v12 = &v18;
                    v19 = alloc::fmt::format::format_inner(&v10);
LABEL_4a6171:
                    v1 = 0;
                    v3 = 0;
                    v15 = 32;
                    v16 = 3;
                    v10 = 0;
                    v12 = 0;
                    v13 = &v1;
                    v14 = &g_50bfc8;
                    if <str as core::fmt::Display>::fmt(*((v0 + 16) as &i64), *((v0 + 24) as &i64), &v10) as i8 {
                        core::result::unwrap_failed(); /* do not return */
                    }
                    v6 = v2;
                    *((v77 + 16) as &i128) = v6;
                    *(v77 as &i64) = 1;
LABEL_4a62ef:
                    *((v77 + 8) as &i64) = v1;
                    break;
                }
            } else {
                v6 = 0;
                v7 = v36;
                v8 = v37;
                v9 = 1;
                v18 = Argument {
                    value: &v6
                    formatter: <os_display::Quoted as core::fmt::Display>::fmt
                };
                v10 = Arguments {
                    pieces: [&anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326, ": Value too large for defined data type"]
                    args: [&v18]
                    fmt: None
                };
                v19 = alloc::fmt::format::format_inner(&v10);
LABEL_4a5aee:
                v1 = 0;
                v3 = 0;
                v15 = 32;
                v16 = 3;
                v10 = 0;
                v12 = 0;
                v13 = &v1;
                v14 = &g_50bfc8;
                if <str as core::fmt::Display>::fmt(*((v0 + 32) as &i64), *((v0 + 40) as &i64), &v10) as i8 {
                    core::result::unwrap_failed(); /* do not return */
                }
                goto LABEL_4a62b6;
            }
        case 114:
            v38 = *((v28 + 32) as &i64);
            v0 = v28;
            v39 = *((v28 + 40) as &i64);
            v4 = 0;
            v5 = 0;
            v3 = 0;
            v17 = uucore::parser::parse_size::Parser::parse(&v1, v38, v39);
            if v17 != 3 {
                goto LABEL_4a5ea5;
            }
            if !*((&v17 as &char + 24) as &i64) {
                v50 = *((&v17 as &char + 16) as &i64);
                v51 = v0;
                v52 = *((v51 + 16) as &i64);
                v53 = *((v51 + 24) as &i64);
                v4 = 0;
                v5 = 0;
                v1 = struct8 {
                    field_0: 0
                };
                v3 = 0;
                v17 = uucore::parser::parse_size::Parser::parse(&v1, v52, v53);
                v60 = v0 + 16;
                v61 = v17;
                if v61 != 3 {
                    v65 = *((&v17 as &char + 8) as &i64);
                    v20 = *((&v17 as &char + 16) as &i128);
                    goto LABEL_4a636e;
                }
                if *((&v17 as &char + 24) as &i64) {
                    v6 = 0;
                    v7 = v52;
                    v8 = v53;
                    v9 = 1;
                    v18 = &v6;
                    v10 = Arguments {
                        pieces: [&anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326, ": Value too large for defined data type"]
                        args: [&v18]
                        fmt: None
                    };
                    v12 = &v18;
                    v19 = alloc::fmt::format::format_inner(&v10);
                    v65 = v19;
                    v20 = *((&v19 as &char + 8) as &i128);
                    v61 = 2;
LABEL_4a636e:
                    v10 = v61;
                    v11 = v65;
                    v12 = v20;
                    uu_split::strategy::NumberType::from::{{closure}}(v60, &v10, v11, v71, v72, v28, 0);
                    v75 = v1;
                    v70 = v2;
                    v21 = v3;
                    if v75 == 2 {
                        goto LABEL_4a63db;
                    }
                } else {
                    v70 = *((&v17 as &char + 16) as &i64);
LABEL_4a63db:
                    v82 = v70 - 1;
                    if v82 >= v50 {
                        v10 = <T as alloc::string::ToString>::to_string(v60, v81, v82, v71, v72, v28, 0);
                        *((v84 + 24) as &i64) = v12;
                        *((v84 + 8) as &i192) = v10;
                        *(v84 as &i64) = 1;
                        return;
                    }
                    *((v83 + 8) as &i64) = 5;
LABEL_4a5ffe:
                    *((v83 + 16) as &i64) = v70;
                    *((v83 + 24) as &i64) = v50;
                    *(v83 as &i64) = 2;
                    break;
                }
            } else {
                v6 = 0;
                v7 = v38;
                v8 = v39;
                v9 = 1;
                v18 = &v6;
                v10 = Arguments {
                    pieces: [&anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326, ": Value too large for defined data type"]
                    args: [&v18]
                    fmt: None
                };
                v12 = &v18;
                v19 = alloc::fmt::format::format_inner(&v10);
LABEL_4a5ea5:
                v1 = 0;
                v3 = 0;
                v15 = 32;
                v16 = 3;
                v10 = 0;
                v12 = 0;
                v13 = &v1;
                v14 = &g_50bfc8;
                if <str as core::fmt::Display>::fmt(*((v0 + 32) as &i64), *((v0 + 40) as &i64), &v10) as i8 {
                    core::result::unwrap_failed(); /* do not return */
                }
                goto LABEL_4a62b6;
            }
        default:
LABEL_4a5c80:
            if !v26 {
LABEL_4a5cb7:
                v54 = 1;
                goto LABEL_4a5cbc;
            }
LABEL_4a5c85:
            v54 = __rust_alloc(v26, 1);
LABEL_4a5cb2:
            goto LABEL_4a5cbc;
        }
    } else if v29 != 2 {
        if !(v29 == 1) {
            goto LABEL_4a5c80;
        }
        v32 = *(v28 as &i64);
        v0 = v28;
        v33 = *((v0 + 8) as &i64);
        v4 = 0;
        v5 = 0;
        v3 = 0;
        v17 = uucore::parser::parse_size::Parser::parse(&v1, v32, v33);
        if v17 != 3 {
            goto LABEL_4a5775;
        }
        if !*((&v17 as &char + 24) as &i64) {
            v42 = *((&v17 as &char + 16) as &i64);
            if v42 {
                *((v47 + 8) as &i64) = 0;
                *((v47 + 16) as &i64) = v42;
                *(v47 as &i64) = 2;
                return;
            }
            if v26 {
                v54 = __rust_alloc(v26, 1);
                goto LABEL_4a5cb2;
            } else {
                v54 = 1;
LABEL_4a5cbc:
                memcpy(v54, v27, v26);
                *(v76 as &i64) = 0;
                *((v76 + 8) as &i64) = v26;
                *((v76 + 16) as &i64) = v54;
                *((v76 + 24) as &i64) = v26;
            }
        } else {
            v6 = 0;
            v7 = v32;
            v8 = v33;
            v9 = 1;
            v18 = &v6;
            v10 = Arguments {
                pieces: [&anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326, ": Value too large for defined data type"]
                args: [&v18]
                fmt: None
            };
            v12 = &v18;
            v19 = alloc::fmt::format::format_inner(&v10);
LABEL_4a5775:
            v1 = 0;
            v3 = 0;
            v15 = 32;
            v16 = 3;
            v10 = 0;
            v12 = 0;
            v13 = &v1;
            v14 = &g_50bfc8;
            if <str as core::fmt::Display>::fmt(*(v0 as &i64), *((v0 + 8) as &i64), &v10) as i8 {
                core::result::unwrap_failed(); /* do not return */
            }
            goto LABEL_4a62b6;
        }
    } else {
        v30 = *((v28 + 8) as &i64);
        if !(v30) || !(!(*(*(v28 as &i64) as &i8) != 108) || !(*(*(v28 as &i64) as &i8) != 114)) {
            v40 = *((v28 + 16) as &i64);
            v0 = v28;
            v41 = *((v28 + 24) as &i64);
            v4 = 0;
            v5 = 0;
            v3 = 0;
            v17 = uucore::parser::parse_size::Parser::parse(&v1, v40, v41);
            if v17 != 3 {
                goto LABEL_4a581b;
            }
            if !*((&v17 as &char + 24) as &i64) {
                v50 = *((&v17 as &char + 16) as &i64);
                v57 = v0;
                v58 = *(v57 as &i64);
                v59 = *((v57 + 8) as &i64);
                v4 = 0;
                v5 = 0;
                v1 = struct8 {
                    field_0: 0
                };
                v3 = 0;
                v17 = uucore::parser::parse_size::Parser::parse(&v1, v58, v59);
                v62 = v17;
                if v62 != 3 {
                    v66 = *((&v17 as &char + 8) as &i64);
                    v20 = *((&v17 as &char + 16) as &i128);
                    goto LABEL_4a5d36;
                }
                if !*((&v17 as &char + 24) as &i64) {
                    v70 = *((&v17 as &char + 16) as &i64);
                    goto LABEL_4a5fe9;
                }
                v6 = 0;
                v7 = v58;
                v8 = v59;
                v9 = 1;
                v18 = &v6;
                v10 = Arguments {
                    pieces: [&anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326, ": Value too large for defined data type"]
                    args: [&v18]
                    fmt: None
                };
                v12 = &v18;
                v19 = alloc::fmt::format::format_inner(&v10);
                v66 = v19;
                v20 = *((&v19 as &char + 8) as &i128);
                v62 = 2;
LABEL_4a5d36:
                v10 = v62;
                v11 = v66;
                v12 = v20;
                uu_split::strategy::NumberType::from::{{closure}}(v0, &v10, v11, v73, v74, v28, 0, v2);
                v75 = v1;
                v70 = v2;
                v21 = v3;
                if v75 == 2 {
LABEL_4a5fe9:
                    v80 = v70 - 1;
                    if v80 >= v50 {
                        v10 = <T as alloc::string::ToString>::to_string(v0, v79, v80, v73, v74, v28, 0);
                        *((v84 + 24) as &i64) = v12;
                        *((v84 + 8) as &i192) = v10;
                        *(v84 as &i64) = 1;
                        return;
                    }
                    *((v83 + 8) as &i64) = 1;
                    goto LABEL_4a5ffe;
                }
            } else {
                v6 = 0;
                v7 = v40;
                v8 = v41;
                v9 = 1;
                v18 = &v6;
                v10 = Arguments {
                    pieces: [&anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326, ": Value too large for defined data type"]
                    args: [&v18]
                    fmt: None
                };
                v12 = &v18;
                v19 = alloc::fmt::format::format_inner(&v10);
LABEL_4a581b:
                v1 = 0;
                v3 = 0;
                v15 = 32;
                v16 = 3;
                v10 = 0;
                v12 = 0;
                v13 = &v1;
                v14 = &g_50bfc8;
                if <str as core::fmt::Display>::fmt(*((v0 + 16) as &i64), *((v0 + 24) as &i64), &v10) as i8 {
                    core::result::unwrap_failed(); /* do not return */
                }
LABEL_4a62b6:
                v6 = v2;
                *((v77 + 16) as &i128) = v6;
                *(v77 as &i64) = 0;
                goto LABEL_4a62ef;
            }
        } else {
            if !(v30 == 1) {
                goto LABEL_4a5c80;
            }
            switch (*(v34 as &i8)) {
            case 108:
                v48 = *((v28 + 16) as &i64);
                v0 = v28;
                v49 = *((v28 + 24) as &i64);
                v4 = 0;
                v5 = 0;
                v3 = 0;
                v17 = uucore::parser::parse_size::Parser::parse(&v1, v48, v49);
                if v17 == 3 {
                    if *((&v17 as &char + 24) as &i64) {
                        v6 = 0;
                        v7 = v48;
                        v8 = v49;
                        v9 = 1;
                        v18 = &v6;
                        v10 = Arguments {
                            pieces: [&anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326, ": Value too large for defined data type"]
                            args: [&v18]
                            fmt: None
                        };
                        v12 = &v18;
                        v19 = alloc::fmt::format::format_inner(&v10);
                    } else {
                        v42 = *((&v17 as &char + 16) as &i64);
                        *((v47 + 8) as &i64) = 2;
                        *((v47 + 16) as &i64) = v42;
                        *(v47 as &i64) = 2;
                        return;
                    }
                }
                v1 = 0;
                v3 = 0;
                v15 = 32;
                v16 = 3;
                v10 = 0;
                v12 = 0;
                v13 = &v1;
                v14 = &g_50bfc8;
                if <str as core::fmt::Display>::fmt(*((v0 + 16) as &i64), *((v0 + 24) as &i64), &v10) as i8 {
                    core::result::unwrap_failed(); /* do not return */
                }
                break;
            case 114:
                v55 = *((v28 + 16) as &i64);
                v0 = v28;
                v56 = *((v28 + 24) as &i64);
                v4 = 0;
                v5 = 0;
                v3 = 0;
                v17 = uucore::parser::parse_size::Parser::parse(&v1, v55, v56);
                if v17 == 3 {
                    if *((&v17 as &char + 24) as &i64) {
                        v6 = 0;
                        v7 = v55;
                        v8 = v56;
                        v9 = 1;
                        v18 = &v6;
                        v10 = Arguments {
                            pieces: [&anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326, ": Value too large for defined data type"]
                            args: [&v18]
                            fmt: None
                        };
                        v12 = &v18;
                        v19 = alloc::fmt::format::format_inner(&v10);
                    } else {
                        v42 = *((&v17 as &char + 16) as &i64);
                        *((v47 + 8) as &i64) = 4;
                        *((v47 + 16) as &i64) = v42;
                        *(v47 as &i64) = 2;
                        return;
                    }
                }
                v1 = 0;
                v3 = 0;
                v15 = 32;
                v16 = 3;
                v10 = 0;
                v12 = 0;
                v13 = &v1;
                v14 = &g_50bfc8;
                if <str as core::fmt::Display>::fmt(*((v0 + 16) as &i64), *((v0 + 24) as &i64), &v10) as i8 {
                    core::result::unwrap_failed(); /* do not return */
                }
                break;
            default:
LABEL_4a5c80:
                if !v26 {
                    goto LABEL_4a5cb7;
                }
                goto LABEL_4a5c85;
            }
            goto LABEL_4a5c85;
        }
        *((v78 + 16) as &i128) = v21;
        *(v78 as &i64) = v75;
        *((v78 + 8) as &i64) = v70;
        return;
    }
    return;
}
