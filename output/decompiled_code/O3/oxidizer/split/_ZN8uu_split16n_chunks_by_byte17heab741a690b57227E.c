fn uu_split::n_chunks_by_byte(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x158]
    let v1: i64;  // [sp-0x150]
    let v2: i64;  // [sp-0x148]
    let v3: i64;  // [sp-0x140]
    let v4: i64;  // [sp-0x138]
    let v5: i64;  // [sp-0x130]
    let v6: i64;  // [sp-0x128], Other Possible Types: Arguments
    let v7: i64;  // [sp-0x120]
    let v8: i64;  // [bp-0x118]
    let v9: i64;  // [sp-0x110]
    let v10: i64;  // [sp-0xf8]
    let v11: i64;  // [sp-0xf0]
    let v12: i64;  // [sp-0xe8]
    let v13: i64;  // [sp-0xd8]
    let v14: i64;  // [sp-0xd0]
    let v15: i64;  // [sp-0xc8]
    let v16: i64;  // [sp-0xc0]
    let v17: i64;  // [sp-0xb8]
    let v18: i64;  // [sp-0xb0]
    let v19: i64;  // [sp-0xa8]
    let v20: i64;  // [sp-0xa0]
    let v21: i64;  // [sp-0x98]
    let v22: i64;  // [sp-0x90]
    let v23: String;  // [sp-0x88], Other Possible Types: i192
    let v24: i128;  // [sp-0x70]
    let v25: i64;  // [sp-0x60]
    let v26: i8;  // [sp-0x58]
    let v27: Argument;  // [bp-0x50]
    let v28: Argument;  // [bp-0x48]
    let v29: i64;  // [sp-0x38]
    let v31: i64;  // r12
    let v32: i64;  // rdx
    let v33: i64;  // r13
    let v34: i64;  // rax
    let v35: i128;  // xmm0
    let v38: i64;  // rax
    let v39: i64;  // rsi
    let v40: i64;  // r15
    let v41: i64;  // rax
    let v42: i64;  // rax
    let v43: i32;  // eax
    let v45: i64;  // r14
    let v46: i64;  // r8
    let v47: i64;  // r9
    let v48: i64;  // rbp
    let v50: i64;  // r13
    let v51: i64;  // r14
    let v52: i64;  // r12
    let v53: i64;  // r14
    let v54: i64;  // rax
    let v55: i64;  // rdx
    let v56: i64;  // rsi
    let v57: i64;  // rbx
    let v59: i64;  // r13
    let v60: i64;  // rcx
    let v61: i64;  // rax
    let v62: i64;  // rbp
    let v63: i64;  // rsi
    let v64: i64;  // rbx
    let v65: i64;  // r12
    let v66: i64;  // rax
    let v67: i64;  // r12
    let v68: i64;  // r15
    let v70: i64;  // r12
    let v71: i64;  // r13
    let v72: i64;  // r15
    let v73: i64;  // r14
    let v75: i64;  // rdi
    let v76: i64;  // r15
    let v77: i64;  // r14
    let v79: i64;  // rdi

    v17 = 0;
    v18 = 1;
    v19 = 0;
    v31 = a0 + 112;
    v33 = v32;
    if uu_split::get_input_size(v31, a1, &v17, *(a0 as &i64), *((a0 + 8) as &i64)) {
        v6 = 0x8000000000000000;
        v9 = v32;
        v34 = __rust_alloc(32, 8);
        v35 = v6;
        *((v34 + 16) as &i8) = v8;
        *(v34 as &i128) = v35;
        return v34;
    }
    v24 = v18;
    v25 = a1;
    v26 = 0;
    if a3 != 1 {
        if !(!v38) {
            goto LABEL_49b898;
        }
    } else if v32 && a2 {
LABEL_49b898:
        v12 = a2;
        v6 = std::io::stdio::stdout();
        v5 = std::io::stdio::Stderr::lock(&v6, v39, v32);
        v13 = 0;
        v14 = 8;
        v15 = 0;
        v40 = v12;
        if (v32 | v40) >> 32 {
            v41 = v32;
            v42 = (0 CONCAT v41) /m v40;
            v11 = (0 CONCAT v41) /m v40 >> 64;
        } else {
            v43 = v32;
            v42 = (0 CONCAT v43) /m v40 & 4294967295;
            v11 = (0 CONCAT v43) /m v40 >> 32 & 4294967295;
        }
        v10 = v42;
        if a3 != 1 {
            v20 = v31;
            <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(&v6, v40, a0, 0, v46, v47);
            v34 = v7;
            v51 = v8;
            if v0 == 0x8000000000000000 {
                goto LABEL_49bde7;
            } else {
                v0 = v6;
                v13 = v0;
                v14 = v34;
                v15 = v51;
                v55 = 1;
                v56 = 1;
                v4 = v34;
            }
        } else {
            v0 = 0;
            v45 = 1;
            loop {
                v48 = 1;
                v45 += v48 < v40;
                v1 = 0;
                v2 = 1;
                v3 = 0;
                if !v33 {
                    goto LABEL_49bef2;
                }
                v6 = &v24;
                v7 = v50;
                if std::io::default_read_to_end(&v6, &v1, 0, &v24) {
                    v20 = v31;
                    v52 = 8;
                    v53 = 0;
                    goto LABEL_49bc2e;
                }
                if v48 == a4 {
                    break;
                }
                v40 = v12;
                if !(v48 < v40) || !(v45 <= v40) {
                    goto LABEL_49bef2;
                }
            }
            v54 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v5, v2, v3);
            if v54 {
                v34 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v54);
                v67 = 8;
                v53 = 0;
                goto LABEL_49bd64;
            } else {
                if !v1 {
                    goto LABEL_49bef2;
                }
                goto LABEL_49bec2;
            }
        }
        loop {
            v1 = 0;
            v2 = 1;
            v3 = 0;
            if !v33 {
                if !v51 {
                    goto LABEL_49bebb;
                }
LABEL_49be66:
                v72 = v52 + 80;
                do {
                    v73 = v51;
                    v72 += 80;
                } while (v73 != 1);
                v0 = v13;
LABEL_49bebb:
                if v0 {
LABEL_49bec2:
                }
LABEL_49bef2:
                v75 = v5;
                *((v75 + 12) as &i32) = *((v75 + 12) as &i32) - 1;
                if vvar_1184 != 1 {
                    return 0;
                }
                *(v75 as &i64) = 0;
                *((v75 + 8) as &i32) = 0;
                if BinaryOp CasCmpNE {
                    goto LABEL_0x49bf05;
                }
                if ((Not (Load(addr=(vvar_785{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
                std::sys::sync::mutex::futex::Mutex::wake(v75 + 8);
            }
            v21 = v56 + (v55 < v40);
            v57 = v55 - 1;
            v22 = v55;
            v6 = &v24;
            v7 = v59;
            if std::io::default_read_to_end(&v6, &v1, 0, &v24) {
LABEL_49bc2e:
                v16 = v68;
                v27 = Argument {
                    value: v20
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v28 = Argument {
                    value: <alloc::string::String as core::fmt::Display>::fmt
                    formatter: &v16
                };
                v29 = <std::io::error::Error as core::fmt::Display>::fmt;
                v6 = Arguments {
                    pieces: [&g_50b898, ": cannot read from input : "]
                    args: [&v27, &v28]
                    fmt: None
                };
                v23 = alloc::fmt::format::format_inner(&v6);
                v70 = *((&v23 as &char + 8) as &i64);
                v71 = *((&v23 as &char + 16) as &i64);
                v34 = __rust_alloc(32, 8);
                *(v34 as &i192) = v23;
                *((v34 + 8) as &i64) = v70;
                *((v34 + 16) as &i64) = v71;
                *((v34 + 24) as &i32) = 1;
                goto LABEL_49bd25;
            } else {
                if v57 >= v51 {
                    core::panicking::panic_bounds_check(); /* do not return */
                }
                v60 = v57 * 80;
                v61 = *((v52 + v60 + 24) as &i64);
                if v61 != 0x8000000000000000 {
                    v62 = v52 + v60 + 24;
                } else {
                    <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::instantiate_writer(&v6, &v13, v57, a0, v46, v47);
                    v34 = v6;
                    v62 = v7;
                    if !(!v34) {
                        goto LABEL_49bd25;
                    }
                    v61 = *(v62 as &i64);
                }
                v63 = v2;
                v64 = v3;
                v65 = *((v62 + 16) as &i64);
                if v64 < v61 - v65 {
                    memcpy(*((v62 + 8) as &i64) + v65, v63, v64);
                    *((v62 + 16) as &i64) = v65 + v64;
                    v4 = v4;
                    goto LABEL_49bbd4;
                }
                v66 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v62, v63, v64, v60, v46, v47);
                v67 = v4;
                if !v66 {
LABEL_49bbd4:
                    v52 = v4;
                    v40 = v12;
                    v56 = v21;
                    if v22 >= v40 || (v33 -= v32, v55 = v56, v55 > v40) {
                        goto LABEL_49be66;
                    }
                } else {
                    v34 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v66);
LABEL_49bd25:
LABEL_49bd64:
                    v4 = v67;
                    if v53 {
                        v76 = v4 + 80;
                        do {
                            v77 = v53;
                            v76 += 80;
                        } while (v77 != 1);
                    }
LABEL_49bde7:
                    v79 = v5;
                    *((v79 + 12) as &i32) = *((v79 + 12) as &i32) - 1;
                    if vvar_1190 == 1 {
                        *(v79 as &i64) = 0;
                        *((v79 + 8) as &i32) = 0;
                        if BinaryOp CasCmpNE {
                            goto LABEL_0x49be17;
                        }
                        if ((Not (Load(addr=(vvar_856{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
                        std::sys::sync::mutex::futex::Mutex::wake(v79 + 8);
                    }
                    return v34;
                }
            }
        }
    }
    return v34;
}
