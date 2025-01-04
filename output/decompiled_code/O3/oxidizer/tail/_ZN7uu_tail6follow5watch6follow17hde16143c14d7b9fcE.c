fn uu_tail::follow::watch::follow(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x2ca]
    let v1: i8;  // [sp-0x2c9]
    let v2: i64;  // [sp-0x2c8]
    let v3: i64;  // [sp-0x2c0]
    let v4: i64;  // [sp-0x2b8]
    let v5: i224;  // [sp-0x2a8], Other Possible Types: struct24
    let v6: i64;  // [sp-0x2a0]
    let v7: i64;  // [sp-0x298]
    let v8: i64;  // [sp-0x270], Other Possible Types: struct24, Result<struct56, struct9>
    let v9: i64;  // [bp-0x268]
    let v10: i8;  // [sp-0x258]
    let v11: i32;  // [sp-0x238]
    let v12: i32;  // [sp-0x234]
    let v13: i64;  // [sp-0x230]
    let v14: i128;  // [sp-0x228], Other Possible Types: Result<struct16, struct9>, struct26, struct24
    let v15: i64;  // [sp-0x220]
    let v16: i64;  // [sp-0x218]
    let v17: i128;  // [bp-0x208]
    let v18: i64;  // [sp-0x1f8]
    let v19: i8;  // [bp-0x170]
    let v20: i64;  // [sp-0x160]
    let v21: i64;  // [sp-0x158]
    let v22: i192;  // [sp-0x150]
    let v23: i192;  // [sp-0x138]
    let v24: i192;  // [sp-0x120]
    let v25: i128;  // [sp-0x108]
    let v26: i128;  // [sp-0xf8]
    let v27: i64;  // [sp-0xe8]
    let v28: i1408;  // [sp-0xe0], Other Possible Types: struct176
    let v30: i64;  // r9
    let v31: i64;  // rbx
    let v32: i64;  // r13
    let v33: i64;  // r12
    let v34: i32;  // eax
    let v35: i64;  // rbp
    let v36: i256;  // ymm0
    let v37: i256;  // ymm1
    let v38: i64;  // r12
    let v39: struct8;  // rax
    let v40: i64;  // rcx
    let v41: i64;  // r8
    let v42: i64;  // r9
    let v43: i64;  // r15
    let v44: i32;  // eax
    let v45: i64;  // rdx
    let v46: i128;  // xmm0
    let v47: i64;  // rax
    let v48: i64;  // rax
    let v49: i64;  // r12
    let v50: i64;  // rbp
    let v51: i128;  // xmm0
    let v52: i128;  // xmm1
    let v53: i64;  // r12
    let v54: i64;  // rbx
    let v55: i64;  // rcx
    let v56: i128;  // xmm0
    let v57: i64;  // rax
    let v60: i64;  // rdi
    let v61: i64;  // rsi
    let v62: i64;  // rdx
    let v63: i64;  // r12
    let v64: i128;  // xmm0
    let v65: i128;  // xmm1
    let v66: i128;  // xmm0
    let v67: struct8;  // rax
    let v68: i128;  // xmm0
    let v69: i128;  // xmm1

    v30 = a5;
    v31 = a1;
    v32 = a0 + 56;
    if uu_tail::follow::files::FileHandling::no_files_remaining(v32, a1, a2, a3, a4, a5) as i8 && !uu_tail::follow::files::FileHandling::only_stdin_remaining(v32) as i8 {
        v8 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v14 = v8;
        v47 = alloc::boxed::Box<T>::new(&v14);
        return v47;
    }
    v33 = a0;
    v34 = *((v33 + 136) as &i32);
    v12 = v34;
    v1 = *((a1 + 74) as &i8);
    v21 = *((a1 + 48) as &i64);
    v20 = a1;
    v11 = *((a1 + 56) as &i32);
    v13 = "src/uu/tail/src/follow/watch.rs";
    v0 = *((a1 + 76) as &i8);
    if !(v0 == 2) {
        goto LABEL_0x506f47;
    }
    loop {
        v38 = v33;
        if (*((v33 + 142) as &i8) & 1) && (v38 = v33, *((v33 + 140) as &i8)) {
            v2 = *((v33 + 40) as &i64);
            v3 = v2 + *((v33 + 48) as &i64) * 24;
            v5 = v5;
            v6 = v6;
            v14 = v14;
            v15 = v15;
            v16 = v16;
            loop {
                v16 = v16;
                v15 = v15;
                v14 = v14;
                v6 = v6;
                v5 = v5;
                v39 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v39 {
                    v38 = a0;
                    goto LABEL_5071d5;
                }
                v31 = *((v39 + 8) as &i64);
                v35 = *((v39 + 16) as &i64);
                v14 = std::fs::metadata(v31, v35);
                v43 = uu_tail::follow::files::FileHandling::get(v32, v31, v35, v40, v41, v42);
                v14 = std::fs::metadata(v31, v35);
                v28 = core::result::Result<T,E>::unwrap(&v14);
                v44 = *((&v28 as &char + 56) as &i32) & 0xf000;
                if !(v44 == 0x1000) && !(v44 == 0x8000) && !(v44 == 0x2000) || !(!*((v43 + 200) as &i64)) {
                    continue;
                }
                v8 = uucore::util_name();
                v9 = v45;
                eprint!("{:?}: ", &v8);
                v46 = *((v43 + 184) as &i128);
                v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
                v8 = 0;
                v9 = v46;
                v10 = 1;
                eprintln!("{:?} has appeared;  following new file", &v8);
                uu_tail::follow::files::FileHandling::update_metadata(v32, v31, v35, &v28, v41, v42);
                v47 = uu_tail::follow::files::FileHandling::update_reader(v32, v31, v35, v40 as u32, v41 as u32, v42 as u32);
                if v47 {
LABEL_507558:
                    return v47;
                }
                v14 = uu_tail::follow::files::FileHandling::tail_file(v32, v31, v35, -0x100 | v1, v42);
                v47 = v14;
                if v47 {
                    return v47;
                }
                v48 = a0;
                if *(v48 as &i32) == 3 {
                    break;
                }
                v47 = uu_tail::follow::watch::WatcherRx::watch_with_parent(*((v48 + 16) as &i64), *((v48 + 24) as &i64), v31, v35);
                v5 = v5;
                v6 = v6;
                v14 = v14;
                v15 = v15;
                v16 = v16;
                if !(v44 == 0x1000) && !(v44 == 0x8000) && !(v44 == 0x2000) || !(!*((v43 + 200) as &i64)) {
                    goto LABEL_507558;
                }
            }
            goto LABEL_507848;
        }
LABEL_5071d5:
        v49 = v38;
        if *(v49 as &i32) == 3 {
            v13 = "src/uu/tail/src/follow/watch.rs";
LABEL_507848:
            core::option::unwrap_failed(); /* do not return */
        }
        v8 = std::sync::mpmc::Receiver<T>::recv_timeout(v49, v21, v11);
        v2 = 0;
        v3 = 8;
        v4 = 0;
        switch (v8) {
        case 1:
            if !(v44 == 0x1000) && !(v44 == 0x8000) && !(v44 == 0x2000) || !(!*((v43 + 200) as &i64)) {
                goto LABEL_50756d;
            }
            v55 = &v8;
            v7 = *((&v8 as &char + 48) as &i64);
            v56 = *((&v8 as &char + 32) as &i128);
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56;
            v5 = v56;
            if v7 {
                v57 = v6;
                v60 = v32;
                v61 = *((v57 + 8) as &i64);
                v62 = *((v57 + 16) as &i64);
                if uu_tail::follow::files::FileHandling::contains_key(v32, *((v57 + 8) as &i64), *((v57 + 16) as &i64)) as i8 {
                    if *(v49 as &i32) == 3 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    *((*((v49 + 24) as &i64) + 32) as &i64)();
                }
            }
            v35 = v50 | -0x100 | 1 | -0x100 | 1;
            v54 = 0;
            goto LABEL_5073a0;
        case 5:
            v22 = format!("{:?} resources exhausted", "inotify");
            v14 = v22;
            v63 = alloc::boxed::Box<T>::new(&v14);
            goto LABEL_5077fc;
        case 6:
            v51 = *((&v8 as &char + 8) as &i128);
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51;
            v52 = *((&v8 as &char + 24) as &i128);
            v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52;
            v16 = v52;
            v17 = *((&v8 as &char + 40) as &i64);
            v14 = v51;
            v53 = v49;
            if v16 && (v53 = v49, uu_tail::follow::files::FileHandling::contains_key(v32, *((v15 + 8) as &i64), *((v15 + 16) as &i64)) as i8) {
                v5 = uu_tail::follow::watch::Observer::handle_event(v49, &v14, v20, v41, v42);
                v31 = v5;
                v63 = v6;
                if v31 != 0x8000000000000000 {
                    v2 = v31;
                    v3 = v63;
                    v4 = v7;
                    v53 = a0;
                    goto LABEL_507377;
                } else {
                    break;
                }
            } else {
LABEL_507377:
                v54 = v31 | -0x100 | 1 | -0x100 | 1;
                v35 = 0;
LABEL_5073a0:
                if v0 != 2 && *((v49 + 141) as &i8) {
                    v14 = uu_tail::follow::files::FileHandling::keys(v32);
                    v27 = *((&v14 as &char + 32) as &i64);
                    v64 = v14;
                    v65 = *((&v14 as &char + 16) as &i128);
                    v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65;
                    v26 = v65;
                    v25 = v64;
                    v14 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v25);
                    v4 = v16;
                    v66 = v14;
                    v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
                    v2 = v66;
                }
                v5 = v3;
                v6 = v5 + v4 * 24;
                v67 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v67 {
                    v33 = a0;
                    v34 = *((v33 + 136) as &i32);
                    continue;
                } else {
                    v14 = uu_tail::follow::files::FileHandling::tail_file(v32, *((v67 + 8) as &i64), *((v67 + 16) as &i64), -0x100 | v1, v42);
                    v63 = v14;
                    if !v63 {
                        continue;
                    }
                    if (~(v8) & 6) {
                        return v47;
                    }
                    return v47;
                }
            }
        case 7:
            v54 = v31 | -0x100 | 1;
            v35 = v50 | -0x100 | 1;
            if !*((&v8 as &char + 8) as &i8) {
                goto LABEL_5073a0;
            }
            v19 = 1;
            v24 = format!("RecvTimeoutError: {:?}", &v19);
            v14 = v24;
            v63 = alloc::boxed::Box<T>::new(&v14);
LABEL_5077fc:
            break;
        default:
LABEL_50756d:
            v18 = *((&v8 as &char + 48) as &i64);
            v68 = v8;
            v69 = *((&v8 as &char + 16) as &i128);
            v17 = *((&v8 as &char + 32) as &i128);
            v16 = v69;
            v14 = v68;
            v23 = format!("NotifyError: {:?}", &v14);
            v5 = v23;
            v63 = alloc::boxed::Box<T>::new(&v5);
            break;
        }
    }
}
