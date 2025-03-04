fn uu_tail::follow::watch::Observer::handle_event(a0: &u64, a1: void*, a2: void*, a3: void*) -> u64 {
    let v0: i64;  // [sp-0x310]
    let v1: i64;  // [sp-0x308]
    let v2: i64;  // [sp-0x300]
    let v3: i64;  // [sp-0x2e8], Other Possible Types: struct24
    let v4: i64;  // [sp-0x2e0], Other Possible Types: int
    let v5: i8;  // [sp-0x2d0]
    let v6: struct24;  // [sp-0x2c8], Other Possible Types: struct216, int, Result<struct16, struct1>, unsigned long
    let v7: struct24;  // [sp-0x2c8], Other Possible Types: int, struct216
    let v8: i32;  // [bp-0x2b0]
    let v9: struct24;  // [sp-0x1e8]
    let v10: struct16;  // [sp-0x1d0], Other Possible Types: unsigned long
    let v11: i64;  // [sp-0x1c8]
    let v12: i64;  // [sp-0x1c0]
    let v13: struct24;  // [sp-0x1b8], Other Possible Types: Result<struct176, struct8>, struct216
    let v14: i64;  // [sp-0x1b0]
    let v15: i8;  // [bp-0xe0]
    let v16: i8;  // [bp-0xb8]
    let v17: i8;  // [bp-0xa8]
    let v19: i64;  // r15
    let v20: i64;  // r13
    let v21: i32;  // eax
    let v22: i32;  // eax
    let v23: i32;  // eax
    let v24: i8;  // al
    let v25: i64;  // r14
    let v26: i32;  // r15d
    let v27: i64;  // rax
    let v28: i64;  // rdx
    let v29: i64;  // rbx
    let v30: i64;  // r14
    let v31: i64;  // rax
    let v32: i64;  // rdi
    let v33: i64;  // rsi
    let v34: i64;  // rdx
    let v37: i32;  // ecx
    let v38: i32;  // ecx
    let v39: i64;  // rdx
    let v41: i64;  // rcx
    let v42: i64;  // rdx
    let v43: i64;  // rdx
    let v44: i64;  // rdx
    let v45: i64;  // r15
    let v46: i64;  // rdx
    let v47: i64;  // rax
    let v48: i64;  // rdx
    let v49: i64;  // rdx
    let v50: i64;  // rax
    let v51: i64;  // rcx
    let v52: i64;  // rdx
    let v53: i64;  // rdx
    let v54: i64;  // rdx
    let v55: i64;  // rax

    v19 = *((a2 + 16) as &i64);
    if !v19 {
        core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
    }
    v20 = *((a2 + 8) as &i64);
    v10 = 0;
    v11 = 8;
    v12 = 0;
    v2 = a1 + 56;
    v0 = *((v20 + 8) as &i64);
    v1 = *((v20 + 16) as &i64);
    v9 = <alloc::string::String as core::clone::Clone>::clone(uu_tail::follow::files::FileHandling::get(a1 + 56, v0, v1) + 176);
    v21 = *((a2 + 32) as &i8);
    if v21 == 2 {
        if *((a2 + 33) as &i8) == 3 {
            return v55;
        }
    } else {
        if v21 == 3 {
            v22 = *((a2 + 33) as &i8);
            if v22 == 1 {
                if *((a2 + 34) as &i8) {
                    return v55;
                }
            } else {
                if v22 != 2 {
                    if v22 != 3 {
                        return v55;
                    }
                    v23 = *((a2 + 34) as &i8);
                    if v23 != 1 {
                        if v23 == 3 {
                            if *((a1 + 142) as &i8) - 1 < 2 {
                                return v55;
                            }
                            v25 = v19 * 24 - 24 + v20;
                            v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v25);
                            v13 = v6;
                            v10 = alloc::vec::Vec<T,A>::push(&v13);
                            v6 = uu_tail::follow::files::FileHandling::remove(v2, v0, v1);
                            v29 = *((v25 + 8) as &i64);
                            v30 = *((v25 + 16) as &i64);
                            v13 = uu_tail::follow::files::PathData::from_other_with_path(&v6, v29, v30);
                            memcpy(&v6, &v13, 216);
                            if *(v2 as &i64) == 0x8000000000000000 {
                                core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
                            }
                            uu_tail::follow::files::FileHandling::insert(v2, v29, v30, &v6, <std::path::PathBuf as core::cmp::PartialEq>::eq(*((a1 + 64) as &i64), *((a1 + 72) as &i64), *((v20 + 8) as &i64), *((v20 + 16) as &i64)) as i32);
                            if *(a1 as &i32) == 3 {
                                core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
                            }
                            if *(a1 as &i32) != 3 {
                                v47 = uu_tail::follow::watch::WatcherRx::watch_with_parent(*((a1 + 16) as &i64), *((a1 + 24) as &i64), v29, v30);
                                if v47 {
                                    v51 = a0;
                                    *((v51 + 8) as &unsigned long) = v47;
                                    *((v51 + 16) as &unsigned long) = v52;
                                    *(v51 as &i64) = 0x8000000000000000;
                                    return v55;
                                }
                                return v55;
                            } else {
                                core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
                            }
                        } else {
                            if v23 != 2 {
                                return v55;
                            }
                        }
                        goto LABEL_505cec;
                    }
                } else if (*((a2 + 34) as &i8) & 5) {
                    return v55;
                }
            }
        } else {
            if v21 != 4 {
                return v55;
            } else if *((a2 + 33) as &i8) >= 2 {
                return v55;
            }
LABEL_505cec:
            v24 = *((a1 + 142) as &i8);
            if (v24 & 1) {
                if *((a3 + 72) as &i8) {
                    v27 = uu_tail::follow::files::FileHandling::get_mut_metadata(v2, v0, v1);
                    if v27 && ((0xf000 & *((v27 + 56) as &i32)) == 0x1000 || (0xf000 & *((v27 + 56) as &i32)) == 0x2000 || (0xf000 & *((v27 + 56) as &i32)) == 0x8000) && *((uu_tail::follow::files::FileHandling::get(v2, v0, v1) + 200) as &i64) {
                        v14 = v42;
                        v3 = 0;
                        *(&v4 as &i128) = *(&v9.field_8 as &i128);
                        v5 = 1;
                        show_error!("{} {}: {}", &v3, "has become inaccessible", "No such file or directory");
                    }
                    if <std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(v0, v1) && !<T as core::slice::cmp::SliceContains>::slice_contains(v20, *((a1 + 40) as &i64), *((a1 + 48) as &i64)) as i8 {
                        v14 = v42;
                        show_error!("directory containing watched file was removed");
                        v14 = v42;
                        show_error!("{} cannot be used, reverting to polling", "inotify");
                        v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v20);
                        v13 = v6;
                        alloc::vec::Vec<T,A>::push(a1 + 32, &v13);
                        if *(a1 as &i32) == 3 {
                            core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
                        }
                    }
                    uu_tail::follow::files::FileHandling::reset_reader(v2, v0, v1);
                    return v55;
                } else {
                    v14 = v28;
                    show_error!("{}: {}", &v9, "No such file or directory");
                    if !(!uu_tail::follow::files::FileHandling::files_remaining(v2) && !!*((a1 + 141) as &i8)) {
                        uu_tail::follow::files::FileHandling::reset_reader(v2, v0, v1);
                        return v55;
                    }
                    v13 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                    v6 = v13;
                    *(&v8 as &i32) = 1;
                    v41 = a0;
                    *((v41 + 8) as &double) = alloc::boxed::Box<T>::new(&v6);
                    *((v41 + 16) as &&i64) = &g_5bbdb0;
                    *(v41 as &i64) = 0x8000000000000000;
                    return v55;
                }
            } else {
                if v24 == 2 {
                    return v55;
                } else if !*((a1 + 140) as &i8) {
                    return v55;
                } else if *(a1 as &i32) == 3 {
                    core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
                } else {
                    v6 = uu_tail::follow::files::FileHandling::remove(v2, v0, v1);
                    return v55;
                }
            }
        }
    }
    v13 = std::fs::metadata(v0, v1);
    match v13 {
        Err(_) => {
            return v55;
        },
        Ok(_) => {
            memcpy(&v15, &v13, 176);
            v26 = 0xf000 & *(&v17 as &i32);
            if v26 != 0x2000 && v26 != 0x8000 {
                v32 = v2;
                v33 = v0;
                v34 = v1;
                v31 = uu_tail::follow::files::FileHandling::get(v2, v0, v1);
                if *(v31 as &i32) == 2 {
                    if v26 == 0x1000 {
                        goto LABEL_506194;
                    }
                    if !*((a3 + 72) as &i8) {
                        memcpy(&v7, &v15, 176);
                        uu_tail::follow::files::FileHandling::update_metadata(v2, v0, v1, &v7);
                        return v55;
                    }
                    if !(*((a1 + 142) as &i8) != 2) || !(!(*((a1 + 142) as &i8) & 1)) {
                        v4 = v44;
                        v3 = 0;
                        *(&v4 as &i128) = *(&v9.field_8 as &i128);
                        v5 = 1;
                        show_error!("{} has been replaced with an untailable file", &v3);
                        memcpy(&v7, &v15, 176);
                        uu_tail::follow::files::FileHandling::update_metadata(v2, v0, v1, &v7);
                        return v55;
                    }
                    v4 = v43;
                    v3 = 0;
                    *(&v4 as &i128) = *(&v9.field_8 as &i128);
                    v5 = 1;
                    show_error!("{} has been replaced with an untailable file; giving up on this name", &v3);
                    if *(a1 as &i32) == 3 {
                        core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
                    }
                    *((*((a1 + 24) as &i64) + 32) as &i64)();
                    v7 = uu_tail::follow::files::FileHandling::remove(v2, v0, v1);
                    if uu_tail::follow::files::FileHandling::no_files_remaining(v2, a3) as i8 {
                        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                        v6 = *(&v3 as &i224);
                        alloc::boxed::Box<T>::new(&v6);
                        return v55;
                    }
                } else if v26 == 0x1000 {
LABEL_506574:
                    v37 = 0xf000 & *((v31 + 56) as &i32);
                    if v37 != 0x1000 && v37 != 0x2000 && v37 != 0x8000 {
                        v4 = v46;
                        v3 = 0;
                        *(&v4 as &i128) = *(&v9.field_8 as &i128);
                        v5 = 1;
                        show_error!("{} has become accessible", &v3);
                        v50 = uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1);
                        goto LABEL_506a57;
                    }
                    if !*((v31 + 200) as &i64) {
                        v4 = v48;
                        v3 = 0;
                        *(&v4 as &i128) = *(&v9.field_8 as &i128);
                        v5 = 1;
                        show_error!("{} has appeared;  following new file", &v3);
                        v50 = uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1);
                        goto LABEL_506a57;
                    }
                    v45 = v31;
                    if <notify::event::EventKind as core::cmp::PartialEq>::eq(a2 + 32) as i8 || *((a1 + 141) as &i8) && *((v45 + 40) as &i64) != *(&v16 as &i64) {
                        v4 = v53;
                        v3 = 0;
                        *(&v4 as &i128) = *(&v9.field_8 as &i128);
                        v5 = 1;
                        show_error!("{} has been replaced;  following new file", &v3);
                        v50 = uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1);
                        goto LABEL_506a57;
                    } else {
                        v6 = <std::fs::Metadata as uu_tail::paths::MetadataExtTail>::got_truncated(v45, &v15);
                        if v6 {
                            return v55;
                        }
                        if !*((&v6 as &char + 8) as &i8) {
LABEL_506c8c:
                            v7 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v20);
                            v3 = v7;
                            v10 = alloc::vec::Vec<T,A>::push(&v3);
                            memcpy(&v7, &v15, 176);
                            uu_tail::follow::files::FileHandling::update_metadata(v2, v0, v1, &v7);
                            return v55;
                        }
                        v4 = v54;
                        show_error!("{}: file truncated", &v9);
                        v50 = uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1);
