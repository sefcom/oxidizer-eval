fn uu_tail::follow::watch::follow(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x2ca]
    let v1: i8;  // [sp-0x2c9]
    let v2: i64;  // [sp-0x2c8]
    let v3: i64;  // [sp-0x2c0]
    let v4: i64;  // [sp-0x2b8]
    let v5: i64;  // [sp-0x2a8], Other Possible Types: struct24, struct28
    let v6: i64;  // [sp-0x2a0]
    let v7: i64;  // [sp-0x298]
    let v8: i64;  // [bp-0x290]
    let v9: i64;  // [sp-0x288]
    let v10: i64;  // [sp-0x270], Other Possible Types: Result<struct56, struct1>, struct24
    let v11: i64;  // [bp-0x268]
    let v12: i8;  // [sp-0x258]
    let v13: i32;  // [sp-0x238]
    let v14: i32;  // [sp-0x234]
    let v15: i64;  // [sp-0x230]
    let v16: i128;  // [sp-0x228], Other Possible Types: struct28, Result<struct16, struct1>, struct16, struct26, struct24
    let v17: i64;  // [sp-0x220]
    let v18: i128;  // [sp-0x218]
    let v19: i64;  // [bp-0x210]
    let v20: i128;  // [bp-0x208]
    let v21: i64;  // [sp-0x1f8]
    let v22: i64;  // [bp-0x170]
    let v23: i64;  // [sp-0x168]
    let v24: i64;  // [sp-0x160]
    let v25: i64;  // [sp-0x158]
    let v32: struct40;  // [bp-0x108]
    let v33: struct176;  // [sp-0xe0], Other Possible Types: i1408
    let v35: i64;  // rbx
    let v36: i64;  // r13
    let v37: i64;  // r12
    let v38: i32;  // eax
    let v39: i64;  // rbp
    let v40: i256;  // ymm0
    let v42: i256;  // ymm1
    let v43: i64;  // r12
    let v44: struct8;  // rax
    let v45: i64;  // r15
    let v46: i32;  // eax
    let v47: i64;  // rdx
    let v48: i128;  // xmm0
    let v49: i64;  // rax
    let v50: i64;  // rax
    let v51: i64;  // r12
    let v52: i64;  // rbp
    let v53: i128;  // xmm0
    let v54: i128;  // xmm1
    let v55: i64;  // r12
    let v56: i64;  // rbx
    let v57: i64;  // rcx
    let v58: i128;  // xmm0
    let v59: i64;  // rax
    let v62: i64;  // rdi
    let v63: i64;  // rsi
    let v64: i64;  // rdx
    let v65: i128;  // xmm0
    let v66: i128;  // xmm0
    let v67: struct8;  // rax
    let v68: i128;  // xmm0
    let v69: i128;  // xmm1

    v35 = a1;
    v36 = a0 + 56;
    if uu_tail::follow::files::FileHandling::no_files_remaining(v36, a1) as i8 && !uu_tail::follow::files::FileHandling::only_stdin_remaining(v36) as i8 {
        v10 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v16 = struct28 {
            field_0: v10
            field_16: *((&v10 as &char + 16) as &i64)
            field_24: 1
        };
        v49 = alloc::boxed::Box<T>::new(&v16);
        return v49;
    }
    v37 = a0;
    v38 = *((v37 + 136) as &i32);
    v14 = v38;
    v1 = *((a1 + 74) as &i8);
    v25 = *((a1 + 48) as &i64);
    v24 = a1;
    v13 = *((a1 + 56) as &i32);
    v15 = "src/uu/tail/src/follow/watch.rs";
    v0 = *((a1 + 76) as &i8);
    if !(v0 == 2) {
        goto LABEL_0x506f47;
    }
    loop {
        v43 = v37;
        if (*((v37 + 142) as &i8) & 1) && (v43 = v37, *((v37 + 140) as &i8)) {
            v2 = *((v37 + 40) as &i64);
            v3 = v2 + *((v37 + 48) as &i64) * 24;
            v5 = v5;
            v6 = v6;
            v16 = v16;
            v17 = v17;
            v18 = v18;
            loop {
                v18 = v18;
                v17 = v17;
                v16 = v16;
                v6 = v6;
                v5 = v5;
                v16 = v16;
                v44 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v44 {
                    v43 = a0;
                    goto LABEL_5071d5;
                }
                v35 = *((v44 + 8) as &i64);
                v39 = *((v44 + 16) as &i64);
                v16 = std::fs::metadata(v35, v39);
                v45 = uu_tail::follow::files::FileHandling::get(v36, v35, v39);
                v16 = std::fs::metadata(v35, v39);
                v33 = core::result::Result<T,E>::unwrap(&v16);
                v46 = *((&v33 as &char + 56) as &i32) & 0xf000;
                if !(v46 == 0x1000) && !(v46 == 0x8000) && !(v46 == 0x2000) || !(!*((v45 + 200) as &i64)) {
                    continue;
                }
                v10 = uucore::util_name();
                v11 = v47;
                eprint!("{:?}: ", &v10);
                v48 = *((v45 + 184) as &i128);
                v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
                v10 = 0;
                v11 = v48;
                v12 = 1;
                eprintln!("{:?} has appeared;  following new file", &v10);
                uu_tail::follow::files::FileHandling::update_metadata(v36, v35, v39, &v33);
                v49 = uu_tail::follow::files::FileHandling::update_reader(v36, v35, v39);
                if v49 {
LABEL_507558:
                    return v49;
                }
                v16 = uu_tail::follow::files::FileHandling::tail_file(v36, v35, v39, -0x100 | v1);
                v49 = v16;
                if v49 {
                    return v49;
                }
                v50 = a0;
                if *(v50 as &i32) == 3 {
                    break;
                }
                v49 = uu_tail::follow::watch::WatcherRx::watch_with_parent(*((v50 + 16) as &i64), *((v50 + 24) as &i64), v35, v39);
                v5 = v5;
                v6 = v6;
                v16 = v16;
                v17 = v17;
                v18 = v18;
                if !(v46 == 0x1000) && !(v46 == 0x8000) && !(v46 == 0x2000) || !(!*((v45 + 200) as &i64)) {
                    goto LABEL_507558;
                }
            }
            goto LABEL_507848;
        }
LABEL_5071d5:
        v51 = v43;
        if *(v51 as &i32) == 3 {
            v15 = "src/uu/tail/src/follow/watch.rs";
LABEL_507848:
            core::option::unwrap_failed(v15); /* do not return */
        }
        v10 = std::sync::mpmc::Receiver<T>::recv_timeout(v51, v25, v13);
        v2 = 0;
        v3 = 8;
        v4 = 0;
        switch (v10) {
        case 1:
            if !(v46 == 0x1000) && !(v46 == 0x8000) && !(v46 == 0x2000) || !(!*((v45 + 200) as &i64)) {
                goto LABEL_50756d;
            }
            v57 = &v10;
            v7 = *((&v10 as &char + 48) as &i64);
            v58 = *((&v10 as &char + 32) as &i128);
            v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
            v5 = v58;
            if v7 {
                v59 = v6;
                v62 = v36;
                v63 = *((v59 + 8) as &i64);
                v64 = *((v59 + 16) as &i64);
                if uu_tail::follow::files::FileHandling::contains_key(v36, *((v59 + 8) as &i64), *((v59 + 16) as &i64)) {
                    if *(v51 as &i32) != 3 {
                        *((*((v51 + 24) as &i64) + 32) as &i64)();
                    } else {
                        core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
                    }
                }
            }
            v39 = v52 | -0x100 | 1 | -0x100 | 1;
            v56 = 0;
            goto LABEL_5073a0;
        case 5:
            v5 = "inotify";
            v6 = <&T as core::fmt::Display>::fmt;
            v16 = &g_5bc160;
            v17 = 2;
            v20 = 0;
            v18 = &v5;
            v19 = 1;
            core::option::Option<T>::map_or_else();
            v16 = struct28 {
                field_0: v26
                field_16: v27
                field_24: 1
            };
            v49 = alloc::boxed::Box<T>::new(&v16);
            goto LABEL_5077fc;
        case 6:
            v53 = *((&v10 as &char + 8) as &i128);
            v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53;
            v54 = *((&v10 as &char + 24) as &i128);
            v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54;
            v18 = v54;
            v20 = *((&v10 as &char + 40) as &i64);
            v16 = v53;
            v55 = v51;
            if v18 && (v55 = v51, uu_tail::follow::files::FileHandling::contains_key(v36, *((v17 + 8) as &i64), *((v17 + 16) as &i64))) {
                v5 = uu_tail::follow::watch::Observer::handle_event(v51, &v16, v24);
                v35 = v5;
                v49 = v6;
                if v35 == 0x8000000000000000 {
                    break;
                } else {
                    v2 = v35;
                    v3 = v49;
                    v4 = v7;
                    v55 = a0;
                }
            }
            v56 = v35 | -0x100 | 1 | -0x100 | 1;
            v39 = 0;
LABEL_5073a0:
            if v0 != 2 && *((v51 + 141) as &i8) {
                v16 = uu_tail::follow::files::FileHandling::keys(v36);
                v65 = v16;
                v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v16 as &char + 16) as &i128);
                v32 = struct40 {
                    field_0: v65
                    field_16: v41 as u128
                    field_32: v20
                };
                v16 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v32);
                v4 = v18;
                v66 = v16;
                v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
                v2 = v66;
            }
            v5 = v3;
            v6 = v5 + v4 * 24;
            v67 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v67 {
                v37 = a0;
                v38 = *((v37 + 136) as &i32);
                continue;
            } else {
                v16 = uu_tail::follow::files::FileHandling::tail_file(v36, *((v67 + 8) as &i64), *((v67 + 16) as &i64), -0x100 | v1);
                v49 = v16;
                if !v49 {
                    continue;
                }
                if (~(v10) & 6) {
                    return v49;
                }
                return v49;
            }
        case 7:
            v56 = v35 | -0x100 | 1;
            v39 = v52 | -0x100 | 1;
            if !*((&v10 as &char + 8) as &i8) {
                goto LABEL_5073a0;
            }
            v22 = 1;
            v5 = &v22;
            v6 = <std::sync::mpsc::RecvTimeoutError as core::fmt::Display>::fmt;
            v16 = "RecvTimeoutError: ";
            v17 = 1;
            v20 = 0;
            v18 = &v5;
            v19 = 1;
            core::option::Option<T>::map_or_else();
            v16 = struct28 {
                field_0: v30
                field_16: v31
                field_24: 1
            };
            v49 = alloc::boxed::Box<T>::new(&v16);
LABEL_5077fc:
            break;
        default:
LABEL_50756d:
            v21 = *((&v10 as &char + 48) as &i64);
            v68 = v10;
            v69 = *((&v10 as &char + 16) as &i128);
            v20 = *((&v10 as &char + 32) as &i128);
            v18 = v69;
            v16 = v68;
            v22 = &v16;
            v23 = <notify::error::Error as core::fmt::Display>::fmt;
            v5 = "NotifyError: ";
            v6 = 1;
            v9 = 0;
            v7 = &v22;
            v8 = 1;
            core::option::Option<T>::map_or_else();
            v5 = struct28 {
                field_0: v28
                field_16: v29
                field_24: 1
            };
            v49 = alloc::boxed::Box<T>::new(&v5);
            break;
        }
    }
}
