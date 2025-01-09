fn uu_join::exec(a0: u32, a1: u32, a2: u32, a3: u32, a4: void*, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x4e0]
    let v1: i64;  // [sp-0x4d8]
    let v2: i32;  // [sp-0x4c8]
    let v3: i8;  // [sp-0x4c1]
    let v4: i192;  // [sp-0x4b0], Other Possible Types: Option<Result<struct48, struct16>>, struct24
    let v5: i128;  // [sp-0x4a0]
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
    let v17: i128;  // [bp-0x3e0]
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
    let v39: i680;  // [sp-0x2f0], Other Possible Types: Result<struct77, struct16>, struct264
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
    let v58: i128;  // xmm0
    let v59: i256;  // ymm0
    let v60: i256;  // ymm0
    let v61: i128;  // xmm1
    let v62: i256;  // ymm1
    let v63: i256;  // ymm1
    let v64: i128;  // xmm2
    let v65: i256;  // ymm2
    let v66: i256;  // ymm2
    let v67: i64;  // r12
    let v70: i64;  // r15
    let v71: i64;  // rax
    let v72: i64;  // rcx
    let v73: i64;  // rdx
    let v74: i64;  // r14
    let v75: i128;  // xmm0
    let v76: i256;  // ymm0
    let v77: i64;  // r14
    let v78: i128;  // xmm0
    let v79: i64;  // r14
    let v81: i128;  // xmm0
    let v82: i128;  // xmm0
    let v83: i256;  // ymm0
    let v84: i64;  // rax
    let v85: i64;  // rax
    let v86: i64;  // rax
    let v87: i64;  // rax
    let v88: i128;  // xmm0
    let v89: i128;  // xmm1
    let v90: i128;  // xmm2
    let v91: i128;  // xmm0
    let v92: i128;  // xmm1
    let v93: i128;  // xmm2
    let v94: i64;  // rax
    let v95: i128;  // xmm0
    let v96: i128;  // xmm1
    let v97: i128;  // xmm2
    let v98: i128;  // xmm0
    let v99: i128;  // xmm1
    let v100: i128;  // xmm2
    let v101: i64;  // rax
    let v102: i64;  // rax
    let v103: i64;  // rax
    let v104: i64;  // rax
    let v105: i64;  // rax
    let v106: i64;  // rax
    let v107: i64;  // rax
    let v108: i64;  // r12

    v2 = v51 & -0x100 | 1;
    v9 = std::io::stdio::stdin();
    v52 = a4;
    v1 = *((v52 + 88) as &i8);
    v0 = *((v52 + 95) as &i8);
    v39 = uu_join::State::new(None, a0, a1, &v9, *((v52 + 72) as &i64));
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
        v2 = v57 & -0x100 | 1;
        v1 = *((v56 + 89) as &i8);
        v0 = *((v56 + 95) as &i8);
        v39 = uu_join::State::new(0x1, a2, a3, &v9, *((v56 + 80) as &i64));
        if v12 == 0x8000000000000000 {
            v2 = 1;
            goto LABEL_470055;
        }
        v37 = v42;
        v58 = *((&v39 as &char + 24) as &i128);
        v60 = (v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
        v61 = *((&v39 as &char + 40) as &i128);
        v63 = (v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61;
        v64 = *((&v39 as &char + 56) as &i128);
        v66 = (v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
        v36 = *((&v39 as &char + 72) as &i128);
        v35 = v64;
        v34 = v61;
        v33 = v58;
        v12 = v39;
        v30 = v12;
        v31 = v40;
        v32 = v41;
        v39 = <uu_join::MultiByteSep as core::clone::Clone>::clone(a5);
        v67 = a4;
        memcpy(&v47, &v39, 288);
        v48 = *((v67 + 91) as &i8);
        v49 = *((v67 + 94) as &i8);
        v70 = v67 + 92;
        v3 = *((v67 + 92) as &i8);
        if !v3 {
            v2 = v3 & -0x100 | 1;
            v21 = uu_join::State::initialize(a5, 0);
            v30 = uu_join::State::initialize(a5, *(v70 as &i8));
            v74 = a4;
            v11 = *((v74 + 16) as &i64);
            v75 = *(v74 as &i128);
            v76 = v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75;
            v10 = v75;
            v2 = 0;
        } else {
            v71 = alloc::alloc::Global::alloc_impl();
            *(v71 as &i8) = 0;
            v72 = v39;
            v73 = *((&v39 as &char + 7) as &i64);
            *((v71 + 1) as &i64) = v72;
            *((v71 + 8) as &i64) = v73;
            v2 = v72 & -0x100 | 1;
            v4 = alloc::slice::hack::into_vec(v71, 1);
            v39 = a5;
            v40 = v70;
            v41 = &v4;
            uu_join::exec::{{closure}}(&v39, &v21);
            uu_join::exec::{{closure}}(&v39, &v30);
            v11 = v5;
            v78 = v4;
            v76 = v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78;
            v10 = v78;
            v2 = v11 & -0x100 | 1;
        }
        v79 = v77;
        memcpy(&v39, a5, 288);
        v81 = v10;
        v44 = v81;
        v45 = v11;
        v82 = *((v79 + 32) as &i128);
        v83 = (v76 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82;
        v46 = *((v79 + 95) as &i8);
        v43 = v82;
        v13 = std::io::stdio::stdout();
        v7 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v13));
        if *((a4 + 93) as &i8) {
            v84 = uu_join::State::print_headers(&v21, &v7, &v30, &v39);
            if v84 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v84);
                goto LABEL_46ffbe;
            }
            v85 = uu_join::State::reset_read_line(&v21, &v47);
            if v85 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v85);
            } else {
                v86 = uu_join::State::reset_read_line(&v30, &v47);
                if !v86 {
                    goto LABEL_46fc62;
                }
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v86);
            }
