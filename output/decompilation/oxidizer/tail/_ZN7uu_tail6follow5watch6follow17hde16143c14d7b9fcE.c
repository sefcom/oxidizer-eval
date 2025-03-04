fn uu_tail::follow::watch::follow(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x2ca]
    let v1: i8;  // [sp-0x2c9]
    let v2: i64;  // [sp-0x2c8], Other Possible Types: int
    let v3: i64;  // [sp-0x2c0]
    let v4: i64;  // [sp-0x2b8]
    let v5: String;  // [sp-0x2a8], Other Possible Types: int, unsigned long
    let v6: i64;  // [sp-0x2a0]
    let v7: i64;  // [sp-0x298]
    let v8: i32;  // [bp-0x290]
    let v9: Result<struct56, struct1>;  // [sp-0x270], Other Possible Types: struct24, unsigned long
    let v12: i32;  // [sp-0x238]
    let v13: i32;  // [sp-0x234]
    let v14: i64;  // [sp-0x230]
    let v15: i64;  // [sp-0x228]
    let v16: iNone;  // [bp-0x228], Other Possible Types: struct24, struct26, Result<struct16, struct1>
    let v17: i64;  // [sp-0x220]
    let v18: iNone;  // [sp-0x218], Other Possible Types: unsigned long
    let v19: i32;  // [bp-0x210]
    let v20: iNone;  // [bp-0x208]
    let v21: i64;  // [sp-0x1f8]
    let v22: i8;  // [bp-0x170]
    let v23: i64;  // [sp-0x160]
    let v24: i64;  // [sp-0x158]
    let v25: String;  // [sp-0x150]
    let v26: String;  // [sp-0x138]
    let v27: String;  // [sp-0x120]
    let v28: struct40;  // [bp-0x108]
    let v31: i64;  // rbx
    let v32: i64;  // r13
    let v33: i64;  // r12
    let v34: i32;  // eax
    let v35: i64;  // rbp
    let v36: iNone;  // ymm0
    let v37: iNone;  // ymm1
    let v44: iNone;  // xmm0
    let v45: iNone;  // xmm1
    let v46: i64;  // r12
    let v47: i64;  // rcx
    let v48: iNone;  // xmm0
    let v49: i64;  // rax
    let v52: i64;  // rdi
    let v53: i64;  // rsi
    let v54: i64;  // rdx
    let v55: i64;  // rbx
    let v56: i64;  // r12
    let v58: iNone;  // xmm0
    let v60: iNone;  // xmm0
    let v61: struct8;  // rax
    let v62: iNone;  // xmm0
    let v63: iNone;  // xmm1

    v31 = a1;
    v32 = a0 + 56;
    if uu_tail::follow::files::FileHandling::no_files_remaining(v32, a1) as i8 && !uu_tail::follow::files::FileHandling::only_stdin_remaining(v32) as i8 {
        v9 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v16 = v9;
        *(&v19 as &i32) = 1;
        alloc::boxed::Box<T>::new(&v16);
        return v56;
    }
    v33 = a0;
    v34 = *((v33 + 136) as &i32);
    v13 = v34;
    v1 = *((a1 + 74) as &i8);
    v24 = *((a1 + 48) as &i64);
    v23 = a1;
    v12 = *((a1 + 56) as &i32);
    v14 = "src/uu/tail/src/follow/watch.rs";
    v0 = *((a1 + 76) as &i8);
    if !(v0 == 2) {
        goto LABEL_0x506f47;
    }
    loop {
        if (*((v33 + 142) as &i8) & 1) && *((v33 + 140) as &i8) {
            v2 = *((v33 + 40) as &i64);
            v3 = v2 + *((v33 + 48) as &i64) * 24;
            continue;
        }
        if *(v33 as &i32) == 3 {
            v14 = "src/uu/tail/src/follow/watch.rs";
            core::option::unwrap_failed(v14); /* do not return */
        }
        v9 = std::sync::mpmc::Receiver<T>::recv_timeout(v33, v24, v12 as u64);
        v2 = 0;
        v3 = 8;
        v4 = 0;
        match (v9) {
            1 => {
                if !(!std::io::error::Error::kind(*((&v9 as &char + 8) as &i64)) as i8) {
                    goto LABEL_50756d;
                }
                v47 = &v9;
                v7 = *((&v9 as &char + 48) as &i64);
                v48 = *((&v9 as &char + 32) as &i128);
                v36 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 as u256;
                v5 = v48;
                if v7 {
                    v49 = v6;
                    v52 = v32;
                    v53 = *((v49 + 8) as &i64);
                    v54 = *((v49 + 16) as &i64);
                    if uu_tail::follow::files::FileHandling::contains_key(v32, *((v49 + 8) as &i64), *((v49 + 16) as &i64)) {
                        if *(v33 as &i32) == 3 {
                            core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
                        }
                        *((*((v33 + 24) as &i64) + 32) as &i64)();
                    }
                }
                v35 = (v35 & -0x100 | 1) & -0x100 | 1;
                v31 = 0;
                v3 = v3;
                v4 = v4;
                v46 = v33;
                goto LABEL_5073a0;
            }
            5 => {
                v25 = format!("{} resources exhausted", "inotify");
                v16 = *(&v25 as &i224);
                alloc::boxed::Box<T>::new(&v16);
                goto LABEL_5077fc;
            }
            6 => {
                v44 = *((&v9 as &char + 8) as &i128);
                v36 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 as u256;
                v45 = *((&v9 as &char + 24) as &i128);
                v37 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 as u256;
                v18 = v45;
                *(&v15 as &i64) = *((&v9 as &char + 40) as &i64);
                v16 = v44;
                if v18 && uu_tail::follow::files::FileHandling::contains_key(v32, *((v17 + 8) as &i64), *((v17 + 16) as &i64)) {
                    uu_tail::follow::watch::Observer::handle_event(&v5, v33, &v16, v23);
                    if v2 != 0x8000000000000000 {
                        v2 = v5;
                        v3 = v6;
                        v4 = v7;
                        goto LABEL_507383;
                    } else {
                        break;
                    }
                } else {
LABEL_507383:
                    v31 = (v55 & -0x100 | 1) & -0x100 | 1;
                    v35 = 0;
                    v3 = v3;
                    v4 = v4;
                    v46 = v56;
LABEL_5073a0:
                    v4 = v4;
                    v3 = v3;
                    if v0 != 2 && *((v46 + 141) as &i8) {
                        v16 = uu_tail::follow::files::FileHandling::keys(v32);
                        v58 = *(&v16.field_0 as &i128);
                        v37 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v16.field_16 as &i128);
                        v28 = struct40 {
                            field_0: v58
                            field_16: v59
                            field_32: v15 as i64
                        };
                        v16 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v28);
                        v4 = v18;
                        v60 = *(&v16.field_0 as &i128);
                        v36 = (v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 as u256;
                        v2 = v60;
                    }
                    v5 = v3;
                    v6 = v5 + v4 * 24;
                    v61 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v61 {
                        v33 = a0;
                        v34 = *((v33 + 136) as &i32);
                    } else {
                        v16 = uu_tail::follow::files::FileHandling::tail_file(v32, *((v61 + 8) as &i64), *((v61 + 16) as &i64), v1);
                        if !v15 {
                            continue;
                        }
                        if (~(v9 as i32) & 6) {
                            return v56;
                        }
                        return v56;
                    }
                }
            }
            7 => {
                v31 = v31 & -0x100 | 1;
                v35 = v35 & -0x100 | 1;
                v3 = v3;
                v4 = v4;
                v46 = v33;
                if !*((&v9 as &char + 8) as &i8) {
                    goto LABEL_5073a0;
                }
                *(&v22 as &i8) = 1;
                v27 = format!("RecvTimeoutError: {}", &v22);
                v16 = *(&v27 as &i224);
                alloc::boxed::Box<T>::new(&v16);
LABEL_5077fc:
                break;
            }
            _ => {
LABEL_50756d:
                v21 = *((&v9 as &char + 48) as &i64);
                v62 = v9 as i128;
                v63 = *((&v9 as &char + 16) as &i128);
                *(&v20 as &i128) = *((&v9 as &char + 32) as &i128);
                v18 = v63;
                v16 = v62;
                v26 = format!("NotifyError: {}", &v16);
                *(&v8 as &i32) = 1;
                v5 = v26;
                break;
            }
        }
    }
}
