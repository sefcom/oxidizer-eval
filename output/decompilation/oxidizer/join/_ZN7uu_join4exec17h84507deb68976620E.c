fn uu_join::exec(a0: u32, a1: u32, a2: u32, a3: u32, a4: void*, a5: u8) -> u64 {
    let v0: i64;  // [sp-0x258]
    let v1: i64;  // [sp-0x250]
    let v2: i8;  // [bp-0x244]
    let v3: i8;  // [sp-0x243]
    let v4: i8;  // [sp-0x242]
    let v5: i8;  // [sp-0x241]
    let v6: i32;  // [sp-0x240]
    let v7: i8;  // [sp-0x239]
    let v8: i64;  // [sp-0x238], Other Possible Types: Result<struct77, struct16>, Option<Result<struct48, struct16>>, struct24
    let v9: i64;  // [sp-0x230]
    let v10: i128;  // [sp-0x228]
    let v11: i128;  // [bp-0x218]
    let v12: i8;  // [bp-0x1e0]
    let v13: struct33;  // [sp-0x1d8], Other Possible Types: i264
    let v14: i64;  // [sp-0x1b0]
    let v15: i192;  // [sp-0x1a8], Other Possible Types: struct24
    let v16: i64;  // [sp-0x1a0]
    let v17: i128;  // [sp-0x198]
    let v18: i128;  // [sp-0x188]
    let v19: i128;  // [sp-0x178]
    let v20: i64;  // [sp-0x168]
    let v21: i128;  // [sp-0x160]
    let v22: i8;  // [sp-0x150]
    let v23: i8;  // [sp-0x14f]
    let v24: i128;  // [sp-0x148]
    let v25: i64;  // [sp-0x138]
    let v26: i64;  // [sp-0x130]
    let v27: i128;  // [bp-0x128]
    let v28: i128;  // [sp-0x118]
    let v29: i128;  // [sp-0x108]
    let v30: i64;  // [sp-0xf0], Other Possible Types: struct8
    let v31: i64;  // [sp-0xe8]
    let v32: i64;  // [sp-0xe0]
    let v33: i128;  // [sp-0xd8]
    let v34: i128;  // [sp-0xc8]
    let v35: i128;  // [sp-0xb8]
    let v36: i128;  // [sp-0xa8]
    let v37: i64;  // [bp-0x98]
    let v38: i8;  // [sp-0x95]
    let v39: i64;  // [sp-0x90], Other Possible Types: struct8
    let v40: i64;  // [sp-0x88]
    let v41: i64;  // [sp-0x80]
    let v42: i128;  // [sp-0x78]
    let v43: i128;  // [sp-0x68]
    let v44: i128;  // [sp-0x58]
    let v45: i128;  // [sp-0x48]
    let v46: i64;  // [bp-0x38]
    let v47: i8;  // [sp-0x35]
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
    let v63: i64;  // rax
    let v64: i64;  // rcx
    let v65: i64;  // rdx
    let v66: i128;  // xmm0
    let v67: i256;  // ymm0
    let v68: i128;  // xmm0
    let v69: i128;  // xmm0
    let v70: i128;  // xmm0
    let v71: i256;  // ymm0
    let v72: i64;  // rax
    let v73: i64;  // rax
    let v74: i64;  // rax
    let v75: i64;  // rdx
    let v76: i64;  // rax
    let v77: i128;  // xmm0
    let v78: i128;  // xmm1
    let v79: i128;  // xmm2
    let v80: i128;  // xmm0
    let v81: i128;  // xmm1
    let v82: i128;  // xmm2
    let v83: i64;  // rax
    let v84: i128;  // xmm0
    let v85: i128;  // xmm1
    let v86: i128;  // xmm2
    let v87: i128;  // xmm0
    let v88: i128;  // xmm1
    let v89: i128;  // xmm2
    let v90: i64;  // rax
    let v91: i64;  // rax
    let v92: i64;  // rax
    let v93: i64;  // rax
    let v94: i64;  // rax
    let v95: i64;  // rax
    let v96: i64;  // rax
    let v97: i64;  // r15

    v14 = std::io::stdio::stdin();
    v1 = *((a4 + 88) as &i8);
    v0 = *((a4 + 95) as &i8);
    v8 = uu_join::State::new(None, a0, a1, &v14, *((a4 + 72) as &i64));
    if v30 == 0x8000000000000000 {
        return v97;
    }
    v49 = v12;
    v37 = v49;
    v50 = *((&v8 as &char + 24) as &i128);
    v51 = *((&v8 as &char + 40) as &i128);
    v52 = *((&v8 as &char + 56) as &i128);
    v36 = v8;
    v35 = v52;
    v34 = v51;
    v33 = v50;
    v30 = v8;
    v31 = v9;
    v32 = v10;
    v6 = v49 & -0x100 | 1;
    v1 = *((a4 + 89) as &i8);
    v0 = *((a4 + 95) as &i8);
    v8 = uu_join::State::new(0x1, a2, a3, &v14, *((a4 + 80) as &i64));
    if v39 == 0x8000000000000000 {
        v6 = v39 & -0x100 | 1;
        return v97;
    }
    v46 = v12;
    v53 = *((&v8 as &char + 24) as &i128);
    v55 = (v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53;
    v56 = *((&v8 as &char + 40) as &i128);
    v58 = (v57 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56;
    v59 = *((&v8 as &char + 56) as &i128);
    v61 = (v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
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
        v67 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
        v24 = v66;
        v6 = 0;
    } else {
        v63 = alloc::alloc::Global::alloc_impl();
        *(v63 as &i8) = 0;
        v64 = v8;
        v65 = *((&v8 as &char + 7) as &i64);
        *((v63 + 1) as &i64) = v64;
        *((v63 + 8) as &i64) = v65;
        v6 = v64 & -0x100 | 1;
        v15 = alloc::slice::hack::into_vec(v63, 1);
        v8 = struct24 {
            field_0: &v2
            field_8: v62
            field_16: &v15
        };
        uu_join::exec::{{closure}}(&v8, &v30);
        uu_join::exec::{{closure}}(&v8, &v39);
        v25 = *((&v15 as &char + 16) as &i64);
        v68 = v15;
        v67 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68;
        v24 = v68;
        v6 = v25 & -0x100 | 1;
    }
    v69 = v24;
    v19 = v69;
    v20 = v25;
    v70 = *((a4 + 32) as &i128);
    v71 = (v67 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70;
    v22 = *((a4 + 95) as &i8);
    v23 = a5;
    v21 = v70;
    v26 = std::io::stdio::stdout();
    v13 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v26));
    if *((a4 + 93) as &i8) {
        v72 = uu_join::State::print_headers(&v30, &v13, &v39, &v19);
        if v72 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v72);
            return v97;
        }
        v73 = uu_join::State::reset_read_line(&v30, &v3);
        if v73 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v73);
        } else {
            v74 = uu_join::State::reset_read_line(&v39, &v3);
            if !v74 {
                goto LABEL_46f0ac;
            }
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v74);
        }
