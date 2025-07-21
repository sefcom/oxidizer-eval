fn uu_tail::follow::watch::Observer::handle_event(a0: i64, a1: i64, a2: i64, a3: i64) -> int {
    let v0: u64;  // [bp-0x310]
    let v1: u64;  // [bp-0x308]
    let v2: u64;  // [bp-0x300]
    let v3: struct24;  // [bp-0x2e8], Other Possible Types: struct16, void*, u64
    let v4: void*;  // [bp-0x2e8]
    let v5: u64;  // [bp-0x2e0]
    let v6: u64;  // [bp-0x2d8]
    let v7: u8;  // [sp-0x2d0]
    let v8: Result<struct16, struct9>;  // [bp-0x2c8], Other Possible Types: u8
    let v9: u64;  // [bp-0x2c8]
    let v10: core::fmt::rt::Argument;  // [bp-0x2c0]
    let v11: u64;  // [bp-0x2b8]
    let v12: u64;  // [bp-0x2b8]
    let v13: u32;  // [bp-0x2b0]
    let v14: i64;  // [bp-0x1f0]
    let v15: alloc::string::String;  // [bp-0x1e8]
    let v16: u128;  // [bp-0x1e0]
    let v17: void*;  // [bp-0x1d0]
    let v18: u64;  // [bp-0x1c8]
    let v19: void*;  // [bp-0x1c0]
    let v20: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x1b8], Other Possible Types: struct24, struct16, u128
    let v21: u64;  // [bp-0x1b8]
    let v22: u64;  // [bp-0x1b0]
    let v23: u64;  // [sp-0x1a8]
    let v24: u8;  // [bp-0xe0]
    let v25: i8;  // [bp-0xb8]
    let v26: i8;  // [bp-0xa8]
    let v28: i64;  // r13
    let v30: u32;  // eax
    let v31: u32;  // eax
    let v32: u32;  // eax
    let v33: i64;  // r14
    let v34: alloc::string::String;  // r15d
    let v35: alloc::string::String;  // rax
    let v36: u64;  // rdx
    let v37: u64;  // rbx
    let v38: u64;  // r14
    let v39: i64;  // rax
    let v42: u8;  // al
    let v45: struct80;  // ecx
    let v46: u64;  // rdx
    let v48: struct32;  // rax
    let v49: u64;  // rdx
    let v50: u64;  // rdx
    let v51: u64;  // rdx
    let v52: i64;  // r15
    let v53: u64;  // rdx
    let v54: u64;  // rax
    let v55: u64;  // rdx
    let v56: u64;  // rdx
    let v57: u64;  // rdx
    let v58: u64;  // rdx
    let v59: core::fmt::rt::Argument;  // rdx
    let v60: u64;  // rdx

    if !*((a2 + 16) as &i64) {
        core::option::unwrap_failed(); /* do not return */
    }
    v28 = *((a2 + 8) as &i64);
    v17 = 0;
    v18 = 8;
    v19 = 0;
    v2 = a1 + 56;
    v0 = *((v28 + 8) as &i64);
    v1 = *((v28 + 16) as &i64);
    v15 = <alloc::string::String as core::clone::Clone>::clone(uu_tail::follow::files::FileHandling::get(a1 + 56, *((v28 + 8) as &i64), *((v28 + 16) as &i64)) + 176);
    v30 = *((a2 + 32) as &i8);
    if v30 != 2 {
        if v30 == 3 {
            v31 = *((a2 + 33) as &i8);
            if v31 != 1 {
                if v31 != 2 {
                    if v31 == 3 {
                        v32 = *((a2 + 34) as &i8);
                        if v32 == 1 {
                            goto LABEL_506113;
                        }
                        if v32 != 3 {
                            if v32 == 2 {
LABEL_505cec:
                                if !(*((a1 + 142) as &i8) & 1) {
                                    if *((a1 + 142) as &i8) != 2 && *((a1 + 140) as &i8) {
                                        if *(a1 as &i32) != 3 {
                                            uu_tail::follow::watch::WatcherRx::unwatch(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
                                            uu_tail::follow::files::FileHandling::remove(&v8, v2, v0, v1);
                                        } else {
                                            core::option::unwrap_failed(); /* do not return */
                                        }
                                    }
                                } else {
                                    if *((a3 + 72) as &i8) {
                                        v35 = uu_tail::follow::files::FileHandling::get_mut_metadata(v2, v0, v1);
                                        if v35 && ((0xf000 & *((v35 + 56) as &i32)) == 0x1000 || (0xf000 & *((v35 + 56) as &i32)) == 0x2000 || (0xf000 & *((v35 + 56) as &i32)) == 0x8000) && *((uu_tail::follow::files::FileHandling::get(v2, v0, v1) + 200) as &i64) {
                                            v20 = uucore::util_name();
                                            v22 = v49;
                                            eprint!("{}: ", &v20);
                                            v3 = 0;
                                            v5 = v16;
                                            v7 = 1;
                                            eprintln!("{} {}: {}", &v3, "has become inaccessible", "No such file or directory");
                                        }
                                        if <std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(v0, v1) && !<T as core::slice::cmp::SliceContains>::slice_contains(v28, *((a1 + 40) as &i64), *((a1 + 48) as &i64)) {
                                            v20 = uucore::util_name();
                                            v22 = v49;
                                            eprint!("{}: ", &v20);
                                            eprintln!("directory containing watched file was removed");
                                            v21 = uucore::util_name();
                                            v22 = v49;
                                            eprint!("{}: ", &v21);
                                            eprintln!("{} cannot be used, reverting to polling", "inotify");
                                            <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v28, a2);
                                            v23 = v12;
                                            v20 = v8;
                                            v20 = alloc::vec::Vec<T,A>::push(a2);
                                            if *(a1 as &i32) == 3 {
                                                core::option::unwrap_failed(); /* do not return */
                                            }
                                            uu_tail::follow::watch::WatcherRx::unwatch(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
                                        }
                                    } else {
                                        v20 = uucore::util_name();
                                        v22 = v36;
                                        eprint!("{}: ", &v20);
                                        eprintln!("{}: {}", &v15, "No such file or directory");
                                        v42 = uu_tail::follow::files::FileHandling::files_remaining(v2);
                                        if !v42 && !!*((a1 + 141) as &i8) {
                                            v20 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                                            v11 = "No such file or directory";
                                            v8 = *(&v20.field_0 as &i128);
                                            v13 = 1;
                                            *((v14 + 8) as &double) = alloc::boxed::Box<T>::new(&v8);
                                            *((v14 + 16) as &&core::fmt::rt::ArgumentType) = &g_5bbdb0.ty;
                                            *(v14 as &i64) = 0x8000000000000000;
                                            return;
                                        }
                                    }
                                    uu_tail::follow::files::FileHandling::reset_reader(v2, v0, v1);
                                }
                            }
                        } else {
                            if *((a1 + 142) as &i8) - 1 >= 2 {
                                v33 = *((a2 + 16) as &i64) * 24 - 24 + v28;
                                <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v33, a2);
                                v23 = v11;
                                v20 = *(&v8 as &i128);
                                v20 = alloc::vec::Vec<T,A>::push(a2);
                                uu_tail::follow::files::FileHandling::remove(&v8, v2, v0, v1);
                                v37 = *((v33 + 8) as &i64);
                                v38 = *((v33 + 16) as &i64);
                                uu_tail::follow::files::PathData::from_other_with_path(&v20, &v8, v37, v38);
                                memcpy(&v8, &v20, 216);
                                if *(v2 as &i64) == 0x8000000000000000 {
                                    core::option::unwrap_failed(); /* do not return */
                                }
                                uu_tail::follow::files::FileHandling::insert(v2, v37, v38, &v8, <std::path::PathBuf as core::cmp::PartialEq>::eq(*((a1 + 64) as &i64), *((a1 + 72) as &i64)));
                                if *(a1 as &i32) == 3 {
                                    core::option::unwrap_failed(); /* do not return */
                                }
                                uu_tail::follow::watch::WatcherRx::unwatch(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
                                if *(a1 as &i32) == 3 {
                                    core::option::unwrap_failed(); /* do not return */
                                }
                                v54 = uu_tail::follow::watch::WatcherRx::watch_with_parent(*((a1 + 16) as &i64), *((a1 + 24) as &i64), v37, v38);
                                if v54 {
                                    *((v14 + 8) as &u64) = v54;
                                    *((v14 + 16) as &u64) = v57;
                                    *(v14 as &i64) = 0x8000000000000000;
                                    return;
                                }
                            }
                        }
                    }
                } else {
                    if !(*((a2 + 34) as &i8) & 5) {
                        goto LABEL_506113;
                    }
                }
            } else {
                if !*((a2 + 34) as &i8) {
LABEL_506113:
                    v20 = std::fs::metadata(v0, v1);
                    if let Ok(_) = v20 {
                        memcpy(&v24, &v20, 176);
                        v34 = 0xf000 & *(&v26 as &i32);
                        if v34 == 0x2000 || v34 == 0x8000 {
                            uu_tail::follow::files::FileHandling::get(v2, v0, v1);
                            if !(*(v39 as &i32) == 2) {
                                goto LABEL_506574;
                            }
                            goto LABEL_50619a;
                        } else {
                            v39 = uu_tail::follow::files::FileHandling::get(v2, v0, v1);
                            if *(v39 as &i32) == 2 {
                                if v34 == 0x1000 {
LABEL_50619a:
                                    v3 = uucore::util_name();
                                    v5 = v46;
                                    eprint!("{}: ", &v3);
                                    v3 = 0;
                                    v5 = v16;
                                    v7 = 1;
                                    eprintln!("{} has appeared;  following new file", &v3);
                                    uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1);
                                    if v48 {
                                        *((v14 + 8) as &struct32) = v48;
                                        *((v14 + 16) as &core::fmt::rt::Argument) = v59;
                                        *(v14 as &i64) = 0x8000000000000000;
                                        return;
                                    }
                                    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v28, a2);
                                    v6 = v11;
                                    v3 = v8;
                                    v3 = alloc::vec::Vec<T,A>::push(a2);
                                } else {
                                    if *((a3 + 72) as &i8) {
                                        if *((a1 + 142) as &i8) != 2 && !(*((a1 + 142) as &i8) & 1) {
                                            v3 = uucore::util_name();
                                            v5 = v50;
                                            eprint!("{}: ", &v3);
                                            v3 = 0;
                                            v5 = v16;
                                            v7 = 1;
                                            eprintln!("{} has been replaced with an untailable file; giving up on this name", &v3);
                                            if *(a1 as &i32) == 3 {
                                                core::option::unwrap_failed(); /* do not return */
                                            }
                                            *((*((a1 + 24) as &i64) + 32) as &i64)(&v8 as u384, *((a1 + 16) as &i64), v0, v1);
                                            uu_tail::follow::files::FileHandling::remove(&v8 as u384, v2, v0, v1);
                                            if uu_tail::follow::files::FileHandling::no_files_remaining(v2, a3) as i8 {
                                                v3 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                                                v11 = v6;
                                                v8 = *(&v3.field_0 as &i128) as u128;
                                                v13 = 1;
                                                alloc::boxed::Box<T>::new(&v8 as u384);
                                                *((v14 + 8) as &struct32) = v48;
                                                *((v14 + 16) as &core::fmt::rt::Argument) = v59;
                                                *(v14 as &i64) = 0x8000000000000000;
                                                return;
                                            }
                                        } else {
                                            v3 = uucore::util_name();
                                            v5 = v51;
                                            eprint!("{}: ", &v3);
                                            v3 = 0;
                                            v5 = v16;
                                            v7 = 1;
                                            eprintln!("{} has been replaced with an untailable file", &v3);
                                        }
                                    }
                                }
                            } else {
                                if v34 == 0x1000 {
LABEL_506574:
                                    if (0xf000 & *((v39 + 56) as &i32)) == 0x1000 || (0xf000 & *((v39 + 56) as &i32)) == 0x2000 || (0xf000 & *((v39 + 56) as &i32)) == 0x8000 {
                                        if *((v39 + 200) as &i64) {
                                            v52 = v39;
                                            if !<notify::event::EventKind as core::cmp::PartialEq>::eq(a2 + 32) as i8 && (!*((a1 + 141) as &i8) || *((v52 + 40) as &i64) == *(&v25 as &i64)) {
                                                v8 = <std::fs::Metadata as uu_tail::paths::MetadataExtTail>::got_truncated(v52, &v24);
                                                if let Ok(_) = v8 {
                                                    v59 = v10;
                                                    *((v14 + 8) as &struct32) = v48;
                                                    *((v14 + 16) as &core::fmt::rt::Argument) = v59;
                                                    *(v14 as &i64) = 0x8000000000000000;
                                                    return;
                                                }
                                                if !*((&v8 as &char + 8) as &i8) {
                                                    goto LABEL_506c8c;
                                                }
                                                v3 = uucore::util_name();
                                                v5 = v60;
                                                eprint!("{}: ", &v3);
                                                eprintln!("{}: file truncated", &v15);
                                                uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1);
                                            } else {
                                                v3 = uucore::util_name();
                                                v5 = v58;
                                                eprint!("{}: ", &v3);
                                                v4 = 0;
                                                v5 = v16;
                                                v7 = 1;
                                                eprintln!("{} has been replaced;  following new file", &v4);
                                                uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1);
                                            }
                                        } else {
                                            v3 = uucore::util_name();
                                            v5 = v55;
                                            eprint!("{}: ", &v3);
                                            v4 = 0;
                                            v5 = v16;
                                            v7 = 1;
                                            eprintln!("{} has appeared;  following new file", &v4);
                                            uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1);
                                        }
                                    } else {
                                        v3 = uucore::util_name();
                                        v5 = v53;
                                        eprint!("{}: ", &v3);
                                        v4 = 0;
                                        v5 = v16;
                                        v7 = 1;
                                        eprintln!("{} has become accessible", &v4);
                                        uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1);
                                    }
                                    if v48 {
                                        *((v14 + 8) as &struct32) = v48;
                                        *((v14 + 16) as &core::fmt::rt::Argument) = v59;
                                        *(v14 as &i64) = 0x8000000000000000;
                                        return;
                                    }
LABEL_506c8c:
                                    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v28, v59);
                                    v6 = v12;
                                    v3 = v8 as i128 as u128;
                                    v3 = alloc::vec::Vec<T,A>::push(a2);
                                } else {
                                    v45 = 0xf000 & *((v39 + 56) as &i32);
                                    if v45 == 0x1000 || v45 == 0x8000 || v45 == 0x2000 {
                                        if *((v39 + 200) as &i64) {
                                            uu_tail::follow::files::FileHandling::reset_reader(v2, v0, v1);
                                        } else {
                                            v3 = uucore::util_name();
                                            v5 = v56;
                                            eprint!("{}: ", &v3);
                                            v3 = 0;
                                            v5 = v16;
                                            v7 = 1;
                                            eprintln!("{} has been replaced with an untailable file", &v3);
                                        }
                                    }
                                }
                            }
                            memcpy(&v9, &v24, 176);
                            uu_tail::follow::files::FileHandling::update_metadata(v2, v0, v1, &v9);
                        }
                    }
                }
            }
        } else if v30 == 4 && !(*((a2 + 33) as &i8) >= 2) {
            goto LABEL_505cec;
        }
    } else {
        if !(*((a2 + 33) as &i8) == 3) {
            goto LABEL_506113;
        }
    }
    *((v14 + 16) as &i64) = 0;
    *(v14 as &i128) = *(&v17 as &i128);
    return;
}
