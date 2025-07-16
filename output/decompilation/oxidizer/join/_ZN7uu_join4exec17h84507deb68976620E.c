fn uu_join::exec(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i8) -> long long {
    let v0: u8;  // [bp-0x244]
    let v1: u8;  // [bp-0x243]
    let v2: u8;  // [bp-0x242]
    let v3: u8;  // [bp-0x241]
    let v4: u32;  // [bp-0x240]
    let v5: u8;  // [bp-0x239]
    let v6: u8;  // [bp-0x238]
    let v7: i64;  // [bp-0x238]
    let v9: u64;  // [bp-0x231]
    let v10: u64;  // [bp-0x230]
    let v11: i64;  // [bp-0x228]
    let v12: u8;  // [bp-0x220]
    let v13: u64;  // [bp-0x218]
    let v14: u128;  // [bp-0x218]
    let v15: u128;  // [bp-0x218]
    let v16: u128;  // [bp-0x210]
    let v17: u128;  // [bp-0x200]
    let v18: u128;  // [bp-0x1f0]
    let v19: u64;  // [bp-0x1e0]
    let v20: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x1d8]
    let v21: std::io::stdio::Stdin;  // [bp-0x1b0]
    let v22: u64;  // [bp-0x1a8], Other Possible Types: struct24
    let v23: u128;  // [bp-0x1a8]
    let v24: u64;  // [bp-0x1a0]
    let v25: u128;  // [bp-0x198]
    let v26: u8;  // [bp-0x188]
    let v27: u128;  // [bp-0x178]
    let v28: u64;  // [bp-0x168]
    let v29: u128;  // [bp-0x160]
    let v30: u8;  // [bp-0x150]
    let v31: u8;  // [bp-0x14f]
    let v32: u128;  // [bp-0x148]
    let v33: u64;  // [bp-0x138]
    let v34: u64;  // [bp-0x130]
    let v35: u128;  // [bp-0x128]
    let v36: u128;  // [bp-0x118]
    let v37: u8;  // [bp-0x108]
    let v38: u64;  // [bp-0xf0]
    let v39: struct8;  // [bp-0xf0]
    let v41: u64;  // [bp-0xe8]
    let v42: i64;  // [bp-0xe0]
    let v43: u8;  // [bp-0xd8]
    let v44: u128;  // [bp-0xc8]
    let v45: u128;  // [bp-0xb8]
    let v46: u128;  // [bp-0xa8]
    let v47: u64;  // [bp-0x98]
    let v48: u8;  // [bp-0x96]
    let v50: u64;  // [bp-0x90]
    let v51: struct8;  // [bp-0x90]
    let v52: struct8;  // [bp-0x90]
    let v53: u64;  // [bp-0x88]
    let v54: i64;  // [bp-0x80]
    let v55: u8;  // [bp-0x78]
    let v56: u128;  // [bp-0x68]
    let v57: u128;  // [bp-0x58]
    let v58: u128;  // [bp-0x48]
    let v59: u64;  // [bp-0x38]
    let v60: u8;  // [bp-0x36]
    let v63: u64;  // rax
    let v64: void*;  // r15
    let v65: u64;  // rax
    let v66: u64;  // r15
    let v67: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v68: u64;  // rcx
    let v69: u64;  // rdx
    let v70: u64;  // rax
    let v71: u64;  // rax
    let v72: u64;  // rax
    let v73: u64;  // rax
    let v74: void*;  // rax
    let v75: u32;  // rdx
    let v76: u64;  // rax
    let v77: u64;  // rax
    let v78: u128;  // xmm0
    let v79: u128;  // xmm0
    let v80: core::result::Result<(), std::io::error::Error>;  // rax
    let v81: core::result::Result<(), std::io::error::Error>;  // rax
    let v82: core::result::Result<(), std::io::error::Error>;  // rax
    let v83: core::result::Result<(), std::io::error::Error>;  // rax
    let v84: core::result::Result<(), std::io::error::Error>;  // rax
    let v87: u64;  // r12
    let v88: core::result::Result<(), std::io::error::Error>;  // rax
    let v89: core::result::Result<(), std::io::error::Error>;  // rax

    v0 = a5;
    v21 = std::io::stdio::stdin();
    uu_join::State::new(&v6, 0, a0, a1, &v21, *((a4 + 72) as &i64), *((a4 + 95) as &i8), *((a4 + 88) as &i8));
    v63 = *(&v6 as &i64);
    v64 = v10;
    if v63 == 0x8000000000000000 {
        return v64;
    }
    v47 = v19;
    v46 = v18;
    v45 = v17;
    v44 = v16;
    memcpy(&v43, &v12, 16);
    v38 = v63;
    v41 = v64;
    v42 = v11;
    v4 = v19 & -0x100 | 1;
    uu_join::State::new(&v6, 1, a2, a3, &v21, *((a4 + 80) as &i64), *((a4 + 95) as &i8), *((a4 + 89) as &i8));
    v65 = *(&v6 as &i64);
    v64 = v10;
    if v65 != 0x8000000000000000 {
        v59 = v19;
        v58 = v18;
        v57 = v17;
        v56 = v16;
        memcpy(&v55, &v12, 16);
        v50 = v65;
        v53 = v64;
        v54 = v11;
        v3 = v0;
        v1 = *((a4 + 91) as &i8);
        v2 = *((a4 + 94) as &i8);
        v66 = a4 + 92;
        v5 = *((a4 + 92) as &i8);
        if v5 {
            v67 = alloc::alloc::Global::alloc_impl(0x10, a1, *((a4 + 94) as &i8)) as u64;
            *(v67 as &i8) = 0;
            v68 = *(&v6 as &i64);
            v69 = v9;
            *((v67 + 1) as &u64) = v68;
            *((v67 + 8) as &u64) = v69;
            v4 = v68 & -0x100 | 1;
            v22 = alloc::slice::hack::into_vec(v67, 1);
            *(&v7 as &&u8) = &v0;
            v10 = v66;
            v11 = &v22;
            uu_join::exec::{{closure}}(&v6, &v38);
            uu_join::exec::{{closure}}(&v6, &v50);
            v33 = v22.field_16;
            memcpy(&v32, &v22, 16);
            v4 = v22.field_16 & -0x100 | 1;
        } else {
            v4 = v5 & -0x100 | 1;
            v39 = uu_join::State::initialize(&v0, 0);
            v51 = uu_join::State::initialize(&v0, *(v66 as &i8));
        }
        v27 = v32;
        v28 = v33;
        v30 = *((a4 + 95) as &i8);
        v31 = v0;
        v29 = *((a4 + 32) as &i128);
        v34 = std::io::stdio::Stderr {
            inner: std::io::stdio::stdout()
        };
        std::io::stdio::Stderr::lock(&v34);
        v20 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
        if *((a4 + 93) as &i8) {
            v70 = uu_join::State::print_headers(&v38, &v20, &v51, &v27);
            if v70 {
                v71 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v70);
            } else {
                v72 = uu_join::State::reset_read_line(&v38, &v1);
                if v72 {
                    v71 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v72);
                } else {
                    v73 = uu_join::State::reset_read_line(&v51, &v1);
                    if !v73 {
                        goto LABEL_46f0ac;
                    }
                    v71 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v73);
                }
            }
            goto LABEL_46f3d5;
        } else {
LABEL_46f0ac:
            if v42 && v54 {
                do {
                    v74 = uu_join::State::get_current_key(&v38);
                    v76 = uu_join::Input<Sep>::compare(v1, v74, v75, uu_join::State::get_current_key(&v51), v75);
                    if !v76 {
                        uu_join::State::extend(&v7 as u256, &v38, &v1);
                        if v7 == 9223372036854775809 {
                            v64 = v10;
                            v81 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v20);
                            match v81 {
                                Err(_) => {
                                    v64 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v81);
                                    return v64;
                                },
                                Ok(_) => {
                                    return v64;
                                },
                            }
                        }
                        memcpy(&v37, &v13, 16);
                        memcpy(&v36, &v11, 16);
                        v35 = *(&v7 as &i128);
                        uu_join::State::extend(&v7 as u256, &v51, &v1);
                        if v7 == 9223372036854775809 {
                            v64 = v10;
                            v83 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v20);
                            match v83 {
                                Err(_) => {
                                    v64 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v83);
                                    return v64;
                                },
                                Ok(_) => {
                                    return v64;
                                },
                            }
                        }
                        memcpy(&v26, &v13, 16);
                        memcpy(&v22, &v11, 16);
                        v23 = *(&v7 as &i128);
                        if !*((a4 + 90) as &i8) || (v77 = uu_join::State::combine(&v38, &v20, &v51), !v77) {
                            v78 = v35;
                            v14 = v37;
                            v6 = struct32 {
                                field_0: v78
                                field_8: <UNKNOWN>
                                field_16: v36
                            };
                            v38 = uu_join::State::reset(&v6);
                            v79 = v23;
                            v15 = v26;
                            v7 as u256 = struct32 {
                                field_0: v79
                                field_8: <UNKNOWN>
                                field_16: v25
                            };
                            v52 = uu_join::State::reset(&v7 as u256);
                        } else {
                            v64 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v77);
                        }
                    } else if v76 == 1 {
                        v64 = uu_join::State::skip_line(&v51, &v20, &v1, &v27);
                        if !v64 {
                            continue;
                        }
                        v80 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v20);
                        match v80 {
                            Ok(_) => {
                                return v64;
                            },
                            Err(_) => {
                                v87 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v80);
                                goto LABEL_46f431;
                            },
                        }
                    } else {
                        v64 = uu_join::State::skip_line(&v38, &v20, &v1, &v27);
                        if v64 {
                            v82 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v20);
                            match v82 {
                                Ok(_) => {
                                    return v64;
                                },
                                Err(_) => {
                                    v87 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v82);
                                },
                            }
                        }
                    }
                } while (v42 && v54);
            } else {
                v64 = uu_join::State::finalize(&v38, &v20, &v1, &v27);
                if v64 {
                    v84 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v20);
                    match v84 {
                        Ok(_) => {
                            return v64;
                        },
                        Err(_) => {
                            v87 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v84);
                        },
                    }
                    goto LABEL_46f431;
                }
                v64 = uu_join::State::finalize(&v51, &v20, &v1, &v27);
                if v64 {
                    v88 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v20);
                    if let Err(_) = v88 {
                        v87 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v88);
LABEL_46f431:
                        v64 = v87;
                    }
                } else {
                    v89 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v20);
                    if v89 {
                        v71 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v89);
LABEL_46f3d5:
                        v64 = v71;
                    } else if v48 || v60 {
                        v22 = uucore::execution_phrase();
                        v24 = v75;
                        eprintln!("{}: input is not in sorted order", &v22);
                        uucore::mods::error::set_exit_code(1);
                    }
                }
            }
        }
    }
    return v64;
}
