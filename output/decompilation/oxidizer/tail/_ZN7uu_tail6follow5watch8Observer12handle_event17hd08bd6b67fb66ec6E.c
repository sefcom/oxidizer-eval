fn uu_tail::follow::watch::Observer::handle_event(a0: i64, a1: i64, a2: i64, a3: u32) -> void {
    let v0: u64;  // [bp-0x3b0]
    let v1: struct24;  // [bp-0x398], Other Possible Types: void*, u64
    let v2: void*;  // [bp-0x398]
    let v3: u128;  // [bp-0x390]
    let v4: u64;  // [bp-0x388]
    let v5: u8;  // [sp-0x380]
    let v6: Result<struct16, struct9>;  // [bp-0x378], Other Possible Types: struct28, struct216, struct24, u128
    let v7: struct24;  // [bp-0x378], Other Possible Types: u64
    let v8: struct24;  // [bp-0x378]
    let v9: struct640;  // [bp-0x370]
    let v10: u64;  // [bp-0x368]
    let v11: u32;  // [bp-0x360]
    let v12: void*;  // [bp-0x2a0]
    let v13: alloc::string::String;  // [bp-0x298]
    let v14: u128;  // [bp-0x290]
    let v15: void*;  // [bp-0x280]
    let v16: struct16;  // [bp-0x280]
    let v17: struct16;  // [bp-0x280]
    let v18: struct16;  // [bp-0x280]
    let v19: u64;  // [bp-0x278]
    let v20: void*;  // [bp-0x270]
    let v21: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x268], Other Possible Types: struct24, u64
    let v22: u64;  // [bp-0x260]
    let v23: u8;  // [bp-0x1b8]
    let v24: i8;  // [bp-0x190]
    let v25: i8;  // [bp-0x180]
    let v26: struct216;  // [bp-0x108]
    let v28: u64;  // rbp
    let v29: i64;  // r15
    let v31: u32;  // eax
    let v32: u32;  // eax
    let v33: u32;  // eax
    let v34: i64;  // rax
    let v36: u64;  // rdx
    let v38: u64;  // rdx
    let v41: struct24;  // r13
    let v42: u8;  // al
    let v44: i64;  // rax
    let v45: struct640;  // rdx
    let v46: u32;  // ebx
    let v47: struct16;  // rax
    let v48: u64;  // rdx
    let v49: struct712;  // rax
    let v50: struct640;  // rdx
    let v51: u64;  // rdx
    let v53: u64;  // rdx
    let v54: u64;  // rdx
    let v56: u64;  // rdx
    let v57: struct712;  // rbx
    let v58: u64;  // rdx
    let v59: u64;  // rdx
    let v60: u64;  // rdx

    if !*((a2 + 16) as &i64) {
        core::option::unwrap_failed(); /* do not return */
    }
    v28 = a3;
    v29 = *((a2 + 8) as &i64);
    v15 = 0;
    v19 = 8;
    v20 = 0;
    v0 = a1 + 56;
    v13 = <alloc::string::String as core::clone::Clone>::clone(uu_tail::follow::files::FileHandling::get(a1 + 56, *((v29 + 8) as &i64), *((v29 + 16) as &i64)) + 176);
    v31 = *((a2 + 32) as &i8);
    if v31 != 2 {
        if v31 == 3 {
            v32 = *((a2 + 33) as &i8);
            if v32 != 1 {
                if v32 != 2 {
                    if v32 == 3 {
                        v33 = *((a2 + 34) as &i8);
                        if v33 == 1 {
                            goto LABEL_4a43ab;
                        }
                        if v33 != 3 {
                            if v33 == 2 {
LABEL_4a3f61:
                                if (*((a1 + 142) as &i8) & 1) {
                                    if (v28 & 1) {
                                        v34 = uu_tail::follow::files::FileHandling::get_mut_metadata(v0, *((v29 + 8) as &i64), *((v29 + 16) as &i64));
                                        if v34 && ((0xf000 & *((v34 + 56) as &i32)) == 0x1000 || (0xf000 & *((v34 + 56) as &i32)) == 0x8000 || (0xf000 & *((v34 + 56) as &i32)) == 0x2000) && *((uu_tail::follow::files::FileHandling::get(v0, *((v29 + 8) as &i64), *((v29 + 16) as &i64)) + 200) as &i64) {
                                            v21 = uucore::util_name();
                                            v22 = v36;
                                            eprint!("{}: ", &v21);
                                            v1 = 0;
                                            v3 = v14;
                                            v5 = 1;
                                            eprintln!("{} {}: {}", &v1, "has become inaccessible", "No such file or directory");
                                        }
                                        if <std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(*((v29 + 8) as &i64), *((v29 + 16) as &i64)) && !<T as core::slice::cmp::SliceContains>::slice_contains(v29, *((a1 + 40) as &i64), *((a1 + 48) as &i64)) {
                                            v21 = uucore::util_name();
                                            v22 = v36;
                                            eprint!("{}: ", &v21);
                                            eprintln!("directory containing watched file was removed");
                                            v21 = uucore::util_name();
                                            v22 = v36;
                                            eprint!("{}: ", &v21);
                                            eprintln!("{} cannot be used, reverting to polling", "inotify");
                                            v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((v29 + 8) as &i64), *((v29 + 16) as &i64));
                                            v21 = v7;
                                            alloc::vec::Vec<T,A>::push(a1 + 32, &v21, "src/uu/tail/src/follow/watch.rs");
                                            if *(a1 as &i32) == 3 {
                                                core::option::unwrap_failed(); /* do not return */
                                            }
                                            uu_tail::follow::watch::WatcherRx::unwatch(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
                                        }
                                    } else {
                                        v21 = uucore::util_name();
                                        v22 = v38;
                                        eprint!("{}: ", &v21);
                                        eprintln!("{}: {}", &v13, "No such file or directory");
                                        if !uu_tail::follow::files::FileHandling::files_remaining(v0) && *((a1 + 141) as &i8) == 1 {
                                            v21 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("no files remaining");
                                            v10 = "No such file or directory";
                                            v6 = *(&v21.field_0 as &i128);
                                            v11 = 1;
                                            *(&v12[8] as &u64) = alloc::boxed::Box<T>::new(&v6) as u64;
                                            *(&v12[16] as &&i64) = &g_572f18.field_0;
                                            *(v12 as &i64) = 0x8000000000000000;
                                            return;
                                        }
                                    }
                                    uu_tail::follow::files::FileHandling::reset_reader(v0, *((v29 + 8) as &i64), *((v29 + 16) as &i64));
                                } else {
                                    if (!(*((a1 + 142) as &i8) & 1) & *((a1 + 142) as &i8) != 2) && *((a1 + 140) as &i8) == 1 {
                                        if *(a1 as &i32) != 3 {
                                            uu_tail::follow::watch::WatcherRx::unwatch(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
                                            v6 = uu_tail::follow::files::FileHandling::remove(v0, *((v29 + 8) as &i64), *((v29 + 16) as &i64));
                                        } else {
                                            core::option::unwrap_failed(); /* do not return */
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((*((a1 + 142) as &i8) != 2 ^ *((a1 + 142) as &i8)) & 1) {
                                v41 = v29 + *((a2 + 16) as &i64) * 24;
                                if v41 == 24 {
                                    core::option::unwrap_failed(); /* do not return */
                                }
                                v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((v41 - 16) as &i64), *((v41 - 8) as &i64));
                                v21 = v7;
                                v17 = alloc::vec::Vec<T,A>::push(&v21, "src/uu/tail/src/follow/watch.rs");
                                v6 = uu_tail::follow::files::FileHandling::remove(v0, *((v29 + 8) as &i64), *((v29 + 16) as &i64));
                                v26 = uu_tail::follow::files::PathData::from_other_with_path(&v6, *((v41 - 16) as &i64), *((v41 - 8) as &i64));
                                if (((0 ^ *(v0 as &i64)) & (0 ^ -(*(v0 as &i64)))) >> 63) as char {
                                    core::option::unwrap_failed(); /* do not return */
                                }
                                v42 = <std::path::PathBuf as core::cmp::PartialEq>::eq(*((a1 + 64) as &i64), *((a1 + 72) as &i64));
                                uu_tail::follow::files::FileHandling::insert(v0, *((v41 - 16) as &i64), *((v41 - 8) as &i64), &v26, v42);
                                if *(a1 as &i32) == 3 {
                                    core::option::unwrap_failed(); /* do not return */
                                }
                                uu_tail::follow::watch::WatcherRx::unwatch(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
                                if *(a1 as &i32) == 3 {
                                    core::option::unwrap_failed(); /* do not return */
                                }
                                v44 = uu_tail::follow::watch::WatcherRx::watch_with_parent(*((a1 + 16) as &i64), *((a1 + 24) as &i64), *((v41 - 16) as &i64), *((v41 - 8) as &i64));
                                if v44 {
                                    *(&v12[8] as &unsigned long) = v44;
                                    *(&v12[16] as &struct640) = v45;
                                    *(v12 as &i64) = 0x8000000000000000;
                                    return;
                                }
                            }
                        }
                    }
                } else {
                    if !(*((a2 + 34) as &i8) & 5) {
                        goto LABEL_4a43ab;
                    }
                }
            } else {
                if !*((a2 + 34) as &i8) {
LABEL_4a43ab:
                    v21 = std::fs::metadata(*((v29 + 8) as &i64), *((v29 + 16) as &i64));
                    if let Ok(_) = v21 {
                        memcpy(&v23, &v21, 176);
                        v46 = 0xf000 & *(&v25 as &i32);
                        if v46 == 0x8000 || v46 == 0x2000 {
                            uu_tail::follow::files::FileHandling::get(v0, *((v29 + 8) as &i64), *((v29 + 16) as &i64));
                            if *(v47 as &i32) != 2 {
                                goto LABEL_4a488d;
                            }
                            goto LABEL_4a4438;
                        }
                        v47 = uu_tail::follow::files::FileHandling::get(v0, *((v29 + 8) as &i64), *((v29 + 16) as &i64));
                        if *(v47 as &i32) == 2 {
                            if v46 == 0x1000 {
LABEL_4a4438:
                                v1 = uucore::util_name();
                                v3 = v54;
                                eprint!("{}: ", &v1);
                                v1 = 0;
                                v3 = v14;
                                v5 = 1;
                                eprintln!("{} has appeared;  following new file", &v1);
                                uu_tail::follow::files::FileHandling::update_reader(v0, *((v29 + 8) as &i64), *((v29 + 16) as &i64));
                                if v49 {
                                    *(&v12[8] as &struct712) = v49;
                                    *(&v12[16] as &struct640) = v50;
                                    *(v12 as &i64) = 0x8000000000000000;
                                    return;
                                }
                                v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((v29 + 8) as &i64), *((v29 + 16) as &i64) as i32);
                                v1 = v7;
                                v18 = alloc::vec::Vec<T,A>::push(&v1, "src/uu/tail/src/follow/watch.rs");
                            } else {
                                if (v28 as u8 & 1) {
                                    if (((*((a1 + 142) as &i8) != 2) as u8 as u8 ^ *((a1 + 142) as &i8)) & 1) {
                                        v1 = uucore::util_name();
                                        v3 = v48;
                                        eprint!("{}: ", &v1);
                                        v1 = 0;
                                        v3 = v14;
                                        v5 = 1;
                                        eprintln!("{} has been replaced with an untailable file; giving up on this name", &v1);
                                        if *(a1 as &i32) == 3 {
                                            core::option::unwrap_failed(); /* do not return */
                                        }
                                        *((*((a1 + 24) as &i64) + 32) as &i64)(&v6 as u384, *((a1 + 16) as &i64), *((v29 + 8) as &i64), *((v29 + 16) as &i64));
                                        v6 = uu_tail::follow::files::FileHandling::remove(v0, *((v29 + 8) as &i64), *((v29 + 16) as &i64));
                                        if uu_tail::follow::files::FileHandling::no_files_remaining(v0, v28 as u32) as u8 {
                                            v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("no files remaining");
                                            v6 = struct28 {
                                                field_0: *(&v1.field_0 as &i128)
                                                field_16: v4
                                                field_24: 1
                                            };
                                            alloc::boxed::Box<T>::new(&v6);
                                            *(&v12[8] as &struct712) = v49;
                                            *(&v12[16] as &struct640) = v50;
                                            *(v12 as &i64) = 0x8000000000000000;
                                            return;
                                        }
                                    } else {
                                        v1 = uucore::util_name();
                                        v3 = v51;
                                        eprint!("{}: ", &v1);
                                        v1 = 0;
                                        v3 = v14;
                                        v5 = 1;
                                        eprintln!("{} has been replaced with an untailable file", &v1);
                                    }
                                }
                            }
                            goto LABEL_4a5053;
                        }
                        if v46 == 0x1000 {
LABEL_4a488d:
                            if (0xf000 & *((v47 + 56) as &i32)) == 0x1000 || (0xf000 & *((v47 + 56) as &i32)) == 0x2000 || (0xf000 & *((v47 + 56) as &i32)) == 0x8000 {
                                if *((v47 + 200) as &i64) {
                                    v57 = v47;
                                    if <notify_types::event::EventKind as core::cmp::PartialEq>::eq(a2 + 32, &g_424e4b) as u8 || *((a1 + 141) as &i8) && *((v57 + 40) as &i64) != *(&v24 as &i64) {
                                        v1 = uucore::util_name();
                                        v3 = v58;
                                        eprint!("{}: ", &v1);
                                        v2 = 0;
                                        v3 = v14;
                                        v5 = 1;
                                        eprintln!("{} has been replaced;  following new file", &v2);
                                        uu_tail::follow::files::FileHandling::update_reader(v0, *((v29 + 8) as &i64), *((v29 + 16) as &i64));
                                    } else {
                                        v6 = <std::fs::Metadata as uu_tail::paths::MetadataExtTail>::got_truncated(v57, &v23);
                                        v50 = v9;
                                        if let Ok(_) = v6 {
                                            *(&v12[8] as &struct712) = v49;
                                            *(&v12[16] as &struct640) = v50;
                                            *(v12 as &i64) = 0x8000000000000000;
                                            return;
                                        }
                                        if (v9 as u8 & 1) {
                                            v1 = uucore::util_name();
                                            v3 = v59;
                                            eprint!("{}: ", &v1);
                                            eprintln!("{}: file truncated", &v13);
                                            uu_tail::follow::files::FileHandling::update_reader(v0, *((v29 + 8) as &i64), *((v29 + 16) as &i64));
                                        } else {
LABEL_4a4e3b:
                                            v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((v29 + 8) as &i64), *((v29 + 16) as &i64) as i32);
                                            v1 = v8;
                                            v16 = alloc::vec::Vec<T,A>::push(&v1, "src/uu/tail/src/follow/watch.rs");
                                            goto LABEL_4a5053;
                                        }
                                    }
                                } else {
                                    v1 = uucore::util_name();
                                    v3 = v60;
                                    eprint!("{}: ", &v1);
                                    v2 = 0;
                                    v3 = v14;
                                    v5 = 1;
                                    eprintln!("{} has appeared;  following new file", &v2);
                                    uu_tail::follow::files::FileHandling::update_reader(v0, *((v29 + 8) as &i64), *((v29 + 16) as &i64));
                                }
                            } else {
                                v1 = uucore::util_name();
                                v3 = v56;
                                eprint!("{}: ", &v1);
                                v2 = 0;
                                v3 = v14;
                                v5 = 1;
                                eprintln!("{} has become accessible", &v2);
                                uu_tail::follow::files::FileHandling::update_reader(v0, *((v29 + 8) as &i64), *((v29 + 16) as &i64));
                            }
                            if v49 {
                                *(&v12[8] as &struct712) = v49;
                                *(&v12[16] as &struct640) = v50;
                                *(v12 as &i64) = 0x8000000000000000;
                                return;
                            }
                            goto LABEL_4a4e3b;
                        } else {
                            if (0xf000 & *((v47 + 56) as &i32)) == 0x1000 || (0xf000 & *((v47 + 56) as &i32)) == 0x8000 || (0xf000 & *((v47 + 56) as &i32)) == 0x2000 {
                                if *((v47 + 200) as &i64) {
                                    uu_tail::follow::files::FileHandling::reset_reader(v0, *((v29 + 8) as &i64), *((v29 + 16) as &i64));
                                } else {
                                    v1 = uucore::util_name();
                                    v3 = v53;
                                    eprint!("{}: ", &v1);
                                    v1 = 0;
                                    v3 = v14;
                                    v5 = 1;
                                    eprintln!("{} has been replaced with an untailable file", &v1);
                                }
                            }
LABEL_4a5053:
                            memcpy(&v7, &v23, 176);
                            uu_tail::follow::files::FileHandling::update_metadata(v0, *((v29 + 8) as &i64), *((v29 + 16) as &i64), &v7);
                        }
                    }
                }
            }
        } else if v31 == 4 && !(*((a2 + 33) as &i8) >= 2) {
            goto LABEL_4a3f61;
        }
    } else {
        if *((a2 + 33) as &i8) != 3 {
            goto LABEL_4a43ab;
        }
    }
    *(&v12[16] as &i64) = 0;
    *(v12 as &i128) = *(&v18.field_0 as &i128);
    return;
}
