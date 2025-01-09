fn uu_tail::follow::watch::Observer::handle_event(a0: &u64, a1: void*, a2: void*, a3: void*) -> u64 {
    let v0: i64;  // [sp-0x310]
    let v1: i64;  // [sp-0x308]
    let v2: i64;  // [sp-0x300]
    let v3: i64;  // [sp-0x2e8], Other Possible Types: struct24
    let v4: i64;  // [bp-0x2e0]
    let v5: i8;  // [sp-0x2d0]
    let v6: i1728;  // [sp-0x2c8], Other Possible Types: struct24, struct216, Arguments, Result<struct16, struct1>
    let v7: i32;  // [bp-0x2b0]
    let v8: struct24;  // [sp-0x1e8], Other Possible Types: i192
    let v9: struct16;  // [sp-0x1d0], Other Possible Types: i64
    let v10: i64;  // [sp-0x1c8]
    let v11: i64;  // [sp-0x1c0]
    let v12: i192;  // [sp-0x1b8], Other Possible Types: struct24, struct216, struct16
    let v13: i64;  // [sp-0x1b0]
    let v14: i8;  // [bp-0xe0]
    let v15: i8;  // [bp-0xb8]
    let v16: i8;  // [bp-0xa8]
    let v18: i64;  // r15
    let v19: i64;  // r13
    let v20: i32;  // eax
    let v21: i32;  // eax
    let v22: i32;  // eax
    let v23: i8;  // al
    let v24: i64;  // r14
    let v25: i32;  // r15d
    let v26: i64;  // rax
    let v27: i64;  // rdx
    let v28: i64;  // rbx
    let v29: i64;  // r14
    let v30: i64;  // rax
    let v31: i64;  // rdi
    let v32: i64;  // rsi
    let v33: i64;  // rdx
    let v36: i32;  // ecx
    let v37: i32;  // ecx
    let v39: i64;  // rcx
    let v40: i64;  // rdx
    let v41: i64;  // rdx
    let v42: i64;  // rdx
    let v43: i64;  // r15
    let v44: i64;  // rdx
    let v45: i64;  // rax
    let v46: i64;  // rdx
    let v47: i64;  // rdx
    let v48: i64;  // rax
    let v49: i64;  // rcx
    let v50: i64;  // rdx
    let v51: i64;  // rdx
    let v52: i64;  // rax

    v18 = *((a2 + 16) as &i64);
    if !v18 {
        core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
    }
    v19 = *((a2 + 8) as &i64);
    v9 = 0;
    v10 = 8;
    v11 = 0;
    v2 = a1 + 56;
    v0 = *((v19 + 8) as &i64);
    v1 = *((v19 + 16) as &i64);
    v8 = <alloc::string::String as core::clone::Clone>::clone(uu_tail::follow::files::FileHandling::get(a1 + 56, v0, v1) + 176);
    v20 = *((a2 + 32) as &i8);
    if v20 == 2 {
        if *((a2 + 33) as &i8) == 3 {
            return v52;
        }
    } else {
        if v20 == 3 {
            v21 = *((a2 + 33) as &i8);
            if v21 == 1 {
                if *((a2 + 34) as &i8) {
                    return v52;
                }
            } else {
                if v21 != 2 {
                    if v21 != 3 {
                        return v52;
                    }
                    v22 = *((a2 + 34) as &i8);
                    if v22 != 1 {
                        if v22 == 3 {
                            if *((a1 + 142) as &i8) - 1 < 2 {
                                return v52;
                            }
                            v24 = v18 * 24 - 24 + v19;
                            v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v24);
                            v12 = v6;
                            v9 = alloc::vec::Vec<T,A>::push(&v12);
                            v6 = uu_tail::follow::files::FileHandling::remove(v2, v0, v1);
                            v28 = *((v24 + 8) as &i64);
                            v29 = *((v24 + 16) as &i64);
                            v12 = uu_tail::follow::files::PathData::from_other_with_path(&v6, v28, v29);
                            memcpy(&v6, &v12, 216);
                            if *(v2 as &i64) == 0x8000000000000000 {
                                core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
                            }
                            uu_tail::follow::files::FileHandling::insert(v2, v28, v29, &v6, <std::path::PathBuf as core::cmp::PartialEq>::eq(*((a1 + 64) as &i64), *((a1 + 72) as &i64), *((v19 + 8) as &i64), *((v19 + 16) as &i64)) as i32);
                            if *(a1 as &i32) == 3 {
                                core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
                            }
                            if *(a1 as &i32) != 3 {
                                v45 = uu_tail::follow::watch::WatcherRx::watch_with_parent(*((a1 + 16) as &i64), *((a1 + 24) as &i64), v28, v29);
                                if v45 {
                                    v49 = a0;
                                    *((v49 + 8) as &i64) = v45;
                                    *((v49 + 16) as &i64) = v50;
                                    *(v49 as &i64) = 0x8000000000000000;
                                    return v52;
                                }
                                return v52;
                            } else {
                                core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
                            }
                        } else {
                            if v22 != 2 {
                                return v52;
                            }
                        }
                        goto LABEL_505cec;
                    }
                } else if (*((a2 + 34) as &i8) & 5) {
                    return v52;
                }
            }
        } else {
            if v20 != 4 {
                return v52;
            } else if *((a2 + 33) as &i8) >= 2 {
                return v52;
            }
LABEL_505cec:
            v23 = *((a1 + 142) as &i8);
            if (v23 & 1) {
                if *((a3 + 72) as &i8) {
                    v26 = uu_tail::follow::files::FileHandling::get_mut_metadata(v2, v0, v1);
                    if v26 && ((0xf000 & *((v26 + 56) as &i32)) == 0x1000 || (0xf000 & *((v26 + 56) as &i32)) == 0x2000 || (0xf000 & *((v26 + 56) as &i32)) == 0x8000) && *((uu_tail::follow::files::FileHandling::get(v2, v0, v1) + 200) as &i64) {
                        v12 = uucore::util_name();
                        v13 = v40;
                        eprint!("{}: ", &v12);
                        v3 = 0;
                        v4 = *((&v8 as &char + 8) as &i128);
                        v5 = 1;
                        eprintln!("{} {}: {}", &v3, "has become inaccessible", "No such file or directory");
                    }
                    if <std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(v0, v1) && !<T as core::slice::cmp::SliceContains>::slice_contains(v19, *((a1 + 40) as &i64), *((a1 + 48) as &i64)) as i8 {
                        v12 = uucore::util_name();
                        v13 = v40;
                        eprint!("{}: ", &v12);
                        eprintln!("directory containing watched file was removed");
                        v12 = uucore::util_name();
                        v13 = v40;
                        eprint!("{}: ", &v12);
                        *(&v12.field_0 as &struct24) = struct24 {
                            field_0: "inotify"
                            field_16: &<0x505c30[is_140]|Stack bp-0x2c8, 1 B>
                        };
                        v6 = Arguments {
                            pieces: ["", " cannot be used, reverting to polling\n"]
                            args: [&v12]
                            fmt: 0
                        };
                        std::io::stdio::_eprint(&v6);
                        v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v19);
                        v12 = v6;
                        alloc::vec::Vec<T,A>::push(a1 + 32, &v12);
                        if *(a1 as &i32) == 3 {
                            core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
                        }
                    }
                    uu_tail::follow::files::FileHandling::reset_reader(v2, v0, v1);
                    return v52;
                } else {
                    v12 = uucore::util_name();
                    v13 = v27;
                    eprint!("{}: ", &v12);
                    eprintln!("{}: {}", &v8, "No such file or directory");
                    if !(!uu_tail::follow::files::FileHandling::files_remaining(v2) && !!*((a1 + 141) as &i8)) {
                        uu_tail::follow::files::FileHandling::reset_reader(v2, v0, v1);
                        return v52;
                    }
                    v12 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                    v6 = v12;
                    v7 = 1;
                    v39 = a0;
                    *((v39 + 8) as &double) = alloc::boxed::Box<T>::new(&v6);
                    *((v39 + 16) as &&i64) = &g_5bbdb0;
                    *(v39 as &i64) = 0x8000000000000000;
                    return v52;
                }
            } else {
                if v23 == 2 {
                    return v52;
                } else if !*((a1 + 140) as &i8) {
                    return v52;
                } else if *(a1 as &i32) == 3 {
                    core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
                } else {
                    v6 = uu_tail::follow::files::FileHandling::remove(v2, v0, v1);
                    return v52;
                }
            }
        }
    }
    v12 = std::fs::metadata(v0, v1);
    if v12 == 2 {
        return v52;
    }
    memcpy(&v14, &v12, 176);
    v25 = 0xf000 & v16;
    if v25 != 0x2000 && v25 != 0x8000 {
        v31 = v2;
        v32 = v0;
        v33 = v1;
        v30 = uu_tail::follow::files::FileHandling::get(v2, v0, v1);
        if *(v30 as &i32) == 2 {
            if v25 == 0x1000 {
                goto LABEL_506194;
            }
            if !*((a3 + 72) as &i8) {
                memcpy(&v6, &v14, 176);
                uu_tail::follow::files::FileHandling::update_metadata(v2, v0, v1, &v6);
                return v52;
            }
            if !(*((a1 + 142) as &i8) != 2) || !(!(*((a1 + 142) as &i8) & 1)) {
                v3 = uucore::util_name();
                v4 = v42;
                eprint!("{}: ", &v3);
                v3 = 0;
                v4 = *((&v8 as &char + 8) as &i128);
                v5 = 1;
                eprintln!("{} has been replaced with an untailable file", &v3);
                memcpy(&v6, &v14, 176);
                uu_tail::follow::files::FileHandling::update_metadata(v2, v0, v1, &v6);
                return v52;
            }
            v3 = uucore::util_name();
            v4 = v41;
            eprint!("{}: ", &v3);
            v3 = 0;
            v4 = *((&v8 as &char + 8) as &i128);
            v5 = 1;
            eprintln!("{} has been replaced with an untailable file; giving up on this name", &v3);
            if *(a1 as &i32) == 3 {
                core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
            }
            *((*((a1 + 24) as &i64) + 32) as &i64)();
            v6 = uu_tail::follow::files::FileHandling::remove(v2, v0, v1);
            if uu_tail::follow::files::FileHandling::no_files_remaining(v2, a3) as i8 {
                v3 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v6 = v3;
                alloc::boxed::Box<T>::new(&v6);
                return v52;
            }
        } else if v25 == 0x1000 {
LABEL_506574:
            v36 = 0xf000 & *((v30 + 56) as &i32);
            if v36 != 0x1000 && v36 != 0x2000 && v36 != 0x8000 {
                v3 = uucore::util_name();
                v4 = v44;
                eprint!("{}: ", &v3);
                v3 = 0;
                v4 = *((&v8 as &char + 8) as &i128);
                v5 = 1;
                eprintln!("{} has become accessible", &v3);
                v48 = uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1);
                goto LABEL_506a57;
            }
            if !*((v30 + 200) as &i64) {
                v3 = uucore::util_name();
                v4 = v46;
                eprint!("{}: ", &v3);
                v3 = 0;
                v4 = *((&v8 as &char + 8) as &i128);
                v5 = 1;
                eprintln!("{} has appeared;  following new file", &v3);
                v48 = uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1);
                goto LABEL_506a57;
            }
            v43 = v30;
            if <notify::event::EventKind as core::cmp::PartialEq>::eq(a2 + 32) as i8 || *((a1 + 141) as &i8) && *((v43 + 40) as &i64) != v15 {
                v3 = uucore::util_name();
                eprint!("{}: ", &v3);
                v3 = 0;
                v4 = *((&v8 as &char + 8) as &i128);
                v5 = 1;
                eprintln!("{} has been replaced;  following new file", &v3);
                v48 = uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1);
                goto LABEL_506a57;
            } else {
                v6 = <std::fs::Metadata as uu_tail::paths::MetadataExtTail>::got_truncated(v43, &v14);
                if v6 {
                    return v52;
                }
                if !*((&v6 as &char + 8) as &i8) {
LABEL_506c8c:
                    v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v19);
                    v3 = v6;
                    v9 = alloc::vec::Vec<T,A>::push(&v3);
                    memcpy(&v6, &v14, 176);
                    uu_tail::follow::files::FileHandling::update_metadata(v2, v0, v1, &v6);
                    return v52;
                }
                v3 = uucore::util_name();
                v4 = v51;
                eprint!("{}: ", &v3);
                *(&v3.field_0 as &struct24) = struct24 {
                    field_0: &v8
                    field_16: <UNKNOWN>
                };
                v6 = Arguments {
                    pieces: ["", ": file truncated\n"]
                    args: [&v3]
                    fmt: 0
                };
                std::io::stdio::_eprint(&v6);
                v48 = uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1);
