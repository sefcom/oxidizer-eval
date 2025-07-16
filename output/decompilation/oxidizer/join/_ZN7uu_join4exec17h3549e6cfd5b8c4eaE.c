fn uu_join::exec(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u8;  // [bp-0x242]
    let v1: u8;  // [bp-0x241]
    let v2: u32;  // [bp-0x240]
    let v3: u8;  // [bp-0x23a]
    let v4: u8;  // [bp-0x239]
    let v5: u256;  // [bp-0x238]
    let v6: i64;  // [bp-0x238]
    let v7: u256;  // [bp-0x238]
    let v8: u64;  // [bp-0x231]
    let v9: u64;  // [bp-0x230]
    let v10: i64;  // [bp-0x228]
    let v11: u8;  // [bp-0x220]
    let v12: u64;  // [bp-0x218]
    let v13: u128;  // [bp-0x218]
    let v14: u128;  // [bp-0x218]
    let v15: u128;  // [bp-0x210]
    let v16: u128;  // [bp-0x200]
    let v17: u128;  // [bp-0x1f0]
    let v18: u64;  // [bp-0x1e0]
    let v19: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x1d8]
    let v20: std::io::stdio::Stdin;  // [bp-0x1b0]
    let v21: struct24;  // [bp-0x1a8], Other Possible Types: u64
    let v22: u128;  // [bp-0x1a8]
    let v23: u64;  // [bp-0x1a0]
    let v24: u128;  // [bp-0x198]
    let v25: u8;  // [bp-0x188]
    let v26: u128;  // [bp-0x178]
    let v27: u64;  // [bp-0x168]
    let v28: u128;  // [bp-0x160]
    let v29: u8;  // [bp-0x150]
    let v30: u128;  // [bp-0x148]
    let v31: u64;  // [bp-0x138]
    let v32: u64;  // [bp-0x130]
    let v33: u128;  // [bp-0x128]
    let v34: u8;  // [bp-0x118]
    let v35: u128;  // [bp-0x108]
    let v36: u64;  // [bp-0xf0]
    let v37: struct8;  // [bp-0xf0]
    let v38: struct8;  // [bp-0xf0]
    let v39: u64;  // [bp-0xe8]
    let v40: i64;  // [bp-0xe0]
    let v41: u8;  // [bp-0xd8]
    let v42: u128;  // [bp-0xc8]
    let v43: u128;  // [bp-0xb8]
    let v44: u128;  // [bp-0xa8]
    let v45: u64;  // [bp-0x98]
    let v46: u8;  // [bp-0x96]
    let v48: u64;  // [bp-0x90]
    let v49: struct8;  // [bp-0x90]
    let v50: struct8;  // [bp-0x90]
    let v51: u64;  // [bp-0x88]
    let v52: i64;  // [bp-0x80]
    let v53: u8;  // [bp-0x78]
    let v54: u128;  // [bp-0x68]
    let v55: u128;  // [bp-0x58]
    let v56: u128;  // [bp-0x48]
    let v57: u64;  // [bp-0x38]
    let v58: u8;  // [bp-0x36]
    let v61: u64;  // rax
    let v62: void*;  // r15
    let v63: u64;  // rax
    let v64: u64;  // r15
    let v65: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v66: u64;  // rcx
    let v67: u64;  // rdx
    let v68: u64;  // rax
    let v69: u64;  // rax
    let v70: u64;  // rax
    let v71: u64;  // rax
    let v72: void*;  // rax
    let v73: u64;  // rdx
    let v74: u64;  // rax
    let v75: u64;  // rax
    let v76: u128;  // xmm0
    let v77: u128;  // xmm0
    let v78: core::result::Result<(), std::io::error::Error>;  // rax
    let v79: core::result::Result<(), std::io::error::Error>;  // rax
    let v80: core::result::Result<(), std::io::error::Error>;  // rax
    let v81: core::result::Result<(), std::io::error::Error>;  // rax
    let v82: core::result::Result<(), std::io::error::Error>;  // rax
    let v85: u64;  // r12
    let v86: core::result::Result<(), std::io::error::Error>;  // rax
    let v87: core::result::Result<(), std::io::error::Error>;  // rax

    v20 = std::io::stdio::stdin();
    uu_join::State::new(&v5, 0, a0, a1, &v20, *((a4 + 72) as &i64), *((a4 + 95) as &i8), *((a4 + 88) as &i8));
    v61 = *(&v5 as &i64);
    v62 = v9;
    if v61 == 0x8000000000000000 {
        return v62;
    }
    v45 = v18;
    v44 = v17;
    v43 = v16;
    v42 = v15;
    memcpy(&v41, &v11, 16);
    v36 = v61;
    v39 = v62;
    v40 = v10;
    v2 = v18 & -0x100 | 1;
    uu_join::State::new(&v5, 1, a2, a3, &v20, *((a4 + 80) as &i64), *((a4 + 95) as &i8), *((a4 + 89) as &i8));
    v63 = *(&v5 as &i64);
    v62 = v9;
    if v63 != 0x8000000000000000 {
        v57 = v18;
        v56 = v17;
        v55 = v16;
        v54 = v15;
        memcpy(&v53, &v11, 16);
        v48 = v63;
        v51 = v62;
        v52 = v10;
        v0 = *((a4 + 91) as &i8);
        v1 = *((a4 + 94) as &i8);
        v64 = a4 + 92;
        v3 = *((a4 + 92) as &i8);
        if v3 {
            v65 = alloc::alloc::Global::alloc_impl(0x10, a1, a2) as u64;
            *(v65 as &i8) = 0;
            v66 = *(&v5 as &i64);
            v67 = v8;
            *((v65 + 1) as &u64) = v66;
            *((v65 + 8) as &u64) = v67;
            v2 = v66 & -0x100 | 1;
            v21 = alloc::slice::hack::into_vec(v65, 1);
            *(&v6 as &&u8) = &v4;
            v9 = v64;
            v10 = &v21;
            uu_join::exec::{{closure}}(&v5, &v36);
            uu_join::exec::{{closure}}(&v5, &v48);
            v31 = v21.field_16;
            memcpy(&v30, &v21, 16);
            v2 = v21.field_16 & -0x100 | 1;
        } else {
            v2 = v3 & -0x100 | 1;
            v37 = uu_join::State::initialize(&v4, 0);
            v49 = uu_join::State::initialize(&v4, *(v64 as &i8));
        }
        v27 = v31;
        v26 = v30;
        v29 = *((a4 + 95) as &i8);
        v28 = *((a4 + 32) as &i128);
        v32 = std::io::stdio::Stderr {
            inner: std::io::stdio::stdout()
        };
        std::io::stdio::Stderr::lock(&v32);
        v19 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
        if *((a4 + 93) as &i8) {
            v68 = uu_join::State::print_headers(&v36, &v19, &v48, &v26);
            if v68 {
                v69 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v68);
            } else {
                v70 = uu_join::State::reset_read_line(&v36, &v0);
                if v70 {
                    v69 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v70);
                } else {
                    v71 = uu_join::State::reset_read_line(&v48, &v0);
                    if !v71 {
                        goto LABEL_46e5c2;
                    }
                    v69 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v71);
                }
            }
            goto LABEL_46e8f5;
        } else {
LABEL_46e5c2:
            if v40 && v52 {
                do {
                    v72 = uu_join::State::get_current_key(&v36);
                    v74 = uu_join::Input<Sep>::compare(v0, v72, v73, uu_join::State::get_current_key(&v48), v73);
                    if !v74 {
                        uu_join::State::extend(&v5, &v36, &v0);
                        if v7 as i64 == 9223372036854775809 {
                            v62 = v9;
                            v79 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v19);
                            match v79 {
                                Err(_) => {
                                    v62 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v79);
                                    return v62;
                                },
                                Ok(_) => {
                                    return v62;
                                },
                            }
                        }
                        memcpy(&v35, &v12, 16);
                        memcpy(&v34, &v10, 16);
                        v33 = v7;
                        uu_join::State::extend(&v5, &v48, &v0);
                        if v7 as i64 == 9223372036854775809 {
                            v62 = v9;
                            v81 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v19);
                            match v81 {
                                Err(_) => {
                                    v62 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v81);
                                    return v62;
                                },
                                Ok(_) => {
                                    return v62;
                                },
                            }
                        }
                        memcpy(&v25, &v12, 16);
                        memcpy(&v21, &v10, 16);
                        v22 = v7;
                        if !*((a4 + 90) as &i8) || (v75 = uu_join::State::combine(&v36, &v19, &v48), !v75) {
                            v76 = v33;
                            v13 = v35;
                            v5 = struct32 {
                                field_0: v76
                                field_8: <UNKNOWN>
                                field_16: v34
                            };
                            v38 = uu_join::State::reset(&v5);
                            v77 = v22;
                            v14 = v25;
                            v5 = struct32 {
                                field_0: v77
                                field_8: <UNKNOWN>
                                field_16: v24
                            };
                            v50 = uu_join::State::reset(&v5);
                        } else {
                            v62 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v75);
                        }
                    } else if v74 == 1 {
                        v62 = uu_join::State::skip_line(&v48, &v19, &v0, &v26);
                        if !v62 {
                            continue;
                        }
                        v78 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v19);
                        match v78 {
                            Ok(_) => {
                                return v62;
                            },
                            Err(_) => {
                                v85 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v78);
                                goto LABEL_46e951;
                            },
                        }
                    } else {
                        v62 = uu_join::State::skip_line(&v36, &v19, &v0, &v26);
                        if v62 {
                            v80 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v19);
                            match v80 {
                                Ok(_) => {
                                    return v62;
                                },
                                Err(_) => {
                                    v85 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v80);
                                },
                            }
                        }
                    }
                } while (v40 && v52);
            } else {
                v62 = uu_join::State::finalize(&v36, &v19, &v0, &v26);
                if v62 {
                    v82 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v19);
                    match v82 {
                        Ok(_) => {
                            return v62;
                        },
                        Err(_) => {
                            v85 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v82);
                        },
                    }
                    goto LABEL_46e951;
                }
                v62 = uu_join::State::finalize(&v48, &v19, &v0, &v26);
                if v62 {
                    v86 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v19);
                    if let Err(_) = v86 {
                        v85 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v86);
LABEL_46e951:
                        v62 = v85;
                    }
                } else {
                    v87 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v19);
                    if v87 {
                        v69 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v87);
LABEL_46e8f5:
                        v62 = v69;
                    } else if v46 || v58 {
                        v21 = uucore::execution_phrase();
                        v23 = v73;
                        eprintln!("{}: input is not in sorted order", &v21);
                        uucore::mods::error::set_exit_code(1);
                    }
                }
            }
        }
    }
    return v62;
}
