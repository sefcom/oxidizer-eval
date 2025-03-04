fn uu_join::exec(a0: u32, a1: u32, a2: u32, a3: u32, a4: void*) -> u64 {
    let v0: i8;  // [bp-0x258]
    let v1: i8;  // [bp-0x250]
    let v2: i8;  // [sp-0x242]
    let v3: i8;  // [sp-0x241]
    let v4: i32;  // [sp-0x240]
    let v5: i8;  // [sp-0x23a]
    let v6: i8;  // [bp-0x239]
    let v7: i64;  // [sp-0x238], Other Possible Types: Result<struct77, struct16>, Option<Result<struct48, struct16>>, int, struct24
    let v8: i64;  // [sp-0x230]
    let v9: i64;  // [sp-0x228], Other Possible Types: int
    let v10: iNone;  // [bp-0x218]
    let v11: i8;  // [bp-0x1e0]
    let v12: struct33;  // [sp-0x1d8]
    let v13: i64;  // [sp-0x1b0]
    let v14: i64;  // [sp-0x1a8], Other Possible Types: int, struct24
    let v15: i64;  // [sp-0x1a0]
    let v16: iNone;  // [sp-0x198]
    let v17: iNone;  // [sp-0x188]
    let v18: iNone;  // [sp-0x178]
    let v19: i64;  // [sp-0x168]
    let v20: iNone;  // [sp-0x160]
    let v21: i8;  // [sp-0x150]
    let v22: iNone;  // [sp-0x148]
    let v23: i64;  // [sp-0x138]
    let v24: i64;  // [sp-0x130]
    let v25: iNone;  // [bp-0x128]
    let v26: iNone;  // [sp-0x118]
    let v27: iNone;  // [sp-0x108]
    let v28: i64;  // [sp-0xf0], Other Possible Types: struct8
    let v29: i64;  // [sp-0xe8]
    let v30: i64;  // [sp-0xe0]
    let v31: iNone;  // [sp-0xd8]
    let v32: iNone;  // [sp-0xc8]
    let v33: iNone;  // [sp-0xb8]
    let v34: iNone;  // [sp-0xa8]
    let v35: i64;  // [bp-0x98]
    let v36: i8;  // [sp-0x95]
    let v37: i64;  // [sp-0x90], Other Possible Types: struct8
    let v38: i64;  // [sp-0x88]
    let v39: i64;  // [sp-0x80]
    let v40: iNone;  // [sp-0x78]
    let v41: iNone;  // [sp-0x68]
    let v42: iNone;  // [sp-0x58]
    let v43: iNone;  // [sp-0x48]
    let v44: i64;  // [bp-0x38]
    let v45: i8;  // [sp-0x35]
    let v47: i64;  // rcx
    let v48: iNone;  // xmm0
    let v49: iNone;  // xmm1
    let v50: iNone;  // xmm2
    let v51: iNone;  // xmm0
    let v52: iNone;  // ymm0
    let v53: iNone;  // ymm0
    let v54: iNone;  // xmm1
    let v55: iNone;  // ymm1
    let v56: iNone;  // ymm1
    let v57: iNone;  // xmm2
    let v58: iNone;  // ymm2
    let v59: iNone;  // ymm2
    let v61: i64;  // rax
    let v62: i64;  // rcx
    let v63: i64;  // rdx
    let v64: iNone;  // xmm0
    let v65: iNone;  // ymm0
    let v66: iNone;  // xmm0
    let v67: iNone;  // xmm0
    let v68: iNone;  // xmm0
    let v69: iNone;  // ymm0
    let v70: i64;  // rax
    let v71: struct8;  // rax
    let v72: struct8;  // rax
    let v73: i64;  // rdx
    let v74: i64;  // rax
    let v75: iNone;  // xmm0
    let v76: iNone;  // xmm1
    let v77: iNone;  // xmm2
    let v78: iNone;  // xmm0
    let v79: iNone;  // xmm1
    let v80: iNone;  // xmm2
    let v81: iNone;  // xmm0
    let v82: iNone;  // xmm1
    let v83: iNone;  // xmm2
    let v84: iNone;  // xmm0
    let v85: iNone;  // xmm1
    let v86: iNone;  // xmm2
    let v87: struct1;  // rax
    let v88: struct1;  // rax
    let v89: struct1;  // rax
    let v90: i64;  // r15

    v13 = std::io::stdio::stdin();
    v7 = uu_join::State::new(None, a0, a1, &v13, *((a4 + 72) as &i64), v0, v1);
    if v28 == 0x8000000000000000 {
        return v90;
    }
    v47 = *(&v11 as &i64);
    v35 = v47;
    v48 = *((&v7 as &char + 24) as &i128);
    v49 = *((&v7 as &char + 40) as &i128);
    v50 = *((&v7 as &char + 56) as &i128);
    v34 = v7 as i128;
    v33 = v50;
    v32 = v49;
    v31 = v48;
    v28 = v7;
    v29 = v8;
    v30 = v9;
    v4 = (v47 & -0x100 | 1) as u32;
    v7 = uu_join::State::new(0x1, a2, a3, &v13, *((a4 + 80) as &i64), v0, v1);
    if v37 == 0x8000000000000000 {
        v4 = (v37 & -0x100 | 1) as u32;
        return v90;
    }
    *(&v44 as &i64) = *(&v11 as &i64);
    v51 = *((&v7 as &char + 24) as &i128);
    v53 = (v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 as u256;
    v54 = *((&v7 as &char + 40) as &i128);
    v56 = (v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 as u256;
    v57 = *((&v7 as &char + 56) as &i128);
    v59 = (v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 as u256;
    v43 = *((&v7 as &char + 72) as &i128);
    v42 = v57;
    v41 = v54;
    v40 = v51;
    v37 = v7;
    v38 = v8;
    v39 = v9;
    v2 = *((a4 + 91) as &i8);
    v3 = *((a4 + 94) as &i8);
    v5 = *((a4 + 92) as &i8);
    if !v5 {
        v4 = v5 & -0x100 | 1;
        v28 = uu_join::State::initialize(&v6, 0);
        v37 = uu_join::State::initialize(&v6, *((a4 + 92) as &i8));
        v23 = *((a4 + 16) as &i64);
        v64 = *(a4 as &i128);
        v65 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 as u256;
        v22 = v64;
        v4 = 0;
    } else {
        v61 = alloc::alloc::Global::alloc_impl(16);
        *(v61 as &i8) = 0;
        v62 = v7;
        v63 = *((&v7 as &char + 7) as &i64);
        *((v61 + 1) as &unsigned long) = v62;
        *((v61 + 8) as &unsigned long) = v63;
        v4 = (v62 & -0x100 | 1) as u32;
        v14 = alloc::slice::hack::into_vec(v61, 1);
        v7 = struct24 {
            field_0: &v6
            field_8: v60
            field_16: &v14
        };
        uu_join::exec::{{closure}}(&v7, &v28);
        uu_join::exec::{{closure}}(&v7, &v37);
        v23 = v14.field_16;
        v66 = *(&v14.field_0 as &i128);
        v65 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66 as u256;
        v22 = v66;
        v4 = (v23 & -0x100 | 1) as u32;
    }
    v19 = v23;
    v67 = v22;
    v18 = v67;
    v68 = *((a4 + 32) as &i128);
    v69 = (v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68 as u256;
    v21 = *((a4 + 95) as &i8);
    v20 = v68;
    v24 = std::io::stdio::stdout();
    v12 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v24));
    if *((a4 + 93) as &i8) {
        v70 = uu_join::State::print_headers(&v28, &v12, &v37, &v18);
        if v70 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v70);
            return v90;
        }
        v71 = uu_join::State::reset_read_line(&v2);
        if v71 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v71);
        } else {
            v72 = uu_join::State::reset_read_line(&v2);
            if !v72 {
                goto LABEL_46e5c2;
            }
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v72);
        }