LABEL_46f3d5:
        return v97;
    }
LABEL_46f0ac:
    if v32 && v41 {
        do {
            v76 = uu_join::Input<Sep>::compare(v3, uu_join::State::get_current_key(&v30), v75, uu_join::State::get_current_key(&v39), v75);
            if !v76 {
                v8 = uu_join::State::extend(&v30, &v3);
                if v8 == 9223372036854775809 {
                    v91 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v13);
                    if !v91 {
                        return v97;
                    }
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v91);
                    return v97;
                }
                v77 = v8;
                v78 = *((&v8 as &char + 16) as &i128);
                v79 = *((&v8 as &char + 32) as &i128);
                v29 = v79;
                v28 = v78;
                v27 = v77;
                v8 = uu_join::State::extend(&v39, &v3);
                if v8 == 9223372036854775809 {
                    v93 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v13);
                    if v93 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v93);
                    }
                } else {
                    v80 = v8;
                    v81 = *((&v8 as &char + 16) as &i128);
                    v82 = *((&v8 as &char + 32) as &i128);
                    v18 = v82;
                    v17 = v81;
                    v15 = v80;
                    if !(!*((a4 + 90) as &i8)) && !((v83 = uu_join::State::combine(&v30, &v13, &v39), !v83)) {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v83);
                    } else {
                        v84 = v27;
                        v85 = v28;
                        v86 = v29;
                        v11 = v86;
                        v10 = v85;
                        v8 = v84;
                        uu_join::State::reset();
                        v87 = v15;
                        v71 = (((v71 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v84) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87;
                        v88 = v17;
                        v58 = (((v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88;
                        v89 = v18;
                        v61 = (((v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89;
                        v11 = v89;
                        v10 = v88;
                        v8 = v87;
                        uu_join::State::reset();
                        continue;
                    }
                }
                return v97;
            }
            if v76 != 1 {
                if uu_join::State::skip_line(&v30, &v13, &v3, &v19) {
                    v92 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v13);
                    if v92 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v92);
                        return v97;
                    }
                    return v97;
                }
            } else {
                if uu_join::State::skip_line(&v39, &v13, &v3, &v19) {
                    v90 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v13);
                    if !v90 {
                        return v97;
                    }
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v90);
                }
            }
            v38 = 1;
            v47 = 1;
        } while (v32 && v41);
        goto LABEL_46f431;
    }
    if uu_join::State::finalize(&v30, &v13, &v3, &v19) {
        v94 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v13);
        if !v94 {
            return v97;
        }
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v94);
    } else if uu_join::State::finalize(&v39, &v13, &v3, &v19) {
        v95 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v13);
        if !v95 {
            return v97;
        }
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v95);
    } else {
        v96 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v13);
        if v96 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v96);
        } else {
            if !(!(!*((&v37 as &char + 2) as &i8)) || !(!*((&v46 as &char + 2) as &i8))) {
                return v97;
            }
            v15 = uucore::execution_phrase();
            v16 = v75;
            eprintln!("{}: input is not in sorted order", &v15);
            uucore::mods::error::set_exit_code(1);
        }
        goto LABEL_46f3d5;
    }
LABEL_46f431:
    return v97;
}
