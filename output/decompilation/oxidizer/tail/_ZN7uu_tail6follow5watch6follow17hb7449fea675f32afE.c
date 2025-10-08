fn uu_tail::follow::watch::follow(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x2b9]
    let v1: void*;  // [bp-0x2b8]
    let v2: u8;  // [bp-0x2a9]
    let v3: u64;  // [bp-0x2a8]
    let v4: struct640;  // [bp-0x2a0], Other Possible Types: u64
    let v5: u64;  // [bp-0x298]
    let v6: u128;  // [bp-0x298]
    let v7: u64;  // [bp-0x290]
    let v8: void*;  // [bp-0x288], Other Possible Types: u64
    let v9: u32;  // [bp-0x274]
    let v10: struct24;  // [bp-0x270], Other Possible Types: struct640, u64
    let v11: struct640;  // [bp-0x268], Other Possible Types: u64
    let v12: struct640;  // [bp-0x260], Other Possible Types: u64
    let v13: struct640;  // [bp-0x258]
    let v14: u64;  // [bp-0x250]
    let v16: u64;  // [bp-0x240]
    let v17: struct28;  // [bp-0x238], Other Possible Types: struct640
    let v18: struct640;  // [bp-0x238]
    let v19: struct640;  // [bp-0x238]
    let v20: u64;  // [bp-0x228]
    let v21: u32;  // [bp-0x204]
    let v22: core::fmt::Arguments;  // [bp-0x200]
    let v23: u32;  // [bp-0x1fc]
    let v24: struct28;  // [bp-0x1f8], Other Possible Types: struct640, u128
    let v25: struct8;  // [bp-0x1f8], Other Possible Types: core::result::Result<std::fs::Metadata, std::io::error::Error>, struct16
    let v26: struct640;  // [bp-0x1f8], Other Possible Types: u128
    let v27: struct640;  // [bp-0x1f8], Other Possible Types: u128
    let v28: struct640;  // [bp-0x1f0]
    let v29: struct640;  // [bp-0x1f0]
    let v30: struct640;  // [bp-0x1f0]
    let v31: struct640;  // [bp-0x1e8], Other Possible Types: u64
    let v32: struct640;  // [bp-0x1e8]
    let v33: struct640;  // [bp-0x1e8]
    let v34: u32;  // [bp-0x1e0]
    let v35: iNone;  // [bp-0x1d8]
    let v36: u64;  // [bp-0x1c8]
    let v37: u8;  // [bp-0x140]
    let v38: u64;  // [bp-0x130]
    let v39: alloc::string::String;  // [bp-0x128]
    let v40: u64;  // [bp-0x118]
    let v41: alloc::string::String;  // [bp-0x110]
    let v42: u64;  // [bp-0x100]
    let v43: alloc::string::String;  // [bp-0xf8]
    let v44: u64;  // [bp-0xe8]
    let v45: struct176;  // [bp-0xe0]
    let v47: u64;  // r15
    let v48: core::fmt::Arguments;  // r12
    let v49: i64;  // r12
    let v50: core::fmt::Arguments;  // eax
    let v51: u64;  // r13
    let v52: void*;  // r14
    let v53: i64;  // rbx
    let v54: u32;  // eax
    let v55: u64;  // rdx
    let v56: u64;  // rbx
    let v57: u64;  // rbp
    let v58: alloc::string::String;  // rbx
    let v60: u64;  // rbp
    let v61: alloc::string::String;  // r13
    let v63: u128;  // xmm0

    v47 = a0 + 56;
    if !uu_tail::follow::files::FileHandling::no_files_remaining(v47, *((a1 + 72) as &i8)) || uu_tail::follow::files::FileHandling::only_stdin_remaining(v47) {
        v49 = a0;
        v50 = *((v49 + 136) as &i32);
        v2 = *((a1 + 74) as &i8);
        v38 = *((a1 + 48) as &i64);
        v23 = *((a1 + 56) as &i32);
        v22 = v50;
        v0 = *((a1 + 76) as &i8);
        if *((a1 + 76) as &i8) == 2 {
            goto LABEL_4a523f;
        }
        loop {
            if v50 && uu_tail::platform::unix::ProcessChecker::is_dead(v22) {
                break;
            }
            continue;
LABEL_4a523f:
            v9 = v2;
            if *((a0 + 142) as &i8) != 2 && (*((a0 + 142) as &i8) & 1) && *((a0 + 140) as &i8) == 1 && *((a0 + 48) as &i64) {
                v51 = *((a0 + 40) as &i64);
                v4 = *((a0 + 48) as &i64) * 24;
                v52 = 0;
                do {
                    v25 = std::fs::metadata(*((8 + v51 + v52 as &u8) as &i64), *((16 + v51 + v52 as &u8) as &i64));
                    v32 = v31;
                    v26 = v24;
                    v29 = v28;
                    v18 = v17;
                    if v26.field_0 == 2 {
                        continue;
                    }
                    v53 = uu_tail::follow::files::FileHandling::get(v47, *((8 + v51 + v52 as &u8) as &i64), *((16 + v51 + v52 as &u8) as &i64));
                    v25 = std::fs::metadata(*((8 + v51 + v52 as &u8) as &i64), *((16 + v51 + v52 as &u8) as &i64));
                    v45 = core::result::Result<T,E>::unwrap(&v25);
                    v54 = (&v45)[7].field_0 & 0xf000;
                    if v54 != 0x1000 && v54 != 0x8000 {
                        v32 = v31;
                        v26 = v24;
                        v29 = v28;
                        v18 = v17;
                        if v54 != 0x2000 {
                            continue;
                        }
                    }
                    v32 = v31;
                    v26 = v24;
                    v29 = v28;
                    v18 = v17;
                    if *((v53 + 200) as &i64) {
                        continue;
                    }
                    v10 = uucore::util_name();
                    v11 = v55;
                    eprint!("{}: ", &v10);
                    v10 = 0;
                    v11 = *((v53 + 184) as &i64);
                    v12 = *((v53 + 192) as &i64);
                    v13 = 1;
                    eprintln!("{} has appeared;  following new file", &v10);
                    uu_tail::follow::files::FileHandling::update_metadata(v47, *((8 + v51 + v52 as &u8) as &i64), *((16 + v51 + v52 as &u8) as &i64), &v45);
                    v48 = uu_tail::follow::files::FileHandling::update_reader(v47, *((8 + v51 + v52 as &u8) as &i64), *((16 + v51 + v52 as &u8) as &i64));
                    if v48 {
                        goto LABEL_4a58be;
                    }
                    v25 = uu_tail::follow::files::FileHandling::tail_file(v47, *((8 + v51 + v52 as &u8) as &i64), *((16 + v51 + v52 as &u8) as &i64), v9);
                    v48 = v25.field_0;
                    if v25.field_0 {
                        goto LABEL_4a58be;
                    }
                    if *(v1 as &i32) == 3 {
                        goto LABEL_4a5bd1;
                    }
                    v48 = uu_tail::follow::watch::WatcherRx::watch_with_parent(v1[16] as i64, v1[24] as i64, *((8 + v51 + v52 as &u8) as &i64), *((16 + v51 + v52 as &u8) as &i64));
                    v32 = v33;
                    v26 = v27;
                    v29 = v30;
                    v18 = v19;
                    if !v48 {
                        goto LABEL_4a52ae;
                    } else {
                        goto LABEL_4a58be;
                    }
LABEL_4a52ae:
                    v17 = v18;
                    v28 = v29;
                    v24 = v26;
                    v31 = v32;
                    v52 += 24;
                } while (v4 != v52);
                goto LABEL_4a5bd1;
            }
            if *(v1 as &i64) == 3 {
LABEL_4a5bd1:
                core::option::unwrap_failed(); /* do not return */
            }
            std::sync::mpmc::Receiver<T>::recv_timeout(&v10, *(v1 as &i64), v1[8] as i64, v38, v23);
            v5 = 0;
            v7 = 8;
            v8 = 0;
            v4 = v10;
            match (v10) {
                5 => {
                    v39 = format!("{} resources exhausted", "inotify");
                    v24 = struct28 {
                        field_0: *(&v39.vec.buf.inner.cap as &i128)
                        field_16: v40
                        field_24: 1
                    };
                    v48 = alloc::boxed::Box<T>::new(&v24) as u64;
                    v3 = core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v5) as u64 & -0x100 | 1;
                    break;
                }
                6 => {
                    v56 = 8;
                    if v13.field_0 && uu_tail::follow::files::FileHandling::contains_key(v47, *((v12 + 8) as &i64), *((v12 + 16) as &i64)) {
                        uu_tail::follow::watch::Observer::handle_event(&v24, v1, &v11, v21);
                        v56 = v28;
                        v57 = v31;
                        if (((0 ^ v24) & (0 ^ -(v24))) >> 63) as char {
                            goto LABEL_4a5bc2;
                        }
                        v5 = v24;
                        v7 = v56;
                        v8 = v57;
                    }
                    v3 = core::ptr::drop_in_place<notify_types::event::Event>(&v11) as u64 & -0x100 | 1;
                    v58 = v56;
                    goto LABEL_4a5773;
                }
                7 => {
                    if v11.field_0 {
                        v37 = v11.field_0;
                        v43 = format!("RecvTimeoutError: {}", &v37 as u64);
                        v34 = 1;
                        v27 = *(&v43.vec.buf.inner.cap as &i128);
                        v31 = v44;
                        v56 = alloc::boxed::Box<T>::new(&v27) as u64;
LABEL_4a5bc2:
                        v48 = v56;
                        break;
                    }
                    v3 = 1;
                    v56 = 8;
                    v57 = 0;
                    v58 = v56;
                    if v0 == 2 {
                        goto LABEL_4a5773;
                    }
                    v58 = v56;
                    if v1[141] as i8 {
                        v25 = uu_tail::follow::files::FileHandling::keys(v47);
                        core::iter::traits::iterator::Iterator::collect(&v17, &v25);
                        v57 = v20;
                        v8 = v57;
                        v6 = *(&v17 as &i128);
                        v58 = v7;
                    }
LABEL_4a5773:
                    v60 = v58 + v57 * 24;
                    loop {
                        v61 = v58 + 24;
                        if v58 == v60 {
                            v61 = v58;
                            if v58 == v60 {
                                break;
                            }
                        } else if v58 == v60 {
                            break;
                        }
                        if !v58 {
                            break;
                        }
                        v25 = uu_tail::follow::files::FileHandling::tail_file(v47, *((v58 + 8) as &i64), *((v58 + 16) as &i64), v9);
                        v48 = v25.field_0;
                        v58 = v61;
                        if v25.field_0 {
                            break;
                        }
                    }
                    v50 = *((v49 + 136) as &i32);
                    if v0 == 2 {
                        continue;
                    }
                    break;
                }
                _ => {
                    v36 = v16;
                    v63 = *(&v10 as &i128);
                    v35 = *(&v14 as &i128);
                    v31 = *(&v12 as &i128);
                    v26 = v63;
                    v41 = format!("NotifyError: {}", &v24);
                    v17 = struct28 {
                        field_0: *(&v41.vec.buf.inner.cap as &i128)
                        field_16: v42
                        field_24: 1
                    };
                    v48 = alloc::boxed::Box<T>::new(&v17) as u64;
                }
            }
        }
    } else {
        v10 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("no files remaining");
        v31 = v12;
        v24 = *(&v10.field_0 as &i128);
        v34 = 1;
        v48 = alloc::boxed::Box<T>::new(&v24) as u64;
    }
LABEL_4a58be:
    return v48;
}
