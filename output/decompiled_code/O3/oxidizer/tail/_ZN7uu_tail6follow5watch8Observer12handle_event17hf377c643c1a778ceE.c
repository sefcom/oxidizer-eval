fn uu_tail::follow::watch::Observer::handle_event(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x310]
    let v1: i64;  // [sp-0x308]
    let v2: i64;  // [sp-0x300]
    let v3: i64;  // [sp-0x2e8], Other Possible Types: struct24
    let v4: i64;  // [sp-0x2e0]
    let v5: i8;  // [sp-0x2d0]
    let v6: i192;  // [sp-0x2c8], Other Possible Types: struct24, struct216, Result<struct16, struct9>
    let v7: i32;  // [bp-0x2b0]
    let v8: struct24;  // [sp-0x1e8], Other Possible Types: i192
    let v9: struct16;  // [sp-0x1d0], Other Possible Types: i64
    let v10: i64;  // [sp-0x1c8]
    let v11: i64;  // [sp-0x1c0]
    let v12: i1728;  // [sp-0x1b8], Other Possible Types: struct24, struct216, Result<struct176, struct16>
    let v13: i64;  // [sp-0x1b0]
    let v14: i8;  // [bp-0xe0]
    let v15: i8;  // [bp-0xb8]
    let v16: i8;  // [bp-0xa8]
    let v18: i64;  // rcx
    let v19: i64;  // r8
    let v20: i64;  // r9
    let v21: i64;  // r15
    let v22: i64;  // r12
    let v23: i64;  // r13
    let v24: i32;  // eax
    let v25: i32;  // eax
    let v26: i32;  // eax
    let v27: i8;  // al
    let v28: i64;  // r14
    let v29: i32;  // r15d
    let v30: i64;  // rcx
    let v31: i64;  // r8
    let v32: i64;  // r9
    let v33: i64;  // rax
    let v34: i64;  // r8
    let v35: i64;  // r9
    let v36: i64;  // rdx
    let v37: i64;  // rbx
    let v38: i64;  // r14
    let v39: i64;  // rcx
    let v40: i64;  // r8
    let v41: i64;  // r9
    let v42: i64;  // rax
    let v43: i64;  // rdi
    let v44: i64;  // rsi
    let v45: i64;  // rdx
    let v46: i64;  // rcx
    let v47: i64;  // r8
    let v48: i64;  // r9
    let v49: i64;  // rcx
    let v50: i64;  // rcx
    let v51: i64;  // rsi
    let v52: i32;  // ecx
    let v53: i64;  // rcx
    let v54: i64;  // rdx
    let v56: i64;  // rcx
    let v57: i64;  // rax
    let v58: i64;  // rdx
    let v59: i64;  // rdx
    let v60: i64;  // rdx
    let v61: i64;  // r15
    let v62: i64;  // rdx
    let v63: i64;  // rdx
    let v64: i64;  // rdx
    let v65: i64;  // rdx
    let v66: i64;  // rax
    let v67: i64;  // rcx
    let v68: i64;  // rdx
    let v69: i64;  // rdx
    let v70: i64;  // rdx
    let v71: i64;  // rdx
    let v72: i64;  // rcx
    let v73: i64;  // rcx
    let v74: i64;  // rax

    v18 = a3;
    v19 = a4;
    v20 = a5;
    v21 = *((a2 + 16) as &i64);
    if !v21 {
        core::option::unwrap_failed(); /* do not return */
    }
    v22 = a3;
    v23 = *((a2 + 8) as &i64);
    v9 = 0;
    v10 = 8;
    v11 = 0;
    v2 = a1 + 56;
    v0 = *((v23 + 8) as &i64);
    v1 = *((v23 + 16) as &i64);
    v8 = <alloc::string::String as core::clone::Clone>::clone(uu_tail::follow::files::FileHandling::get(a1 + 56, v0, v1, a3, a4, a5) + 176);
    v24 = *((a2 + 32) as &i8);
    if v24 == 2 {
        if *((a2 + 33) as &i8) == 3 {
            vvar_1484{reg 24} = a0;
            *((v73 + 16) as &i64) = v11;
            *(v73 as &i128) = v9;
            return v74;
        }
        goto LABEL_506113;
    } else {
        if v24 == 3 {
            v25 = *((a2 + 33) as &i8);
            if v25 == 1 {
                if *((a2 + 34) as &i8) {
                    vvar_1488{reg 24} = a0;
                    *((v73 + 16) as &i64) = v11;
                    *(v73 as &i128) = v9;
                    return v74;
                }
                goto LABEL_506113;
            }
            if v25 == 2 {
                if (*((a2 + 34) as &i8) & 5) {
                    vvar_1492{reg 24} = a0;
                    *((v73 + 16) as &i64) = v11;
                    *(v73 as &i128) = v9;
                    return v74;
                }
                goto LABEL_506113;
            }
            if v25 != 3 {
                vvar_1476{reg 24} = a0;
                *((v73 + 16) as &i64) = v11;
                *(v73 as &i128) = v9;
                return v74;
            }
            v26 = *((a2 + 34) as &i8);
            if v26 == 1 {
LABEL_506113:
                v12 = std::fs::metadata(v0, v1);
                match v12 {
                    Err(_) => {
                        vvar_1480{reg 24} = a0;
                        *((v73 + 16) as &i64) = v11;
                        *(v73 as &i128) = v9;
                        return v74;
                    },
                    Ok(_) => {
                        memcpy(&v14, &v12, 176);
                        v29 = 0xf000 & v16;
                        if v29 != 0x2000 && v29 != 0x8000 {
                            v43 = v2;
                            v44 = v0;
                            v45 = v1;
                            v42 = uu_tail::follow::files::FileHandling::get(v2, v0, v1, v39, v40, v41);
                            if *(v42 as &i32) != 2 {
                                if v29 == 0x1000 {
LABEL_506574:
                                    v52 = 0xf000 & *((v42 + 56) as &i32);
                                    if v52 != 0x1000 && v52 != 0x2000 && v52 != 0x8000 {
                                        v3 = uucore::util_name();
                                        v4 = v62;
                                        eprint!("{:?}: ", &v3);
                                        v3 = 0;
                                        v4 = *((&v8 as &char + 8) as &i128);
                                        v5 = 1;
                                        eprintln!("{:?} has become accessible", &v3);
                                        v57 = uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1, v39, v40, v41);
                                        goto LABEL_506a57;
                                    }
                                    if !*((v42 + 200) as &i64) {
                                        v3 = uucore::util_name();
                                        v4 = v63;
                                        eprint!("{:?}: ", &v3);
                                        v3 = 0;
                                        v4 = *((&v8 as &char + 8) as &i128);
                                        v5 = 1;
                                        eprintln!("{:?} has appeared;  following new file", &v3);
                                        v57 = uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1, v39, v40, v41);
                                        goto LABEL_506a57;
                                    }
                                    v61 = v42;
                                    if <notify::event::EventKind as core::cmp::PartialEq>::eq(a2 + 32) as i8 || *((a1 + 141) as &i8) && *((v61 + 40) as &i64) != v15 {
                                        v3 = uucore::util_name();
                                        v4 = v69;
                                        eprint!("{:?}: ", &v3);
                                        v3 = 0;
                                        v4 = *((&v8 as &char + 8) as &i128);
                                        v5 = 1;
                                        eprintln!("{:?} has been replaced;  following new file", &v3);
                                        v57 = uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1, v39, v40, v41);
                                        goto LABEL_506a57;
                                    } else {
                                        v6 = <std::fs::Metadata as uu_tail::paths::MetadataExtTail>::got_truncated(v61, &v14);
                                        v57 = v6;
                                        if !v57 {
                                            if !*((&v6 as &char + 8) as &i8) {
LABEL_506c8c:
                                                v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v23);
                                                v3 = v6;
                                                v9 = alloc::vec::Vec<T,A>::push(&v3);
                                                memcpy(&v6, &v14, 176);
                                                uu_tail::follow::files::FileHandling::update_metadata(v2, v0, v1, &v6, v40, v41);
                                                vvar_1525{reg 24} = a0;
                                                *((v73 + 16) as &i64) = v11;
                                                *(v73 as &i128) = v9;
                                                return v74;
                                            }
                                            v3 = uucore::util_name();
                                            v4 = v70;
                                            eprint!("{:?}: ", &v3);
                                            eprintln!("{:?}: file truncated", &v8);
                                            v57 = uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1, v39, v40, v41);
LABEL_506a57:
                                            if !v57 {
                                                goto LABEL_506c8c;
                                            }
                                        }
                                        v72 = a0;
                                        *((v72 + 8) as &i64) = v57;
                                        *((v72 + 16) as &i64) = v71;
                                        *(v72 as &i64) = 0x8000000000000000;
                                        return v74;
                                    }
                                } else {
                                    v53 = (0xf000 & *((v42 + 56) as &i32)) as u32 as u64;
                                    if v53 as i32 == 0x1000 || v53 as i32 == 0x8000 || v53 as i32 == 0x2000 {
                                        if *((v42 + 200) as &i64) {
                                            uu_tail::follow::files::FileHandling::reset_reader(v2, v0, v1, v53, v40, v41);
                                        } else {
                                            v3 = uucore::util_name();
                                            v4 = v64;
                                            eprint!("{:?}: ", &v3);
                                            v3 = 0;
                                            v4 = *((&v8 as &char + 8) as &i128);
                                            v5 = 1;
                                            eprintln!("{:?} has been replaced with an untailable file", &v3);
                                        }
                                    }
                                }
                            } else {
                                if v29 == 0x1000 {
                                    goto LABEL_506194;
                                }
                                if *((v22 + 72) as &i8) {
                                    if *((a1 + 142) as &i8) == 2 || (*((a1 + 142) as &i8) & 1) {
                                        v3 = uucore::util_name();
                                        v4 = v60;
                                        eprint!("{:?}: ", &v3);
                                        v3 = 0;
                                        v4 = *((&v8 as &char + 8) as &i128);
                                        v5 = 1;
                                        eprintln!("{:?} has been replaced with an untailable file", &v3);
                                    } else {
                                        v3 = uucore::util_name();
                                        v4 = v59;
                                        eprint!("{:?}: ", &v3);
                                        v3 = 0;
                                        v4 = *((&v8 as &char + 8) as &i128);
                                        v5 = 1;
                                        eprintln!("{:?} has been replaced with an untailable file; giving up on this name", &v3);
                                        if *(a1 as &i32) == 3 {
                                            core::option::unwrap_failed(); /* do not return */
                                        }
                                        *((*((a1 + 24) as &i64) + 32) as &i64)();
                                        v6 = uu_tail::follow::files::FileHandling::remove(v2, v0, v1, v40, v41);
                                        if uu_tail::follow::files::FileHandling::no_files_remaining(v2, v22, v59, v39, v40, v41) as i8 {
                                            v3 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                                            v6 = v3;
                                            v57 = alloc::boxed::Box<T>::new(&v6);
                                            vvar_1502{reg 24} = a0;
                                            *((v72 + 8) as &i64) = v57;
                                            *((v72 + 16) as &&i64) = &g_5bbdb0;
                                            *(v72 as &i64) = 0x8000000000000000;
                                            return v74;
                                        }
                                    }
                                }
                            }
                        } else {
                            v42 = uu_tail::follow::files::FileHandling::get(v2, v0, v1, v39, v40, v41);
                            if !(*(v42 as &i32) == 2) {
                                goto LABEL_506574;
                            }
LABEL_506194:
                            v3 = uucore::util_name();
                            v4 = v54;
                            eprint!("{:?}: ", &v3);
                            v3 = 0;
                            v4 = *((&v8 as &char + 8) as &i128);
                            v5 = 1;
                            eprintln!("{:?} has appeared;  following new file", &v3);
                            v57 = uu_tail::follow::files::FileHandling::update_reader(v2, v0, v1, v39, v40, v41);
                            if v57 {
                                vvar_1510{reg 24} = a0;
                                *((v72 + 8) as &i64) = v57;
                                *((v72 + 16) as &i64) = v71;
                                *(v72 as &i64) = 0x8000000000000000;
                                return v74;
                            }
                            v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v23);
                            v3 = v6;
                            v9 = alloc::vec::Vec<T,A>::push(&v3);
                        }
                        memcpy(&v6, &v14, 176);
                        uu_tail::follow::files::FileHandling::update_metadata(v2, v0, v1, &v6, v40, v41);
                        vvar_1518{reg 24} = a0;
                        *((v73 + 16) as &i64) = v11;
                        *(v73 as &i128) = v9;
                        return v74;
                    },
                }
            } else {
                if v26 != 3 {
                    if v26 == 2 {
                        goto LABEL_505cec;
                    }
                } else {
                    if *((a1 + 142) as &i8) - 1 < 2 {
                        vvar_1496{reg 24} = a0;
                        *((v73 + 16) as &i64) = v11;
                        *(v73 as &i128) = v9;
                        return v74;
                    }
                    v28 = v21 * 24 - 24 + v23;
                    v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v28);
                    v12 = v6;
                    v9 = alloc::vec::Vec<T,A>::push(&v12);
                    v6 = uu_tail::follow::files::FileHandling::remove(v2, v0, v1, v34, v35);
                    v37 = *((v28 + 8) as &i64);
                    v38 = *((v28 + 16) as &i64);
                    v12 = uu_tail::follow::files::PathData::from_other_with_path(&v6, v37, v38);
                    memcpy(&v6, &v12, 216);
                    if *(v2 as &i64) == 0x8000000000000000 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    uu_tail::follow::files::FileHandling::insert(v2, v37, v38, &v6, <std::path::PathBuf as core::cmp::PartialEq>::eq(*((a1 + 64) as &i64), *((a1 + 72) as &i64), *((v23 + 8) as &i64), *((v23 + 16) as &i64), v34, v35) as i32, v35);
                    if *(a1 as &i32) == 3 {
                        goto LABEL_506e1c;
                    }
                    if *(a1 as &i32) == 3 {
                        goto LABEL_506e1c;
                    } else {
                        v66 = uu_tail::follow::watch::WatcherRx::watch_with_parent(*((a1 + 16) as &i64), *((a1 + 24) as &i64), v37, v38);
                        if v66 {
                            v67 = a0;
                            *((v67 + 8) as &i64) = v66;
                            *((v67 + 16) as &i64) = v68;
                            *(v67 as &i64) = 0x8000000000000000;
                            return v74;
                        }
                    }
                }
            }
        } else if v24 == 4 && *((a2 + 33) as &i8) < 2 {
LABEL_505cec:
            v27 = *((a1 + 142) as &i8);
            if (v27 & 1) {
                if !*((v22 + 72) as &i8) {
                    v12 = uucore::util_name();
                    v13 = v36;
                    eprint!("{:?}: ", &v12);
                    eprintln!("{:?}: {:?}", &v8, "No such file or directory");
                    v50 = v49 | -0x100 | !*((a1 + 141) as &i8);
                    if !uu_tail::follow::files::FileHandling::files_remaining(v2, v51, v36, v49, v31, v32) as i8 && !!*((a1 + 141) as &i8) {
                        v12 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                        v6 = v12;
                        v7 = 1;
                        v56 = a0;
                        *((v56 + 8) as &double) = alloc::boxed::Box<T>::new(&v6);
                        *((v56 + 16) as &&i64) = &g_5bbdb0;
                        *(v56 as &i64) = 0x8000000000000000;
                        return v74;
                    }
                } else {
                    v33 = uu_tail::follow::files::FileHandling::get_mut_metadata(v2, v0, v1, v30, v31, v32);
                    if v33 {
                        v46 = 0xf000 & *((v33 + 56) as &i32);
                        if (v46 == 0x1000 || v46 == 0x2000 || v46 == 0x8000) && *((uu_tail::follow::files::FileHandling::get(v2, v0, v1, v46, v31, v32) + 200) as &i64) {
                            v12 = uucore::util_name();
                            v13 = v58;
                            eprint!("{:?}: ", &v12);
                            v3 = 0;
                            v4 = *((&v8 as &char + 8) as &i128);
                            v5 = 1;
                            eprintln!("{:?} {:?}: {:?}", &v3, "has become inaccessible", "No such file or directory");
                        }
                    }
                    if <std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(v0, v1, v65) as i8 && !<T as core::slice::cmp::SliceContains>::slice_contains(v23, *((a1 + 40) as &i64), *((a1 + 48) as &i64), v30, v31, v32) as i8 {
                        v12 = uucore::util_name();
                        v13 = v58;
                        eprint!("{:?}: ", &v12);
                        eprintln!("directory containing watched file was removed");
                        v12 = uucore::util_name();
                        v13 = v58;
                        eprint!("{:?}: ", &v12);
                        eprintln!("{:?} cannot be used, reverting to polling", "inotify");
                        v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v23);
                        v12 = v6;
                        alloc::vec::Vec<T,A>::push(a1 + 32, &v12);
                        if *(a1 as &i32) == 3 {
LABEL_506e1c:
                            core::option::unwrap_failed(); /* do not return */
                        }
                    }
                }
                uu_tail::follow::files::FileHandling::reset_reader(v2, v0, v1, v50, v31, v32);
            } else if v27 != 2 && *((a1 + 140) as &i8) {
                if *(a1 as &i32) == 3 {
                    goto LABEL_506e1c;
                } else {
                    v6 = uu_tail::follow::files::FileHandling::remove(v2, v0, v1, v47, v48);
                }
            }
        }
        v73 = a0;
        *((v73 + 16) as &i64) = v11;
        *(v73 as &i128) = v9;
        return v74;
    }
}
