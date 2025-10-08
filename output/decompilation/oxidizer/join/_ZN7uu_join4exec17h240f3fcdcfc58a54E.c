fn uu_join::exec(a0: u64, a1: u64, a2: u64, a3: u64, a4: i64, a5: u8) -> long long {
    let v0: u8;  // [bp-0x23c]
    let v1: u8;  // [bp-0x23b]
    let v2: u8;  // [bp-0x23a]
    let v3: u8;  // [bp-0x239]
    let v4: Result<struct77, struct16>;  // [bp-0x238]
    let v5: Result<struct77, struct16>;  // [bp-0x238], Other Possible Types: struct48
    let v6: struct24;  // [bp-0x238]
    let v7: u64;  // [bp-0x230]
    let v8: u64;  // [bp-0x228]
    let v9: iNone;  // [bp-0x210]
    let v10: iNone;  // [bp-0x200]
    let v11: iNone;  // [bp-0x1f0]
    let v12: u64;  // [bp-0x1e0]
    let v13: u64;  // [bp-0x1d8]
    let v14: u128;  // [bp-0x1d8]
    let v15: i64;  // [bp-0x1d0], Other Possible Types: u64
    let v16: iNone;  // [bp-0x1c8], Other Possible Types: u64
    let v17: u64;  // [bp-0x1c8]
    let v18: iNone;  // [bp-0x1b8]
    let v19: struct33;  // [bp-0x1a8]
    let v20: std::io::stdio::Stdin;  // [bp-0x180]
    let v21: u128;  // [bp-0x178]
    let v22: u64;  // [bp-0x168]
    let v23: u128;  // [bp-0x160]
    let v24: u8;  // [bp-0x150]
    let v25: u8;  // [bp-0x14f]
    let v26: u64;  // [bp-0x148]
    let v28: u64;  // [bp-0x140]
    let v29: u64;  // [bp-0x138]
    let v30: iNone;  // [bp-0x130]
    let v31: iNone;  // [bp-0x120]
    let v32: iNone;  // [bp-0x110]
    let v33: iNone;  // [bp-0x100]
    let v34: u64;  // [bp-0xf0]
    let v35: u8;  // [bp-0xee]
    let v37: u128;  // [bp-0xe8]
    let v38: u64;  // [bp-0xd8]
    let v39: std::io::stdio::Stdout;  // [bp-0xd0]
    let v40: iNone;  // [bp-0xc8]
    let v41: iNone;  // [bp-0xb8]
    let v42: iNone;  // [bp-0xa8]
    let v43: u64;  // [bp-0x90]
    let v45: u64;  // [bp-0x88]
    let v46: u64;  // [bp-0x80]
    let v47: iNone;  // [bp-0x78]
    let v48: iNone;  // [bp-0x68]
    let v49: iNone;  // [bp-0x58]
    let v50: iNone;  // [bp-0x48]
    let v51: u64;  // [bp-0x38]
    let v52: u8;  // [bp-0x36]
    let v55: u64;  // rax
    let v56: u64;  // r15
    let v57: u64;  // rax
    let v58: u64;  // r14
    let v59: i64;  // rax
    let v60: u64;  // rcx
    let v61: u64;  // rdx
    let v62: u64;  // rax
    let v63: u64;  // rdx
    let v65: u8;  // al
    let v67: u64;  // rax
    let v68: u64;  // rax
    let v69: u64;  // rax
    let v70: u64;  // rax
    let v71: u64;  // rax
    let v72: u64;  // rdx
    let v73: u64;  // rax
    let v74: u64;  // rax
    let v77: core::result::Result<(), std::io::error::Error>;  // rax
    let v78: u64;  // r12
    let v79: core::result::Result<(), std::io::error::Error>;  // rax
    let v81: core::result::Result<(), std::io::error::Error>;  // rax
    let v82: core::result::Result<(), std::io::error::Error>;  // rax
    let v84: core::result::Result<(), std::io::error::Error>;  // rax
    let v85: core::result::Result<(), std::io::error::Error>;  // rax
    let v86: core::result::Result<(), std::io::error::Error>;  // rax

    v0 = a5;
    v20 = std::io::stdio::stdin();
    v5 = uu_join::State::new(None, a0, a1, &v20, *((a4 + 72) as &i64), *((a4 + 95) as &i8), *((a4 + 88) as &i8));
    v55 = v5 as i64;
    v56 = v7;
    if (((0 ^ v55) & (0 ^ -(v55))) >> 63) as char {
        return v56;
    }
    v34 = v12;
    v33 = v11;
    v32 = v10;
    v31 = v9;
    v30 = *((&v5 as &char + 24) as &i128);
    v26 = v55;
    v28 = v56;
    v29 = v8;
    v4 = uu_join::State::new(0x1, a2, a3, &v20, *((a4 + 80) as &i64), *((a4 + 95) as &i8), *((a4 + 89) as &i8));
    v57 = v4 as i64;
    v56 = v7;
    if v57 != 0x8000000000000000 {
        v51 = v12;
        v50 = v11;
        v49 = v10;
        v48 = v9;
        v47 = *((&v4 as &char + 24) as &i128);
        v43 = v57;
        v45 = v56;
        v46 = v8;
        v3 = v0;
        v1 = *((a4 + 91) as &i8);
        v2 = *((a4 + 94) as &i8);
        v58 = a4 + 92;
        if *((a4 + 92) as &i8) {
            v59 = alloc::alloc::Global::alloc_impl(8, 16);
            *(v59 as &i8) = 0;
            v60 = v4 as i64;
            *((v59 + 8) as &i64) = *((&v4 as &char + 7) as &i64);
            *((v59 + 1) as &u64) = v60;
            v13 = 1;
            v15 = v59;
            v16 = 1;
            v6 = struct24 {
                field_0: &v0
                field_8: v58
                field_16: &v13
            };
            uu_join::exec::{{closure}}(&v6, &v26);
            if !v56 {
                uu_join::exec::{{closure}}(&v6, &v43);
                if !v56 {
                    v38 = v17;
                    v37 = *(&v13 as &i128);
LABEL_45f395:
                    v65 = *((a4 + 95) as &i8);
                    v21 = v37;
                    v22 = v38;
                    v24 = v65;
                    v25 = v0;
                    v23 = *((a4 + 32) as &i128);
                    v39 = std::io::stdio::stdout();
                    v19 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(std::io::stdio::Stderr::lock(&v39));
                    if *((a4 + 93) as &i8) {
                        v67 = uu_join::State::print_headers(&v26, &v19, &v43, &v21);
                        if v67 {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v67);
                        } else {
                            v69 = uu_join::State::reset_read_line(&v26, &v1);
                            if v69 {
                                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v69);
                            } else {
                                v70 = uu_join::State::reset_read_line(&v43, &v1);
                                if !v70 {
                                    goto LABEL_45f490;
                                }
                                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v70);
                            }
                        }
                        goto LABEL_45f7bb;
                    }
LABEL_45f490:
                    if v29 {
                        while (v46) {
                            v71 = uu_join::State::get_current_key(&v26);
                            v73 = uu_join::Input<Sep>::compare(v1, v71, v72, uu_join::State::get_current_key(&v43), v72);
                            if !v73 {
                                uu_join::State::extend(&v4, &v26, &v1);
                                if v4 as i64 == 9223372036854775809 {
                                    v56 = v7;
                                    v79 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v19);
                                    match v79 {
                                        Err(_) => {
                                            v56 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v79);
                                            return v56;
                                        },
                                        Ok(_) => {
                                            return v56;
                                        },
                                    }
                                }
                                v42 = *((&v4 as &char + 32) as &i128);
                                v41 = *((&v4 as &char + 16) as &i128);
                                *(&v40 as &i128) = v4 as i128;
                                uu_join::State::extend(&v4, &v43, &v1);
                                if v4 as i64 == 9223372036854775809 {
                                    v56 = v7;
                                    v82 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v19);
                                    match v82 {
                                        Err(_) => {
                                            v56 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v82);
                                            return v56;
                                        },
                                        Ok(_) => {
                                            return v56;
                                        },
                                    }
                                }
                                v18 = *((&v4 as &char + 32) as &i128);
                                v16 = *((&v4 as &char + 16) as &i128);
                                v14 = v4 as i128;
                                if *((a4 + 90) as &i8) {
                                    v74 = uu_join::State::combine(&v26, &v19, &v43);
                                    if !v74 {
                                        goto LABEL_45f611;
                                    }
                                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v74);
                                } else {
LABEL_45f611:
                                    v5 = struct48 {
                                        field_0: v40 as i128
                                        field_8: <UNKNOWN>
                                        field_16: v41
                                        field_32: v42
                                    };
                                    v26 = uu_join::State::reset(&v5);
                                    v5 = struct48 {
                                        field_0: v14
                                        field_8: <UNKNOWN>
                                        field_16: v16
                                        field_32: v18
                                    };
                                    v43 = uu_join::State::reset(&v5);
                                    goto LABEL_45f4bc;
                                }
                            }
                            if v73 == 1 {
                                uu_join::State::skip_line(&v43, &v19, &v1, &v21);
                                if !v56 {
                                    goto LABEL_45f4bc;
                                }
                                v81 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v19);
                                match v81 {
                                    Ok(_) => {
                                        return v56;
                                    },
                                    Err(_) => {
                                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v81);
                                        goto LABEL_45f862;
                                    },
                                }
                            } else {
                                uu_join::State::skip_line(&v26, &v19, &v1, &v21);
                                if !v56 {
LABEL_45f4bc:
                                    if !v29 {
                                        break;
                                    }
                                } else {
                                    v77 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v19);
                                    match v77 {
                                        Ok(_) => {
                                            return v56;
                                        },
                                        Err(_) => {
                                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v77);
                                        },
                                    }
                                }
                            }
                        }
                        goto LABEL_45f6e6;
                    } else {
LABEL_45f6e6:
                        uu_join::State::finalize(&v26, &v19, &v1, &v21);
                        if v56 {
                            v84 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v19);
                            if let Err(_) = v84 {
                                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v84);
                                goto LABEL_45f862;
                            }
                        } else {
                            uu_join::State::finalize(&v43, &v19, &v1, &v21);
                            if v56 {
                                v85 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v19);
                                if let Err(_) = v85 {
                                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v85);
LABEL_45f862:
                                    v56 = v78;
                                }
                            } else {
                                v86 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v19);
                                match v86 {
                                    Err(_) => {
                                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v86);
                                    },
                                    Ok(_) => {
                                        if v35 || v52 == 1 {
                                            v13 = uucore::execution_phrase();
                                            v15 = v72;
                                            eprintln!("{}: input is not in sorted order", &v13);
                                            uucore::mods::error::set_exit_code(1);
                                        }
                                        return 0;
                                    },
                                }
LABEL_45f7bb:
                                v56 = v68;
                            }
                        }
                    }
                }
            }
        } else {
            if (uu_join::State::initialize(&v26, &v0, 0) & 1) {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v61);
            } else {
                if !(uu_join::State::initialize(&v43, &v0, *(v58 as &i8)) & 1) {
                    goto LABEL_45f395;
                }
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v63);
            }
            v56 = v62;
        }
    }
    return v56;
}
