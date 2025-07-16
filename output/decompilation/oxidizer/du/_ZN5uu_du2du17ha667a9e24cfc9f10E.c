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
    let v10: u128;  // [bp-0x3e8], Other Possible Types: Result<struct144, struct24>
    let v11: alloc::borrow::Cow<str>;  // [bp-0x3e8]
    let v12: core::result::Result<alloc::string::String, std::sys::os_str::bytes::Buf>;  // [bp-0x3e8]
    let v13: u64;  // [bp-0x3e8]
    let v14: void*;  // [sp-0x3e0], Other Possible Types: u64
    let v15: void*;  // [bp-0x3e0]
    let v16: void*;  // [bp-0x3e0]
    let v17: u64;  // [sp-0x3d8]
    let v18: u64;  // [bp-0x3d8]
    let v19: u128;  // [sp-0x3d0]
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
    let v34: u320;  // [bp-0x320]
    let v35: u64;  // [bp-0x318]
    let v36: u64;  // [bp-0x2f8]
    let v37: u64;  // [bp-0x2f0]
    let v38: u64;  // [sp-0x2e8]
    let v39: struct24;  // [bp-0x2e8], Other Possible Types: u64
    let v40: u64;  // [bp-0x2e8]
    let v41: u64;  // [sp-0x2e0]
    let v42: u64;  // [bp-0x2e0]
    let v43: u64;  // [bp-0x2e0]
    let v44: u64;  // [bp-0x2d8]
    let v45: i64;  // [bp-0x2d0]
    let v46: Result<struct160, struct16>;  // [bp-0x2c8]
    let v47: Result<struct160, struct16>;  // [bp-0x2c8]
    let v48: u64;  // [bp-0x2c8]
    let v49: u64;  // [bp-0x2c8]
    let v50: Result<struct160, struct16>;  // [bp-0x2c8]
    let v51: u64;  // [bp-0x2c8]
    let v52: u256;  // [bp-0x2c8]
    let v53: u128;  // [bp-0x2c0]
    let v54: u64;  // [bp-0x2b8]
    let v55: u128;  // [bp-0x2a0]
    let v56: u128;  // [bp-0x290]
    let v57: u128;  // [bp-0x280]
    let v58: u128;  // [bp-0x270]
    let v59: u64;  // [bp-0x260]
    let v60: u128;  // [bp-0x258]
    let v61: u128;  // [bp-0x228]
    let v62: u64;  // [bp-0x220]
    let v63: u64;  // [bp-0x218]
    let v64: std::sys::pal::unix::fs::dirent64_min;  // [bp-0x208]
    let v65: u64;  // [bp-0x200]
    let v66: u128;  // [bp-0x1f8]
    let v67: u320;  // [bp-0x1e8]
    let v68: u64;  // [bp-0x1c0]
    let v69: u64;  // [bp-0x1b8]
    let v70: u320;  // [bp-0x1b0]
    let v71: u128;  // [bp-0x188]
    let v72: u128;  // [bp-0x178]
    let v73: u128;  // [bp-0x168]
    let v74: u128;  // [bp-0x158]
    let v75: u128;  // [bp-0x148]
    let v76: u128;  // [bp-0x138]
    let v77: u128;  // [bp-0x128]
    let v78: u64;  // [bp-0x108]
    let v79: u64;  // [bp-0x100]
    let v80: u128;  // [bp-0xf8]
    let v81: u64;  // [bp-0xe8]
    let v82: std::ffi::os_str::OsString;  // [bp-0xe0]
    let v83: u128;  // [bp-0xc8]
    let v84: u8;  // [bp-0xb8]
    let v85: u64;  // rbx
    let v87: u64;  // rdx
    let v91: u64;  // r13
    let v92: u64;  // rax
    let v93: u128;  // xmm0
    let v97: u64;  // rax
    let v98: u64;  // rdx
    let v102: i64;  // r12
    let v103: std::path::PathBuf;  // [bp-0x348]
    let v104: u128;  // [bp-0x310]
    let v105: u8;  // [bp-0x2b0]
    let v106: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>;  // [bp-0x110]

    if *((a0 + 128) as &i8) {
        v85 = a0 + 64;
        v64 = std::fs::read_dir(v85);
        if v64.d_type == 2 {
            v17 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v7, v85);
            v19 = &g_5843f0;
            v14 = 0;
            v10 = 2;
            v46 = std::sync::mpmc::Sender<T>::send(a4, &v10);
            if UnaryOp GetMSBs != 65535 {
                memcpy(&v17, &v46 as u8, 144);
                v14 = *((&v46 as &char + 8) as &i64);
                v10 = v46 as i64;
                *((v102 + 16) as &long long) = alloc::boxed::Box<T>::new(&v10);
                *((v102 + 8) as &i64) = 0;
                *(v102 as &i64) = 2;
                return;
            }
        } else {
            v7 = v64.d_ino;
            v8 = v64.d_type;
            v33 = *((a1 + 8) as &i64);
            v32 = *((a1 + 16) as &i64) * 56 + *((a1 + 8) as &i64);
            v5 = *((a1 + 52) as &i8);
            v3 = *((a1 + 51) as &i8);
            v1 = *((a1 + 48) as &i8);
            v4 = *((a1 + 50) as &i8);
            v6 = a2 + 1;
            v2 = *((a1 + 49) as &i8);
            loop {
                v106 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v7);
                if let None = v106 {
                    break;
                }
                if !v78 {
                    v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v35);
                    v19 = v87;
                    v14 = 0;
                    v9 = 2;
                    v50 = std::sync::mpmc::Sender<T>::send(a4, &v9);
                    if UnaryOp GetMSBs != 65535 {
                        memcpy(&v18, &v54, 144);
                        v14 = *((&v50 as &char + 8) as &i64);
                        v10 = v50 as i64;
                        *((v102 + 16) as &long long) = alloc::boxed::Box<T>::new(&v10);
                        *((v102 + 8) as &i64) = 0;
                        *(v102 as &i64) = 2;
                        return;
                    }
                    continue;
                }
                v34 = std::fs::DirEntry {
                    __0: std::sys::pal::unix::fs::DirEntry {
                        dir: alloc::sync::Arc<std::sys::pal::unix::fs::InnerReadDir, alloc::alloc::Global> {
                            ptr: core::ptr::non_null::NonNull<alloc::sync::ArcInner<std::sys::pal::unix::fs::InnerReadDir>> {
                                pointer: v78
                            }
                            alloc: alloc::alloc::Global { }
                        }
                        entry: std::sys::pal::unix::fs::dirent64_min {
                            d_ino: v79
                            d_type: <UNKNOWN>
                        }
                        name: alloc::ffi::c_str::CString {
                            inner: alloc::boxed::Box<[u8], alloc::alloc::Global> {
                                data_ptr: <UNKNOWN>
                                length: v81
                            }
                        }
                    }
                };
                memcpy(&v104, &v80, 16);
                v103 = std::fs::DirEntry::path(&v34);
                uu_du::Stat::new(v30, v31, &v34, a1, a4);
                if UnaryOp GetMSBs == 65535 {
                    v18 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(*(&v84 as &i64), &v34);
                    v19 = &g_5843f0;
                    v14 = 0;
                    v9 = 2;
                    v46 = std::sync::mpmc::Sender<T>::send(a4, &v9);
                    if UnaryOp GetMSBs == 65535 {
                        continue;
                    }
                    memcpy(&v18, &v54, 144);
                    v10 = v48;
                    alloc::boxed::Box<T>::new(&v10);
                    goto LABEL_4f2921;
                }
                memcpy(&v64, &v83, 144);
                v36 = v33;
                v37 = v32;
                v51 = v49;
                loop {
                    v49 = v51;
                    v91 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v36);
                    if !v91 {
                        break;
                    }
                    v11 = std::sys::os_str::bytes::Slice::to_string_lossy(v68, v69);
                    if !glob::Pattern::matches(v91, v14, v18) {
                        v82 = std::fs::DirEntry::file_name(&v34);
                        v12 = std::sys::os_str::bytes::Buf::into_string(&v82);
                        v52 = v13;
                        v39 = core::result::Result<T,E>::unwrap(&v52);
                        v51 = v48;
                        if !(!glob::Pattern::matches(v91, v41, v44)) {
                            goto LABEL_4f26f8;
                        }
                        v51 = v48;
                    } else {
                        v51 = v49;
LABEL_4f26f8:
                        v49 = v51;
                        v20 = v19;
                        v15 = v14;
                        v39 = v38;
                        v42 = v41;
                        if v5 {
                            v49 = 1;
                            v53 = *(&v68 as &i128);
                            v105 = 1;
                            v45 = &v49;
                            println!("{} ignored", &v45);
                            v18 = v17;
                            v20 = v21;
                            v15 = v16;
                            v9 = v13;
                            v39 = v40;
                            v42 = v43;
                        }
LABEL_4f278d:
                        v41 = v42;
                        v38 = v39;
                        v14 = v15;
                        v19 = v20;
                    }
                }
                if v64.d_ino || v65 {
                    v92 = v67;
                    v61 = v66;
                    v63 = v92;
                    if hashbrown::map::HashMap<K,V,S,A>::get_inner(a3, &v61, a1) {
                        v20 = v19;
                        v15 = v14;
                        v39 = v38;
                        v42 = v41;
                        if !v3 {
                            goto LABEL_4f278d;
                        }
                        if !(!v1) {
                            goto LABEL_4f24df;
                        }
                        *((a0 + 104) as &i64) = *((a0 + 104) as &i64) + 1;
                        v20 = v19;
                        v15 = v14;
                        v39 = v38;
                        v42 = v41;
                        goto LABEL_4f278d;
                    } else {
LABEL_4f24df:
                        hashbrown::map::HashMap<K,V,S,A>::insert(a3, v61 as i64, v62, v63);
                    }
                }
                if v71 as i8 {
                    if v4 && v64.d_ino == 1 && *(a0 as &i64) == 1 {
                        v20 = v19;
                        v15 = v14;
                        v39 = v38;
                        v42 = v41;
                        if v67 as i64 == *((a0 + 32) as &i64) {
                            goto LABEL_4f2543;
                        }
                        goto LABEL_4f278d;
                    } else {
LABEL_4f2543:
                        memcpy(&v9, &v64, 144);
                        v10 = uu_du::du(a1, v6, a3, a4, *(&v0 as &i64));
                        v97 = v54;
                        if UnaryOp GetMSBs == 65535 {
                            *((v102 + 16) as &u64) = v97;
                            *((v102 + 8) as &i64) = 0;
                            *(v102 as &i64) = 2;
                            return;
                        }
                        v98 = *((&v52 as &char + 8) as &i64);
                        v77 = v57;
                        v76 = v56;
                        v75 = v55;
                        memcpy(stack_base + -344, stack_base + -688, 16);
                        memcpy(&v72, &v60, 16);
                        memcpy(&v73, &v60, 16);
                        if !v2 {
                            *((a0 + 88) as &u128) = BinaryOp AddV;
                            *((a0 + 104) as &u64) = *((a0 + 104) as &i64) + v59;
                        }
                        v24 = v77;
                        v23 = v76;
                        v22 = v75;
                        v19 = v74;
                        v28 = v73;
                        v27 = v72;
                        v14 = v98;
                        v9 = v49;
                        v18 = v97;
                        v25 = v58;
                        v26 = v59;
                        v29 = v6;
                        v47 = std::sync::mpmc::Sender<T>::send(a4, &v9);
                        if UnaryOp GetMSBs == 65535 {
                            continue;
                        }
                        memcpy(&v18, &v54, 144);
                        v10 = v48;
                        alloc::boxed::Box<T>::new(&v10);
                    }
                }
                v93 = v70;
                *((a0 + 104) as &i64) = *((a0 + 104) as &i64) + 1;
                *((a0 + 88) as &u128) = BinaryOp AddV;
                if v1 {
                    memcpy(&v9, &v64, 144);
                    v29 = v6;
                    v46 = std::sync::mpmc::Sender<T>::send(a4, &v9);
                    if UnaryOp GetMSBs == 65535 {
                        continue;
                    }
                    memcpy(&v18, &v54, 144);
                    v10 = v48;
                    alloc::boxed::Box<T>::new(&v10);
LABEL_4f2921:
                    *((v102 + 16) as &u64) = v97;
                    *((v102 + 8) as &i64) = 0;
                    *(v102 as &i64) = 2;
                    return;
                }
            }
        }
    }
    memcpy(v102, a0, 144);
    return;
}
