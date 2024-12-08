fn uu_join::exec(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i64;  // [sp-0x258]
    let v1: i64;  // [sp-0x250]
    let v2: i8;  // [sp-0x242]
    let v3: i8;  // [sp-0x241]
    let v4: i32;  // [sp-0x240]
    let v5: i8;  // [sp-0x23a]
    let v6: i8;  // [bp-0x239]
    let v7: i384;  // [sp-0x238], Other Possible Types: Option<Result<struct48, struct24>>, Result<struct77, struct16>, struct24
    let v8: i64;  // [sp-0x230]
    let v9: i128;  // [sp-0x228]
    let v10: i128;  // [bp-0x218]
    let v11: i8;  // [bp-0x1e0]
    let v12: struct33;  // [sp-0x1d8], Other Possible Types: i264
    let v13: i64;  // [sp-0x1b0]
    let v14: i192;  // [sp-0x1a8], Other Possible Types: struct24
    let v15: i128;  // [sp-0x198]
    let v16: i128;  // [sp-0x188]
    let v17: i128;  // [sp-0x178]
    let v18: i64;  // [sp-0x168]
    let v19: i128;  // [sp-0x160]
    let v20: i8;  // [sp-0x150]
    let v21: i128;  // [sp-0x148]
    let v22: i64;  // [sp-0x138]
    let v23: i64;  // [sp-0x130]
    let v24: i128;  // [bp-0x128]
    let v25: i128;  // [sp-0x118]
    let v26: i128;  // [sp-0x108]
    let v27: i64;  // [sp-0xf0], Other Possible Types: struct8
    let v28: i64;  // [sp-0xe8]
    let v29: i64;  // [sp-0xe0]
    let v30: i128;  // [sp-0xd8]
    let v31: i128;  // [sp-0xc8]
    let v32: i128;  // [sp-0xb8]
    let v33: i128;  // [sp-0xa8]
    let v34: i64;  // [bp-0x98]
    let v35: i8;  // [sp-0x95]
    let v36: i64;  // [sp-0x90], Other Possible Types: struct8
    let v37: i64;  // [sp-0x88]
    let v38: i64;  // [sp-0x80]
    let v39: i128;  // [sp-0x78]
    let v40: i128;  // [sp-0x68]
    let v41: i128;  // [sp-0x58]
    let v42: i128;  // [sp-0x48]
    let v43: i64;  // [bp-0x38]
    let v44: i8;  // [sp-0x35]
    let v46: i64;  // r15
    let v47: i64;  // rcx
    let v48: i128;  // xmm0
    let v49: i128;  // xmm1
    let v50: i128;  // xmm2
    let v51: i128;  // xmm0
    let v52: i256;  // ymm0
    let v53: i256;  // ymm0
    let v54: i128;  // xmm1
    let v55: i256;  // ymm1
    let v56: i256;  // ymm1
    let v57: i128;  // xmm2
    let v58: i256;  // ymm2
    let v59: i256;  // ymm2
    let v60: i64;  // rax
    let v61: i64;  // rcx
    let v62: i64;  // rdx
    let v63: i128;  // xmm0
    let v64: i256;  // ymm0
    let v66: i128;  // xmm0
    let v67: i128;  // xmm0
    let v68: i128;  // xmm0
    let v69: i256;  // ymm0
    let v70: i64;  // rsi
    let v71: i64;  // rdx
    let v72: i64;  // rax
    let v73: struct8;  // rax
    let v74: struct8;  // rax
    let v75: i64;  // rax
    let v78: i128;  // xmm0
    let v79: i128;  // xmm1
    let v80: i128;  // xmm2
    let v81: i128;  // xmm0
    let v82: i128;  // xmm1
    let v83: i128;  // xmm2
    let v84: i64;  // rax
    let v85: i64;  // rdx
    let v86: i128;  // xmm0
    let v87: i128;  // xmm1
    let v88: i128;  // xmm2
    let v89: i128;  // xmm0
    let v90: i128;  // xmm1
    let v91: i128;  // xmm2
    let v92: i64;  // rax
    let v93: i64;  // rax
    let v94: i64;  // rax
    let v95: i64;  // rax
    let v96: i64;  // rax
    let v97: i64;  // rax
    let v98: i64;  // rax
    let v99: i64;  // r15

    v13 = std::io::stdio::stdin();
    v1 = *((a4 + 88) as &i8);
    v0 = *((a4 + 95) as &i8);
    v7 = uu_join::State::new(0, a0, a1, &v13, *((a4 + 72) as &i64));
    if v27 == 0x8000000000000000 {
        return v99;
    }
    v47 = v11;
    v34 = v47;
    v48 = *((&v7 as &char + 24) as &i128);
    v49 = *((&v7 as &char + 40) as &i128);
    v50 = *((&v7 as &char + 56) as &i128);
    v33 = v8;
    v32 = v50;
    v31 = v49;
    v30 = v48;
    v27 = v7;
    v28 = v8;
    v29 = v9;
    v4 = v47 | -0x100 | 1;
    v1 = *((a4 + 89) as &i8);
    v0 = *((a4 + 95) as &i8);
    v7 = uu_join::State::new(1, a2, a3, &v13, *((a4 + 80) as &i64));
    if v36 == 0x8000000000000000 {
        v4 = v36 | -0x100 | 1;
        return v99;
    }
    v43 = v11;
    v51 = *((&v7 as &char + 24) as &i128);
    v53 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51;
    v54 = *((&v7 as &char + 40) as &i128);
    v56 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54;
    v57 = *((&v7 as &char + 56) as &i128);
    v59 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57;
    v42 = *((&v7 as &char + 72) as &i128);
    v41 = v57;
    v40 = v54;
    v39 = v51;
    v36 = v7;
    v37 = v8;
    v38 = v9;
    v2 = *((a4 + 91) as &i8);
    v3 = *((a4 + 94) as &i8);
    v5 = *((a4 + 92) as &i8);
    if !v5 {
        v4 = v5 | -0x100 | 1;
        v27 = uu_join::State::initialize(&v6, 0);
        v36 = uu_join::State::initialize(&v6, *((a4 + 92) as &i8));
        v22 = *((a4 + 16) as &i64);
        v63 = *(a4 as &i128);
        v64 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63;
        v21 = v63;
        v4 = 0;
    } else {
        v60 = alloc::alloc::Global::alloc_impl(16);
        *(v60 as &i8) = 0;
        v61 = v7;
        v62 = *((&v7 as &char + 7) as &i64);
        *((v60 + 1) as &i64) = v61;
        *((v60 + 8) as &i64) = v62;
        v4 = v61 | -0x100 | 1;
        v14 = alloc::slice::hack::into_vec(v60, 1);
        v7 = struct24 {
            field_0: &v6
            field_8: v65
            field_16: &v14
        };
        uu_join::exec::{{closure}}(&v7, &v27);
        uu_join::exec::{{closure}}(&v7, &v36);
        v22 = *((&v14 as &char + 16) as &i64);
        v66 = v14;
        v64 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
        v21 = v66;
        v4 = v22 | -0x100 | 1;
    }
    v18 = v22;
    v67 = v21;
    v17 = v67;
    v68 = *((a4 + 32) as &i128);
    v69 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68;
    v20 = *((a4 + 95) as &i8);
    v19 = v68;
    v23 = std::io::stdio::stdout();
    v12 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v23, v70, v71));
    if !*((a4 + 93) as &i8) {
LABEL_46f272:
        if v29 && v38 {
            do {
                v75 = uu_join::Input<Sep>::compare(v2, uu_join::State::get_current_key(&v27), v71, uu_join::State::get_current_key(&v36), v71);
                if v75 {
                    if v75 != 1 {
                        if uu_join::State::skip_line(&v27, &v12, &v2, &v17) {
                            v94 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v12);
                            if !v94 {
                                return v99;
                            }
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v94);
                            return v99;
                        }
                    } else {
                        if uu_join::State::skip_line(&v36, &v12, &v2, &v17) {
                            v92 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v12);
                            if !v92 {
                                return v99;
                            }
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v92);
                            return v99;
                        }
                    }
                    v35 = 1;
                    v44 = 1;
                    continue;
                }
                v7 = uu_join::State::extend(&v27, &v2);
                if v7 == 9223372036854775809 {
                    v93 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v12);
                    v46 = v46;
                    if !v93 {
                        return v99;
                    }
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v93);
                    return v99;
                }
                v78 = v7;
                v79 = *((&v7 as &char + 16) as &i128);
                v80 = *((&v7 as &char + 32) as &i128);
                v26 = v80;
                v25 = v79;
                v24 = v78;
                v7 = uu_join::State::extend(&v36, &v2);
                if v7 == 9223372036854775809 {
                    v95 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v12);
                    if v95 {
                        v46 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v95);
                        goto LABEL_46f712;
                    }
                } else {
                    v81 = v7;
                    v82 = *((&v7 as &char + 16) as &i128);
                    v83 = *((&v7 as &char + 32) as &i128);
                    v16 = v83;
                    v14.field_16 = vvar_556{reg 256};
                    v14 = v81;
                    if !(!*((a4 + 90) as &i8) || (v84 = uu_join::State::combine(&v27, &v12, &v36, &v17), !v84)) {
                        v46 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v84);
LABEL_46f712:
                        return v99;
                    }
                    v86 = v24;
                    v87 = v25;
                    v88 = v26;
                    v10 = v88;
                    v9 = v87;
                    v7 = v86;
                    v27 = uu_join::State::reset(&v7, v85);
                    v89 = v14;
                    v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89;
                    v90 = v15;
                    v56 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v90;
                    v91 = v16;
                    v59 = v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v91;
                    v10 = v91;
                    v9 = v90;
                    v7 = v89;
                    v36 = uu_join::State::reset(&v7, v71);
                }
            } while (v29 && v38);
        }
        v46 = uu_join::State::finalize(&v27, &v12, &v2, &v17);
        if v46 {
            v96 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v12);
            if !v96 {
                return v99;
            }
            v46 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v96);
        } else {
            v46 = uu_join::State::finalize(&v36, &v12, &v2, &v17);
            if v46 {
                v97 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v12);
                if !v97 {
                    return v99;
                }
                v46 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v97);
            } else {
                v98 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v12);
                if v98 {
                    v46 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v98);
                } else {
                    if !(!(!*((&v34 as &char + 2) as &i8)) || !(!*((&v43 as &char + 2) as &i8))) {
                        return 0;
                    }
                    v14 = uucore::execution_phrase();
                    v14.field_8 = vvar_779{reg 32};
                    eprintln!("{:?}: input is not in sorted order", &v14);
                    uucore::mods::error::set_exit_code();
                }
                goto LABEL_46f5a5;
            }
        }
        return v99;
    } else {
        v72 = uu_join::State::print_headers(&v27, &v12, &v36);
        if v72 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v72);
            return v99;
        }
        v73 = uu_join::State::reset_read_line(&v2);
        if v73 {
            v46 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v73);
        } else {
            v74 = uu_join::State::reset_read_line(&v2);
            if !v74 {
                goto LABEL_46f272;
            }
            v46 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v74);
        }
LABEL_46f5a5:
        return v99;
    }
}
