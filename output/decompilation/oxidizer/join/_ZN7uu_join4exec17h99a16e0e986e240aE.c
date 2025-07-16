fn uu_join::exec(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> long long {
    let v0: u32;  // [bp-0x4c8]
    let v1: u8;  // [bp-0x4c1]
    let v2: i64;  // [bp-0x4c0]
    let v3: struct24;  // [bp-0x4b0], Other Possible Types: u64
    let v4: u256;  // [bp-0x4b0]
    let v5: u64;  // [bp-0x4a8]
    let v7: u64;  // [bp-0x4a0]
    let v8: u128;  // [bp-0x490]
    let v9: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x478]
    let v10: u64;  // [bp-0x450]
    let v11: std::io::stdio::Stdin;  // [bp-0x448]
    let v12: u128;  // [bp-0x440]
    let v13: u64;  // [bp-0x430]
    let v14: u64;  // [bp-0x420]
    let v15: u64;  // [bp-0x418]
    let v16: u128;  // [bp-0x410]
    let v17: u128;  // [bp-0x400]
    let v18: u128;  // [bp-0x3f0]
    let v19: u64;  // [bp-0x3e0]
    let v20: u128;  // [bp-0x3e0]
    let v21: i64;  // [bp-0x3d8]
    let v22: u128;  // [bp-0x3d0]
    let v23: u128;  // [bp-0x3c0]
    let v24: u64;  // [sp-0x3b0]
    let v25: struct8;  // [bp-0x3b0]
    let v26: struct8;  // [bp-0x3b0]
    let v27: u64;  // [bp-0x3a8]
    let v28: u64;  // [bp-0x3a0]
    let v29: u128;  // [bp-0x398]
    let v30: u128;  // [bp-0x388]
    let v31: u128;  // [bp-0x378]
    let v32: u128;  // [bp-0x368]
    let v33: u64;  // [bp-0x358]
    let v34: u8;  // [bp-0x356]
    let v36: u64;  // [sp-0x350]
    let v38: struct8;  // [bp-0x350]
    let v39: u64;  // [bp-0x348]
    let v40: u64;  // [bp-0x340]
    let v41: u128;  // [bp-0x338]
    let v42: u128;  // [bp-0x328]
    let v43: u128;  // [bp-0x318]
    let v44: u128;  // [bp-0x308]
    let v45: u64;  // [bp-0x2f8]
    let v46: u8;  // [bp-0x2f6]
    let v48: u8;  // [bp-0x2f0], Other Possible Types: struct264
    let v49: void*;  // [bp-0x2f0]
    let v50: u64;  // [bp-0x2e8]
    let v51: i64;  // [bp-0x2e0], Other Possible Types: u64
    let v52: u128;  // [bp-0x2d8]
    let v53: u128;  // [bp-0x2c8]
    let v54: u128;  // [bp-0x2b8]
    let v55: u128;  // [bp-0x2a8]
    let v56: i8;  // [bp-0x298]
    let v61: u8;  // [bp-0x190]
    let v63: u8;  // [bp-0x70]
    let v66: u32;  // eax
    let v67: u64;  // rax
    let v68: void*;  // r12, Other Possible Types: u64
    let v69: u32;  // edx
    let v70: u64;  // r14
    let v71: i64;  // r12
    let v72: u64;  // r15
    let v73: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v74: u64;  // rcx
    let v75: u64;  // rdx
    let v76: i64;  // r14
    let v77: u64;  // rax
    let v78: u64;  // rax
    let v79: u64;  // rax
    let v80: u64;  // rax
    let v81: void*;  // rax
    let v82: void*;  // rax
    let v83: u32;  // rdx
    let v84: u64;  // rax
    let v85: u64;  // rax
    let v88: core::result::Result<(), std::io::error::Error>;  // rax
    let v89: core::result::Result<(), std::io::error::Error>;  // rax
    let v90: core::result::Result<(), std::io::error::Error>;  // rax
    let v91: core::result::Result<(), std::io::error::Error>;  // rax
    let v92: core::result::Result<(), std::io::error::Error>;  // rax
    let v95: u64;  // r14
    let v96: core::result::Result<(), std::io::error::Error>;  // rax
    let v97: core::result::Result<(), std::io::error::Error>;  // rax

    v0 = v66 & -0x100 | 1;
    v11 = std::io::stdio::stdin();
    uu_join::State::new(&v48, 0, a0, a1, &v11, *((v2 + 72) as &i64), *((v2 + 95) as &i8), *((v2 + 88) as &i8));
    v67 = *(&v48 as &i64);
    v68 = v50;
    if v67 == 0x8000000000000000 {
        return v68;
    }
    v33 = *(&v56 as &i64);
    v32 = v55;
    v31 = v54;
    v30 = v53;
    v29 = v52;
    v24 = v67;
    v27 = v68;
    v28 = v51;
    v0 = v69 & -0x100 | 1;
    uu_join::State::new(&v48, 1, a2, a3, &v11, *((v2 + 80) as &i64), *((v2 + 95) as &i8), *((v2 + 89) as &i8));
    v70 = *(&v48 as &i64);
    v68 = v50;
    if v70 != 0x8000000000000000 {
        v45 = *(&v56 as &i64);
        v44 = v55;
        v43 = v54;
        v42 = v53;
        v41 = v52;
        v14 = v70;
        v36 = v70;
        v39 = v68;
        v40 = v51;
        v49 as u2240 = <uu_join::MultiByteSep as core::clone::Clone>::clone(a5);
        v71 = a4;
        memcpy(&v61, &v49 as u2240, 288);
        v63 = *((v71 + 91) as &i8);
        v63 = *((v71 + 94) as &i8);
        v72 = v71 + 92;
        v1 = *((v71 + 92) as &i8);
        if v1 {
            v73 = alloc::alloc::Global::alloc_impl(0x10, a1, a2) as u64;
            *(v73 as &i8) = 0;
            v74 = v48.field_0;
            v75 = *((&v48.field_0 as &char + 7) as &i64);
            *((v73 + 1) as &u64) = v74;
            *((v73 + 8) as &u64) = v75;
            v0 = v74 & -0x100 | 1;
            v3 = alloc::slice::hack::into_vec(v73, 1);
            v49 = a5;
            v50 = v72;
            v51 = &v3;
            uu_join::exec::{{closure}}(&v49 as u2240, &v24);
            uu_join::exec::{{closure}}(&v49 as u2240, &v36);
            v13 = v7;
            memcpy(&v12, &v3, 16);
            v0 = v13 & -0x100 | 1;
            v76 = a4;
        } else {
            v0 = v1 & -0x100 | 1;
            v25 = uu_join::State::initialize(a5, 0);
            v36 = uu_join::State::initialize(a5, *(v72 as &i8));
        }
        memcpy(&v49 as u2240, a5, 288);
        v15 = std::io::stdio::Stderr {
            inner: std::io::stdio::stdout()
        };
        std::io::stdio::Stderr::lock(&v15);
        v9 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
        if *((a4 + 93) as &i8) {
            v77 = uu_join::State::print_headers(&v24, &v9, &v36, &v49 as u2240);
            if v77 {
                v78 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v77);
            } else {
                v79 = uu_join::State::reset_read_line(&v24, &v61);
                if v79 {
                    v78 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v79);
                } else {
                    v80 = uu_join::State::reset_read_line(&v36, &v61);
                    if !v80 {
                        goto LABEL_46fc62;
                    }
                    v78 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v80);
                }
            }
            goto LABEL_46ffbe;
        }
