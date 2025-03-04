fn uu_join::exec(a0: u32, a1: u32, a2: u32, a3: u32, a4: void*, a5: u32) -> u64 {
    let v0: i8;  // [bp-0x4e0]
    let v1: i8;  // [bp-0x4d8]
    let v2: i32;  // [sp-0x4c8]
    let v3: i8;  // [sp-0x4c1]
    let v4: Option<Result<struct48, struct16>>;  // [sp-0x4b0], Other Possible Types: int, struct24, unsigned long
    let v5: iNone;  // [sp-0x4a0], Other Possible Types: unsigned long
    let v6: iNone;  // [bp-0x490]
    let v7: struct33;  // [sp-0x478]
    let v8: i64;  // [sp-0x450]
    let v9: i64;  // [sp-0x448]
    let v10: iNone;  // [sp-0x440]
    let v11: i64;  // [sp-0x430]
    let v12: i64;  // [sp-0x420]
    let v13: i64;  // [sp-0x418]
    let v14: iNone;  // [bp-0x410]
    let v15: iNone;  // [sp-0x400]
    let v16: iNone;  // [sp-0x3f0]
    let v17: iNone;  // [sp-0x3e0], Other Possible Types: unsigned long
    let v18: i64;  // [sp-0x3d8]
    let v19: iNone;  // [sp-0x3d0]
    let v20: iNone;  // [sp-0x3c0]
    let v21: i64;  // [sp-0x3b0], Other Possible Types: struct8
    let v22: i64;  // [sp-0x3a8]
    let v23: i64;  // [sp-0x3a0]
    let v24: iNone;  // [sp-0x398]
    let v25: iNone;  // [sp-0x388]
    let v26: iNone;  // [sp-0x378]
    let v27: iNone;  // [sp-0x368]
    let v28: i64;  // [bp-0x358]
    let v29: i8;  // [sp-0x355]
    let v30: i64;  // [sp-0x350], Other Possible Types: struct8
    let v31: i64;  // [sp-0x348]
    let v32: i64;  // [sp-0x340]
    let v33: iNone;  // [sp-0x338]
    let v34: iNone;  // [sp-0x328]
    let v35: iNone;  // [sp-0x318]
    let v36: iNone;  // [sp-0x308]
    let v37: i64;  // [bp-0x2f8]
    let v38: i8;  // [sp-0x2f5]
    let v39: i64;  // [sp-0x2f0], Other Possible Types: Result<struct77, struct16>
    let v40: i64;  // [sp-0x2f0], Other Possible Types: int, struct264
    let v41: i64;  // [sp-0x2e8]
    let v42: i64;  // [sp-0x2e0]
    let v43: i8;  // [bp-0x298]
    let v44: iNone;  // [sp-0x1d0]
    let v45: iNone;  // [sp-0x1c0]
    let v46: i64;  // [sp-0x1b0]
    let v47: i8;  // [sp-0x1a8]
    let v48: i8;  // [bp-0x190]
    let v49: i8;  // [sp-0x70]
    let v50: i8;  // [sp-0x6f]
    let v52: i64;  // rax
    let v53: iNone;  // xmm0
    let v54: iNone;  // xmm1
    let v55: iNone;  // xmm2
    let v56: i64;  // rdx
    let v57: iNone;  // xmm0
    let v58: iNone;  // ymm0
    let v59: iNone;  // ymm0
    let v60: iNone;  // xmm1
    let v61: iNone;  // ymm1
    let v62: iNone;  // ymm1
    let v63: iNone;  // xmm2
    let v64: iNone;  // ymm2
    let v65: iNone;  // ymm2
    let v66: i64;  // r12
    let v69: i64;  // r15
    let v70: i64;  // rax
    let v71: i64;  // rcx
    let v72: i64;  // rdx
    let v73: i64;  // r14
    let v74: iNone;  // xmm0
    let v75: iNone;  // ymm0
    let v76: iNone;  // xmm0
    let v77: i8;  // bl
    let v78: iNone;  // xmm0
    let v79: iNone;  // xmm0
    let v80: iNone;  // ymm0
    let v81: i64;  // rax
    let v82: struct8;  // rax
    let v83: struct8;  // rax
    let v84: i64;  // rax
    let v85: iNone;  // xmm0
    let v86: iNone;  // xmm1
    let v87: iNone;  // xmm2
    let v88: iNone;  // xmm0
    let v89: iNone;  // xmm1
    let v90: iNone;  // xmm2
    let v91: iNone;  // xmm0
    let v92: iNone;  // xmm1
    let v93: iNone;  // xmm2
    let v94: iNone;  // xmm0
    let v95: iNone;  // xmm1
    let v96: iNone;  // xmm2
    let v97: struct1;  // rax
    let v98: struct1;  // rax
    let v99: struct1;  // rax
    let v100: i64;  // r12

    v2 = (v52 & -0x100 | 1) as u32;
    v9 = std::io::stdio::stdin();
    v39 = uu_join::State::new(None, a0, a1, &v9, *((a4 + 72) as &i64), v0, v1);
    if v21 == 0x8000000000000000 {
        goto LABEL_470055;
    }
    *(&v28 as &i64) = *(&v43 as &i64);
    v53 = *((&v39 as &char + 24) as &i128);
    v54 = *((&v39 as &char + 40) as &i128);
    v55 = *((&v39 as &char + 56) as &i128);
    v27 = v39 as i128;
    v26 = v55;
    v25 = v54;
    v24 = v53;
    v21 = v39;
    v22 = v41;
    v23 = v42;
    v2 = (v56 & -0x100 | 1) as u32;
    v39 = uu_join::State::new(0x1, a2, a3, &v9, *((a4 + 80) as &i64), v0, v1);
    if v12 == 0x8000000000000000 {
        v2 = 1;
        goto LABEL_470055;
    }
    *(&v37 as &i64) = *(&v43 as &i64);
    v57 = *((&v39 as &char + 24) as &i128);
    v59 = (v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 as u256;
    v60 = *((&v39 as &char + 40) as &i128);
    v62 = (v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 as u256;
    v63 = *((&v39 as &char + 56) as &i128);
    v65 = (v64 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 as u256;
    v36 = *((&v39 as &char + 72) as &i128);
    v35 = v63;
    v34 = v60;
    v33 = v57;
    v12 = v39;
    v30 = v12;
    v31 = v41;
    v32 = v42;
    v40 = <uu_join::MultiByteSep as core::clone::Clone>::clone(a5);
    v66 = a4;
    memcpy(&v48, &v40, 288);
    v49 = *((v66 + 91) as &i8);
    v50 = *((v66 + 94) as &i8);
    v69 = v66 + 92;
    v3 = *((v66 + 92) as &i8);
    if !v3 {
        v2 = v3 & -0x100 | 1;
        v21 = uu_join::State::initialize(a5, 0);
        v30 = uu_join::State::initialize(a5, *(v69 as &i8));
        v73 = a4;
        v11 = *((v73 + 16) as &i64);
        v74 = *(v73 as &i128);
        v75 = v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 as u256;
        v10 = v74;
        v2 = 0;
    } else {
        v70 = alloc::alloc::Global::alloc_impl(16);
        *(v70 as &i8) = 0;
        v71 = v39;
        v72 = *((&v40.field_0 as &char + 7) as &i64);
        *((v70 + 1) as &unsigned long) = v71;
        *((v70 + 8) as &unsigned long) = v72;
        v2 = (v71 & -0x100 | 1) as u32;
        v4 = alloc::slice::hack::into_vec(v70, 1);
        v40 = a5;
        v40 = v69;
        v40 = &v4;
        uu_join::exec::{{closure}}(&v40, &v21);
        uu_join::exec::{{closure}}(&v40, &v30);
        v11 = v5;
        v76 = *(&v4.field_0 as &i128);
        v75 = v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76 as u256;
        v10 = v76;
        v2 = (v11 & -0x100 | 1) as u32;
        v73 = a4;
    }
    v77 = *((v73 + 95) as &i8);
    memcpy(&v40, a5, 288);
    v78 = v10;
    v45 = v78;
    v46 = v11;
    v79 = *((v73 + 32) as &i128);
    v80 = (v75 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79 as u256;
    v47 = v77;
    v44 = v79;
    v13 = std::io::stdio::stdout();
    v7 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v13));
    if *((a4 + 93) as &i8) {
        v81 = uu_join::State::print_headers(&v21, &v7, &v30, &v40);
        if v81 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v81);
            goto LABEL_46ffbe;
        }
        v82 = uu_join::State::reset_read_line(&v48);
        if v82 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v82);
        } else {
            v83 = uu_join::State::reset_read_line(&v48);
            if !v83 {
                goto LABEL_46fc62;
            }
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v83);
        }
