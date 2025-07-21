fn uu_join::exec(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u8;  // [bp-0x242]
    let v1: u8;  // [bp-0x241]
    let v2: u32;  // [bp-0x240]
    let v3: u8;  // [bp-0x23a]
    let v4: u8;  // [bp-0x239]
    let v5: struct48;  // [bp-0x238], Other Possible Types: u8
    let v6: i64;  // [bp-0x238]
    let v7: struct48;  // [bp-0x238]
    let v8: u64;  // [bp-0x231]
    let v9: u64;  // [bp-0x230]
    let v10: i64;  // [bp-0x228]
    let v11: i8;  // [bp-0x220]
    let v12: u64;  // [bp-0x218]
    let v13: u128;  // [bp-0x210]
    let v14: u128;  // [bp-0x200]
    let v15: u128;  // [bp-0x1f0]
    let v16: u64;  // [bp-0x1e0]
    let v17: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x1d8]
    let v18: std::io::stdio::Stdin;  // [bp-0x1b0]
    let v19: struct24;  // [bp-0x1a8], Other Possible Types: u64
    let v20: u64;  // [bp-0x1a8]
    let v21: u64;  // [bp-0x1a0]
    let v22: u128;  // [bp-0x198]
    let v23: u128;  // [bp-0x188]
    let v24: u128;  // [bp-0x178]
    let v25: u64;  // [bp-0x168]
    let v26: u128;  // [bp-0x160]
    let v27: u8;  // [bp-0x150]
    let v28: u128;  // [bp-0x148]
    let v29: u64;  // [bp-0x138]
    let v30: std::io::stdio::Stderr;  // [bp-0x130]
    let v31: u128;  // [bp-0x128]
    let v32: u128;  // [bp-0x118]
    let v33: u128;  // [bp-0x108]
    let v34: u64;  // [bp-0xf0]
    let v35: struct8;  // [bp-0xf0]
    let v36: struct8;  // [bp-0xf0]
    let v37: u64;  // [bp-0xe8]
    let v38: i64;  // [bp-0xe0]
    let v39: u128;  // [bp-0xd8]
    let v40: u128;  // [bp-0xc8]
    let v41: u128;  // [bp-0xb8]
    let v42: u128;  // [bp-0xa8]
    let v43: u64;  // [bp-0x98]
    let v44: u8;  // [bp-0x96]
    let v46: u64;  // [bp-0x90]
    let v47: struct8;  // [bp-0x90]
    let v48: struct8;  // [bp-0x90]
    let v49: u64;  // [bp-0x88]
    let v50: i64;  // [bp-0x80]
    let v51: u128;  // [bp-0x78]
    let v52: u128;  // [bp-0x68]
    let v53: u128;  // [bp-0x58]
    let v54: u128;  // [bp-0x48]
    let v55: u64;  // [bp-0x38]
    let v56: u8;  // [bp-0x36]
    let v59: u64;  // rax
    let v60: void*;  // r15
    let v61: u64;  // rax
    let v62: u64;  // r15
    let v63: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v64: u64;  // rcx
    let v65: u64;  // rdx
    let v66: u64;  // rax
    let v67: u64;  // rax
    let v68: u64;  // rax
    let v69: u64;  // rax
    let v70: void*;  // rax
    let v71: u64;  // rdx
    let v72: u64;  // rax
    let v73: u64;  // rax
    let v76: core::result::Result<(), std::io::error::Error>;  // rax
    let v77: core::result::Result<(), std::io::error::Error>;  // rax
    let v78: core::result::Result<(), std::io::error::Error>;  // rax
    let v79: core::result::Result<(), std::io::error::Error>;  // rax
    let v80: core::result::Result<(), std::io::error::Error>;  // rax
    let v83: u64;  // r12
    let v84: core::result::Result<(), std::io::error::Error>;  // rax
    let v85: core::result::Result<(), std::io::error::Error>;  // rax

    v18 = std::io::stdio::stdin();
    uu_join::State::new(&v5, 0, a0, a1, &v18, *((a4 + 72) as &i64), *((a4 + 95) as &i8), *((a4 + 88) as &i8));
    v59 = *(&v5 as &i64);
    v60 = v9;
    if v59 == 0x8000000000000000 {
        return v60;
    }
    v43 = v16;
    v42 = v15;
    v41 = v14;
    v40 = v13;
    v39 = *(&v11 as &i128);
    v34 = v59;
    v37 = v60;
    v38 = v10;
    v2 = v16 & -0x100 | 1;
    uu_join::State::new(&v5, 1, a2, a3, &v18, *((a4 + 80) as &i64), *((a4 + 95) as &i8), *((a4 + 89) as &i8));
    v61 = *(&v5 as &i64);
    v60 = v9;
    if v61 != 0x8000000000000000 {
        v55 = v16;
        v54 = v15;
        v53 = v14;
        v52 = v13;
        v51 = *(&v11 as &i128);
        v46 = v61;
        v49 = v60;
        v50 = v10;
        v0 = *((a4 + 91) as &i8);
        v1 = *((a4 + 94) as &i8);
        v62 = a4 + 92;
        v3 = *((a4 + 92) as &i8);
        if v3 {
            v63 = alloc::alloc::Global::alloc_impl(0x10, a1, a2) as u64;
            *(v63 as &i8) = 0;
            v64 = *(&v5 as &i64);
            v65 = v8;
            *((v63 + 1) as &u64) = v64;
            *((v63 + 8) as &u64) = v65;
            v2 = v64 & -0x100 | 1;
            v19 = alloc::slice::hack::into_vec(v63, 1);
            *(&v6 as &&u8) = &v4;
            v9 = v62;
            v10 = &v19;
            uu_join::exec::{{closure}}(&v5, &v34);
            uu_join::exec::{{closure}}(&v5, &v46);
        } else {
            v2 = v3 & -0x100 | 1;
            v35 = uu_join::State::initialize(&v4, 0);
            v47 = uu_join::State::initialize(&v4, *(v62 as &i8));
        }
        v25 = v29;
        v24 = v28;
        v27 = *((a4 + 95) as &i8);
        v26 = *((a4 + 32) as &i128);
        v30 = std::io::stdio::Stderr {
            inner: std::io::stdio::stdout()
        };
        std::io::stdio::Stderr::lock(&v30);
        v17 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
        if *((a4 + 93) as &i8) {
            v66 = uu_join::State::print_headers(&v34, &v17, &v46, &v24);
            if v66 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v66);
            } else {
                v68 = uu_join::State::reset_read_line(&v34, &v0);
                if v68 {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v68);
                } else {
                    v69 = uu_join::State::reset_read_line(&v46, &v0);
                    if !v69 {
                        goto LABEL_46e5c2;
                    }
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v69);
                }
            }
            goto LABEL_46e8f5;
        } else {
LABEL_46e5c2:
            if v38 && v50 {
                do {
                    v70 = uu_join::State::get_current_key(&v34);
                    v72 = uu_join::Input<Sep>::compare(v0, v70, v71, uu_join::State::get_current_key(&v46), v71);
                    if !v72 {
                        uu_join::State::extend(&v6 as u384, &v34, &v0);
                        if v7.field_0 == 9223372036854775809 {
                            v60 = v9;
                            v77 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v17);
                            match v77 {
                                Err(_) => {
                                    v60 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v77);
                                    return v60;
                                },
                                Ok(_) => {
                                    return v60;
                                },
                            }
                        }
                        v33 = *(&v12 as &i128);
                        v32 = *(&v10 as &i128);
                        v31 = *(&v7.field_0 as &i128);
                        uu_join::State::extend(&v6 as u384, &v46, &v0);
                        if v7.field_0 == 9223372036854775809 {
                            v60 = v9;
                            v79 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v17);
                            match v79 {
                                Err(_) => {
                                    v60 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v79);
                                    return v60;
                                },
                                Ok(_) => {
                                    return v60;
                                },
                            }
                        }
                        v23 = *(&v12 as &i128);
                        v22 = *(&v10 as &i128);
                        *(&v20 as &i128) = *(&v7.field_0 as &i128);
                        if !*((a4 + 90) as &i8) || (v73 = uu_join::State::combine(&v34, &v17, &v46), !v73) {
                            v5 = struct48 {
                                field_0: v31
                                field_8: <UNKNOWN>
                                field_16: v32
                                field_32: v33
                            };
                            v36 = uu_join::State::reset(&v5);
                            v6 as u384 = struct48 {
                                field_0: *(&v20 as &i128)
                                field_8: <UNKNOWN>
                                field_16: v22
                                field_32: v23
                            };
                            v48 = uu_join::State::reset(&v6 as u384);
                        } else {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v73);
                        }
                    } else if v72 == 1 {
                        uu_join::State::skip_line(&v46, &v17, &v0, &v24);
                        if !v60 {
                            continue;
                        }
                        v76 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v17);
                        match v76 {
                            Ok(_) => {
                                return v60;
                            },
                            Err(_) => {
                                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v76);
                                goto LABEL_46e951;
                            },
                        }
                    } else {
                        uu_join::State::skip_line(&v34, &v17, &v0, &v24);
                        if v60 {
                            v78 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v17);
                            match v78 {
                                Ok(_) => {
                                    return v60;
                                },
                                Err(_) => {
                                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v78);
                                },
                            }
                        }
                    }
                } while (v38 && v50);
            } else {
                uu_join::State::finalize(&v34, &v17, &v0, &v24);
                if v60 {
                    v80 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v17);
                    match v80 {
                        Ok(_) => {
                            return v60;
                        },
                        Err(_) => {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v80);
                        },
                    }
                    goto LABEL_46e951;
                }
                uu_join::State::finalize(&v46, &v17, &v0, &v24);
                if v60 {
                    v84 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v17);
                    if let Err(_) = v84 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v84);
LABEL_46e951:
                        v60 = v83;
                    }
                } else {
                    v85 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v17);
                    if v85 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v85);
LABEL_46e8f5:
                        v60 = v67;
                    } else if v44 || v56 {
                        v19 = uucore::execution_phrase();
                        v21 = v71;
                        eprintln!("{}: input is not in sorted order", &v19);
                        uucore::mods::error::set_exit_code(1);
                    }
                }
            }
        }
    }
    return v60;
}
