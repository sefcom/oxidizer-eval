fn uu_join::exec(a0: u32, a1: u32, a2: u32, a3: u32, a4: void*, a5: u8) -> u64 {
    let v0: i8;  // [bp-0x258]
    let v1: i8;  // [bp-0x250]
    let v2: i8;  // [bp-0x244]
    let v3: i8;  // [sp-0x243]
    let v4: i8;  // [sp-0x242]
    let v5: i8;  // [sp-0x241]
    let v6: i32;  // [sp-0x240]
    let v7: i8;  // [sp-0x239]
    let v8: i64;  // [sp-0x238], Other Possible Types: Result<struct77, struct16>, Option<Result<struct48, struct16>>, int, struct24
    let v9: i64;  // [sp-0x230]
    let v10: i64;  // [sp-0x228], Other Possible Types: int
    let v11: iNone;  // [bp-0x218]
    let v12: i8;  // [bp-0x1e0]
    let v13: struct33;  // [sp-0x1d8]
    let v14: i64;  // [sp-0x1b0]
    let v15: iNone;  // [sp-0x1a8], Other Possible Types: unsigned long, struct24
    let v16: i64;  // [sp-0x1a0]
    let v17: iNone;  // [sp-0x198]
    let v18: iNone;  // [sp-0x188]
    let v19: iNone;  // [sp-0x178]
    let v20: i64;  // [sp-0x168]
    let v21: iNone;  // [sp-0x160]
    let v22: i8;  // [sp-0x150]
    let v23: i8;  // [sp-0x14f]
    let v24: iNone;  // [sp-0x148]
    let v25: i64;  // [sp-0x138]
    let v26: i64;  // [sp-0x130]
    let v27: iNone;  // [bp-0x128]
    let v28: iNone;  // [sp-0x118]
    let v29: iNone;  // [sp-0x108]
    let v30: i64;  // [sp-0xf0], Other Possible Types: struct8
    let v31: i64;  // [sp-0xe8]
    let v32: i64;  // [sp-0xe0]
    let v33: iNone;  // [sp-0xd8]
    let v34: iNone;  // [sp-0xc8]
    let v35: iNone;  // [sp-0xb8]
    let v36: iNone;  // [sp-0xa8]
    let v37: i64;  // [bp-0x98]
    let v38: i8;  // [sp-0x95]
    let v39: i64;  // [sp-0x90], Other Possible Types: struct8
    let v40: i64;  // [sp-0x88]
    let v41: i64;  // [sp-0x80]
    let v42: iNone;  // [sp-0x78]
    let v43: iNone;  // [sp-0x68]
    let v44: iNone;  // [sp-0x58]
    let v45: iNone;  // [sp-0x48]
    let v46: i64;  // [bp-0x38]
    let v47: i8;  // [sp-0x35]
    let v49: i64;  // rcx
    let v50: iNone;  // xmm0
    let v51: iNone;  // xmm1
    let v52: iNone;  // xmm2
    let v53: iNone;  // xmm0
    let v54: iNone;  // ymm0
    let v55: iNone;  // ymm0
    let v56: iNone;  // xmm1
    let v57: iNone;  // ymm1
    let v58: iNone;  // ymm1
    let v59: iNone;  // xmm2
    let v60: iNone;  // ymm2
    let v61: iNone;  // ymm2
    let v63: i64;  // rax
    let v64: i64;  // rcx
    let v65: i64;  // rdx
    let v66: iNone;  // xmm0
    let v67: iNone;  // ymm0
    let v68: iNone;  // xmm0
    let v69: iNone;  // xmm0
    let v70: iNone;  // xmm0
    let v71: iNone;  // ymm0
    let v72: i64;  // rax
    let v73: struct8;  // rax
    let v74: struct8;  // rax
    let v75: i64;  // rdx
    let v76: i64;  // rax
    let v77: iNone;  // xmm0
    let v78: iNone;  // xmm1
    let v79: iNone;  // xmm2
    let v80: iNone;  // xmm0
    let v81: iNone;  // xmm1
    let v82: iNone;  // xmm2
    let v83: iNone;  // xmm0
    let v84: iNone;  // xmm1
    let v85: iNone;  // xmm2
    let v86: iNone;  // xmm0
    let v87: iNone;  // xmm1
    let v88: iNone;  // xmm2
    let v89: struct1;  // rax
    let v90: struct1;  // rax
    let v91: struct1;  // rax
    let v92: i64;  // r15

    v14 = std::io::stdio::stdin();
    v8 = uu_join::State::new(None, a0, a1, &v14, *((a4 + 72) as &i64), v0, v1);
    if v30 == 0x8000000000000000 {
        return v92;
    }
    v49 = *(&v12 as &i64);
    v37 = v49;
    v50 = *((&v8 as &char + 24) as &i128);
    v51 = *((&v8 as &char + 40) as &i128);
    v52 = *((&v8 as &char + 56) as &i128);
    v36 = v8 as i128;
    v35 = v52;
    v34 = v51;
    v33 = v50;
    v30 = v8;
    v31 = v9;
    v32 = v10;
    v6 = (v49 & -0x100 | 1) as u32;
    v8 = uu_join::State::new(0x1, a2, a3, &v14, *((a4 + 80) as &i64), v0, v1);
    if v39 == 0x8000000000000000 {
        v6 = (v39 & -0x100 | 1) as u32;
        return v92;
    }
    *(&v46 as &i64) = *(&v12 as &i64);
    v53 = *((&v8 as &char + 24) as &i128);
    v55 = (v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 as u256;
    v56 = *((&v8 as &char + 40) as &i128);
    v58 = (v57 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 as u256;
    v59 = *((&v8 as &char + 56) as &i128);
    v61 = (v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 as u256;
    v45 = *((&v8 as &char + 72) as &i128);
    v44 = v59;
    v43 = v56;
    v42 = v53;
    v39 = v8;
    v40 = v9;
    v41 = v10;
    v5 = a5;
    v3 = *((a4 + 91) as &i8);
    v4 = *((a4 + 94) as &i8);
    v7 = *((a4 + 92) as &i8);
    if !v7 {
        v6 = v7 & -0x100 | 1;
        v30 = uu_join::State::initialize(&v2, 0);
        v39 = uu_join::State::initialize(&v2, *((a4 + 92) as &i8));
        v25 = *((a4 + 16) as &i64);
        v66 = *(a4 as &i128);
        v67 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66 as u256;
        v24 = v66;
        v6 = 0;
    } else {
        v63 = alloc::alloc::Global::alloc_impl(16);
        *(v63 as &i8) = 0;
        v64 = v8;
        v65 = *((&v8 as &char + 7) as &i64);
        *((v63 + 1) as &unsigned long) = v64;
        *((v63 + 8) as &unsigned long) = v65;
        v6 = (v64 & -0x100 | 1) as u32;
        v15 = alloc::slice::hack::into_vec(v63, 1);
        v8 = struct24 {
            field_0: &v2
            field_8: v62
            field_16: &v15
        };
        uu_join::exec::{{closure}}(&v8, &v30);
        uu_join::exec::{{closure}}(&v8, &v39);
        v25 = v15.field_16;
        v68 = *(&v15.field_0 as &i128);
        v67 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68 as u256;
        v24 = v68;
        v6 = (v25 & -0x100 | 1) as u32;
    }
    v69 = v24;
    v19 = v69;
    v20 = v25;
    v70 = *((a4 + 32) as &i128);
    v71 = (v67 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70 as u256;
    v22 = *((a4 + 95) as &i8);
    v23 = a5;
    v21 = v70;
    v26 = std::io::stdio::stdout();
    v13 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v26));
    if *((a4 + 93) as &i8) {
        v72 = uu_join::State::print_headers(&v30, &v13, &v39, &v19);
        if v72 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v72);
            return v92;
        }
        v73 = uu_join::State::reset_read_line(&v3);
        if v73 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v73);
        } else {
            v74 = uu_join::State::reset_read_line(&v3);
            if !v74 {
                goto LABEL_46f0ac;
            }
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v74);
        }
