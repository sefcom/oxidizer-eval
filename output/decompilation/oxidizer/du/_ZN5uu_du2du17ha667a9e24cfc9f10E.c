fn uu_du::du(a0: &struct24, a1: void*, a2: void*, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x42d]
    let v1: i8;  // [sp-0x42c]
    let v2: i8;  // [sp-0x42b]
    let v3: i8;  // [sp-0x42a]
    let v4: i8;  // [sp-0x429]
    let v5: i64;  // [sp-0x410]
    let v6: i64;  // [sp-0x3f8]
    let v7: i8;  // [sp-0x3f0]
    let v8: i128;  // [sp-0x3e8], Other Possible Types: struct24, struct16, struct32
    let v9: i64;  // [sp-0x3e0]
    let v10: i64;  // [sp-0x3d8]
    let v11: i64;  // [sp-0x3d0]
    let v12: i128;  // [sp-0x3c0]
    let v13: i128;  // [sp-0x3b0]
    let v14: i128;  // [sp-0x3a0]
    let v15: i128;  // [sp-0x390]
    let v16: i64;  // [sp-0x380]
    let v17: i128;  // [sp-0x378]
    let v18: i128;  // [sp-0x368]
    let v19: i64;  // [sp-0x358]
    let v20: struct24;  // [sp-0x348], Other Possible Types: i192
    let v21: i64;  // [sp-0x330]
    let v22: i64;  // [sp-0x328]
    let v23: struct40;  // [sp-0x320], Other Possible Types: i64
    let v24: i64;  // [sp-0x318]
    let v25: i64;  // [sp-0x2f8]
    let v26: i64;  // [sp-0x2f0]
    let v27: i192;  // [sp-0x2e8], Other Possible Types: struct24
    let v28: i64;  // [sp-0x2e0]
    let v29: i64;  // [sp-0x2d0]
    let v30: i1280;  // [sp-0x2c8], Other Possible Types: Result<struct160, struct8>, struct24, struct32
    let v31: i128;  // [sp-0x2c0]
    let v32: i8;  // [bp-0x2b0]
    let v33: i8;  // [bp-0x2a0]
    let v34: i8;  // [bp-0x290]
    let v35: i8;  // [bp-0x280]
    let v36: i8;  // [bp-0x270]
    let v37: i8;  // [bp-0x260]
    let v38: i8;  // [bp-0x258]
    let v39: i8;  // [bp-0x248]
    let v40: i128;  // [sp-0x228]
    let v41: i64;  // [sp-0x218]
    let v42: struct9;  // [sp-0x208], Other Possible Types: i72
    let v43: i8;  // [bp-0x1f8]
    let v44: i8;  // [bp-0x1e8]
    let v45: i8;  // [bp-0x1c0]
    let v46: i8;  // [bp-0x1b8]
    let v47: i8;  // [bp-0x1b0]
    let v48: i8;  // [bp-0x188]
    let v49: i128;  // [sp-0x178]
    let v50: i128;  // [sp-0x168]
    let v51: i128;  // [sp-0x158]
    let v52: i128;  // [sp-0x148]
    let v53: i128;  // [sp-0x138]
    let v54: i128;  // [sp-0x128]
    let v55: i384;  // [sp-0x110], Other Possible Types: Option<struct40>
    let v56: struct24;  // [sp-0xe0], Other Possible Types: i192
    let v57: i976;  // [sp-0xc8], Other Possible Types: Result<struct113, struct16>
    let v59: i64;  // 4096
    let v60: i64;  // rbx
    let v64: i256;  // ymm0
    let v65: i256;  // ymm0
    let v69: i64;  // rdx
    let v70: i128;  // xmm0
    let v71: i128;  // xmm0
    let v72: i256;  // ymm0
    let v73: i128;  // xmm0
    let v74: i128;  // xmm0
    let v76: i64;  // r13
    let v78: i128;  // xmm0
    let v79: i64;  // rax
    let v82: i128;  // xmm0
    let v83: i64;  // rsi
    let v84: i64;  // rdi
    let v92: i64;  // r12

    if *((a1 + 128) as &i8) {
        v60 = a1 + 64;
        v42 = std::fs::read_dir(v60);
        if v7 != 2 {
            v6 = v42;
            v7 = *((&v42 as &char + 8) as &i8);
            v22 = *((a2 + 8) as &i64);
            v21 = *((a2 + 16) as &i64) * 56 + v22;
            v4 = *((a2 + 52) as &i8);
            v2 = *((a2 + 51) as &i8);
            v0 = *((a2 + 48) as &i8);
            v3 = *((a2 + 50) as &i8);
            v5 = a3 + 1;
            v1 = *((a2 + 49) as &i8);
            loop {
                v64 = v65;
                v28 = v28;
                v30 = v30;
                v8 = v8;
                v9 = v9;
                v11 = v11;
                v10 = v10;
                v55 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v6);
                if !v55 {
                    break;
                } else if !v23 {
                    v10 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
                    v11 = v69;
                    v9 = 0;
                    v8 = 2;
                    v30 = std::sync::mpmc::Sender<T>::send(a5, &v8);
                    v73 = v30;
                    v74 = BinaryOp CmpEQV;
                    v10 = v10;
                    v11 = v11;
                    v9 = v9;
                    v8 = v8;
                    v65 = (v64 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74;
                    if UnaryOp GetMSBs != 65535 {
                        memcpy(&v10, &v30, 144);
                        v9 = *((&v30 as &char + 8) as &i64);
                        v8 = v30;
                        *((a0 + 16) as &long long) = alloc::boxed::Box<T>::new(&v8);
                        *((a0 + 8) as &i64) = 0;
                        *(a0 as &i64) = 2;
                        return v92;
                    }
                } else {
                    v23 = struct40 {
                        field_0: v66
                        field_8: v67
                        field_16: v68
                        field_32: *((&v55 as &char + 40) as &i64)
                    };
                    v20 = std::fs::DirEntry::path(&v23);
                    v57 = uu_du::Stat::new(*((&v20 as &char + 8) as &i64), *((&v20 as &char + 16) as &i64), &v23, a2);
                    v70 = v57;
                    v71 = BinaryOp CmpEQV;
                    v72 = ((v64 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v55 as &char + 24) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71;
                    if UnaryOp GetMSBs == 65535 {
                        v10 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(*((&v57 as &char + 16) as &i64), &v23);
                        v11 = &g_5843f0;
                        v8 = struct16 {
                            field_0: 2
                            field_8: 0
                        };
                        v30 = std::sync::mpmc::Sender<T>::send(a5, &v8);
                        if UnaryOp GetMSBs != 65535 {
                            memcpy(&v10, &v30, 144);
                            v8 = v30;
                            alloc::boxed::Box<T>::new(&v8);
                            return v92;
                        }
                    } else {
                        memcpy(&v42, &v57, 144);
                        v25 = v22;
                        v26 = v21;
                        loop {
                            v76 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v25);
                            if !v76 {
                                break;
                            }
                            v8 = std::sys::os_str::bytes::Slice::to_string_lossy(v45, v46);
                            if !glob::Pattern::matches(v76, v9, v10) as i8 {
                                v56 = std::fs::DirEntry::file_name(&v23);
                                v8 = std::sys::os_str::bytes::Buf::into_string(&v56);
                                v72 = v72 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v8 as &char + 8) as &i128);
                                *(&v30.field_0 as &struct32) = struct32 {
                                    field_0: v8
                                    field_8: v77
                                    field_24: v11
                                };
                                v27 = core::result::Result<T,E>::unwrap(&v30);
                                if !(!glob::Pattern::matches(v76, v28, *((&v27 as &char + 16) as &i64)) as i8) {
                                    goto LABEL_4f26ee;
                                }
                            } else {
LABEL_4f26ee:
                                if v4 {
                                    v30 = 1;
                                    v31 = v45;
                                    v32 = 1;
                                    v29 = &v30;
                                    println!("{} ignored", &v29);
                                }
                                goto LABEL_4f27b4;
                            }
                        }
                        if !v42 && !v42 {
LABEL_4f2501:
                            if !v48 {
                                v78 = v47;
                                v79 = a1;
                                *((v79 + 104) as &i64) = *((v79 + 104) as &i64) + 1;
                                *((v79 + 88) as &i128) = BinaryOp AddV;
                                if !v0 {
                                    goto LABEL_4f2300;
                                } else {
                                    memcpy(&v8, &v42, 144);
                                    v19 = v5;
                                    v30 = std::sync::mpmc::Sender<T>::send(a5, &v8);
                                    if UnaryOp GetMSBs != 65535 {
                                        memcpy(&v8, &v30, 144);
                                        v8 = v30;
                                        alloc::boxed::Box<T>::new(&v8);
                                        return v92;
                                    }
                                    goto LABEL_4f2300;
                                }
                            } else if !v3 || v42 != 1 || *(a1 as &i64) != 1 || v44 == *((a1 + 32) as &i64) {
                                memcpy(&v8, &v42, 144);
                                v30 = uu_du::du(&v8, a2, v5, a4, a5);
                                if UnaryOp GetMSBs == 65535 {
                                    return v92;
                                }
                                v54 = v35;
                                v53 = v34;
                                v52 = v33;
                                v51 = v30;
                                v82 = v36;
                                v83 = v37;
                                v49 = v38;
                                v50 = v39;
                                if !v1 {
                                    v84 = a1;
                                    *((v84 + 88) as &i128) = BinaryOp AddV;
                                    *((v84 + 104) as &i64) = *((v84 + 104) as &i64) + v16;
                                }
                                v14 = v54;
                                v13 = v53;
                                v12 = v52;
                                v11 = v51;
                                v18 = v50;
                                v17 = v49;
                                v8 = v30;
                                v15 = v82;
                                v16 = v83;
                                v19 = v5;
                                v30 = std::sync::mpmc::Sender<T>::send(a5, &v8);
                                if UnaryOp GetMSBs != 65535 {
                                    memcpy(&v8, &v30, 144);
                                    v8 = v30;
                                    alloc::boxed::Box<T>::new(&v8);
                                    return v92;
                                }
                                goto LABEL_4f2300;
                                goto LABEL_4f2300;
                            }
LABEL_4f27b4:
                            v10 = v10;
                            v11 = v11;
                            v9 = v9;
                            v8 = v8;
                            v30 = v30;
                            v28 = v28;
                        } else {
                            v40 = v43;
                            v41 = v44;
                            if hashbrown::map::HashMap<K,V,S,A>::get_inner(a4, &v40) {
                                if !v2 {
                                    goto LABEL_4f27b4;
                                }
                                if !v0 {
                                    *((a1 + 104) as &i64) = *((a1 + 104) as &i64) + 1;
                                    goto LABEL_4f27b4;
                                }
                            }
                            hashbrown::map::HashMap<K,V,S,A>::insert(a4, v40, *((&v40 as &char + 8) as &i64), v41);
                            goto LABEL_4f2501;
                        }
                        continue;
                    }
LABEL_4f2300:
                    v10 = v10;
                    v11 = v11;
                    v9 = v9;
                    v8 = v8;
                    v30 = v30;
                }
            }
        } else {
            v10 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v6, v60);
            v11 = &g_5843f0;
            v9 = 0;
            v8 = 2;
            v30 = std::sync::mpmc::Sender<T>::send(a5, &v8);
            if UnaryOp GetMSBs != 65535 {
                memcpy(&v10, &v30, 144);
                v9 = *((&v30 as &char + 8) as &i64);
                v8 = v30;
                *((a0 + 16) as &long long) = alloc::boxed::Box<T>::new(&v8);
                *((a0 + 8) as &i64) = 0;
                *(a0 as &i64) = 2;
                return v92;
            }
        }
    }
    v92 = v59;
    memcpy(v92, a1, 144);
    return v92;
}
