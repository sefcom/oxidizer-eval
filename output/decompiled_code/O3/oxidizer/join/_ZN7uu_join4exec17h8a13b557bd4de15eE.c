fn uu_join::exec(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x4e0]
    let v1: i64;  // [sp-0x4d8]
    let v2: i32;  // [sp-0x4c8]
    let v3: i8;  // [sp-0x4c1]
    let v4: i384;  // [sp-0x4b0], Other Possible Types: Option<Result<struct48, struct24>>, struct24
    let v5: i128;  // [bp-0x4a0]
    let v6: i128;  // [bp-0x490]
    let v7: i264;  // [sp-0x478], Other Possible Types: struct33
    let v8: i64;  // [sp-0x450]
    let v9: i64;  // [sp-0x448]
    let v10: i128;  // [sp-0x440]
    let v11: i64;  // [sp-0x430]
    let v12: i64;  // [sp-0x420]
    let v13: i64;  // [sp-0x418]
    let v14: i128;  // [bp-0x410]
    let v15: i128;  // [sp-0x400]
    let v16: i128;  // [sp-0x3f0]
    let v17: i64;  // [bp-0x3e0]
    let v18: i64;  // [sp-0x3d8]
    let v19: i128;  // [sp-0x3d0]
    let v20: i128;  // [sp-0x3c0]
    let v21: i64;  // [sp-0x3b0], Other Possible Types: struct8
    let v22: i64;  // [sp-0x3a8]
    let v23: i64;  // [sp-0x3a0]
    let v24: i128;  // [sp-0x398]
    let v25: i128;  // [sp-0x388]
    let v26: i128;  // [sp-0x378]
    let v27: i128;  // [sp-0x368]
    let v28: i64;  // [bp-0x358]
    let v29: i8;  // [sp-0x355]
    let v30: i64;  // [sp-0x350], Other Possible Types: struct8
    let v31: i64;  // [sp-0x348]
    let v32: i64;  // [sp-0x340]
    let v33: i128;  // [sp-0x338]
    let v34: i128;  // [sp-0x328]
    let v35: i128;  // [sp-0x318]
    let v36: i128;  // [sp-0x308]
    let v37: i64;  // [bp-0x2f8]
    let v38: i8;  // [sp-0x2f5]
    let v39: i64;  // [sp-0x2f0], Other Possible Types: Result<struct77, struct16>, struct264
    let v40: i64;  // [sp-0x2e8]
    let v41: i64;  // [sp-0x2e0]
    let v42: i8;  // [bp-0x298]
    let v43: i128;  // [sp-0x1d0]
    let v44: i128;  // [sp-0x1c0]
    let v45: i64;  // [sp-0x1b0]
    let v46: i8;  // [sp-0x1a8]
    let v47: i8;  // [bp-0x190]
    let v48: i8;  // [sp-0x70]
    let v49: i8;  // [sp-0x6f]
    let v51: i64;  // rax
    let v52: i64;  // rcx
    let v53: i128;  // xmm0
    let v54: i128;  // xmm1
    let v55: i128;  // xmm2
    let v56: i64;  // rcx
    let v57: i64;  // rdx
    let v58: i64;  // r12
    let v59: i128;  // xmm0
    let v60: i256;  // ymm0
    let v61: i256;  // ymm0
    let v62: i128;  // xmm1
    let v63: i256;  // ymm1
    let v64: i256;  // ymm1
    let v65: i128;  // xmm2
    let v66: i256;  // ymm2
    let v67: i256;  // ymm2
    let v68: i64;  // r12
    let v72: i64;  // rax
    let v73: i64;  // rcx
    let v74: i64;  // rdx
    let v75: i64;  // r14
    let v76: i128;  // xmm0
    let v77: i256;  // ymm0
    let v78: i64;  // r14
    let v79: i128;  // xmm0
    let v80: i64;  // r14
    let v82: i128;  // xmm0
    let v83: i128;  // xmm0
    let v84: i256;  // ymm0
    let v85: i64;  // rsi
    let v86: i64;  // rax
    let v87: i64;  // rax
    let v88: struct8;  // rax
    let v89: struct8;  // rax
    let v90: i64;  // rbx
    let v91: i64;  // rax
    let v94: i128;  // xmm0
    let v95: i128;  // xmm1
    let v96: i128;  // xmm2
    let v97: i128;  // xmm0
    let v98: i128;  // xmm1
    let v99: i128;  // xmm2
    let v100: i64;  // rax
    let v101: i64;  // rdx
    let v102: i128;  // xmm0
    let v103: i128;  // xmm1
    let v104: i128;  // xmm2
    let v105: i128;  // xmm0
    let v106: i128;  // xmm1
    let v107: i128;  // xmm2
    let v108: i64;  // rax
    let v109: i64;  // rax
    let v110: i64;  // rax
    let v111: i64;  // rax
    let v112: i64;  // rax
    let v113: i64;  // rax
    let v114: i64;  // rax

    v2 = v51 | -0x100 | 1;
    v9 = std::io::stdio::stdin();
    v52 = a4;
    v1 = *((v52 + 88) as &i8);
    v0 = *((v52 + 95) as &i8);
    v39 = uu_join::State::new(0, a0, a1, &v9, *((v52 + 72) as &i64));
    if v21 != 0x8000000000000000 {
        v28 = v42;
        v53 = *((&v39 as &char + 24) as &i128);
        v54 = *((&v39 as &char + 40) as &i128);
        v55 = *((&v39 as &char + 56) as &i128);
        v27 = v39;
        v26 = v55;
        v25 = v54;
        v24 = v53;
        v21 = v39;
        v22 = v40;
        v23 = v41;
        v56 = a4;
        v2 = v57 | -0x100 | 1;
        v1 = *((v56 + 89) as &i8);
        v0 = *((v56 + 95) as &i8);
        v39 = uu_join::State::new(1, a2, a3, &v9, *((v56 + 80) as &i64));
        if v12 == 0x8000000000000000 {
            v2 = -255;
            return v58;
        }
        v37 = v42;
        v59 = *((&v39 as &char + 24) as &i128);
        v61 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
        v62 = *((&v39 as &char + 40) as &i128);
        v64 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
        v65 = *((&v39 as &char + 56) as &i128);
        v67 = v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65;
        v36 = *((&v39 as &char + 72) as &i128);
        v35 = v65;
        v34 = v62;
        v33 = v59;
        v12 = v39;
        v30 = v12;
        v31 = v40;
        v32 = v41;
        v39 = <uu_join::MultiByteSep as core::clone::Clone>::clone(a5);
        v68 = a4;
        memcpy(&v47, &v39, 288);
        v48 = *((v68 + 91) as &i8);
        v49 = *((v68 + 94) as &i8);
        v3 = *((v68 + 92) as &i8);
        if !v3 {
            v2 = v3 | -0x100 | 1;
            v21 = uu_join::State::initialize(a5, 0);
            v30 = uu_join::State::initialize(a5, *((v68 + 92) as &i8));
            v75 = a4;
            v11 = *((v75 + 16) as &i64);
            v76 = *(v75 as &i128);
            v77 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76;
            v10 = v76;
            v2 = 0;
        } else {
            v72 = alloc::alloc::Global::alloc_impl(16);
            *(v72 as &i8) = 0;
            v73 = v39;
            v74 = *((&v39 as &char + 7) as &i64);
            *((v72 + 1) as &i64) = v73;
            *((v72 + 8) as &i64) = v74;
            v2 = v73 | -0x100 | 1;
            v4 = alloc::slice::hack::into_vec(v72, 1);
            v39 = a5;
            v39.8 = vvar_397{reg 136};
            v39.16 = stack_base + -1200;
            uu_join::exec::{{closure}}(&v39, &v21);
            uu_join::exec::{{closure}}(&v39, &v30);
            v11 = v4.field_16;
            v79 = v4;
            v77 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79;
            v10 = v79;
            v2 = v11 | -0x100 | 1;
        }
        v80 = v78;
        memcpy(&v39, a5, 288);
        v82 = v10;
        v44 = v82;
        v45 = v11;
        v83 = *((v80 + 32) as &i128);
        v84 = v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83;
        v46 = *((v80 + 95) as &i8);
        v43 = v83;
        v13 = std::io::stdio::stdout();
        v7 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v13, v85, v57));
        if !*((a4 + 93) as &i8) {
LABEL_46fe32:
            if v23 && v32 {
                v90 = uu_join::State::get_current_key;
                v8 = 9223372036854775809;
                do {
                    v91 = uu_join::Input<Sep>::compare(v48, v90(), v57, v90(), v57);
                    if v91 {
                        if v91 != 1 {
                            if uu_join::State::skip_line(&v21, &v7, &v47, &v39) {
                                v110 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v7);
                                if !v110 {
                                    return v58;
                                }
                                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v110);
                                return v58;
                            }
                        } else {
                            if uu_join::State::skip_line(&v30, &v7, &v47, &v39) {
                                v108 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v7);
                                if v108 {
                                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v108);
                                    return v58;
                                }
                                return v58;
                            }
                        }
                        v29 = 1;
                        v38 = 1;
                        continue;
                    }
                    v4 = uu_join::State::extend(&v21, &v47);
                    if v4 == v8 {
                        v109 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v7);
                        v87 = v87;
                        if v109 {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v109);
                            return v58;
                        }
                        return v58;
                    }
                    v94 = v4;
                    v95 = *((&v4 as &char + 16) as &i128);
                    v96 = *((&v4 as &char + 32) as &i128);
                    v16 = v96;
                    v15 = v95;
                    v14 = v94;
                    v4 = uu_join::State::extend(&v30, &v47);
                    if v4 == v8 {
                        v111 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v7);
                        if v111 {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v111);
                            return v58;
                        }
                        goto LABEL_470332;
                    } else {
                        v97 = v4;
                        v98 = *((&v4 as &char + 16) as &i128);
                        v99 = *((&v4 as &char + 32) as &i128);
                        v20 = v99;
                        v19 = v98;
                        v17 = v97;
                        if !(!*((a4 + 90) as &i8) || (v100 = uu_join::State::combine(&v21, &v7, &v30, &v39), !v100)) {
                            v87 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v100);
LABEL_470332:
                            return v58;
                        }
                        v102 = v14;
                        v103 = v15;
                        v104 = v16;
                        v6 = v104;
                        v5 = v103;
                        v4 = v102;
                        v21 = uu_join::State::reset(&v4, v101);
                        v105 = v17;
                        v84 = v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v94 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v105;
                        v106 = v19;
                        v64 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v106;
                        v107 = v20;
                        v67 = v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v96 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v99 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v107;
                        v6 = v107;
                        v5 = v106;
                        v4 = v105;
                        v30 = uu_join::State::reset(&v4, v57);
                    }
                } while (v23 && v32);
            }
            v87 = uu_join::State::finalize(&v21, &v7, &v47, &v39);
            if v87 {
                v112 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v7);
                if !v112 {
                    return v58;
                }
                v87 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v112);
            } else {
                v87 = uu_join::State::finalize(&v30, &v7, &v47, &v39);
                if v87 {
                    v113 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v7);
                    if !v113 {
                        return v58;
                    }
                    v87 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v113);
                } else {
                    v114 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v7);
                    if v114 {
                        v87 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v114);
                    } else {
                        if !(!(!*((&v28 as &char + 2) as &i8)) || !(!*((&v37 as &char + 2) as &i8))) {
                            return 0;
                        }
                        v17 = uucore::execution_phrase();
                        v18 = v57;
                        eprintln!("{:?}: input is not in sorted order", &v17);
                        uucore::mods::error::set_exit_code();
                    }
                    goto LABEL_47018e;
                }
            }
            return v58;
        } else {
            v86 = uu_join::State::print_headers(&v21, &v7, &v30);
            if v86 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v86);
                return v58;
            }
            v88 = uu_join::State::reset_read_line(&v47);
            if v88 {
                v87 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v88);
            } else {
                v89 = uu_join::State::reset_read_line(&v47);
                if !v89 {
                    goto LABEL_46fe32;
                }
                v87 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v89);
            }
LABEL_47018e:
            return v58;
        }
    }
}
