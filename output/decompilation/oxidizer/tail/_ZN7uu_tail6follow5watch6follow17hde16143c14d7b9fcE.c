fn uu_tail::follow::watch::follow(a0: i384, a1: i64) -> long long {
    let v0: u8;  // [bp-0x2ca]
    let v1: u8;  // [bp-0x2c9]
    let v2: void*;  // [bp-0x2c8], Other Possible Types: struct16
    let v3: u128;  // [bp-0x2c8]
    let v5: u64;  // [bp-0x2c0]
    let v6: void*;  // [bp-0x2b8]
    let v7: i64;  // [bp-0x2b0]
    let v8: u64;  // [sp-0x2a8], Other Possible Types: struct_2 *
    let v9: u64;  // [bp-0x2a8]
    let v10: u128;  // [bp-0x2a8]
    let v11: u64;  // [sp-0x2a0], Other Possible Types: struct_6 *
    let v12: i64;  // [bp-0x2a0]
    let v13: u64;  // [sp-0x298], Other Possible Types: struct_2 *
    let v14: u64;  // [bp-0x290]
    let v15: void*;  // [bp-0x288]
    let v16: void*;  // [bp-0x270]
    let v17: u64;  // [bp-0x270]
    let v18: u64;  // [bp-0x268]
    let v19: u128;  // [bp-0x268]
    let v20: u64;  // [bp-0x260]
    let v21: u8;  // [bp-0x258]
    let v22: u64;  // [bp-0x250]
    let v23: u64;  // [bp-0x248]
    let v24: u64;  // [bp-0x240]
    let v25: u32;  // [bp-0x238]
    let v26: u32;  // [bp-0x234]
    let v27: u64;  // [bp-0x230]
    let v28: Result<struct16, struct9>;  // [sp-0x228], Other Possible Types: u128, struct24
    let v29: u128;  // [bp-0x228], Other Possible Types: struct40
    let v30: u128;  // [bp-0x228]
    let v31: struct40;  // [bp-0x228]
    let v32: u64;  // [bp-0x220], Other Possible Types: struct_8 *
    let v33: i64;  // [bp-0x220]
    let v34: u64;  // [bp-0x218], Other Possible Types: struct_2 *
    let v35: u64;  // [bp-0x218]
    let v36: u128;  // [bp-0x218]
    let v37: u64;  // [sp-0x210]
    let v38: u64;  // [sp-0x208], Other Possible Types: void*
    let v39: u64;  // [bp-0x1f8]
    let v40: u64;  // [bp-0x170], Other Possible Types: struct_2 *
    let v41: u64;  // [bp-0x170]
    let v42: u64;  // [bp-0x168]
    let v43: u64;  // [bp-0x158]
    let v44: u128;  // [bp-0x150]
    let v45: u64;  // [bp-0x140]
    let v46: u128;  // [bp-0x138]
    let v47: u64;  // [bp-0x128]
    let v48: u128;  // [bp-0x120]
    let v49: u64;  // [bp-0x110]
    let v50: struct40;  // [bp-0x108]
    let v51: u448;  // [bp-0xe0]
    let v52: i8;  // [bp-0xa8]
    let v54: u64;  // r13
    let v55: struct56;  // r12
    let v56: u32;  // eax
    let v57: u8;  // bl
    let v58: i64;  // rax
    let v59: u64;  // rbx
    let v60: u64;  // rbp
    let v61: struct24;  // r15
    let v62: u32;  // eax
    let v63: u64;  // rdx
    let v64: i64;  // rax
    let v65: u128;  // xmm0
    let v66: i64;  // rax
    let v67: u128;  // xmm0
    let v68: i64;  // rax

    v54 = a0 + 56;
    if !uu_tail::follow::files::FileHandling::no_files_remaining(v54, a1) as i8 || uu_tail::follow::files::FileHandling::only_stdin_remaining(v54) as i8 {
        v55 = a0;
        v56 = *((v55 + 136) as &i32);
        v26 = v56;
        v1 = *((a1 + 74) as &i8);
        v43 = *((a1 + 48) as &i64);
        v25 = *((a1 + 56) as &i32);
        v27 = "src/uu/tail/src/follow/watch.rs";
        v0 = *((a1 + 76) as &i8);
        if *((a1 + 76) as &i8) == 2 {
            goto LABEL_506f60;
        } else {
            goto LABEL_0x506f47;
        }
    } else {
        <T as alloc::slice::hack::ConvertVec>::to_vec(a1);
        v34 = v20;
        v28 = *(&v16 as &i128);
        v37 = 1;
        v64 = alloc::boxed::Box<T>::new(&v28);
        goto LABEL_50766c;
    }
    loop {
LABEL_506f60:
        if (*((v55 + 142) as &i8) & 1) && *((v55 + 140) as &i8) {
            v2 = struct16 {
                field_0: *((v55 + 40) as &i64)
                field_8: *((v55 + 40) as &i64) + *((v55 + 48) as &i64) * 24
            };
            loop {
                v58 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v2);
                if !v58 {
                    break;
                }
                v59 = *((v58 + 8) as &i64);
                v60 = *((v58 + 16) as &i64);
                v28 = std::fs::metadata(v59, v60);
                if let Ok(_) = v28 {
                    v61 = uu_tail::follow::files::FileHandling::get(v54, v59, v60);
                    v28 = std::fs::metadata(v59, v60);
                    core::result::Result<T,E>::unwrap(&v51, &v28);
                    v62 = *(&v52 as &i32) & 0xf000;
                    if (v62 == 0x1000 || v62 == 0x8000 || v62 == 0x2000) && !*((v61 + 200) as &i64) {
                        v17 = uucore::util_name();
                        v18 = v63;
                        eprint!("{}: ", &v17);
                        v16 = 0;
                        v19 = *((v61 + 184) as &i128) as u128;
                        v21 = 1;
                        eprintln!("{} has appeared;  following new file", &v16);
                        uu_tail::follow::files::FileHandling::update_metadata(v54 as u32, v59, v60, &v51);
                        v64 = uu_tail::follow::files::FileHandling::update_reader(v54 as u32, v59, v60);
                        if !(!v64 && (v28 = uu_tail::follow::files::FileHandling::tail_file(v54, v59, v60, (v1) as u8 as u64), v64 = v28 as i64, !v28 as i64)) {
                            goto LABEL_50766c;
                        }
                        if *(v7 as &i32) == 3 {
                            goto LABEL_507848;
                        }
                        v64 = uu_tail::follow::watch::WatcherRx::watch_with_parent(*((v7 + 16) as &i64), *((v7 + 24) as &i64), v59, v60);
                        v31 = v29;
                        v8 = v9;
                        v11 = v12;
                        v32 = v33;
                        v34 = v35;
                        goto LABEL_50766c;
                    }
                }
            }
            v55 = a0;
        }
        if *(v55 as &i32) == 3 {
LABEL_507848:
            core::option::unwrap_failed(); /* do not return */
        }
        std::sync::mpmc::Receiver<T>::recv_timeout(&v16, v55, v43, v25);
        v2 = 0;
        v5 = 8;
        v6 = 0;
        match (v16) {
            5 => {
                v8 = "inotify";
                v11 = <&T as core::fmt::Display>::fmt;
                v28 = &g_5bc160;
                v32 = 2;
                v38 = 0;
                v34 = &v8;
                v37 = 1;
                v29 = core::option::Option<T>::map_or_else(v63);
                v37 = 1;
                v29 = v44;
                v34 = v45;
                v68 = alloc::boxed::Box<T>::new(&v29);
                goto LABEL_5077fc;
            }
            6 => {
                v65 = *(&v18 as &i128);
                v36 = *(&v21 as &i128);
                v38 = v23;
                v28 = v65;
                if v34 && uu_tail::follow::files::FileHandling::contains_key(v54, *((v32 + 8) as &i64), *((v32 + 16) as &i64)) {
                    uu_tail::follow::watch::Observer::handle_event(&v8, v55, &v28, a1);
                    v64 = v11;
                    if v8 == 0x8000000000000000 {
                        goto LABEL_50766c;
                    }
                    v2 = v8;
                    v5 = v64;
                    v6 = v13;
                    v55 = a0;
                    break;
                }
                break;
            }
            7 => {
                v57 = 1;
                if v18 as i8 {
                    v40 = 1;
                    v40 = v41 & -0x100 | 1;
                    v8 = &v40;
                    v11 = <std::sync::mpsc::RecvTimeoutError as core::fmt::Display>::fmt;
                    v28 = "RecvTimeoutError: ";
                    v32 = 1;
                    v38 = 0;
                    v34 = &v8;
                    v37 = 1;
                    v29 = core::option::Option<T>::map_or_else(v63);
                    v37 = 1;
                    v29 = v48;
                    v34 = v49;
                    v68 = alloc::boxed::Box<T>::new(&v29);
LABEL_5077fc:
                    v64 = v68;
                    v57 = 1;
LABEL_50766c:
                    return v64;
                }
                break;
            }
            _ => {
LABEL_50756d:
                v39 = v24;
                v67 = *(&v16 as &i128);
                v38 = *(&v22 as &i128);
                v34 = *(&v20 as &i128);
                v30 = v67;
                v40 = &v28;
                v42 = <notify::error::Error as core::fmt::Display>::fmt;
                v8 = "NotifyError: ";
                v11 = 1;
                v15 = 0;
                v13 = &v40;
                v14 = 1;
                v9 = core::option::Option<T>::map_or_else(v63);
                v14 = 1;
                v9 = v46;
                v13 = v47;
                v64 = alloc::boxed::Box<T>::new(&v9);
                goto LABEL_50766c;
            }
        }
        if !(!std::io::error::Error::kind(v18)) {
            goto LABEL_50756d;
        }
        v13 = v24;
        v10 = *(&v22 as &i128);
        if v24 && uu_tail::follow::files::FileHandling::contains_key(v54, *((v11 + 8) as &i64), *((v11 + 16) as &i64)) {
            if *(v55 as &i32) != 3 {
                *((*((v55 + 24) as &i64) + 32) as &i64)(&v28, *((v55 + 16) as &i64), *((v11 + 8) as &i64), *((v11 + 16) as &i64));
            } else {
                core::option::unwrap_failed(); /* do not return */
            }
        }
        if v0 != 2 && *((v55 + 141) as &i8) {
            uu_tail::follow::files::FileHandling::keys(&v31, v54);
            v50 = v29;
            v28 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v50);
            v6 = v34;
            v3 = v28.field_0;
        }
        loop {
            v66 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v8);
            if !v66 {
                break;
            }
            v28 = uu_tail::follow::files::FileHandling::tail_file(v54, *((v66 + 8) as &i64), *((v66 + 16) as &i64), v1);
            v64 = v28 as i64;
            if !(!v28 as i64) {
                goto LABEL_50766c;
            }
        }
        v55 = a0;
        v56 = *((v55 + 136) as &i32);
        if v0 != 2 && v56 && uu_tail::platform::unix::ProcessChecker::is_dead(&v26) as i8 {
            goto LABEL_50766c;
        }
    }
}