LABEL_46ffbe:
        goto LABEL_470055;
    }
LABEL_46fc62:
    if !(v23) || !(v32) {
        if uu_join::State::finalize(&v21, &v7, &v48, &v40) {
            if !<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush() {
                goto LABEL_470055;
            }
        } else {
            if !uu_join::State::finalize(&v30, &v7, &v48, &v40) {
                v99 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
                if v99 {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v99);
                } else {
                    if !(!(!*((&v28 as &char + 2) as &i8)) || !(!*((&v37 as &char + 2) as &i8))) {
                        return v100;
                    }
                    v17 = uucore::execution_phrase();
                    v18 = v56;
                    eprintln!("{}: input is not in sorted order", &v17);
                    uucore::mods::error::set_exit_code(1);
                }
                goto LABEL_46ffbe;
            } else if !<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush() {
                goto LABEL_470055;
            }
        }
LABEL_47001a:
        goto LABEL_470055;
    } else {
        v8 = 9223372036854775809;
        do {
            v84 = uu_join::Input<Sep>::compare(*(&v49 as &i32), uu_join::State::get_current_key(&v21), v56, uu_join::State::get_current_key(&v30), v56);
            if !v84 as u8 {
                v4 = uu_join::State::extend(&v21, &v48);
                if v4 == v8 {
                    v97 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
                    if v97 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v97);
                        goto LABEL_470055;
                    }
                }
                v85 = v4 as i128;
                v86 = *((&v4 as &char + 16) as &i128);
                v87 = *((&v4 as &char + 32) as &i128);
                v16 = v87;
                v15 = v86;
                v14 = v85;
                v4 = uu_join::State::extend(&v30, &v48);
                if v4 == v8 {
                    v98 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
                    if v98 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v98);
                    }
                } else {
                    v88 = v4 as i128;
                    v89 = *((&v4 as &char + 16) as &i128);
                    v90 = *((&v4 as &char + 32) as &i128);
                    v20 = v90;
                    v19 = v89;
                    v17 = v88;
                    if !*((a4 + 90) as &i8) || !uu_join::State::combine(&v21, &v7, &v30) {
                        v91 = v14 as i128;
                        v92 = v15;
                        v93 = v16;
                        v6 = v93;
                        v5 = v92;
                        v4 = v91;
                        v21 = uu_join::State::reset(&v4);
                        v94 = v17 as i128;
                        v80 = (((v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v91 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v94 as u256;
                        v95 = v19;
                        v62 = (((v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v92 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v95 as u256;
                        v96 = v20;
                        v65 = (((v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v90 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v93 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v96 as u256;
                        v6 = v96;
                        v5 = v95;
                        v4 = v94;
                        v30 = uu_join::State::reset(&v4);
                    }
                }
                goto LABEL_470055;
            }
            if v84 as u32 != 1 {
                if !uu_join::State::skip_line(&v21, &v7, &v48, &v40) {
                    continue;
                }
                if !<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush() {
                    goto LABEL_470055;
                }
                goto LABEL_47001a;
            } else if uu_join::State::skip_line(&v30, &v7, &v48, &v40) && !<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush() {
                goto LABEL_470055;
            }
        } while ((v29 = 1, v38 = 1, v23 && v32));
LABEL_470055:
        return v100;
    }
}