LABEL_46fc62:
        if v28 && v40 {
            v10 = 9223372036854775809;
            do {
                v81 = uu_join::State::get_current_key(&v24);
                v82 = uu_join::State::get_current_key(&v36);
                v84 = uu_join::Input<Sep>::compare(*(&v63 as &i32), v81, v83, v82, v83);
                if !v84 {
                    uu_join::State::extend(&v3, &v24, &v61);
                    if v3 == v10 {
                        v68 = v5;
                        v89 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v9);
                        if let Err(_) = v89 {
                            v68 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v89);
                            goto LABEL_470055;
                        }
                    }
                    v18 = v8;
                    memcpy(&v17, &v7, 16);
                    v16 = *(&v3 as &i128);
                    uu_join::State::extend(&v3, &v36, &v61);
                    if v3 == v10 {
                        v68 = v5;
                        v91 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v9);
                        if let Err(_) = v91 {
                            v68 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v91);
                            goto LABEL_470055;
                        }
                    }
                    v23 = v8;
                    memcpy(&v22, &v7, 16);
                    v20 = *(&v3 as &i128);
                    if !*((a4 + 90) as &i8) || (v85 = uu_join::State::combine(&v24, &v9, &v36), !v85) {
                        v8 = v18;
                        v4 = struct32 {
                            field_0: v16
                            field_8: <UNKNOWN>
                            field_16: v17
                        };
                        v26 = uu_join::State::reset(&v4);
                        v8 = v23;
                        v4 = struct32 {
                            field_0: v20
                            field_8: <UNKNOWN>
                            field_16: v22
                        };
                        v38 = uu_join::State::reset(&v4);
                    } else {
                        v68 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v85);
                    }
                } else if v84 == 1 {
                    v68 = uu_join::State::skip_line(&v36, &v9, &v61, &v49 as u2240);
                    if !v68 {
                        continue;
                    }
                    v88 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v9);
                    if let Ok(_) = v88 {
                        goto LABEL_470055;
                    }
                    v95 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v88);
                    goto LABEL_47001a;
                } else {
                    v68 = uu_join::State::skip_line(&v24, &v9, &v61, &v49 as u2240);
                    if v68 {
                        v90 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v9);
                        if let Ok(_) = v90 {
                            goto LABEL_470055;
                        }
                        v95 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v90);
                    }
                }
            } while (v28 && v40);
        }
        v68 = uu_join::State::finalize(&v24, &v9, &v61, &v49 as u2240);
        if v68 {
            v92 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v9);
            if let Err(_) = v92 {
                v95 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v92);
                goto LABEL_47001a;
            }
        }
        v68 = uu_join::State::finalize(&v36, &v9, &v61, &v49 as u2240);
        if v68 {
            v96 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v9);
            if let Err(_) = v96 {
                v95 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v96);
LABEL_47001a:
                v68 = v95;
                goto LABEL_470055;
            }
        } else {
            v97 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v9);
            if v97 {
                v78 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v97);
LABEL_46ffbe:
                v68 = v78;
LABEL_470055:
                v70 = v14;
            } else if v34 || v46 {
                v19 = uucore::execution_phrase();
                v21 = v83;
                eprintln!("{}: input is not in sorted order", &v19);
                uucore::mods::error::set_exit_code(1);
            }
        }
    }
    return v68;
}
