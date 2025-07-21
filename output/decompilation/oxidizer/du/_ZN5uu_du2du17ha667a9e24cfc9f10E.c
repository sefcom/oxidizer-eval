fn uu_du::du(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> Result<struct144, struct24> {
    let a0: i64;  // rsi
    let v0: u8;  // [bp-0x438]
    let v1: u8;  // [bp-0x42d]
    let v2: u8;  // [bp-0x42c]
    let v3: u8;  // [bp-0x42b]
    let v4: u8;  // [bp-0x42a]
    let v5: u8;  // [bp-0x429]
    let v6: u64;  // [bp-0x410]
    let v7: u64;  // [bp-0x3f8]
    let v8: u8;  // [bp-0x3f0]
    let v9: u64;  // [sp-0x3e8]
    let v10: Result<struct144, struct24>;  // [bp-0x3e8], Other Possible Types: struct16, u64
    let v11: alloc::borrow::Cow<str>;  // [bp-0x3e8]
    let v12: core::result::Result<alloc::string::String, std::sys::os_str::bytes::Buf>;  // [bp-0x3e8]
    let v13: struct32;  // [bp-0x3e8], Other Possible Types: u64
    let v14: void*;  // [sp-0x3e0]
    let v15: void*;  // [bp-0x3e0]
    let v16: void*;  // [bp-0x3e0]
    let v17: u64;  // [sp-0x3d8]
    let v18: u64;  // [bp-0x3d8]
    let v19: u64;  // [sp-0x3d0]
    let v20: u64;  // [bp-0x3d0]
    let v21: u64;  // [bp-0x3d0]
    let v22: u128;  // [bp-0x3c0]
    let v23: u128;  // [bp-0x3b0]
    let v24: u128;  // [bp-0x3a0]
    let v25: u128;  // [bp-0x390]
    let v26: u64;  // [bp-0x380]
    let v27: u128;  // [bp-0x378]
    let v28: u128;  // [bp-0x368]
    let v29: u64;  // [bp-0x358]
    let v30: u64;  // [bp-0x340]
    let v31: u64;  // [bp-0x338]
    let v32: u64;  // [bp-0x330]
    let v33: u64;  // [bp-0x328]
    let v34: std::fs::DirEntry;  // [bp-0x320]
    let v35: u64;  // [bp-0x318]
    let v36: struct16;  // [bp-0x2f8]
    let v37: u64;  // [sp-0x2e8]
    let v38: struct24;  // [bp-0x2e8], Other Possible Types: u64
    let v39: u64;  // [bp-0x2e8]
    let v40: u64;  // [sp-0x2e0]
    let v41: u64;  // [bp-0x2e0]
    let v42: u64;  // [bp-0x2e0]
    let v43: u64;  // [bp-0x2d8]
    let v44: i64;  // [bp-0x2d0]
    let v45: struct16;  // [bp-0x2c8], Other Possible Types: Result<struct160, struct16>
    let v46: Result<struct160, struct16>;  // [bp-0x2c8]
    let v47: struct16;  // [bp-0x2c8], Other Possible Types: u64
    let v48: u64;  // [bp-0x2c8]
    let v49: struct32;  // [bp-0x2c8]
    let v50: u128;  // [bp-0x2c0]
    let v51: u64;  // [bp-0x2b8]
    let v52: u128;  // [bp-0x2a0]
    let v53: u128;  // [bp-0x290]
    let v54: u128;  // [bp-0x280]
    let v55: u128;  // [bp-0x270]
    let v56: u64;  // [bp-0x260]
    let v57: u128;  // [bp-0x258]
    let v58: Result<struct160, struct16>;  // [bp-0x248]
    let v59: u128;  // [bp-0x228]
    let v60: u64;  // [bp-0x220]
    let v61: u64;  // [bp-0x218]
    let v62: std::sys::pal::unix::fs::dirent64_min;  // [bp-0x208]
    let v63: u64;  // [bp-0x200]
    let v64: u128;  // [bp-0x1f8]
    let v65: u320;  // [bp-0x1e8]
    let v66: u64;  // [bp-0x1c0]
    let v67: u64;  // [bp-0x1b8]
    let v68: u320;  // [bp-0x1b0]
    let v69: u128;  // [bp-0x188]
    let v70: u128;  // [bp-0x178]
    let v71: u128;  // [bp-0x168]
    let v72: u128;  // [bp-0x158]
    let v73: u128;  // [bp-0x148]
    let v74: u128;  // [bp-0x138]
    let v75: u128;  // [bp-0x128]
    let v76: u64;  // [bp-0x108]
    let v77: u64;  // [bp-0x100]
    let v78: u128;  // [bp-0xf8]
    let v79: u64;  // [bp-0xe8]
    let v80: std::ffi::os_str::OsString;  // [bp-0xe0]
    let v81: u128;  // [bp-0xc8]
    let v82: u8;  // [bp-0xb8]
    let v83: u64;  // rbx
    let v85: u64;  // rdx
    let v89: u64;  // r13
    let v90: u64;  // rax
    let v91: u128;  // xmm0
    let v95: u64;  // rax
    let v96: u64;  // rdx
    let v100: i64;  // r12
    let v101: std::path::PathBuf;  // [bp-0x348]
    let v102: u8;  // [bp-0x2b0]
    let v103: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>;  // [bp-0x110]

    if *((a0 + 128) as &i8) {
        v83 = a0 + 64;
        v62 = std::fs::read_dir(v83);
        if v62.d_type == 2 {
            v17 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v7, v83);
            v19 = &g_5843f0;
            v14 = 0;
            v10 = 2;
            v46 = std::sync::mpmc::Sender<T>::send(a4, &v10);
            if UnaryOp GetMSBs != 65535 {
                memcpy(&v17, &v46 as u8, 144);
                v10 = v45;
                *((v100 + 16) as &long long) = alloc::boxed::Box<T>::new(&v10);
                *((v100 + 8) as &i64) = 0;
                *(v100 as &i64) = 2;
                return;
            }
        } else {
            v7 = v62.d_ino;
            v8 = v62.d_type;
            v33 = *((a1 + 8) as &i64);
            v32 = *((a1 + 16) as &i64) * 56 + *((a1 + 8) as &i64);
            v5 = *((a1 + 52) as &i8);
            v3 = *((a1 + 51) as &i8);
            v1 = *((a1 + 48) as &i8);
            v4 = *((a1 + 50) as &i8);
            v6 = a2 + 1;
            v2 = *((a1 + 49) as &i8);
            loop {
                v103 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v7);
                if let None = v103 {
                    break;
                }
                if !v76 {
                    v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v35);
                    v19 = v85;
                    v14 = 0;
                    v9 = 2;
                    v58 as u1280 = std::sync::mpmc::Sender<T>::send(a4, &v9);
                    if UnaryOp GetMSBs != 65535 {
                        memcpy(&v18, &v46 as u64, 144);
                        v10 = v47;
                        *((v100 + 16) as &long long) = alloc::boxed::Box<T>::new(&v10);
                        *((v100 + 8) as &i64) = 0;
                        *(v100 as &i64) = 2;
                        return;
                    }
                    continue;
                }
                v34 = std::fs::DirEntry {
                    __0: std::sys::pal::unix::fs::DirEntry {
                        dir: alloc::sync::Arc<std::sys::pal::unix::fs::InnerReadDir, alloc::alloc::Global> {
                            ptr: core::ptr::non_null::NonNull<alloc::sync::ArcInner<std::sys::pal::unix::fs::InnerReadDir>> {
                                pointer: v76
                            }
                            alloc: alloc::alloc::Global { }
                        }
                        name: alloc::ffi::c_str::CString {
                            inner: alloc::boxed::Box<[u8], alloc::alloc::Global> {
                                data_ptr: v77
                                length: v78
                            }
                        }
                        entry: std::sys::pal::unix::fs::dirent64_min {
                            d_ino: <UNKNOWN>
                            d_type: v79
                        }
                    }
                };
                v101 = std::fs::DirEntry::path(&v34);
                uu_du::Stat::new(v30, v31, &v34, a1, a4);
                if UnaryOp GetMSBs == 65535 {
                    v18 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(*(&v82 as &i64), &v34);
                    v19 = &g_5843f0;
                    v14 = 0;
                    v9 = 2;
                    v46 = std::sync::mpmc::Sender<T>::send(a4, &v9);
                    if UnaryOp GetMSBs == 65535 {
                        continue;
                    }
                    memcpy(&v18, &v46 as u64, 144);
                    v10 = v47;
                    alloc::boxed::Box<T>::new(&v10);
                    goto LABEL_4f2921;
                }
                memcpy(&v62, &v103 as u128, 144);
                v36 = struct16 {
                    field_0: v33
                    field_8: v32
                };
                loop {
                    v48 = v48;
                    v89 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v36);
                    if !v89 {
                        break;
                    }
                    v11 = std::sys::os_str::bytes::Slice::to_string_lossy(v66, v67);
                    if !glob::Pattern::matches(v89, v14, v18) {
                        v80 = std::fs::DirEntry::file_name(&v34);
                        v12 = std::sys::os_str::bytes::Buf::into_string(&v80);
                        v49 = v13;
                        v38 = core::result::Result<T,E>::unwrap(&v49);
                        v48 = v47;
                        if !(!glob::Pattern::matches(v89, v40, v43)) {
                            goto LABEL_4f26f8;
                        }
                        v48 = v47;
                    } else {
                        v48 = v48;
LABEL_4f26f8:
                        v20 = v19;
                        v15 = v14;
                        v38 = v37;
                        v41 = v40;
                        if v5 {
                            v48 = 1;
                            v50 = *(&v66 as &i128);
                            v102 = 1;
                            v44 = &v48;
                            println!("{} ignored", &v44);
                            v18 = v17;
                            v20 = v21;
                            v15 = v16;
                            v9 = v13;
                            v38 = v39;
                            v41 = v42;
                        }
LABEL_4f278d:
                        v40 = v41;
                        v37 = v38;
                        v14 = v15;
                        v19 = v20;
                    }
                }
                if v62.d_ino || v63 {
                    v90 = v65;
                    v59 = v64;
                    v61 = v90;
                    if hashbrown::map::HashMap<K,V,S,A>::get_inner(a3, &v59, a1) {
                        v20 = v19;
                        v15 = v14;
                        v38 = v37;
                        v41 = v40;
                        if !v3 {
                            goto LABEL_4f278d;
                        }
                        if !(!v1) {
                            goto LABEL_4f24df;
                        }
                        *((a0 + 104) as &i64) = *((a0 + 104) as &i64) + 1;
                        v20 = v19;
                        v15 = v14;
                        v38 = v37;
                        v41 = v40;
                        goto LABEL_4f278d;
                    } else {
LABEL_4f24df:
                        hashbrown::map::HashMap<K,V,S,A>::insert(a3, v59 as i64, v60, v61);
                    }
                }
                if v69 as i8 {
                    if v4 && v62.d_ino == 1 && *(a0 as &i64) == 1 {
                        v20 = v19;
                        v15 = v14;
                        v38 = v37;
                        v41 = v40;
                        if v65 as i64 == *((a0 + 32) as &i64) {
                            goto LABEL_4f2543;
                        }
                        goto LABEL_4f278d;
                    } else {
LABEL_4f2543:
                        memcpy(&v9, &v62, 144);
                        v10 = uu_du::du(a1, v6, a3, a4, *(&v0 as &i64));
                        v95 = v51;
                        if UnaryOp GetMSBs == 65535 {
                            *((v100 + 16) as &u64) = v95;
                            *((v100 + 8) as &i64) = 0;
                            *(v100 as &i64) = 2;
                            return;
                        }
                        v96 = v49.field_8;
                        v75 = v54;
                        v74 = v53;
                        v73 = v52;
                        v72 = v45 as i128;
                        v70 = v57;
                        v71 = v58 as i128;
                        if !v2 {
                            *((a0 + 88) as &u128) = BinaryOp AddV;
                            *((a0 + 104) as &u64) = *((a0 + 104) as &i64) + v56;
                        }
                        v24 = v75;
                        v23 = v74;
                        v22 = v73;
                        v19 = v72;
                        v28 = v71;
                        v27 = v70;
                        v14 = v96;
                        v9 = v48;
                        v18 = v95;
                        v25 = v55;
                        v26 = v56;
                        v29 = v6;
                        v58 as u1280 = std::sync::mpmc::Sender<T>::send(a4, &v9);
                        if UnaryOp GetMSBs == 65535 {
                            continue;
                        }
                        memcpy(&v18, &v51, 144);
                        v10 = v47;
                        alloc::boxed::Box<T>::new(&v10);
                    }
                }
                v91 = v68;
                *((a0 + 104) as &i64) = *((a0 + 104) as &i64) + 1;
                *((a0 + 88) as &u128) = BinaryOp AddV;
                if v1 {
                    memcpy(&v9, &v62, 144);
                    v29 = v6;
                    v45 = std::sync::mpmc::Sender<T>::send(a4, &v9);
                    if UnaryOp GetMSBs == 65535 {
                        continue;
                    }
                    memcpy(&v18, &v51, 144);
                    v10 = v47;
                    alloc::boxed::Box<T>::new(&v10);
LABEL_4f2921:
                    *((v100 + 16) as &u64) = v95;
                    *((v100 + 8) as &i64) = 0;
                    *(v100 as &i64) = 2;
                    return;
                }
            }
        }
    }
    memcpy(v100, a0, 144);
    return;
}