LABEL_506a57:
                        if !v50 {
                            goto LABEL_506c8c;
                        }
                    }
                } else {
                    v38 = 0xf000 & *((v31 + 56) as &i32);
                    if !(v38 != 0x1000) || !(v38 != 0x8000) || !(v38 != 0x2000) {
                        if !*((v31 + 200) as &i64) {
                            v4 = v49;
                            v3 = 0;
                            *(&v4 as &i128) = *(&v9.field_8 as &i128);
                            v5 = 1;
                            show_error!("{} has been replaced with an untailable file", &v3);
                            memcpy(&v7, &v15, 176);
                            uu_tail::follow::files::FileHandling::update_metadata(v2, v0, v1, &v7);
                            return v55;
                        }
                        uu_tail::follow::files::FileHandling::reset_reader(v2, v0, v1);
                        memcpy(&v7, &v15, 176);
                        uu_tail::follow::files::FileHandling::update_metadata(v2, v0, v1, &v7);
                        return v55;
                    }
                }
            } else {
                v31 = uu_tail::follow::files::FileHandling::get(v2, v0, v1);
                if !(*(v31 as &i32) == 2) {
                    goto LABEL_506574;
                }
LABEL_506194:
                v4 = v39;
                v3 = 0;
                *(&v4 as &i128) = *(&v9.field_8 as &i128);
                v5 = 1;
                show_error!("{} has appeared;  following new file", &v3);
                if uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1) {
                    return v55;
                }
                v7 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v20);
                v3 = v7;
                v10 = alloc::vec::Vec<T,A>::push(&v3);
            }
            memcpy(&v7, &v15, 176);
            uu_tail::follow::files::FileHandling::update_metadata(v2, v0, v1, &v7);
            return v55;
        },
    }
}
