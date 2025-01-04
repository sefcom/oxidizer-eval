fn uu_du::du(a0: &struct24, a1: void*, a2: void*, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x42d]
    let v1: i8;  // [sp-0x42c]
    let v2: i8;  // [sp-0x42b]
    let v3: i8;  // [sp-0x42a]
    let v4: i8;  // [sp-0x429]
    let v5: i64;  // [sp-0x410]
    let v6: i64;  // [sp-0x3f8]
    let v7: i8;  // [sp-0x3f0]
    let v8: i64;  // [sp-0x3e8], Other Possible Types: struct24, struct32
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
    let v20: i192;  // [sp-0x348], Other Possible Types: struct24
    let v21: i64;  // [sp-0x330]
    let v22: i64;  // [sp-0x328]
    let v23: i64;  // [sp-0x320]
    let v24: i64;  // [sp-0x318]
    let v25: i128;  // [sp-0x310]
    let v26: i64;  // [sp-0x300]
    let v27: i64;  // [sp-0x2f8]
    let v28: i64;  // [sp-0x2f0]
    let v29: i192;  // [sp-0x2e8], Other Possible Types: struct24
    let v30: i64;  // [sp-0x2e0]
    let v31: i64;  // [sp-0x2d0]
    let v32: i1280;  // [sp-0x2c8], Other Possible Types: Result<struct160, struct16>, struct24
    let v33: i128;  // [sp-0x2c0]
    let v34: i8;  // [bp-0x2b0]
    let v35: i8;  // [bp-0x2a0]
    let v36: i8;  // [bp-0x290]
    let v37: i8;  // [bp-0x280]
    let v38: i8;  // [bp-0x270]
    let v39: i8;  // [bp-0x260]
    let v40: i8;  // [bp-0x258]
    let v41: i8;  // [bp-0x248]
    let v42: i128;  // [sp-0x228]
    let v43: i64;  // [sp-0x218]
    let v44: struct9;  // [sp-0x208], Other Possible Types: i72
    let v45: i8;  // [bp-0x1f8]
    let v46: i8;  // [bp-0x1e8]
    let v47: i8;  // [bp-0x1c0]
    let v48: i8;  // [bp-0x1b8]
    let v49: i8;  // [bp-0x1b0]
    let v50: i8;  // [bp-0x188]
    let v51: i128;  // [sp-0x178]
    let v52: i128;  // [sp-0x168]
    let v53: i128;  // [sp-0x158]
    let v54: i128;  // [sp-0x148]
    let v55: i128;  // [sp-0x138]
    let v56: i128;  // [sp-0x128]
    let v57: Option<struct40>;  // [sp-0x110], Other Possible Types: i320
    let v58: i8;  // [bp-0xe8]
    let v59: struct24;  // [sp-0xe0], Other Possible Types: i192
    let v60: i904;  // [sp-0xc8], Other Possible Types: Result<struct113, struct16>
    let v62: i64;  // rbx
    let v63: i8;  // al
    let v64: i64;  // rdi
    let v65: i256;  // ymm0
    let v66: i256;  // ymm1
    let v67: i256;  // ymm2
    let v68: i256;  // ymm3
    let v69: i256;  // ymm4
    let v70: i64;  // rax
    let v71: i64;  // rdi
    let v72: i128;  // xmm0
    let v73: i64;  // r9
    let v74: i64;  // rdx
    let v75: i128;  // xmm0
    let v76: i128;  // xmm0
    let v77: i128;  // xmm0
    let v78: i128;  // xmm0
    let v79: i128;  // xmm0
    let v80: i128;  // xmm0
    let v81: i64;  // r13
    let v82: i128;  // xmm0
    let v83: i128;  // xmm0
    let v84: i128;  // xmm0
    let v85: i128;  // xmm0
    let v86: i64;  // rax
    let v87: i128;  // xmm1
    let v88: i128;  // xmm1
    let v89: i128;  // xmm0
    let v90: i128;  // xmm0
    let v91: i128;  // xmm0
    let v92: i128;  // xmm0
    let v93: i64;  // rax
    let v94: i128;  // xmm0
    let v95: i128;  // xmm1
    let v96: i128;  // xmm2
    let v97: i128;  // xmm3
    let v98: i128;  // xmm0
    let v99: i64;  // rsi
    let v100: i128;  // xmm1
    let v101: i256;  // ymm1
    let v102: i128;  // xmm2
    let v103: i64;  // rdi
    let v104: i128;  // xmm1
    let v105: i128;  // xmm1
    let v106: i128;  // xmm1
    let v107: i128;  // xmm2
    let v108: i128;  // xmm3
    let v109: i128;  // xmm4
    let v110: i128;  // xmm1
    let v111: i128;  // xmm2
    let v112: i128;  // xmm0
    let v113: i128;  // xmm0

    if *((a1 + 128) as &i8) {
        v62 = a1 + 64;
        v44 = std::fs::read_dir(v62, a2);
        v63 = *((&v44 as &char + 8) as &i8);
        v64 = v44;
        if v7 == 2 {
            v10 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v6, v62);
            v11 = &g_5843f0;
            v9 = 0;
            v8 = 2;
            v32 = std::sync::mpmc::Sender<T>::send(a5, &v8);
            if UnaryOp GetMSBs == 65535 {
                memcpy(a0, a1, 144);
                return a0;
            }
            memcpy(&v10, &v32, 144);
            v9 = *((&v32 as &char + 8) as &i64);
            v8 = v32;
            *((a0 + 16) as &long long) = alloc::boxed::Box<T>::new(&v8);
            *((a0 + 8) as &i64) = 0;
            *(a0 as &i64) = 2;
            return a0;
        }
        v6 = v64;
        v7 = v63;
        v22 = *((a2 + 8) as &i64);
        v21 = *((a2 + 16) as &i64) * 56 + v22;
        v4 = *((a2 + 52) as &i8);
        v2 = *((a2 + 51) as &i8);
        v0 = *((a2 + 48) as &i8);
        v3 = *((a2 + 50) as &i8);
        v5 = a3 + 1;
        v1 = *((a2 + 49) as &i8);
        v21 = v21;
        loop {
            v57 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v6, v21);
            if !v57 {
                break;
            }
            v70 = *((&v57 as &char + 8) as &i64);
            v71 = *((&v57 as &char + 16) as &i64);
            if !v23 {
                v10 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
                v11 = v74;
                v9 = 0;
                v8 = 2;
                v32 = std::sync::mpmc::Sender<T>::send(a5, &v8);
                v77 = v32;
                v78 = BinaryOp CmpEQV;
                v65 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78;
                if UnaryOp GetMSBs != 65535 {
                    memcpy(&v10, &v32, 144);
                    v9 = *((&v32 as &char + 8) as &i64);
                    v8 = v32;
                    a0 = a0;
                    *((a0 + 16) as &long long) = alloc::boxed::Box<T>::new(&v8);
                    *((a0 + 8) as &i64) = 0;
                    *(a0 as &i64) = 2;
                    return a0;
                }
                continue;
            }
            v23 = v70;
            v24 = v71;
            v26 = v58;
            v72 = *((&v57 as &char + 24) as &i128);
            v25 = v72;
            v20 = std::fs::DirEntry::path(&v23);
            v60 = uu_du::Stat::new(*((&v20 as &char + 8) as &i64), *((&v20 as &char + 16) as &i64), &v23, a2, v73);
            v75 = v60;
            v76 = BinaryOp CmpEQV;
            v65 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76;
            if UnaryOp GetMSBs == 65535 {
                v10 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(*((&v60 as &char + 16) as &i64), &v23);
                v11 = &g_5843f0;
                v9 = 0;
                v8 = 2;
                v32 = std::sync::mpmc::Sender<T>::send(a5, &v8);
                v79 = v32;
                v80 = BinaryOp CmpEQV;
                v65 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80;
                v10 = v10;
                v9 = v9;
                v8 = v8;
                if UnaryOp GetMSBs == 65535 {
                    goto LABEL_4f22e6;
                }
                memcpy(&v10, &v32, 144);
                v8 = v32;
                v93 = alloc::boxed::Box<T>::new(&v8);
                goto LABEL_4f2921;
            } else {
                memcpy(&v44, &v60, 144);
                v27 = v22;
                v28 = v21;
                loop {
                    v81 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v27);
                    if !v81 {
                        break;
                    }
                    v8 = std::sys::os_str::bytes::Slice::to_string_lossy(v47, v48);
                    if glob::Pattern::matches(v81, v9, v10) as i8 {
                        goto LABEL_4f26f8;
                    } else {
                        v59 = std::fs::DirEntry::file_name(&v23);
                        v8 = std::sys::os_str::bytes::Buf::into_string(&v59);
                        v34 = v11;
                        v82 = *((&v8 as &char + 8) as &i128);
                        v65 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82;
                        v33 = v82;
                        v32 = v8;
                        v29 = core::result::Result<T,E>::unwrap(&v32);
                        if glob::Pattern::matches(v81, v30, *((&v29 as &char + 16) as &i64)) as i8 {
LABEL_4f26f8:
                            v10 = v10;
                            v11 = v11;
                            v9 = v9;
                            v8 = v8;
                            v30 = v30;
                            if v4 {
                                v84 = v47;
                                v65 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v84;
                                v32 = 1;
                                v33 = v84;
                                v34 = 1;
                                v31 = &v32;
                                println!("{:?} ignored", &v31);
                                v10 = v10;
                                v11 = v11;
                                v9 = v9;
                                v8 = v8;
                                v30 = v30;
                            }
                            goto LABEL_4f278d;
                        }
                    }
                }
                if !(!v44) || !(!v44) {
                    v83 = v45;
                    v65 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83;
                    v42 = v83;
                    v43 = v46;
                    if hashbrown::map::HashMap<K,V,S,A>::get_inner(a4, &v42) {
                        v10 = v10;
                        v11 = v11;
                        v9 = v9;
                        v8 = v8;
                        v30 = v30;
                        if !v2 {
                            goto LABEL_4f278d;
                        }
                        if !v0 {
                            *((a1 + 104) as &i64) = *((a1 + 104) as &i64) + 1;
                            v10 = v10;
                            v11 = v11;
                            v9 = v9;
                            v8 = v8;
                            v30 = v30;
LABEL_4f278d:
                            v30 = v30;
                            v8 = v8;
                            v9 = v9;
                            v11 = v11;
                            v10 = v10;
                            continue;
                        }
                    }
                    hashbrown::map::HashMap<K,V,S,A>::insert(a4, v42, *((&v42 as &char + 8) as &i64), v43);
                }
                if v50 && (!v3 || v44 != 1 || *(a1 as &i64) != 1 || !((v10 = v10, v11 = v11, v9 = v9, v8 = v8, v30 = v30, v46 != *((a1 + 32) as &i64)))) {
                    memcpy(&v8, &v44, 144);
                    v32 = uu_du::du(&v8, a2, v5, a4, a5);
                    v91 = v32;
                    v92 = BinaryOp CmpEQV;
                    v93 = *((&v32 as &char + 16) as &i64);
                    if UnaryOp GetMSBs == 65535 {
                        vvar_1189{reg 112} = a0;
                        *((a0 + 16) as &i64) = v93;
                        *((a0 + 8) as &i64) = 0;
                        *(a0 as &i64) = 2;
                        return a0;
                    }
                    v94 = v32;
                    v95 = v35;
                    v96 = v36;
                    v97 = v37;
                    v56 = v97;
                    v55 = v96;
                    v54 = v95;
                    v53 = v94;
                    v98 = v38;
                    v99 = v39;
                    v100 = v40;
                    v101 = v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v100;
                    v102 = v41;
                    v51 = v100;
                    v52 = v102;
                    if !v1 {
                        v103 = a1;
                        v104 = *((v103 + 88) as &i128);
                        v105 = BinaryOp AddV;
                        v101 = v101 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v105;
                        *((v103 + 88) as &i128) = v105;
                        *((v103 + 104) as &i64) = *((v103 + 104) as &i64) + v16;
                    }
                    v106 = v53;
                    v107 = v54;
                    v108 = v55;
                    v68 = v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v108;
                    v109 = v56;
                    v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v109;
                    v14 = v109;
                    v13 = v108;
                    v12 = v107;
                    v11 = v106;
                    v110 = v51;
                    v66 = v101 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v106 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v110;
                    v111 = v52;
                    v67 = v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v96 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v107 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v111;
                    v18 = v111;
                    v17 = v110;
                    v8 = v32;
                    v15 = v98;
                    v16 = v99;
                    v19 = v5;
                    v32 = std::sync::mpmc::Sender<T>::send(a5, &v8);
                    v112 = v32;
                    v113 = BinaryOp CmpEQV;
                    v65 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v91 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v92 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v94 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v113;
                    v10 = v10;
                    v9 = v9;
                    v8 = v8;
                    if UnaryOp GetMSBs != 65535 {
                        memcpy(&v10, &v32, 144);
                        v8 = v32;
                        v93 = alloc::boxed::Box<T>::new(&v8);
                        vvar_1179{reg 112} = a0;
                        *((a0 + 16) as &i64) = v93;
                        *((a0 + 8) as &i64) = 0;
                        *(a0 as &i64) = 2;
                        return a0;
                    }
                    goto LABEL_4f22e6;
                }
                v85 = v49;
                v65 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85;
                v86 = a1;
                *((v86 + 104) as &i64) = *((v86 + 104) as &i64) + 1;
                v87 = *((v86 + 88) as &i128);
                v88 = BinaryOp AddV;
                v66 = v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88;
                *((v86 + 88) as &i128) = v88;
                if !v0 {
                    v10 = v10;
                    v9 = v9;
                    v8 = v8;
LABEL_4f22e6:
                    v8 = v8;
                    v9 = v9;
                    v10 = v10;
                } else {
                    memcpy(&v8, &v44, 144);
                    v19 = v5;
                    v32 = std::sync::mpmc::Sender<T>::send(a5, &v8);
                    v89 = v32;
                    v90 = BinaryOp CmpEQV;
                    v65 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v90;
                    v10 = v10;
                    v9 = v9;
                    v8 = v8;
                    if UnaryOp GetMSBs == 65535 {
                        goto LABEL_4f22e6;
                    }
                    memcpy(&v10, &v32, 144);
                    v8 = v32;
                    v93 = alloc::boxed::Box<T>::new(&v8);
LABEL_4f2921:
                    a0 = a0;
                    *((a0 + 16) as &i64) = v93;
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