LABEL_46f3d5:
        return v92;
    }
LABEL_46f0ac:
    if v32 && v41 {
        do {
            v76 = uu_join::Input<Sep>::compare(v3, uu_join::State::get_current_key(&v30), v75, uu_join::State::get_current_key(&v39), v75);
            if !v76 as u8 {
                v8 = uu_join::State::extend(&v30, &v3);
                if v8 == 9223372036854775809 {
                    v89 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
                    if !v89 {
                        return v92;
                    }
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v89);
                    return v92;
                }
                v77 = v8 as i128;
                v78 = *((&v8 as &char + 16) as &i128);
                v79 = *((&v8 as &char + 32) as &i128);
                v29 = v79;
                v28 = v78;
                v27 = v77;
                v8 = uu_join::State::extend(&v39, &v3);
                if v8 == 9223372036854775809 {
                    v90 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
                    if v90 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v90);
                    }
                } else {
                    v80 = v8 as i128;
                    v81 = *((&v8 as &char + 16) as &i128);
                    v82 = *((&v8 as &char + 32) as &i128);
                    v18 = v82;
                    v17 = v81;
                    v15 = v80;
                    if !uu_join::State::combine(&v30, &v13, &v39) || !*((a4 + 90) as &i8) {
                        v83 = v27 as i128;
                        v84 = v28;
                        v85 = v29;
                        v11 = v85;
                        v10 = v84;
                        v8 = v83;
                        v30 = uu_join::State::reset(&v8);
                        v86 = v15 as i128;
                        v71 = (((v71 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86 as u256;
                        v87 = v17;
                        v58 = (((v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v84 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87 as u256;
                        v88 = v18;
                        v61 = (((v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88 as u256;
                        v11 = v88;
                        v10 = v87;
                        v8 = v86;
                        v39 = uu_join::State::reset(&v8);
                        continue;
                    }
                }
                return v92;
            }
            if v76 as u32 != 1 {
                if uu_join::State::skip_line(&v30, &v13, &v3, &v19) {
                    if <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush() {
                        return v92;
                    }
                    return v92;
                }
            } else {
                if uu_join::State::skip_line(&v39, &v13, &v3, &v19) && !<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush() {
                    return v92;
                }
            }
            v38 = 1;
            v47 = 1;
        } while (v32 && v41);
        goto LABEL_46f431;
    }
    if uu_join::State::finalize(&v30, &v13, &v3, &v19) {
        if !<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush() {
            return v92;
        }
    } else {
        if !uu_join::State::finalize(&v39, &v13, &v3, &v19) {
            v91 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
            if v91 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v91);
            } else {
                if !(!(!*((&v37 as &char + 2) as &i8)) || !(!*((&v46 as &char + 2) as &i8))) {
                    return v92;
                }
                v15 = uucore::execution_phrase();
                v16 = v75;
                eprintln!("{}: input is not in sorted order", &v15);
                uucore::mods::error::set_exit_code(1);
            }
            goto LABEL_46f3d5;
        } else if !<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush() {
            return v92;
        }
    }
LABEL_46f431:
    return v92;
}