LABEL_46ffbe:
            goto LABEL_470055;
        }
LABEL_46fc62:
        if !(v23) || !(v32) {
            if uu_join::State::finalize(&v21, &v7, &v47, &v39) {
                v105 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v7);
                if !v105 {
                    goto LABEL_470055;
                }
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v105);
            } else if uu_join::State::finalize(&v30, &v7, &v47, &v39) {
                v106 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v7);
                if !v106 {
                    goto LABEL_470055;
                }
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v106);
            } else {
                v107 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v7);
                if v107 {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v107);
                } else {
                    if !(!(!*((&v28 as &char + 2) as &i8)) || !(!*((&v37 as &char + 2) as &i8))) {
                        return v108;
                    }
                    v17 = uucore::execution_phrase();
                    v18 = v57;
                    eprintln!("{}: input is not in sorted order", &v17);
                    uucore::mods::error::set_exit_code(1);
                }
                goto LABEL_46ffbe;
            }
LABEL_47001a:
            goto LABEL_470055;
        } else {
            v8 = 9223372036854775809;
            do {
                v87 = uu_join::Input<Sep>::compare(v48, uu_join::State::get_current_key(&v21), v57, uu_join::State::get_current_key(&v30), v57);
                if !v87 {
                    v4 = uu_join::State::extend(&v21, &v47);
                    if v4 == v8 {
                        v102 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v7);
                        if v102 {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v102);
                            goto LABEL_470055;
                        }
                    }
                    v88 = v4;
                    v89 = *((&v4 as &char + 16) as &i128);
                    v90 = *((&v4 as &char + 32) as &i128);
                    v16 = v90;
                    v15 = v89;
                    v14 = v88;
                    v4 = uu_join::State::extend(&v30, &v47);
                    if v4 == v8 {
                        v104 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v7);
                        if v104 {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v104);
                        }
                    } else {
                        v91 = v4;
                        v92 = *((&v4 as &char + 16) as &i128);
                        v93 = *((&v4 as &char + 32) as &i128);
                        v20 = v93;
                        v19 = v92;
                        v17 = v91;
                        if !*((a4 + 90) as &i8) || (v94 = uu_join::State::combine(&v21, &v7, &v30), !v94) {
                            v95 = v14;
                            v96 = v15;
                            v97 = v16;
                            v6 = v97;
                            v5 = v96;
                            v4 = v95;
                            uu_join::State::reset();
                            v98 = v17;
                            v83 = (((v83 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v91) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v95) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v98;
                            v99 = v19;
                            v63 = (((v63 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v92) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v96) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v99;
                            v100 = v20;
                            v66 = (((v66 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v90) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v93) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v97) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v100;
                            v6 = v100;
                            v5 = v99;
                            v4 = v98;
                            uu_join::State::reset();
                        } else {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v94);
                        }
                    }
                    goto LABEL_470055;
                }
                if v87 != 1 {
                    if !uu_join::State::skip_line(&v21, &v7, &v47, &v39) {
                        continue;
                    }
                    v103 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v7);
                    if !v103 {
                        goto LABEL_470055;
                    }
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v103);
                    goto LABEL_47001a;
                } else if uu_join::State::skip_line(&v30, &v7, &v47, &v39) {
                    v101 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v7);
                    if !v101 {
                        goto LABEL_470055;
                    }
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v101);
                }
            } while ((v29 = 1, v38 = 1, v23 && v32));
LABEL_470055:
            return v108;
        }
    }
}