LABEL_506a57:
                if !v48 {
                    goto LABEL_506c8c;
                }
            }
        } else {
            v37 = 0xf000 & *((v30 + 56) as &i32);
            if !(v37 != 0x1000) || !(v37 != 0x8000) || !(v37 != 0x2000) {
                if !*((v30 + 200) as &i64) {
                    v3 = uucore::util_name();
                    v4 = v47;
                    eprint!("{}: ", &v3);
                    v3 = 0;
                    v4 = *((&v8 as &char + 8) as &i128);
                    v5 = 1;
                    eprintln!("{} has been replaced with an untailable file", &v3);
                    memcpy(&v6, &v14, 176);
                    uu_tail::follow::files::FileHandling::update_metadata(v2, v0, v1, &v6);
                    return v52;
                }
                uu_tail::follow::files::FileHandling::reset_reader(v2, v0, v1);
                memcpy(&v6, &v14, 176);
                uu_tail::follow::files::FileHandling::update_metadata(v2, v0, v1, &v6);
                return v52;
            }
        }
    } else {
        v30 = uu_tail::follow::files::FileHandling::get(v2, v0, v1);
        if !(*(v30 as &i32) == 2) {
            goto LABEL_506574;
        }
LABEL_506194:
        v3 = uucore::util_name();
        eprint!("{}: ", &v3);
        *(&v3.field_0 as &struct24) = struct24 {
            field_0: 0
            field_16: <UNKNOWN>
        };
        v4 = *((&v8 as &char + 8) as &i128);
        v5 = 1;
        eprintln!("{} has appeared;  following new file", &v3);
        if uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1) {
            return v52;
        }
        v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v19);
        v3 = v6;
        v9 = alloc::vec::Vec<T,A>::push(&v3);
    }
    memcpy(&v6, &v14, 176);
    uu_tail::follow::files::FileHandling::update_metadata(v2, v0, v1, &v6);
    return v52;
}
