fn uu_join::exec(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i8) -> u64 {
    let v0: i8;  // [bp-0x258]
    let v1: i8;  // [bp-0x250]
    let v2: i8;  // [bp-0x244]
    let v3: i8;  // [sp-0x243]
    let v4: i8;  // [sp-0x242]
    let v5: i8;  // [sp-0x241]
    let v6: i32;  // [sp-0x240]
    let v7: i8;  // [sp-0x239]
    let v8: i384;  // [sp-0x238], Other Possible Types: Option<Result<struct48, struct24>>, Result<struct77, struct16>, struct24
    let v9: i64;  // [sp-0x230]
    let v10: i128;  // [sp-0x228]
    let v11: i128;  // [bp-0x218]
    let v12: i8;  // [bp-0x1e0]
    let v13: struct33;  // [sp-0x1d8], Other Possible Types: i264
    let v14: i64;  // [sp-0x1b0]
    let v15: i64;  // [sp-0x1a8], Other Possible Types: struct24
    let v16: i128;  // [sp-0x198]
    let v17: i128;  // [sp-0x188]
    let v18: i128;  // [sp-0x178]
    let v19: i64;  // [sp-0x168]
    let v20: i128;  // [sp-0x160]
    let v21: i8;  // [sp-0x150]
    let v22: i8;  // [sp-0x14f]
    let v23: i128;  // [sp-0x148]
    let v24: i64;  // [sp-0x138]
    let v25: i64;  // [sp-0x130]
    let v26: i128;  // [bp-0x128]
    let v27: i128;  // [sp-0x118]
    let v28: i128;  // [sp-0x108]
    let v29: i64;  // [sp-0xf0], Other Possible Types: struct8
    let v30: i64;  // [sp-0xe8]
    let v31: i64;  // [sp-0xe0]
    let v32: i128;  // [sp-0xd8]
    let v33: i128;  // [sp-0xc8]
    let v34: i128;  // [sp-0xb8]
    let v35: i128;  // [sp-0xa8]
    let v36: i64;  // [bp-0x98]
    let v37: i8;  // [sp-0x95]
    let v38: i64;  // [sp-0x90], Other Possible Types: struct8
    let v39: i64;  // [sp-0x88]
    let v40: i64;  // [sp-0x80]
    let v41: i128;  // [sp-0x78]
    let v42: i128;  // [sp-0x68]
    let v43: i128;  // [sp-0x58]
    let v44: i128;  // [sp-0x48]
    let v45: i64;  // [bp-0x38]
    let v46: i8;  // [sp-0x35]
    let v48: i64;  // r15
    let v49: i64;  // rcx
    let v50: i128;  // xmm0
    let v51: i128;  // xmm1
    let v52: i128;  // xmm2
    let v53: i128;  // xmm0
    let v54: i256;  // ymm0
    let v55: i256;  // ymm0
    let v56: i128;  // xmm1
    let v57: i256;  // ymm1
    let v58: i256;  // ymm1
    let v59: i128;  // xmm2
    let v60: i256;  // ymm2
    let v61: i256;  // ymm2
    let v62: i64;  // rax
    let v63: i64;  // rcx
    let v64: i64;  // rdx
    let v65: i128;  // xmm0
    let v66: i256;  // ymm0
    let v68: i128;  // xmm0
    let v69: i128;  // xmm0
    let v70: i128;  // xmm0
    let v71: i256;  // ymm0
    let v72: i64;  // rsi
    let v73: i64;  // rdx
    let v74: i64;  // rax
    let v75: struct8;  // rax
    let v76: struct8;  // rax
    let v77: i64;  // rax
    let v80: i128;  // xmm0
    let v81: i128;  // xmm1
    let v82: i128;  // xmm2
    let v83: i128;  // xmm0
    let v84: i128;  // xmm1
    let v85: i128;  // xmm2
    let v86: i64;  // rax
    let v87: i64;  // rdx
    let v88: i128;  // xmm0
    let v89: i128;  // xmm1
    let v90: i128;  // xmm2
    let v91: i128;  // xmm0
    let v92: i128;  // xmm1
    let v93: i128;  // xmm2
    let v94: i64;  // rax
    let v95: i64;  // rax
    let v96: i64;  // rax
    let v97: i64;  // rax
    let v98: i64;  // rax
    let v99: i64;  // rax
    let v100: i64;  // rax
    let v101: i64;  // r15

    v14 = std::io::stdio::stdin();
    v8 = uu_join::State::new(0, a0, a1, &v14, *((a4 + 72) as &i64), v0, v1);
    if v29 == 0x8000000000000000 {
        return v101;
    }
    v49 = v12;
    v36 = v49;
    v50 = *((&v8 as &char + 24) as &i128);
    v51 = *((&v8 as &char + 40) as &i128);
    v52 = *((&v8 as &char + 56) as &i128);
    v35 = v9;
    v34 = v52;
    v33 = v51;
    v32 = v50;
    v29 = v8;
    v30 = v9;
    v31 = v10;
    v6 = v49 | -0x100 | 1;
    v8 = uu_join::State::new(1, a2, a3, &v14, *((a4 + 80) as &i64), v0, v1);
    if v38 == 0x8000000000000000 {
        v6 = v38 | -0x100 | 1;
        return v101;
    }
    v45 = v12;
    v53 = *((&v8 as &char + 24) as &i128);
    v55 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53;
    v56 = *((&v8 as &char + 40) as &i128);
    v58 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56;
    v59 = *((&v8 as &char + 56) as &i128);
    v61 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
    v44 = *((&v8 as &char + 72) as &i128);
    v43 = v59;
    v42 = v56;
    v41 = v53;
    v38 = v8;
    v39 = v9;
    v40 = v10;
    v5 = a5;
    v3 = *((a4 + 91) as &i8);
    v4 = *((a4 + 94) as &i8);
    v7 = *((a4 + 92) as &i8);
    if !v7 {
        v6 = v7 | -0x100 | 1;
        v29 = uu_join::State::initialize(&v2, 0);
        v38 = uu_join::State::initialize(&v2, *((a4 + 92) as &i8));
        v24 = *((a4 + 16) as &i64);
        v65 = *(a4 as &i128);
        v66 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65;
        v23 = v65;
        v6 = 0;
    } else {
        v62 = alloc::alloc::Global::alloc_impl(16);
        *(v62 as &i8) = 0;
        v63 = v8;
        v64 = *((&v8 as &char + 7) as &i64);
        *((v62 + 1) as &i64) = v63;
        *((v62 + 8) as &i64) = v64;
        v6 = v63 | -0x100 | 1;
        v15 = alloc::slice::hack::into_vec(v62, 1);
        v8 = struct24 {
            field_0: &v2
            field_8: v67
            field_16: &v15
        };
        uu_join::exec::{{closure}}(&v8, &v29);
        uu_join::exec::{{closure}}(&v8, &v38);
        v24 = *((&v15 as &char + 16) as &i64);
        v68 = v15;
        v66 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68;
        v23 = v68;
        v6 = v24 | -0x100 | 1;
    }
    v69 = v23;
    v18 = v69;
    v19 = v24;
    v70 = *((a4 + 32) as &i128);
    v71 = v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70;
    v21 = *((a4 + 95) as &i8);
    v22 = a5;
    v20 = v70;
    v25 = std::io::stdio::stdout();
    v13 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v25, v72, v73));
    if !*((a4 + 93) as &i8) {
LABEL_46e7ac:
        if v31 && v40 {
            do {
                v77 = uu_join::Input<Sep>::compare(v3, uu_join::State::get_current_key(&v29), v73, uu_join::State::get_current_key(&v38), v73);
                if v77 {
                    if v77 != 1 {
                        if uu_join::State::skip_line(&v29, &v13, &v3, &v18) {
                            v96 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v13);
                            if !v96 {
                                return v101;
                            }
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v96);
                            return v101;
                        }
                    } else {
                        if uu_join::State::skip_line(&v38, &v13, &v3, &v18) {
                            v94 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v13);
                            if !v94 {
                                return v101;
                            }
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v94);
                            return v101;
                        }
                    }
                    v37 = 1;
                    v46 = 1;
                    continue;
                }
                v8 = uu_join::State::extend(&v29, &v3);
                if v8 == 9223372036854775809 {
                    v95 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v13);
                    v48 = v48;
                    if v95 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v95);
                        return v101;
                    }
                    return v101;
                }
                v80 = v8;
                v81 = *((&v8 as &char + 16) as &i128);
                v82 = *((&v8 as &char + 32) as &i128);
                v28 = v82;
                v27 = v81;
                v26 = v80;
                v8 = uu_join::State::extend(&v38, &v3);
                if v8 == 9223372036854775809 {
                    v97 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v13);
                    if v97 {
                        v48 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v97);
                        goto LABEL_46ec42;
                    }
                } else {
                    v83 = v8;
                    v84 = *((&v8 as &char + 16) as &i128);
                    v85 = *((&v8 as &char + 32) as &i128);
                    v17 = v85;
                    v15.field_16 = vvar_560{reg 256};
                    v15 = v83;
                    if !(!*((a4 + 90) as &i8) || (v86 = uu_join::State::combine(&v29, &v13, &v38, &v18), !v86)) {
                        v48 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v86);
LABEL_46ec42:
                        return v101;
                    }
                    v88 = v26;
                    v89 = v27;
                    v90 = v28;
                    v11 = v90;
                    v10 = v89;
                    v8 = v88;
                    v29 = uu_join::State::reset(&v8, v87);
                    v91 = v15;
                    v71 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v91;
                    v92 = v16;
                    v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v92;
                    v93 = v17;
                    v61 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v90 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v93;
                    v11 = v93;
                    v10 = v92;
                    v8 = v91;
                    v38 = uu_join::State::reset(&v8, v73);
                }
            } while (v31 && v40);
        }
        v48 = uu_join::State::finalize(&v29, &v13, &v3, &v18);
        if v48 {
            v98 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v13);
            if !v98 {
                return v101;
            }
            v48 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v98);
        } else {
            v48 = uu_join::State::finalize(&v38, &v13, &v3, &v18);
            if v48 {
                v99 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v13);
                if !v99 {
                    return v101;
                }
                v48 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v99);
            } else {
                v100 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v13);
                if v100 {
                    v48 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v100);
                } else {
                    if !(!(!*((&v36 as &char + 2) as &i8)) || !(!*((&v45 as &char + 2) as &i8))) {
                        return 0;
                    }
                    v15 = uucore::execution_phrase();
                    v15.field_8 = vvar_783{reg 32};
                    eprintln!("{:?}: input is not in sorted order", &v15);
                    uucore::mods::error::set_exit_code();
                }
                goto LABEL_46ead5;
            }
        }
        return v101;
    } else {
        v74 = uu_join::State::print_headers(&v29, &v13, &v38);
        if v74 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v74);
            return v101;
        }
        v75 = uu_join::State::reset_read_line(&v3);
        if v75 {
            v48 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v75);
        } else {
            v76 = uu_join::State::reset_read_line(&v3);
            if !v76 {
                goto LABEL_46e7ac;
            }
            v48 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v76);
        }
LABEL_46ead5:
        return v101;
    }
}
