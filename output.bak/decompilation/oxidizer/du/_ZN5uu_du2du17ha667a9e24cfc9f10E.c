fn uu_du::du(a0: &struct24, a1: void*, a2: void*, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x42d]
    let v1: i8;  // [sp-0x42c]
    let v2: i8;  // [sp-0x42b]
    let v3: i8;  // [sp-0x42a]
    let v4: i8;  // [sp-0x429]
    let v5: i64;  // [sp-0x410]
    let v6: i64;  // [sp-0x3f8]
    let v7: i8;  // [sp-0x3f0]
    let v8: i64;  // [sp-0x3e8], Other Possible Types: struct16, struct24, struct32
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
    let v23: i64;  // [sp-0x320], Other Possible Types: struct40
    let v24: i64;  // [sp-0x318]
    let v25: i64;  // [sp-0x2f8]
    let v26: i64;  // [sp-0x2f0]
    let v27: i192;  // [sp-0x2e8], Other Possible Types: struct24
    let v28: i64;  // [sp-0x2e0]
    let v29: i64;  // [sp-0x2d0]
    let v30: i64;  // [sp-0x2c8], Other Possible Types: Result<struct160, struct8>, struct32, struct24
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
    let v55: i328;  // [sp-0x110], Other Possible Types: Option<struct40>
    let v56: struct24;  // [sp-0xe0], Other Possible Types: i192
    let v57: Result<struct113, struct16>;  // [sp-0xc8], Other Possible Types: i912
    let v59: i64;  // rbx
    let v60: i8;  // al
    let v61: i64;  // rdi
    let v63: i256;  // ymm0
    let v64: i256;  // ymm1
    let v65: i256;  // ymm2
    let v66: i256;  // ymm3
    let v67: i256;  // ymm4
    let v71: i64;  // rdx
    let v72: i128;  // xmm0
    let v73: i128;  // xmm0
    let v74: i128;  // xmm0
    let v75: i128;  // xmm0
    let v76: i128;  // xmm0
    let v77: i128;  // xmm0
    let v78: i64;  // r13
    let v79: i128;  // xmm0
    let v80: i128;  // xmm0
    let v81: i128;  // xmm0
    let v82: i64;  // rax
    let v83: i128;  // xmm1
    let v84: i128;  // xmm1
    let v85: i128;  // xmm0
    let v86: i128;  // xmm0
    let v87: i128;  // xmm0
    let v88: i128;  // xmm0
    let v89: i64;  // rax
    let v91: i128;  // xmm0
    let v92: i128;  // xmm1
    let v93: i128;  // xmm2
    let v94: i128;  // xmm3
    let v95: i128;  // xmm0
    let v96: i64;  // rsi
    let v97: i128;  // xmm1
    let v98: i256;  // ymm1
    let v99: i128;  // xmm2
    let v100: i64;  // rdi
    let v101: i128;  // xmm1
    let v102: i128;  // xmm1
    let v103: i128;  // xmm1
    let v104: i128;  // xmm2
    let v105: i128;  // xmm3
    let v106: i128;  // xmm4
    let v107: i128;  // xmm1
    let v108: i128;  // xmm2
    let v109: i128;  // xmm0
    let v110: i128;  // xmm0

    if *((a1 + 128) as &i8) {
        v59 = a1 + 64;
        v42 = std::fs::read_dir(v59);
        v60 = *((&v42 as &char + 8) as &i8);
        v61 = v42;
        if v7 == 2 {
            v10 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v6, v59);
            v11 = &g_5843f0;
            v9 = 0;
            v8 = 2;
            v30 = std::sync::mpmc::Sender<T>::send(a5, &v8);
            if UnaryOp GetMSBs == 65535 {
                memcpy(a0, a1, 144);
                return a0;
            }
            memcpy(&v10, &v30, 144);
            v9 = *((&v30 as &char + 8) as &i64);
            v8 = v30;
            *((a0 + 16) as &long long) = alloc::boxed::Box<T>::new(&v8);
            *((a0 + 8) as &i64) = 0;
            *(a0 as &i64) = 2;
            return a0;
        }
        v6 = v61;
        v7 = v60;
        v22 = *((a2 + 8) as &i64);
        v21 = *((a2 + 16) as &i64) * 56 + v22;
        v4 = *((a2 + 52) as &i8);
        v2 = *((a2 + 51) as &i8);
        v0 = *((a2 + 48) as &i8);
        v3 = *((a2 + 50) as &i8);
        v5 = a3 + 1;
        v1 = *((a2 + 49) as &i8);
        loop {
            v55 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v6);
            if !v55 {
                break;
            }
            if !v23 {
                v10 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
                v11 = v71;
                v9 = 0;
                v8 = 2;
                v30 = std::sync::mpmc::Sender<T>::send(a5, &v8);
                v74 = v30;
                v75 = BinaryOp CmpEQV;
                v63 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75;
                if UnaryOp GetMSBs != 65535 {
                    memcpy(&v10, &v30, 144);
                    v9 = *((&v30 as &char + 8) as &i64);
                    v8 = v30;
                    a0 = a0;
                    *((a0 + 16) as &long long) = alloc::boxed::Box<T>::new(&v8);
                    *((a0 + 8) as &i64) = 0;
                    *(a0 as &i64) = 2;
                    return a0;
                }
                continue;
            }
            v23 = struct40 {
                field_0: v68
                field_8: v69
                field_16: v62 as u128
                field_32: v55
            };
            v20 = std::fs::DirEntry::path(&v23);
            v57 = uu_du::Stat::new(*((&v20 as &char + 8) as &i64), *((&v20 as &char + 16) as &i64), &v23, a2);
            v72 = v57;
            v73 = BinaryOp CmpEQV;
            v63 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v55 as &char + 24) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73;
            if UnaryOp GetMSBs == 65535 {
                v10 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(*((&v57 as &char + 16) as &i64), &v23);
                v11 = &g_5843f0;
                v9 = 0;
                v8 = 2;
                v30 = std::sync::mpmc::Sender<T>::send(a5, &v8);
                v76 = v30;
                v77 = BinaryOp CmpEQV;
                v63 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77;
                if UnaryOp GetMSBs == 65535 {
                    goto LABEL_4f22e6;
                }
                memcpy(&v10, &v30, 144);
                v8 = struct16 {
                    field_0: v30
                    field_8: v113
                };
                v89 = alloc::boxed::Box<T>::new(&v8);
                goto LABEL_4f2921;
            } else {
                memcpy(&v42, &v57, 144);
                v25 = v22;
                v26 = v21;
                v30 = v30;
                loop {
                    v30 = v30;
                    v78 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v25);
                    if !v78 {
                        break;
                    }
                    v8 = std::sys::os_str::bytes::Slice::to_string_lossy(v45, v46);
                    if glob::Pattern::matches(v78, v9, v10) as i8 {
                        v30 = v30;
                        goto LABEL_4f26f8;
                    } else {
                        v56 = std::fs::DirEntry::file_name(&v23);
                        v8 = std::sys::os_str::bytes::Buf::into_string(&v56);
                        v63 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v8 as &char + 8) as &i128);
                        *(&v30.field_0 as &struct32) = struct32 {
                            field_0: v8
                            field_8: v62 as u128
                            field_24: v11
                        };
                        v27 = core::result::Result<T,E>::unwrap(&v30);
                        if !glob::Pattern::matches(v78, v28, *((&v27 as &char + 16) as &i64)) as i8 {
                            v30 = v30;
                        } else {
                            v30 = v30;
LABEL_4f26f8:
                            v30 = v30;
                            v10 = v10;
                            v9 = v9;
                            v28 = v28;
                            if v4 {
                                v80 = v45;
                                v63 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80;
                                v30 = 1;
                                v31 = v80;
                                v32 = 1;
                                v29 = &v30;
                                println!("{:?} ignored", &v29);
                                v10 = v10;
                                v9 = v9;
                                v28 = v28;
                            }
                            goto LABEL_4f278d;
                        }
                    }
                }
                if !(!v42) || !(!v42) {
                    v79 = v43;
                    v63 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79;
                    v40 = v79;
                    v41 = v44;
                    if hashbrown::map::HashMap<K,V,S,A>::get_inner(a4, &v40) {
                        v10 = v10;
                        v9 = v9;
                        v28 = v28;
                        if !v2 {
                            goto LABEL_4f278d;
                        }
                        if !v0 {
                            *((a1 + 104) as &i64) = *((a1 + 104) as &i64) + 1;
                            v10 = v10;
                            v9 = v9;
                            v28 = v28;
LABEL_4f278d:
                            v28 = v28;
                            v9 = v9;
                            v10 = v10;
                            continue;
                        }
                    }
                    hashbrown::map::HashMap<K,V,S,A>::insert(a4, v40, *((&v40 as &char + 8) as &i64), v41);
                }
                if v48 && (!v3 || v42 != 1 || *(a1 as &i64) != 1 || !((v10 = v10, v9 = v9, v28 = v28, v44 != *((a1 + 32) as &i64)))) {
                    memcpy(&v8, &v42, 144);
                    v30 = uu_du::du(&v8, a2, v5, a4, a5);
                    v87 = v30;
                    v88 = BinaryOp CmpEQV;
                    v89 = *((&v30 as &char + 16) as &i64);
                    if UnaryOp GetMSBs == 65535 {
                        vvar_1167{reg 112} = a0;
                        *((a0 + 16) as &i64) = v89;
                        *((a0 + 8) as &i64) = 0;
                        *(a0 as &i64) = 2;
                        return a0;
                    }
                    v91 = v30;
                    v92 = v33;
                    v93 = v34;
                    v94 = v35;
                    v54 = v94;
                    v53 = v93;
                    v52 = v92;
                    v51 = v91;
                    v95 = v36;
                    v96 = v37;
                    v97 = v38;
                    v98 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v92 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v97;
                    v99 = v39;
                    v49 = v97;
                    v50 = v99;
                    if !v1 {
                        v100 = a1;
                        v101 = *((v100 + 88) as &i128);
                        v102 = BinaryOp AddV;
                        v98 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v101 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v102;
                        *((v100 + 88) as &i128) = v102;
                        *((v100 + 104) as &i64) = *((v100 + 104) as &i64) + v16;
                    }
                    v103 = v51;
                    v104 = v52;
                    v105 = v53;
                    v66 = v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v94 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v105;
                    v106 = v54;
                    v67 = v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v106;
                    v14 = v106;
                    v13 = v105;
                    v12 = v104;
                    v11 = v103;
                    v107 = v49;
                    v64 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v107;
                    v108 = v50;
                    v65 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v93 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v99 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v108;
                    v18 = v108;
                    v17 = v107;
                    v8 = v30;
                    v15 = v95;
                    v16 = v96;
                    v19 = v5;
                    v30 = std::sync::mpmc::Sender<T>::send(a5, &v8);
                    v109 = v30;
                    v110 = BinaryOp CmpEQV;
                    v63 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v91 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v109 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v110;
                    if UnaryOp GetMSBs != 65535 {
                        memcpy(&v8, &v30, 144);
                        v8 = struct16 {
                            field_0: v30
                            field_8: v114
                        };
                        v89 = alloc::boxed::Box<T>::new(&v8);
                        vvar_1157{reg 112} = a0;
                        *((a0 + 16) as &i64) = v89;
                        *((a0 + 8) as &i64) = 0;
                        *(a0 as &i64) = 2;
                        return a0;
                    }
                    goto LABEL_4f22e6;
                }
                v81 = v47;
                v63 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81;
                v82 = a1;
                *((v82 + 104) as &i64) = *((v82 + 104) as &i64) + 1;
                v83 = *((v82 + 88) as &i128);
                v84 = BinaryOp AddV;
                v64 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v84;
                *((v82 + 88) as &i128) = v84;
                if !v0 {
LABEL_4f22e6:
                } else {
                    memcpy(&v8, &v42, 144);
                    v19 = v5;
                    v30 = std::sync::mpmc::Sender<T>::send(a5, &v8);
                    v85 = v30;
                    v86 = BinaryOp CmpEQV;
                    v63 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86;
                    if UnaryOp GetMSBs == 65535 {
                        goto LABEL_4f22e6;
                    }
                    memcpy(&v9, &v30, 144);
                    v8 = struct16 {
                        field_0: v30
                        field_8: v115
                    };
                    v89 = alloc::boxed::Box<T>::new(&v8);
LABEL_4f2921:
                    a0 = a0;
                    *((a0 + 16) as &i64) = v89;
                    *((a0 + 8) as &i64) = 0;
                    *(a0 as &i64) = 2;
                    return a0;
                }
            }
        }
    }
    memcpy(a0, a1, 144);
    return a0;
}
