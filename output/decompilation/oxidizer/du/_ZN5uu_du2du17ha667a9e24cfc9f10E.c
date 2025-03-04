fn uu_du::du(a0: &struct24, a1: void*, a2: void*, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x42d]
    let v1: i8;  // [sp-0x42c]
    let v2: i8;  // [sp-0x42b]
    let v3: i8;  // [sp-0x42a]
    let v4: i8;  // [sp-0x429]
    let v5: i64;  // [sp-0x420]
    let v6: i64;  // [sp-0x410]
    let v7: i64;  // [sp-0x3f8]
    let v8: i8;  // [sp-0x3f0]
    let v9: i64;  // [sp-0x3e8], Other Possible Types: struct24, int
    let v10: struct32;  // [sp-0x3e8], Other Possible Types: unsigned long, int
    let v11: i64;  // [sp-0x3e0]
    let v12: i64;  // [sp-0x3d8]
    let v13: i64;  // [bp-0x3d0], Other Possible Types: int
    let v14: iNone;  // [sp-0x3c0]
    let v15: iNone;  // [sp-0x3b0]
    let v16: iNone;  // [sp-0x3a0]
    let v17: iNone;  // [sp-0x390]
    let v18: i64;  // [sp-0x380]
    let v19: iNone;  // [sp-0x378]
    let v20: iNone;  // [sp-0x368]
    let v21: i64;  // [sp-0x358]
    let v22: struct24;  // [sp-0x348]
    let v23: i64;  // [sp-0x330]
    let v24: i64;  // [sp-0x328]
    let v25: i64;  // [sp-0x320], Other Possible Types: struct40
    let v26: i64;  // [sp-0x318]
    let v27: i64;  // [sp-0x2f8]
    let v28: i64;  // [sp-0x2f0]
    let v29: struct24;  // [sp-0x2e8]
    let v30: i64;  // [sp-0x2e0]
    let v31: i64;  // [sp-0x2d0]
    let v32: i64;  // [sp-0x2c8], Other Possible Types: Result<struct160, struct8>, struct32, struct24
    let v33: iNone;  // [sp-0x2c0]
    let v34: i8;  // [bp-0x2b0]
    let v35: i8;  // [bp-0x2a0]
    let v36: i8;  // [bp-0x290]
    let v37: i8;  // [bp-0x280]
    let v38: i8;  // [bp-0x270]
    let v39: i8;  // [bp-0x260]
    let v40: i8;  // [bp-0x258]
    let v41: i8;  // [bp-0x248]
    let v42: iNone;  // [sp-0x228]
    let v43: i64;  // [sp-0x218]
    let v44: struct9;  // [sp-0x208]
    let v45: i8;  // [bp-0x1f8]
    let v46: i8;  // [bp-0x1e8]
    let v47: i8;  // [bp-0x1c0]
    let v48: i8;  // [bp-0x1b8]
    let v49: i8;  // [bp-0x1b0]
    let v50: i8;  // [bp-0x188]
    let v51: iNone;  // [sp-0x178]
    let v52: iNone;  // [sp-0x168]
    let v53: iNone;  // [sp-0x158]
    let v54: iNone;  // [sp-0x148]
    let v55: iNone;  // [sp-0x138]
    let v56: iNone;  // [sp-0x128]
    let v57: Option<struct40>;  // [sp-0x110]
    let v58: struct24;  // [sp-0xe0]
    let v59: Result<struct113, struct16>;  // [sp-0xc8]
    let v61: i64;  // r12
    let v62: i64;  // 4096
    let v63: i64;  // rbx
    let v67: iNone;  // ymm0
    let v68: iNone;  // ymm0
    let v72: i64;  // rdx
    let v73: iNone;  // xmm0
    let v74: iNone;  // xmm0
    let v75: iNone;  // ymm0
    let v76: iNone;  // xmm0
    let v77: iNone;  // xmm0
    let v79: i64;  // r13
    let v81: iNone;  // xmm0
    let v82: i64;  // rax
    let v84: i64;  // r12
    let v87: iNone;  // xmm0
    let v88: i64;  // rsi
    let v89: i64;  // rdi

    v61 = a0;
    v62 = a1;
    if *((a1 + 128) as &i8) {
        v63 = a1 + 64;
        v44 = std::fs::read_dir(v63);
        if v8 != 2 {
            v5 = a0;
            v7 = v44.field_0;
            v8 = v44.field_8;
            v24 = *((a2 + 8) as &i64);
            v23 = *((a2 + 16) as &i64) * 56 + v24;
            v4 = *((a2 + 52) as &i8);
            v2 = *((a2 + 51) as &i8);
            v0 = *((a2 + 48) as &i8);
            v3 = *((a2 + 50) as &i8);
            v6 = a3 + 1;
            v1 = *((a2 + 49) as &i8);
            loop {
                v67 = v68;
                v9 = v10;
                v11 = v11;
                v13 = v13;
                v12 = v12;
                v57 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v7);
                if !v57 as i64 {
                    v61 = v5;
                    break;
                } else if !v25 {
                    v12 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
                    v13 = v72;
                    v11 = 0;
                    v9 = 2;
                    v32 = std::sync::mpmc::Sender<T>::send(a5, &v9);
                    v76 = v32 as i128;
                    v77 = BinaryOp CmpEQV;
                    v12 = v12;
                    v13 = v13;
                    v11 = v11;
                    v10 = v9;
                    v68 = (v67 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77 as u256;
                    if UnaryOp GetMSBs != 65535 {
                        memcpy(&v12, &v32, 144);
                        v11 = *((&v32 as &char + 8) as &i64);
                        v9 = v32;
                        v61 = v5;
                        *((v61 + 16) as &long long) = alloc::boxed::Box<T>::new(&v9);
                        *((v61 + 8) as &i64) = 0;
                        *(v61 as &i64) = 2;
                        return v61;
                    }
                } else {
                    v25 = struct40 {
                        field_0: v69
                        field_8: v70
                        field_16: v66 as u128
                        field_32: *((&v57 as &char + 40) as &i64)
                    };
                    v22 = std::fs::DirEntry::path(&v25);
                    v59 = uu_du::Stat::new(*((&v22.field_0 as &char + 8) as &i64), v22.field_16, &v25, a2);
                    v73 = v59 as i128;
                    v74 = BinaryOp CmpEQV;
                    v75 = ((v67 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v57 as &char + 24) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 as u256;
                    if UnaryOp GetMSBs == 65535 {
                        v12 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(*((&v59 as &char + 16) as &i64), &v25);
                        v13 = &g_5843f0;
                        v11 = 0;
                        v9 = 2;
                        v32 = std::sync::mpmc::Sender<T>::send(a5, &v9);
                        if UnaryOp GetMSBs != 65535 {
                            memcpy(&v12, &v32, 144);
                            v11 = *((&v32 as &char + 8) as &i64);
                            v9 = v32;
                            alloc::boxed::Box<T>::new(&v9);
                            return v61;
                        }
                    } else {
                        memcpy(&v44, &v59, 144);
                        v27 = v24;
                        v28 = v23;
                        loop {
                            v79 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v27);
                            if !v79 {
                                break;
                            }
                            v9 = std::sys::os_str::bytes::Slice::to_string_lossy(*(&v47 as &i64), *(&v48 as &i64));
                            if glob::Pattern::matches(v79, v11, v12) as i8 {
                                goto LABEL_4f26f8;
                            }
                            v58 = std::fs::DirEntry::file_name(&v25);
                            v10 = std::sys::os_str::bytes::Buf::into_string(&v58);
                            v75 = v75 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v10.field_8 as &i128);
                            *(&v32.field_0 as &struct32) = struct32 {
                                field_0: v9
                                field_8: v80
                                field_24: v13
                            };
                            v29 = core::result::Result<T,E>::unwrap(&v32);
                            if glob::Pattern::matches(v79, v30, v29.field_16) as i8 {
LABEL_4f26f8:
                                if v4 {
                                    v32 = 1;
                                    v33 = *(&v47 as &i128);
                                    *(&v34 as &i8) = 1;
                                    v31 = &v32;
                                    println!("{} ignored", &v31);
                                }
                                goto LABEL_4f27b4;
                            }
                        }
                        if !v44.field_0 && !v44.field_0 {
LABEL_4f2501:
                            if !v50 {
                                v81 = *(&v49 as &i128);
                                v82 = a1;
                                *((v82 + 104) as &i64) = *((v82 + 104) as &i64) + 1;
                                *((v82 + 88) as void*) = BinaryOp AddV;
                                if !v0 {
                                    goto LABEL_4f2300;
                                } else {
                                    memcpy(&v10, &v44, 144);
                                    v21 = v6;
                                    v32 = std::sync::mpmc::Sender<T>::send(a5, &v10);
                                    if UnaryOp GetMSBs != 65535 {
                                        memcpy(&v10, &v32, 144);
                                        v9 = v32 as i128;
                                        alloc::boxed::Box<T>::new(&v9);
                                        v61 = v84;
                                        return v61;
                                    }
                                    goto LABEL_4f2300;
                                }
                            } else if !v3 || v44.field_0 != 1 || *(a1 as &i64) != 1 || *(&v46 as &i64) == *((a1 + 32) as &i64) {
                                memcpy(&v10, &v44, 144);
                                v32 = uu_du::du(&v10, a2, v6, a4, a5);
                                if UnaryOp GetMSBs == 65535 {
                                    return v61;
                                }
                                v56 = *(&v37 as &i128);
                                v55 = *(&v36 as &i128);
                                v54 = *(&v35 as &i128);
                                v53 = v32 as i128;
                                v87 = *(&v38 as &i128);
                                v88 = *(&v39 as &i64);
                                v51 = *(&v40 as &i128);
                                v52 = *(&v41 as &i128);
                                if !v1 {
                                    v89 = a1;
                                    *((v89 + 88) as void*) = BinaryOp AddV;
                                    *((v89 + 104) as &unsigned long) = *((v89 + 104) as &i64) + v18;
                                }
                                v16 = v56;
                                v15 = v55;
                                v14 = v54;
                                v13 = v53;
                                v20 = v52;
                                v19 = v51;
                                v9 = v32;
                                v17 = v87;
                                v18 = v88;
                                v21 = v6;
                                v32 = std::sync::mpmc::Sender<T>::send(a5, &v9);
                                if UnaryOp GetMSBs != 65535 {
                                    memcpy(&v9, &v32, 144);
                                    v9 = v32 as i128;
                                    alloc::boxed::Box<T>::new(&v9);
                                    return v61;
                                }
                                goto LABEL_4f2300;
                                goto LABEL_4f2300;
                            }
LABEL_4f27b4:
                            v12 = v12;
                            v13 = v13;
                            v11 = v11;
                            v10 = v9;
                            v32 = v32;
                            v30 = v30;
                        } else {
                            v42 = *(&v45 as &i128);
                            v43 = *(&v46 as &i64);
                            if hashbrown::map::HashMap<K,V,S,A>::get_inner(a4, &v42) {
                                if !v2 {
                                    goto LABEL_4f27b4;
                                }
                                if !v0 {
                                    *((a1 + 104) as &i64) = *((a1 + 104) as &i64) + 1;
                                    goto LABEL_4f27b4;
                                }
                            }
                            hashbrown::map::HashMap<K,V,S,A>::insert(a4, v42 as i64, (&v42)[8] as i64, v43);
                            goto LABEL_4f2501;
                        }
                        continue;
                    }
LABEL_4f2300:
                    v12 = v12;
                    v13 = v13;
                    v11 = v11;
                    v10 = v9;
                    v32 = v32;
                }
            }
        } else {
            v12 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v7, v63);
            v13 = &g_5843f0;
            v11 = 0;
            v9 = 2;
            v32 = std::sync::mpmc::Sender<T>::send(a5, &v9);
            if UnaryOp GetMSBs != 65535 {
                memcpy(&v12, &v32, 144);
                v11 = *((&v32 as &char + 8) as &i64);
                v9 = v32;
                *((a0 + 16) as &long long) = alloc::boxed::Box<T>::new(&v9);
                *((a0 + 8) as &i64) = 0;
                *(a0 as &i64) = 2;
                return v61;
            }
        }
    }
    memcpy(v61, v62, 144);
    return v61;
}
