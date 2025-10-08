fn starship::modules::git_status::get_repo_status(a1: i64, a2: i64, a3: i64) -> Option<struct112> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x1d48]
    let v1: u128;  // [bp-0x1d38]
    let v2: u128;  // [bp-0x1d30]
    let v3: u64;  // [bp-0x1d28]
    let v4: struct16;  // [bp-0x1d18]
    let v5: iNone;  // [bp-0x1d18]
    let v6: void*;  // [bp-0x1d18]
    let v7: iNone;  // [bp-0x1d08]
    let v8: void*;  // [bp-0x1d08]
    let v9: struct16;  // [bp-0x1cf8], Other Possible Types: void*
    let v10: void*;  // [bp-0x1cf8]
    let v11: u64;  // [bp-0x1cf0]
    let v12: u128;  // [bp-0x1ce8]
    let v13: u128;  // [bp-0x1cd8]
    let v14: u128;  // [bp-0x1cc8]
    let v15: u128;  // [bp-0x1cb8]
    let v17: iNone;  // [bp-0x1ca8], Other Possible Types: struct_0 *
    let v18: void*;  // [bp-0x1ca8]
    let v19: u16;  // [bp-0x1c98]
    let v20: u8;  // [bp-0x1c96]
    let v21: u128;  // [bp-0x1c90]
    let v22: u64;  // [bp-0x1c88]
    let v23: iNone;  // [bp-0x1c80]
    let v24: u64;  // [bp-0x1c70]
    let v25: iNone;  // [bp-0x1c68]
    let v26: u128;  // [bp-0x1c50]
    let v27: struct66;  // [bp-0x1c40]
    let v28: Option<struct264>;  // [sp-0x1bf8], Other Possible Types: core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, struct24, u64
    let v29: u128;  // [bp-0x1bf8]
    let v30: core::str::pattern::CharSearcher;  // [bp-0x1bf8]
    let v31: u64;  // [bp-0x1be8]
    let v32: u64;  // [bp-0x1bd0]
    let v33: &str;  // [bp-0x1bc8]
    let v34: struct66;  // [bp-0x1960]
    let v35: struct16;  // [bp-0x195c]
    let v36: u64;  // [bp-0x1958]
    let v37: struct32;  // [bp-0x1950]
    let v38: struct72;  // [bp-0x194c]
    let v39: struct24;  // [bp-0x1944]
    let v40: u16;  // [bp-0x1943]
    let v41: u8;  // [bp-0x1941]
    let v42: void*;  // [bp-0x1908], Other Possible Types: Option<struct48>, struct129, struct24, u64
    let v43: u16;  // [bp-0x1908]
    let v44: Result<struct744, struct137>;  // [bp-0x1908], Other Possible Types: core::str::pattern::CharSearcher
    let v46: u64;  // [bp-0x1908]
    let v47: void*;  // [bp-0x1908]
    let v48: u64;  // [bp-0x1908]
    let v49: struct138;  // [bp-0x1908]
    let v50: Result<struct72, struct32>;  // [bp-0x1908]
    let v51: Option<struct48>;  // [bp-0x1908]
    let v53: u8;  // [bp-0x1906]
    let v54: u64;  // [bp-0x1900]
    let v55: iNone;  // [bp-0x18f8], Other Possible Types: u128
    let v56: u128;  // [bp-0x18f0]
    let v57: u128;  // [bp-0x18e8]
    let v58: u8;  // [bp-0x18e0]
    let v59: iNone;  // [bp-0x18d8]
    let v60: u16;  // [bp-0x18c8]
    let v61: struct24;  // [bp-0x1318], Other Possible Types: u64
    let v62: struct20;  // [bp-0x1318], Other Possible Types: struct24
    let v63: struct48;  // [bp-0x1318]
    let v64: struct40;  // [bp-0x1318]
    let v65: struct40;  // [bp-0x1318], Other Possible Types: u64
    let v66: u32;  // [bp-0x1314]
    let v67: u64;  // [bp-0x1310]
    let v68: u128;  // [bp-0x1310]
    let v69: u64;  // [bp-0x1310]
    let v70: struct24;  // [bp-0x1308]
    let v71: u128;  // [bp-0x1300]
    let v72: u8;  // [bp-0x12fc]
    let v73: u16;  // [bp-0x12fb]
    let v74: u8;  // [bp-0x12f9]
    let v75: u64;  // [bp-0x12f0]
    let v76: void*;  // [bp-0x1030]
    let v77: Option<struct48>;  // [bp-0xd28], Other Possible Types: u8
    let v78: u128;  // [bp-0xd20]
    let v81: struct328;  // [bp-0xa40]
    let v82: u8;  // [bp-0x8c0]
    let v83: u64;  // [bp-0x600]
    let v84: u8;  // [bp-0x5f8]
    let v85: struct744;  // [bp-0x318]
    let v88: u64;  // r13
    let v89: struct16;  // cc_dep1
    let v90: Option<struct24>;  // xmm1
    let v91: struct56;  // r14b
    let v92: u32;  // r8
    let v93: u32;  // r9
    let v95: struct20;  // cc_op
    let v96: struct20;  // cc_dep1
    let v97: u64;  // cc_dep2
    let v99: u32;  // esi
    let v102: struct72;  // rdx
    let v103: iNone;  // xmm0
    let v104: u64;  // rax
    let v105: u64;  // rdx
    let v108: u64;  // r14
    let v111: i64;  // rax
    let v112: u64;  // rcx
    let v113: Result<struct72, struct24>;  // rdx
    let v114: u64;  // rsi
    let v115: u64;  // rax
    let v116: u128;  // xmm0
    let v117: &str;  // rax:rdx
    let v118: i64;  // [bp-0x1bf0], Other Possible Types: u64

    v76 = 0;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 4 {
        *(&v42 as &&str) = "New repo status created";
        v54 = 1;
        v55 = 8;
        v56 = 0;
        v65 = struct40 {
            field_0: "starship::modules::git_status"
            field_16: "starship::modules::git_status"
            field_32: log::__private_api::loc("src/modules/git_status.rs")
        };
        log::__private_api::log(&v42, 4, &v65);
    }
    v6 = 0;
    v8 = 0;
    v9 = 0;
    v11 = 8;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v81 = starship::context::Repo::open(a2);
    v88 = *((a3 + 216) as &i64);
    if !*((a3 + 242) as &i8) && *((a2 + 904) as &i8) != 1 {
        v46 = gix::repository::index::<impl gix::types::Repository>::index_or_empty(&v81);
        match v46 as u1024 {
            Ok(_) => {
                return struct8 {
                    field_0: 2
                };
            },
            Err(_) => {
                v61 = v54;
                v89 = *((v54 + 560) as &i8);
                if !*((v54 + 560) as &i8) {
                    v46 = 1 as u64;
                    v54 = 1;
                    v55 = 0;
                    v0 = alloc::boxed::Box<T>::new(&v46 as u1024) as u64;
                    v55 = 0x8000000000000000;
                    v47 = 0 as void*;
                    v58 = 0;
                    v61 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("starship timer");
                    v28 = v62;
                    v65 as u384 = std::thread::Builder::name(&v46 as u1024, &v28);
                    v61 = 1 as u64;
                    v67 = 0x40000;
                    v90 = v63.field_32;
                    v55 = v63.field_16;
                    *(&v57 as &Option<struct24>) = v90;
                    v48 = v61;
                    v54 = 0x40000;
                    if _ccall(14, 24, atomic_fetch_add(v0) as u64 + 1, 0, (v89 < 0) as u8 as u64) as char {
                        [D] Unsupported jumpkind Ijk_NoDecode at address 12173501()
                    }
                    v17 = a1;
                    v62 = struct20 {
                        field_0: v0
                        field_8: (*((a1 + 472) as &i64) >> 3) / 125
                        field_16: (*((a1 + 472) as &i64) - (v69 as u32 * 1000) as u64) as u32 * 1000000
                    };
                    v28 = std::thread::Builder::spawn_unchecked(&v46 as u1024, &v62);
                    v42 = core::result::Result<T,E>::expect(&v28);
                    v44 = gix::status::<impl gix::types::Repository>::status(&v81);
                    if let Err(_) = v44 {
                        return struct8 {
                            field_0: 2
                        };
                    }
                    v91 = (!v88) as u8 as u8;
                    memcpy(&v84, &v54, 736);
                    v83 = v44 as i64;
                    gix::status::platform::<impl gix::status::Platform<Progress>>::index_worktree_submodules(&v62, &v83, (((!*((a3 + 240) as &i8) ? v91 as u32 * 0x100 + 0x100 : 0x100) as u32 as u64 - (v91 | *((a3 + 240) as &i8)) as u64) as u32 + 2) as u64, v91 as u32 * 0x100 + 0x100, v92, v93, v0 as u8);
                    gix::status::platform::<impl gix::status::Platform<Progress>>::index_worktree_options_mut(&v28, &v62, v88);
                    if *((a3 + 168) as &i64) {
                        v42 = gix::diff::utils::new_rewrites(*(&v82 as &i64) + 16, 1);
                        v64 = core::result::Result<T,E>::unwrap_or_default(&v42);
                        v99 = v64.field_0 as i32;
                        if v99 != 2 {
                            v43 = v73;
                            v53 = v74;
                        }
                        v20 = v53;
                        v19 = v43;
                    }
                    v34 = v99;
                    v35 = v66;
                    v36 = 100;
                    v37 = v70;
                    v38 = v102;
                    v39 = v72;
                    v40 = v19;
                    v41 = v20;
                    memcpy(&v77, &v28, 744);
                    if _ccall(14, 24, atomic_fetch_add(v0) as u64 + 1, 0, _ccall(v95, v96, v97, (v89 < 0) as u8 as u64)) as char {
                        [D] Unsupported jumpkind Ijk_NoDecode at address 12173501()
                    }
                    v85 = gix::status::platform::<impl gix::status::Platform<Progress>>::should_interrupt_owned(&v77, v0);
                    v28 = 0x8000000000000000;
                    v49 = gix::status::iter::<impl gix::status::Platform<Progress>>::into_iter(&v85, &v28);
                    if v49.field_0 != 3 {
                        memcpy(&v64 as u64, &v54, 1512);
                        v65 = v49.field_0;
                        if *((a3 + 104) as &i64) || *((a3 + 72) as &i64) || *((a3 + 120) as &i64) || *((a3 + 88) as &i64) {
                            v50 = gix::repository::reference::<impl gix::types::Repository>::head_name(&v81);
                            match v50 {
                                Err(_) => {
                                    v29 = *((&v50 as &char + 16) as &i128) as u128;
                                    if v54 == 9223372036854775809 {
                                        goto LABEL_b9bcc3;
                                    }
                                    v77 = v29;
                                    if v54 == 0x8000000000000000 {
                                        goto LABEL_b9bcc3;
                                    }
                                    v28 = struct24 {
                                        field_0: v54
                                        field_8: v77
                                    };
                                    v51 = bstr::ext_vec::ByteVec::into_string(&v28);
                                    match v51 {
                                        None => {
                                            v1 = *((&v51 as &char + 8) as &i128) as u128;
                                            v3 = *((&v51 as &char + 24) as &i64);
                                            if v1 != 0x8000000000000000 {
                                                v28 = core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>> {
                                                    inner: core::iter::adapters::flatten::FlattenCompat<core::option::IntoIter<core::char::EscapeDebug>, core::char::EscapeDebug> {
                                                        frontiter: 0
                                                        backiter: <UNKNOWN>
                                                        iter: core::iter::adapters::fuse::Fuse<core::option::IntoIter<core::char::EscapeDebug>> {
                                                            iter: 12
                                                        }
                                                    }
                                                };
                                                v32 = 8;
                                                v33 = "%(upstream) %(upstream:track)";
                                                v42 as u1152 = core::iter::traits::iterator::Iterator::chain(&v28, &v1 as u8);
                                                v77 = starship::context::Repo::exec_git(a2, v18, &v42 as u1152);
                                                match v77 {
                                                    None => {
                                                        return struct8 {
                                                            field_0: 2
                                                        };
                                                    },
                                                    Some(_) => {
                                                        v24 = *((&v77 as &char + 40) as &i64);
                                                        v23 = *((&v77 as &char + 24) as &i128);
                                                        v21 = v78;
                                                        v19 = v77 as i64 as u64;
                                                        v30 = <char as core::str::pattern::Pattern>::into_searcher(0xa, v21 as i64, v22);
                                                        v103 = *(&v30.haystack.data_ptr as &i128);
                                                        v59 = *(&v30.utf8_encoded as &i128);
                                                        v57 = *(&v30.finger as &i128) as u128;
                                                        v55 = v103;
                                                        v42 = 0 as void*;
                                                        v54 = v22;
                                                        v60 = 0;
                                                        v104 = core::str::iter::SplitInternal<P>::next_inclusive(&v42 as u1152);
                                                        if v104 {
                                                            v117 = <core::str::LinesMap as core::ops::function::Fn<(&str,)>>::call(v104, v105, a2);
                                                            if v117.ptr {
                                                                v4 = starship::modules::git_status::RepoStatus::set_ahead_behind_for_each_ref(v117.ptr, a2);
                                                            }
                                                        }
                                                    },
                                                }
                                            }
                                        },
                                        Some(_) => {
                                            v1 = 0x8000000000000000;
                                            v2 = v26;
                                        },
                                    }
                                },
                                Ok(_) => {
LABEL_b9bcc3:
                                    v1 = 0x8000000000000000;
                                    v2 = v26;
                                },
                            }
                        }
                        memcpy(&v43, &v65 as u384, 1520);
                        loop {
                            v28 = core::iter::traits::iterator::Iterator::try_fold(&v43);
                            if let None = v28 {
                                break;
                            }
                            memcpy(&v78, &v118, 0x100);
                            v77 = v28;
                            if v108 != 1 {
                                panic!("internal error: entered unreachable code: this kind of rename tracking isn't enabled by default and specific to gitoxide");
                            }
                            memcpy(&v28, &v77, 264);
                            v9 = alloc::vec::Vec<T,A>::push(&v28);
                        }
                        if core::sync::atomic::atomic_load(v0 + 16, 0) as u8 {
                            v25 = v5;
                            v17 = v7;
                            v5 = v25;
                            v7 = v17;
                            v9 = 0;
                            v11 = 8;
                            v15 = 0 as u128;
                            v14 = 0;
                            v13 = 0;
                            v12 = 0;
                        }
                        v9 = 0;
                        return Some(struct112 {
                            field_0: v5
                            field_16: v7
                            field_32: *(&v9.field_16 as &i128)
                            field_48: 0
                            field_64: 0
                            field_80: 0
                            field_96: v15
                        });
                    }
                    return struct8 {
                        field_0: 2
                    };
                }
            },
        }
    }
    v111 = alloc::alloc::Global::alloc_impl(8, 32, 0);
    *(v111 as &&u8) = &g_52f4f8;
    *((v111 + 8) as &i64) = 6;
    *((v111 + 16) as &&u8) = &g_53ff20;
    *((v111 + 24) as &i64) = 13;
    v28 = 2;
    v118 = v111;
    v31 = 2;
    if *((a3 + 104) as &i64) || *((a3 + 72) as &i64) || *((a3 + 120) as &i64) || *((a3 + 88) as &i64) {
        alloc::vec::Vec<T,A>::push(&v28, "--branch", "src/modules/git_status.rs");
    }
    if !v88 {
        alloc::vec::Vec<T,A>::push(&v28, "--untracked-files=no", "src/modules/git_status.rs");
    } else if !*((a3 + 240) as &i8) {
        goto LABEL_b9b4e6;
    }
    alloc::vec::Vec<T,A>::push(&v28, v114, v113, v112);
LABEL_b9b4e6:
    v42 = starship::context::Repo::exec_git(a2, a1, v118, 2);
    v115 = v42 as i64;
    if !((((0 ^ v115) & (0 ^ -(v115))) >> 63) as char) {
        v75 = *((&v42 as &char + 40) as &i64);
        v116 = *((&v42 as &char + 8) as &i128);
        v71 = *((&v42 as &char + 24) as &i128);
        v68 = v116;
        v61 = v115;
        v44 = <char as core::str::pattern::Pattern>::into_searcher(0xa, v67, *((&v68 as &char + 8) as &i64));
        v27 = struct66 {
            field_0: 0
            field_8: *((&v68 as &char + 8) as &i64)
            field_16: *(&v44.haystack.data_ptr as &i128)
            field_32: *(&v44.finger as &i128)
            field_48: *((&v42 as &char + 32) as &i128)
            field_64: 0
        };
        core::iter::traits::iterator::Iterator::fold(&v27, &v6 as u128);
        v9 = 0;
        return Some(struct112 {
            field_0: v5
            field_16: v7
            field_32: *(&v10 as &i128)
            field_48: 0
            field_64: 0
            field_80: 0
            field_96: v15
        });
    }
    return struct8 {
        field_0: 2
    };
}