LABEL_46e8f5:
        return v90;
    }
LABEL_46e5c2:
    if v30 && v39 {
        do {
            v74 = uu_join::Input<Sep>::compare(v2, uu_join::State::get_current_key(&v28), v73, uu_join::State::get_current_key(&v37), v73);
            if !v74 as u8 {
                v7 = uu_join::State::extend(&v28, &v2);
                if v7 == 9223372036854775809 {
                    v87 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
                    if !v87 {
                        return v90;
                    }
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v87);
                    return v90;
                }
                v75 = v7 as i128;
                v76 = *((&v7 as &char + 16) as &i128);
                v77 = *((&v7 as &char + 32) as &i128);
                v27 = v77;
                v26 = v76;
                v25 = v75;
                v7 = uu_join::State::extend(&v37, &v2);
                if v7 == 9223372036854775809 {
                    v88 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
                    if v88 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v88);
                    }
                } else {
                    v78 = v7 as i128;
                    v79 = *((&v7 as &char + 16) as &i128);
                    v80 = *((&v7 as &char + 32) as &i128);
                    v17 = v80;
                    v16 = v79;
                    v14 = v78;
                    if !*((a4 + 90) as &i8) || !uu_join::State::combine(&v28, &v12, &v37) {
                        v81 = v25 as i128;
                        v82 = v26;
                        v83 = v27;
                        v10 = v83;
                        v9 = v82;
                        v7 = v81;
                        v28 = uu_join::State::reset(&v7);
                        v84 = v14 as i128;
                        v69 = (((v69 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v84 as u256;
                        v85 = v16;
                        v56 = (((v56 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85 as u256;
                        v86 = v17;
                        v59 = (((v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86 as u256;
                        v10 = v86;
                        v9 = v85;
                        v7 = v84;
                        v37 = uu_join::State::reset(&v7);
                        continue;
                    }
                }
                return v90;
            }
            if v74 as u32 != 1 {
                if uu_join::State::skip_line(&v28, &v12, &v2, &v18) {
                    if !<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush() {
                        return v90;
                    }
                    return v90;
                }
            } else {
                if uu_join::State::skip_line(&v37, &v12, &v2, &v18) && !<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush() {
                    return v90;
                }
            }
            v36 = 1;
            v45 = 1;
        } while (v30 && v39);
        goto LABEL_46e951;
    }
    if uu_join::State::finalize(&v28, &v12, &v2, &v18) {
        if !<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush() {
            return v90;
        }
    } else {
        if !uu_join::State::finalize(&v37, &v12, &v2, &v18) {
            v89 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
            if v89 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v89);
            } else {
                if !(!(!*((&v35 as &char + 2) as &i8)) || !(!*((&v44 as &char + 2) as &i8))) {
                    return v90;
                }
                v14 = uucore::execution_phrase();
                v15 = v73;
                eprintln!("{}: input is not in sorted order", &v14);
                uucore::mods::error::set_exit_code(1);
            }
            goto LABEL_46e8f5;
        } else if !<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush() {
            return v90;
        }
    }
LABEL_46e951:
    return v90;
}
