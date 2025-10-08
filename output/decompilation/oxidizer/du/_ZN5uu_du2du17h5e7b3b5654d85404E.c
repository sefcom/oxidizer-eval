fn uu_du::du(a1: &struct144, a2: i64, a3: i64, a4: i64, a5: i64) -> Result<struct144, struct24> {
    let a0: u64;  // rdi
    let v0: u8;  // [bp-0x44d]
    let v1: u8;  // [bp-0x44c]
    let v2: u8;  // [bp-0x44b]
    let v3: u8;  // [bp-0x44a]
    let v4: u8;  // [bp-0x449]
    let v5: i64;  // [bp-0x448]
    let v6: i64;  // [bp-0x438]
    let v7: u64;  // [bp-0x430]
    let v8: i64;  // [bp-0x420]
    let v9: i64;  // [bp-0x420]
    let v10: u64;  // [bp-0x418]
    let v11: u64;  // [bp-0x418]
    let v12: u64;  // [sp-0x408]
    let v13: struct24;  // [bp-0x408], Other Possible Types: struct16, u64
    let v14: u64;  // [bp-0x408]
    let v15: struct152;  // [bp-0x408]
    let v16: Result<struct40, struct32>;  // [bp-0x408]
    let v17: void*;  // [sp-0x400]
    let v18: void*;  // [bp-0x400]
    let v19: void*;  // [bp-0x400]
    let v20: u64;  // [sp-0x3f8]
    let v21: u64;  // [sp-0x3f8]
    let v22: u64;  // [bp-0x3f8]
    let v23: iNone;  // [bp-0x3f0], Other Possible Types: u64
    let v24: u64;  // [bp-0x3f0]
    let v25: u64;  // [bp-0x3f0]
    let v26: u64;  // [bp-0x3f0]
    let v27: iNone;  // [bp-0x3e0]
    let v28: iNone;  // [bp-0x3d0]
    let v29: iNone;  // [bp-0x3c0]
    let v30: iNone;  // [bp-0x3b0]
    let v31: u64;  // [bp-0x3a0]
    let v32: iNone;  // [bp-0x398]
    let v33: iNone;  // [bp-0x388]
    let v34: u64;  // [bp-0x378]
    let v35: struct16;  // [bp-0x368], Other Possible Types: u64
    let v36: struct16;  // [bp-0x358]
    let v37: u64;  // [bp-0x350]
    let v39: u64;  // [bp-0x328]
    let v40: u64;  // [bp-0x320]
    let v41: struct16;  // [bp-0x318], Other Possible Types: Result<struct144, struct24>
    let v42: Result<struct160, struct16>;  // [bp-0x318], Other Possible Types: struct16, u64
    let v43: struct32;  // [bp-0x318], Other Possible Types: u64
    let v44: u64;  // [bp-0x318]
    let v46: void*;  // [bp-0x310]
    let v47: u64;  // [bp-0x308]
    let v48: u8;  // [bp-0x300]
    let v49: iNone;  // [bp-0x2f0]
    let v50: iNone;  // [bp-0x2e0]
    let v51: iNone;  // [bp-0x2d0]
    let v52: iNone;  // [bp-0x2c0]
    let v53: u64;  // [bp-0x2b0]
    let v54: iNone;  // [bp-0x2a8]
    let v55: Result<struct144, struct24>;  // [bp-0x298]
    let v56: u64;  // [bp-0x270]
    let v57: u64;  // [bp-0x268]
    let v58: core::fmt::rt::Argument;  // [bp-0x260]
    let v59: u64;  // [bp-0x258]
    let v60: i64;  // [bp-0x250]
    let v61: u64;  // [sp-0x248]
    let v62: u64;  // [bp-0x248]
    let v63: u64;  // [bp-0x248]
    let v64: u64;  // [bp-0x238]
    let v65: struct24;  // [bp-0x228]
    let v66: u64;  // [bp-0x220]
    let v67: u64;  // [bp-0x218]
    let v68: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>;  // [bp-0x208]
    let v69: u64;  // [bp-0x200]
    let v70: struct16;  // [bp-0x200]
    let v72: iNone;  // [bp-0x1d8]
    let v73: iNone;  // [bp-0x1c8]
    let v74: iNone;  // [bp-0x1b8]
    let v75: iNone;  // [bp-0x1a8]
    let v76: iNone;  // [bp-0x198]
    let v77: iNone;  // [bp-0x188]
    let v78: struct16;  // [bp-0x178]
    let v79: struct9;  // [bp-0x178]
    let v80: iNone;  // [bp-0x168]
    let v81: iNone;  // [bp-0x158]
    let v82: void*;  // [bp-0x130]
    let v83: u64;  // [bp-0x128]
    let v84: iNone;  // [bp-0x120]
    let v85: iNone;  // [bp-0xf8]
    let v87: struct24;  // [bp-0xe0]
    let v88: Result<struct113, struct16>;  // [bp-0xc8]
    let v90: i64;  // 4096
    let v92: i64;  // r14
    let v93: i64;  // r15
    let v95: u64;  // rcx
    let v96: u64;  // rdx
    let v97: u64;  // cc_ndep
    let v98: u64;  // r13
    let v99: u64;  // rbp
    let v106: core::fmt::rt::Argument;  // r15
    let v109: u64;  // 4106
    let v110: u64;  // rax
    let v111: u128;  // xmm0
    let v123: u64;  // rdx
    let v126: struct24;  // [bp-0x330]

    v7 = a3;
    v90 = a1;
    if *((v90 + 128) as &i8) {
        v5 = a1;
        v79 = std::fs::read_dir(a1 + 64);
        if v79.field_8 == 2 {
            v21 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v35, *((a1 + 72) as &i64), *((a1 + 80) as &i64));
            v23 = &g_545c80;
            v17 = 0;
            v13 = 2;
            v42 = std::sync::mpmc::Sender<T>::send(*(a5 as &i64), *((a5 + 8) as &i64), &v13);
            v90 = a1;
            if UnaryOp GetMSBs != 65535 {
                memcpy(&v21, &v42 as u8, 144);
                v13 = v41;
                return struct24 {
                    field_0: 2
                    field_8: 0
                    field_16: alloc::boxed::Box<T>::new(&v13)
                };
            }
        } else {
            v35 = v78;
            v95 = *((a2 + 16) as &i64);
            v96 = (!v95 ? 0 : 56);
            v58 = *((a2 + 8) as &i64);
            v56 = *((a2 + 8) as &i64) + v96;
            v4 = *((a2 + 52) as &i8);
            v2 = *((a2 + 51) as &i8);
            v0 = *((a2 + 48) as &i8);
            v7 += 1;
            v3 = *((a2 + 50) as &i8);
            v1 = *((a2 + 49) as &i8);
            v59 = v95;
            v57 = v96 - v95 * 56;
            v6 = a2;
            v11 = v98;
            loop {
                v68 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v35);
                if let None = v68 {
                    v90 = v5;
                    break;
                }
                if v69 {
                    v36 = v70;
                    *((v93 + 16) as &i64) = *((v92 + 16) as &i64);
                    *(v93 as &i128) = *(v92 as &i128);
                    v126 = std::fs::DirEntry::path(&v36);
                    v88 = uu_du::Stat::new(v39, v40, &v36, v6);
                    if UnaryOp GetMSBs == 65535 {
                        v20 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(*((&v88 as &char + 16) as &i64), &v36);
                        v24 = &g_545c80;
                        v17 = 0;
                        v12 = 2;
                        v55 as u1280 = std::sync::mpmc::Sender<T>::send(v98, v99, &v12);
                        if UnaryOp GetMSBs != 65535 {
                            memcpy(&v20, &v55 as u64, 144);
                            v13 = v42;
                            return struct24 {
                                field_0: 2
                                field_8: 0
                                field_16: alloc::boxed::Box<T>::new(&v13)
                            };
                        }
                        continue;
                    }
                    memcpy(&v79, &v88, 144);
                    v21 = v20;
                    v13 = v12;
                    v44 = v43;
                    if v59 {
                        v106 = v58;
                        do {
                            vvar_1643{stack -1032} = struct152 OrderedDict([(0, 𝜙@64b [((4812090, None), vvar_1016{stack -1032}), ((4812369, None), vvar_1189{stack -1032})]), (8, 𝜙@64b [((4812090, None), vvar_1015{stack -1024}), ((4812369, None), vvar_1188{stack -1024})]), (16, 𝜙@64b [((4812090, None), vvar_1013{stack -1016}), ((4812369, None), vvar_1187{stack -1016})])])
                            alloc::string::String::from_utf8_lossy(&v15, v82, v83);
                            v13 = v14;
                            if !glob::Pattern::matches(v106, v18, v22) {
                                v87 = std::fs::DirEntry::file_name(&v36);
                                v16 = alloc::string::String::from_utf8(&v87);
                                v109 = v16 as i64;
                                v110 = ((0 ^ v109) & (0 ^ -(v109))) >> 63 & 255;
                                v111 = *((&v16 as &u8 + 8 * v110) as &i128);
                                v62 = v111;
                                v64 = (&v16 as u64)[v110];
                                v43 = struct32 {
                                    field_0: _ccall(1, 8, 0, v109, v97) & 255
                                    field_8: v111
                                    field_24: (&v16 as u64)[v110]
                                };
                                v13 = core::result::Result<T,E>::unwrap(&v43);
                                v13 = v14;
                                v43 = v42;
                                if glob::Pattern::matches(v106, v18, v22) {
                                    goto LABEL_4970e5;
                                }
                            } else {
LABEL_4970e5:
                                v20 = v22;
                                v25 = v24;
                                v19 = v18;
                                v12 = v13;
                                v62 = v61;
                                if (v4 & 1) {
                                    v43 = 1;
                                    v46 = v82;
                                    v47 = v83;
                                    v48 = 1;
                                    v60 = &v43;
                                    println!("{} ignored", &v60);
                                    v20 = v22;
                                    v25 = v26;
                                    v19 = v18;
                                    v12 = v14;
                                    v62 = v63;
                                    goto LABEL_496b2e;
                                }
                            }
                            v106 = v56;
                            v43 = v42;
                            v21 = v22;
                            v17 = v18;
                            v13 = v14;
                            v44 = v42;
                        } while (v57 != 56);
                        goto LABEL_496b2e;
                    }
                    v43 = v44;
                    v12 = v13;
                    v20 = v21;
                    if (v79.field_0 as i8 & 1) {
                        v65 = struct24 {
                            field_0: v80
                            field_16: v81 as i64
                        };
                        if hashbrown::map::HashMap<K,V,S,A>::get_inner(a4, &v65) {
                            v25 = v24;
                            v19 = v17;
                            v62 = v61;
                            if (v2 & 1) {
                                if (v0 & 1) {
                                    goto LABEL_496eca;
                                }
                                *((v5 + 104) as &i64) = *((v5 + 104) as &i64) + 1;
                                v25 = v24;
                                v19 = v17;
                                v62 = v61;
                            }
                        } else {
LABEL_496eca:
                            hashbrown::map::HashMap<K,V,S,A>::insert(a4, v65.field_0 as i64, v66, v67);
                            goto LABEL_496eec;
                        }
                    } else {
LABEL_496eec:
                        if !v85 as i8 {
                            *((v5 + 88) as &i128) = BinaryOp AddV;
                            *((v5 + 104) as &i64) = *((v5 + 104) as &i64) + 1;
                            if (v0 & 1) {
                                memcpy(&v12, &v88, 144);
                                v34 = v7;
                                v55 as u1280 = std::sync::mpmc::Sender<T>::send(v11, v8, &v12);
                                v9 = v8;
                                v10 = v11;
                                if UnaryOp GetMSBs != 65535 {
                                    memcpy(&v20, &v47, 144);
                                    v13 = v42;
                                    alloc::boxed::Box<T>::new(&v13);
                                    return struct24 {
                                        field_0: 2
                                        field_8: 0
                                        field_16: v47
                                    };
                                }
                            } else {
                                v9 = v8;
                                v10 = v11;
                            }
LABEL_497238:
                            v98 = v10;
                            v99 = v9;
                            continue;
                        }
                        if (v79.field_0 & v3 & 1) && (*(v5 as &i8) & 1) {
                            v25 = v24;
                            v19 = v17;
                            v62 = v61;
                            if v81 as i64 == *((v5 + 32) as &i64) {
                                goto LABEL_496f24;
                            }
                        } else {
LABEL_496f24:
                            memcpy(&v12, &v88, 144);
                            v55 as u1152 = uu_du::du(&v12, v6, v7, a4, a5);
                            if UnaryOp GetMSBs == 65535 {
                                return struct24 {
                                    field_0: 2
                                    field_8: 0
                                    field_16: v47
                                };
                            }
                            v77 = v51;
                            v76 = v50;
                            v75 = v49;
                            v74 = *((&(&v55)[-2] as &char + 72) as &i128);
                            v72 = v54;
                            v73 = v55 as i128;
                            if !(v1 & 1) {
                                *((v5 + 88) as void*) = BinaryOp AddV;
                                *((v5 + 104) as &u64) = *((v5 + 104) as &i64) + v53;
                            }
                            v29 = v77;
                            v28 = v76;
                            v27 = v75;
                            v23 = v74;
                            v33 = v73;
                            v32 = v72;
                            v17 = v46;
                            v12 = v41 as i64;
                            v20 = v47;
                            v30 = v52;
                            v31 = v53;
                            v34 = v7;
                            v55 as u1280 = std::sync::mpmc::Sender<T>::send(v11, v8, &v12);
                            v9 = v8;
                            v10 = v11;
                            if UnaryOp GetMSBs != 65535 {
                                memcpy(&v20, &v47, 144);
                                v13 = v42;
                                alloc::boxed::Box<T>::new(&v13);
                                return struct24 {
                                    field_0: 2
                                    field_8: 0
                                    field_16: v47
                                };
                            }
                            goto LABEL_497238;
                        }
                    }
LABEL_496b2e:
                    v61 = v62;
                    v17 = v19;
                    v24 = v25;
                    v98 = v11;
                    v99 = v8;
                } else {
                    v20 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v37);
                    v24 = v123;
                    v17 = 0;
                    v12 = 2;
                    v55 as u1280 = std::sync::mpmc::Sender<T>::send(v98, v99, &v12);
                    if UnaryOp GetMSBs != 65535 {
                        memcpy(&v20, &v55 as u64, 144);
                        v13 = v42;
                        return struct24 {
                            field_0: 2
                            field_8: 0
                            field_16: alloc::boxed::Box<T>::new(&v13)
                        };
                    }
                }
            }
        }
    }
    memcpy(a0, v90, 144);
    return;
}
