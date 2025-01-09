fn uu_join::exec(a0: u32, a1: u32, a2: u32, a3: u32, a4: void*) -> u64 {
    let v0: i64;  // [sp-0x258]
    let v1: i64;  // [sp-0x250]
    let v2: i8;  // [sp-0x242]
    let v3: i8;  // [sp-0x241]
    let v4: i32;  // [sp-0x240]
    let v5: i8;  // [sp-0x23a]
    let v6: i8;  // [bp-0x239]
    let v7: i128;  // [sp-0x238], Other Possible Types: Option<Result<struct48, struct16>>, Result<struct77, struct16>, struct24
    let v8: i64;  // [sp-0x230]
    let v9: i128;  // [sp-0x228]
    let v10: i128;  // [bp-0x218]
    let v11: i8;  // [bp-0x1e0]
    let v12: i264;  // [sp-0x1d8], Other Possible Types: struct33
    let v13: i64;  // [sp-0x1b0]
    let v14: i64;  // [sp-0x1a8], Other Possible Types: struct24
    let v15: i64;  // [sp-0x1a0]
    let v16: i128;  // [sp-0x198]
    let v17: i128;  // [sp-0x188]
    let v18: i128;  // [sp-0x178]
    let v19: i64;  // [sp-0x168]
    let v20: i128;  // [sp-0x160]
    let v21: i8;  // [sp-0x150]
    let v22: i128;  // [sp-0x148]
    let v23: i64;  // [sp-0x138]
    let v24: i64;  // [sp-0x130]
    let v25: i128;  // [bp-0x128]
    let v26: i128;  // [sp-0x118]
    let v27: i128;  // [sp-0x108]
    let v28: i64;  // [sp-0xf0], Other Possible Types: struct8
    let v29: i64;  // [sp-0xe8]
    let v30: i64;  // [sp-0xe0]
    let v31: i128;  // [sp-0xd8]
    let v32: i128;  // [sp-0xc8]
    let v33: i128;  // [sp-0xb8]
    let v34: i128;  // [sp-0xa8]
    let v35: i64;  // [bp-0x98]
    let v36: i8;  // [sp-0x95]
    let v37: i64;  // [sp-0x90], Other Possible Types: struct8
    let v38: i64;  // [sp-0x88]
    let v39: i64;  // [sp-0x80]
    let v40: i128;  // [sp-0x78]
    let v41: i128;  // [sp-0x68]
    let v42: i128;  // [sp-0x58]
    let v43: i128;  // [sp-0x48]
    let v44: i64;  // [bp-0x38]
    let v45: i8;  // [sp-0x35]
    let v47: i64;  // r15
    let v48: i64;  // rcx
    let v49: i128;  // xmm0
    let v50: i128;  // xmm1
    let v51: i128;  // xmm2
    let v52: i128;  // xmm0
    let v53: i256;  // ymm0
    let v54: i256;  // ymm0
    let v55: i128;  // xmm1
    let v56: i256;  // ymm1
    let v57: i256;  // ymm1
    let v58: i128;  // xmm2
    let v59: i256;  // ymm2
    let v60: i256;  // ymm2
    let v61: i64;  // rax
    let v62: i64;  // rcx
    let v63: i64;  // rdx
    let v64: i128;  // xmm0
    let v65: i256;  // ymm0
    let v67: i128;  // xmm0
    let v68: i128;  // xmm0
    let v69: i128;  // xmm0
    let v70: i256;  // ymm0
    let v71: i64;  // rax
    let v72: struct8;  // rax
    let v73: struct8;  // rax
    let v74: i64;  // rdx
    let v75: i64;  // rax
    let v78: i128;  // xmm0
    let v79: i128;  // xmm1
    let v80: i128;  // xmm2
    let v81: i128;  // xmm0
    let v82: i128;  // xmm1
    let v83: i128;  // xmm2
    let v84: i64;  // rax
    let v85: i128;  // xmm0
    let v86: i128;  // xmm1
    let v87: i128;  // xmm2
    let v88: i128;  // xmm0
    let v89: i128;  // xmm1
    let v90: i128;  // xmm2
    let v91: struct1;  // rax
    let v92: struct1;  // rax
    let v93: struct1;  // rax
    let v94: struct1;  // rax
    let v95: struct1;  // rax
    let v96: struct1;  // rax
    let v97: struct1;  // rax
    let v98: i64;  // r15

    v13 = std::io::stdio::stdin();
    v1 = *((a4 + 88) as &i8);
    v0 = *((a4 + 95) as &i8);
    v7 = uu_join::State::new(None, a0, a1, &v13, *((a4 + 72) as &i64));
    if v28 == 0x8000000000000000 {
        return v98;
    }
    v48 = v11;
    v35 = v48;
    v49 = *((&v7 as &char + 24) as &i128);
    v50 = *((&v7 as &char + 40) as &i128);
    v51 = *((&v7 as &char + 56) as &i128);
    v34 = v8;
    v33 = v51;
    v32 = v50;
    v31 = v49;
    v28 = v7;
    v29 = v8;
    v30 = v9;
    v4 = v48 | -0x100 | 1;
    v1 = *((a4 + 89) as &i8);
    v0 = *((a4 + 95) as &i8);
    v7 = uu_join::State::new(0x1, a2, a3, &v13, *((a4 + 80) as &i64));
    if v37 == 0x8000000000000000 {
        v4 = v37 | -0x100 | 1;
        return v98;
    }
    v44 = v11;
    v52 = *((&v7 as &char + 24) as &i128);
    v54 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52;
    v55 = *((&v7 as &char + 40) as &i128);
    v57 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55;
    v58 = *((&v7 as &char + 56) as &i128);
    v60 = v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
    v43 = *((&v7 as &char + 72) as &i128);
    v42 = v58;
    v41 = v55;
    v40 = v52;
    v37 = v7;
    v38 = v8;
    v39 = v9;
    v2 = *((a4 + 91) as &i8);
    v3 = *((a4 + 94) as &i8);
    v5 = *((a4 + 92) as &i8);
    if !v5 {
        v4 = v5 | -0x100 | 1;
        v28 = uu_join::State::initialize(&v6, 0);
        v37 = uu_join::State::initialize(&v6, *((a4 + 92) as &i8));
        v23 = *((a4 + 16) as &i64);
        v64 = *(a4 as &i128);
        v65 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
        v22 = v64;
        v4 = 0;
    } else {
        v61 = alloc::alloc::Global::alloc_impl();
        *(v61 as &i8) = 0;
        v62 = v7;
        v63 = *((&v7 as &char + 7) as &i64);
        *((v61 + 1) as &i64) = v62;
        *((v61 + 8) as &i64) = v63;
        v4 = v62 | -0x100 | 1;
        v14 = alloc::slice::hack::into_vec(v61, 1);
        v7 = struct24 {
            field_0: &v6
            field_8: v66
            field_16: &v14
        };
        uu_join::exec::{{closure}}(&v7, &v28);
        uu_join::exec::{{closure}}(&v7, &v37);
        v23 = *((&v14 as &char + 16) as &i64);
        v67 = v14;
        v65 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67;
        v22 = v67;
        v4 = v23 | -0x100 | 1;
    }
    v19 = v23;
    v68 = v22;
    v18 = v68;
    v69 = *((a4 + 32) as &i128);
    v70 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69;
    v21 = *((a4 + 95) as &i8);
    v20 = v69;
    v24 = std::io::stdio::stdout();
    v12 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v24));
    if !*((a4 + 93) as &i8) {
LABEL_4707e2:
        if v30 && v39 {
            do {
                v75 = uu_join::Input<Sep>::compare(v2, uu_join::State::get_current_key(&v28), v74, uu_join::State::get_current_key(&v37), v74);
                if v75 {
                    if v75 != 1 {
                        if uu_join::State::skip_line(&v28, &v12, &v2, &v18) {
                            v93 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
                            if !v93 {
                                return v98;
                            }
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v93);
                            return v98;
                        }
                    } else {
                        if uu_join::State::skip_line(&v37, &v12, &v2, &v18) {
                            v91 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
                            if v91 {
                                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v91);
                                return v98;
                            }
                            return v98;
                        }
                    }
                    v36 = 1;
                    v45 = 1;
                    continue;
                }
                v7 = uu_join::State::extend(&v28, &v2);
                if v7 == 9223372036854775809 {
                    v92 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
                    v47 = v47;
                    if v92 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v92);
                        return v98;
                    }
                    return v98;
                }
                v78 = v7;
                v79 = *((&v7 as &char + 16) as &i128);
                v80 = *((&v7 as &char + 32) as &i128);
                v27 = v80;
                v26 = v79;
                v25 = v78;
                v7 = uu_join::State::extend(&v37, &v2);
                if v7 == 9223372036854775809 {
                    v94 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
                    if v94 {
                        v47 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v94);
                        goto LABEL_470c82;
                    }
                } else {
                    v81 = v7;
                    v82 = *((&v7 as &char + 16) as &i128);
                    v83 = *((&v7 as &char + 32) as &i128);
                    v17 = v83;
                    v16 = v82;
                    v14 = v81;
                    if !(!*((a4 + 90) as &i8) || (v84 = uu_join::State::combine(&v28, &v12, &v37), !v84)) {
                        v47 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v84);
LABEL_470c82:
                        return v98;
                    }
                    v85 = v25;
                    v86 = v26;
                    v87 = v27;
                    v10 = v87;
                    v9 = v86;
                    v7 = v85;
                    v28 = uu_join::State::reset(&v7);
                    v88 = v14;
                    v70 = v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88;
                    v89 = v16;
                    v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89;
                    v90 = v17;
                    v60 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v90;
                    v10 = v90;
                    v9 = v89;
                    v7 = v88;
                    v37 = uu_join::State::reset(&v7);
                }
            } while (v30 && v39);
        }
        v47 = uu_join::State::finalize(&v28, &v12, &v2, &v18);
        if v47 {
            v95 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
            if !v95 {
                return v98;
            }
            v47 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v95);
        } else {
            v47 = uu_join::State::finalize(&v37, &v12, &v2, &v18);
            if v47 {
                v96 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
                if !v96 {
                    return v98;
                }
                v47 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v96);
            } else {
                v97 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
                if v97 {
                    v47 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v97);
                } else {
                    if !(!(!*((&v35 as &char + 2) as &i8)) || !(!*((&v44 as &char + 2) as &i8))) {
                        return 0;
                    }
                    v14 = uucore::execution_phrase();
                    v15 = v74;
                    eprintln!("{:?}: input is not in sorted order", &v14);
                    uucore::mods::error::set_exit_code(1);
                }
                goto LABEL_470b15;
            }
        }
        return v98;
    } else {
        v71 = uu_join::State::print_headers(&v28, &v12, &v37, &v18);
        if v71 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v71);
            return v98;
        }
        v72 = uu_join::State::reset_read_line(&v2);
        if v72 {
            v47 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v72);
        } else {
            v73 = uu_join::State::reset_read_line(&v2);
            if !v73 {
                goto LABEL_4707e2;
            }
            v47 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v73);
        }
LABEL_470b15:
        return v98;
    }
}
