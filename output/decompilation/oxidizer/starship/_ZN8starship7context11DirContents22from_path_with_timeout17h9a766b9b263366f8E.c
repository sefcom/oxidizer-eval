fn starship::context::DirContents::from_path_with_timeout(a0: u64, a1: u64, a2: u64, a3: void*, a4: u32, a5: u32) -> int {
    let v0: u32;  // [bp-0x304]
    let v1: struct24;  // [bp-0x300], Other Possible Types: struct48, struct40, u32
    let v2: struct24;  // [bp-0x300]
    let v4: u64;  // [bp-0x2f8]
    let v5: u64;  // [bp-0x2f0]
    let v6: u32;  // [bp-0x2cc]
    let v7: struct48;  // [bp-0x2c8]
    let v8: void*;  // [bp-0x2c8], Other Possible Types: struct16, struct24, struct9, u128
    let v9: struct48;  // [bp-0x2c8]
    let v10: struct48;  // [bp-0x2c8]
    let v11: struct32;  // [bp-0x2c8]
    let v12: void*;  // [bp-0x2c8]
    let v13: void*;  // [bp-0x2c8]
    let v14: struct48;  // [bp-0x2c8]
    let v15: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x2c8]
    let v16: Result<struct24, struct24>;  // [bp-0x2c8]
    let v17: void*;  // [bp-0x2c8]
    let v18: u64;  // [bp-0x2c0]
    let v19: u64;  // [bp-0x2c0]
    let v20: u64;  // [bp-0x2c0]
    let v21: u128;  // [bp-0x2b8]
    let v22: u128;  // [bp-0x2b0]
    let v23: u64;  // [bp-0x2b0]
    let v24: void*;  // [bp-0x2a8], Other Possible Types: u128
    let v25: u8;  // [bp-0x2a0]
    let v26: u128;  // [bp-0x298]
    let v27: iNone;  // [bp-0x288]
    let v28: iNone;  // [bp-0x278]
    let v29: iNone;  // [bp-0x268]
    let v30: iNone;  // [bp-0x258]
    let v31: iNone;  // [bp-0x248]
    let v32: iNone;  // [bp-0x238]
    let v33: iNone;  // [bp-0x228]
    let v34: iNone;  // [bp-0x218]
    let v35: u128;  // [bp-0x208]
    let v36: &u8;  // [bp-0x200]
    let v37: u64;  // [bp-0x1f8]
    let v38: u64;  // [bp-0x1d8]
    let v39: u64;  // [bp-0x1d0]
    let v40: void*;  // [bp-0x1c8]
    let v41: u64;  // [bp-0x1c0]
    let v42: u64;  // [bp-0x1b0]
    let v43: u64;  // [bp-0x1a8]
    let v44: u64;  // [bp-0x1a0]
    let v45: struct40;  // [bp-0x1a0]
    let v46: u64;  // [bp-0x198]
    let v47: u64;  // [bp-0x190]
    let v49: u64;  // [bp-0x180]
    let v50: struct24;  // [bp-0x178], Other Possible Types: u64
    let v51: u128;  // [bp-0x178]
    let v52: i32;  // [bp-0x170]
    let v53: iNone;  // [bp-0x168]
    let v54: u64;  // [bp-0x158]
    let v55: &u8;  // [bp-0x140]
    let v56: iNone;  // [sp-0x138]
    let v57: struct16;  // [bp-0x138]
    let v58: iNone;  // [bp-0x128]
    let v59: iNone;  // [bp-0x118]
    let v60: struct16;  // [sp-0x108]
    let v61: iNone;  // [bp-0x108]
    let v62: iNone;  // [bp-0xf8]
    let v63: iNone;  // [bp-0xe8]
    let v64: iNone;  // [sp-0xd8]
    let v65: struct16;  // [bp-0xd8]
    let v66: iNone;  // [bp-0xc8]
    let v67: iNone;  // [bp-0xb8]
    let v68: u128;  // [sp-0xa8]
    let v69: struct16;  // [bp-0xa8]
    let v70: iNone;  // [bp-0x98]
    let v71: iNone;  // [bp-0x88]
    let v72: u64;  // [bp-0x70]
    let v73: u64;  // [bp-0x68]
    let v76: u128;  // [bp-0x50]
    let v77: u64;  // [bp-0x40]
    let v78: u64;  // [bp-0x38]
    let v80: u64;  // rdx
    let v81: u256;  // ymm0
    let v82: u256;  // ymm0
    let v83: i64;  // r12
    let v84: core::fmt::rt::Argument;  // r14
    let v85: void*;  // rax
    let v86: u32;  // r8d
    let v87: u128;  // xmm0
    let v89: u256;  // ymm0
    let v91: core::fmt::Arguments;  // rbp
    let v94: u64;  // rbx
    let v95: &u8;  // r14
    let v96: u64;  // rax
    let v97: u64;  // rax
    let v98: struct24;  // rax
    let v100: Option<struct48>;  // r15, Other Possible Types: unsigned long
    let v101: &mut [u8];  // rax:rdx
    let v102: u64;  // [bp-0x290]

    v6 = a5;
    v8 = std::fs::read_dir(a1, a2);
    if v8.field_8 == 2 {
        return struct16 {
            field_0: 0
            field_8: v8.field_0
        };
    }
    v41 = std::time::Instant::now();
    v14 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
    v63 = *(&v14.field_32 as &i128);
    v62 = v14.field_16;
    v61 = v14.field_0;
    v7 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
    v67 = *(&v7.field_32 as &i128);
    v66 = v7.field_16;
    v64 = v7.field_0;
    v9 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
    v71 = *(&v9.field_32 as &i128);
    v70 = v9.field_16;
    v68 = v9.field_0;
    v10 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
    v59 = *(&v10.field_32 as &i128);
    v58 = v10.field_16;
    v56 = v10.field_0;
    v72 = alloc::sync::Arc<T,A>::from_raw_in(std::ffi::os_str::<impl core::convert::From<&std::ffi::os_str::OsStr> for alloc::sync::Arc<std::ffi::os_str::OsStr>>::from(a1, a2) + 16, v80);
    v73 = v80;
    v11 = std::sync::mpmc::channel();
    v39 = v21;
    v42 = v39;
    v38 = v22;
    v43 = v38;
    v77 = v72;
    v78 = v80;
    v76 = *(&v11.field_0 as &i128);
    v21 = 0x8000000000000000;
    v12 = 0;
    v25 = 0;
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("from_path_with_timeout worker");
    v82 = (((((v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v11.field_0 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v11.field_0 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v11.field_0 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v11.field_0 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v11.field_0 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v1.field_0 as &i128);
    v50 = v2;
    v1 = std::thread::Builder::name(&v12, &v50);
    v8 = std::thread::Builder::spawn_unchecked(&v1, &v76);
    if !v8.field_0 {
        return struct16 {
            field_0: 0
            field_8: v18
        };
    }
    v44 = v8.field_0;
    v46 = v18;
    v47 = v21;
    v83 = &v1;
    v100 = &v50;
    v84 = &v8;
    v85 = a3;
    v86 = a4;
    v8 = v12;
    loop {
        v19 = v18;
        v13 = v8;
        vvar_975{stack -416} = struct40 OrderedDict([(0, 𝜙@64b [((11989296, None), vvar_761{stack -416}), ((11990213, None), vvar_761{stack -416}), ((11989245, None), vvar_848{stack -416})]), (16, 𝜙@64b [((11989296, None), vvar_763{stack -400}), ((11990213, None), vvar_763{stack -400}), ((11989245, None), vvar_850{stack -400})]), (32, 𝜙@64b [((11989296, None), vvar_767{stack -384}), ((11990213, None), vvar_767{stack -384}), ((11989245, None), None)])])
        v40 = v85;
        v0 = v86;
        std::sync::mpmc::Receiver<T>::recv_timeout(&v45, v39, v38, v85, v86);
        if !v45.field_0 as i64 {
            break;
        }
        v54 = v49;
        v87 = v45.field_0;
        v53 = v45.field_16;
        v51 = v87;
        std::fs::DirEntry::path(v83, v100);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v84, core::result::Result<T,E>::unwrap(std::path::Path::strip_prefix(v4, v5, a1, a2), v80, "src/context.rs"), a2);
        v37 = v21;
        v89 = (v82 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v13 as &i128);
        v35 = *(&v13 as &i128);
        if v6 as i8 {
            std::fs::DirEntry::path(v84, v100);
            if !std::path::Path::is_dir(v19, v21) {
                goto LABEL_b6f2e0;
            }
            goto LABEL_b6f2a7;
        } else {
            std::fs::DirEntry::path(v83, v100);
            v15 = std::fs::symlink_metadata(v83, a2);
            match v15 {
                Ok(_) => {
                    v91 = &v15;
                    if (v102 as i32 & 0xf000) != 0x4000 {
                        goto LABEL_b6f2e0;
                    }
LABEL_b6f2a7:
                    v21 = v37;
                    v82 = v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35 as u256;
                    v8 = v35;
                    v60 = hashbrown::map::HashMap<K,V,S,A>::insert(v91);
                    v84 = v91;
                    goto LABEL_b6f42b;
                },
                Err(_) => {
LABEL_b6f2e0:
                    alloc::string::String::from_utf8_lossy(v91, v36, v37);
                    v55 = v36;
                    v1 = 0;
                    v101 = core::char::methods::encode_utf8_raw(46, v83, 4);
                    v94 = v37;
                    v95 = v55;
                    if !core::slice::<impl [T]>::starts_with(v19, v21, v101.data_ptr, v101.length) as u32 as u8 {
                        v96 = std::path::Path::extension();
                        if v96 {
                            v57 = starship::context::DirContents::from_path_with_timeout::{{closure}}(v96, a2);
                        }
                        v97 = std::path::Path::file_name(v95, v94);
                        if v97 {
                            v57 = starship::context::DirContents::from_path_with_timeout::{{closure}}(v97, a2);
                        }
                    }
                    v98 = std::path::Path::file_name(v95, v94);
                    v84 = &v13;
                    if v98 {
                        v16 = alloc::string::String::from_utf8_lossy(v98, a2);
                        <&str as alloc::string::SpecToString>::spec_to_string(v83, v19, v21 as u32);
                        v69 = hashbrown::map::HashMap<K,V,S,A>::insert(v83);
                    }
                    v21 = v37;
                    v82 = v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35 as u256;
                    v8 = v35;
                    v65 = hashbrown::map::HashMap<K,V,S,A>::insert(&v13);
LABEL_b6f42b:
                    if !v40 && !v0 {
                        std::sync::mpmc::Receiver<T>::try_recv(v84, v39, v38);
                        if !v13 && core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
                            v13 = "from_path_with_timeout has timed-out!";
                            v18 = 1;
                            v21 = 8;
                            v22 = 0 as u128;
                            v1 = struct40 {
                                field_0: "starship::context"
                                field_16: "starship::context"
                                field_32: log::__private_api::loc("src/context.rs")
                            };
                            log::__private_api::log(&v13, 2, &v1);
                        }
                    }
                    v8 = struct16 {
                        field_0: std::time::Instant::now()
                        field_8: v80 as u32
                    };
                    v85 = core::time::Duration::checked_sub(a3, a4 as u64, std::time::Instant::duration_since(v84, v41, v80 as u32 as u64), v80 as u32 as u64);
                    if v80 as u32 != 0x3b9aca00 {
                        v86 = v80 as u32;
                        v8 = v17;
                        v18 = v20;
                    } else {
                        v85 = 0;
                        v86 = 0;
                        v8 = v17;
                        v18 = v20;
                    }
                },
            }
        }
    }
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
        v50 = std::time::Instant::elapsed(&v41);
        v52 = v80;
        v44 = v100;
        v46 = <core::time::Duration as core::fmt::Debug>::fmt;
        v13 = "Building HashSets of directory files, folders and extensions took ";
        v18 = 1;
        v24 = 0;
        v21 = &v44;
        v23 = 1;
        v1 = struct40 {
            field_0: "starship::context"
            field_16: "starship::context"
            field_32: log::__private_api::loc("src/context.rs")
        };
        log::__private_api::log(&v13, 5, &v1);
    }
    *(&v24 as void*) = v67;
    *(&v21 as void*) = v66;
    *(&v8 as void*) = v64;
    v26 = v68;
    v27 = v70;
    v28 = v71;
    v29 = v61;
    v30 = v62;
    v31 = v63;
    v34 = v59;
    v33 = v58;
    v32 = v56;
    memcpy(a0, &v8, 192);
    return;
}
