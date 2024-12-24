fn uu_rm::handle_dir(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [sp-0x268]
    let v1: i64;  // [sp-0x260]
    let v2: i64;  // [sp-0x258]
    let v3: i128;  // [bp-0x248]
    let v4: i64;  // [sp-0x238]
    let v5: i32;  // [sp-0x22c]
    let v6: i64;  // [sp-0x228], Other Possible Types: struct48, struct9, struct36, struct32, struct24
    let v7: i128;  // [bp-0x220]
    let v8: i64;  // [sp-0x218]
    let v9: i128;  // [bp-0x210]
    let v10: i128;  // [sp-0x200]
    let v11: i64;  // [bp-0x1f0]
    let v12: i32;  // [sp-0x1dc]
    let v13: i128;  // [sp-0x1d8], Other Possible Types: Arguments, struct20
    let v14: struct16;  // [bp-0x1c8], Other Possible Types: i128
    let v15: i128;  // [bp-0x1b8]
    let v16: i64;  // [sp-0x1a8]
    let v17: i128;  // [sp-0x1a0]
    let v18: i8;  // [bp-0x19e]
    let v19: i64;  // [sp-0x190]
    let v20: i64;  // [sp-0x188]
    let v21: i128;  // [sp-0x180]
    let v22: i64;  // [sp-0x170]
    let v23: i128;  // [sp-0x168]
    let v24: i128;  // [sp-0x158]
    let v25: i128;  // [sp-0x148]
    let v26: i128;  // [sp-0x138]
    let v27: i512;  // [sp-0x128], Other Possible Types: Option<Result<struct64, struct56>>
    let v28: i64;  // [sp-0x120]
    let v29: struct16;  // [sp-0xe8], Other Possible Types: i64
    let v30: i64;  // [sp-0xe0]
    let v31: i64;  // [sp-0xd8]
    let v32: i64;  // [sp-0xd0]
    let v33: i64;  // [sp-0xc8], Other Possible Types: struct8
    let v34: i64;  // [sp-0xc0]
    let v35: i128;  // [sp-0xb8]
    let v36: i64;  // [sp-0x88]
    let v37: i64;  // [sp-0x80]
    let v38: i64;  // [sp-0x78]
    let v39: i8;  // [sp-0x70]
    let v40: i128;  // [sp-0x68]
    let v41: i128;  // [sp-0x58]
    let v42: i128;  // [sp-0x48]
    let v45: i64;  // rdx
    let v46: i64;  // rcx
    let v47: i64;  // rbx
    let v48: i64;  // r14
    let v49: i64;  // r14
    let v50: i64;  // rax
    let v51: i8;  // 4098
    let v52: i128;  // xmm0
    let v53: i128;  // xmm0
    let v54: i128;  // xmm0
    let v55: i128;  // xmm0
    let v56: i256;  // ymm0
    let v57: i256;  // ymm0
    let v58: i64;  // rbp
    let v59: i64;  // r12
    let v60: i64;  // rdx
    let v62: i256;  // ymm1
    let v64: i256;  // ymm2
    let v65: i64;  // rax
    let v66: i128;  // xmm0
    let v67: i256;  // ymm0
    let v68: i128;  // xmm1
    let v69: i256;  // ymm1
    let v70: i128;  // xmm2
    let v71: i256;  // ymm2
    let v72: i128;  // xmm0
    let v73: i128;  // xmm1
    let v74: i128;  // xmm2
    let v75: struct8;  // rax
    let v76: i128;  // xmm0
    let v77: i128;  // xmm1
    let v78: i128;  // xmm2
    let v79: i8;  // al
    let v80: i128;  // xmm0
    let v81: i128;  // xmm1
    let v82: i128;  // xmm2
    let v83: i64;  // rcx
    let v84: i128;  // xmm0
    let v85: i128;  // xmm1
    let v86: i128;  // xmm2
    let v87: i64;  // rdx
    let v88: i128;  // xmm0
    let v89: i256;  // ymm0
    let v90: i128;  // xmm1
    let v91: i256;  // ymm1
    let v93: i64;  // rax
    let v94: i128;  // xmm1

    v13 = std::path::Path::components(a0, a1);
    if !v18 && *((&v13 as &char + 16) as &i8) - 5 < 2 {
        if !(!*((a2 + 3) as &i8)) {
            goto LABEL_4b71b4;
        }
    } else {
        if !std::path::Path::parent(a0, a1, v45, v46) {
            if !*((a2 + 3) as &i8) {
                goto LABEL_4b7340;
            }
            if !*((a2 + 2) as &i8) {
LABEL_4b71b4:
                v4 = a1;
                v47 = *((a2 + 5) as &i8);
                v48 = *((a2 + 6) as &i8);
                if v48 != 2 && !v47 {
                    v49 = v4;
                    v50 = std::fs::remove_dir_all(a0, v49, v45);
                    if !v50 {
                        return (0 | -0x100 | 0 & 1) & 4294967295 & 4294967295;
                    }
                    v0 = v50;
                    v13 = std::fs::remove_dir(a0, v49, v45);
                    if !v13 {
                        v58 = 0;
                    } else {
                        if std::io::error::Error::kind(v50) as i8 == 1 {
                            v6 = uucore::util_name();
                            v7 = v45;
                            eprint!("{:?}: ", &v6);
                            v6 = 1;
                            v7 = a0;
                            v8 = v4;
                            v9 = 1;
                            eprintln!("cannot remove {:?}: Permission denied", &v6);
                        } else {
                            v6 = uucore::util_name();
                            v7 = v45;
                            eprint!("{:?}: ", &v6);
                            v6 = 1;
                            v7 = a0;
                            v8 = v4;
                            v9 = 1;
                            eprintln!("cannot remove {:?}: {:?}", &v6, &v0);
                        }
                        v58 = vvar_207{reg 56} | -0x100 | 1;
                    }
                    return (v58 | -0x100 | v58 & 1) & 4294967295 & 4294967295;
                }
                v33 = 0;
                v35 = 0;
                v34 = 8;
                v29 = 0;
                v30 = 8;
                v31 = 0;
                v32 = a0;
                v6 = walkdir::WalkDir::new(a0, v4);
                v52 = v11;
                v25 = v52;
                v53 = v10;
                v24 = v53;
                v54 = v6;
                v23 = v54;
                v55 = v6;
                v21 = v55;
                v22 = v6.field_48;
                v13 = 0;
                *(&v14.field_0 as &struct16) = struct16 {
                    field_0: 0
                };
                v57 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                v15 = 0;
                v16 = 8;
                v17 = 0;
                v19 = 8;
                v20 = 0;
                v26 = 0;
                v58 = 0;
                v5 = v47;
                v12 = v48;
                loop {
                    v1 = v1;
                    v2 = v2;
                    if v48 == 2 {
LABEL_4b7580:
                        v27 = <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v13, v60);
                        v65 = v27;
                        if v65 == 3 {
                            break;
                        }
                        v66 = *((&v27 as &char + 8) as &i128);
                        v67 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
                        v68 = *((&v27 as &char + 24) as &i128);
                        v69 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68;
                        v70 = *((&v27 as &char + 40) as &i128);
                        v71 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70;
                        v42 = v70;
                        v41 = v68;
                        v40 = v66;
                        if !(!*((a2 + 3) as &i8)) {
                            goto LABEL_4b76f0;
                        }
                        v72 = *((&v27 as &char + 8) as &i128);
                        v57 = v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72;
                        v73 = *((&v27 as &char + 24) as &i128);
                        v62 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73;
                        v74 = *((&v27 as &char + 40) as &i128);
                        v64 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74;
                        v3 = v74;
                        v2 = v73;
                        v0 = v72;
                        v6 = v29.field_8;
                        v6.field_8 = vvar_917{stack -552} + vvar_887{stack -216} * 24;
                        loop {
                            v75 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                            if !v75 {
                                break;
                            }
                            if std::path::Path::starts_with(v1, v2, v75) as i8 {
                                goto LABEL_4b7580;
                            }
                        }
                        if (*((&v3 as &char + 8) as &i32) & 0xf000) != 0x4000 {
                            v79 = uu_rm::remove_file(v1, v2, v5, 2) as i8;
                        } else {
                            v6 = std::fs::read_dir(v1, v2);
                            if core::iter::traits::iterator::Iterator::fold(core::result::Result<T,E>::unwrap(v6, *((&v6 as &char + 8) as &i32)), v45 as u32 & 1, v45) {
                                if !uu_rm::prompt_descend(v1, v2, v45) as i8 {
                                    v6 = std::sys::pal::unix::os::split_paths::bytes_to_path(v1, v2);
                                    v29 = alloc::vec::Vec<T,A>::push(&v6, v45);
                                    goto LABEL_4b786f;
                                } else {
                                    v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0;
                                    v62 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v2;
                                    v64 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v3;
                                    v6 = struct48 {
                                        field_0: v56 as u128
                                        field_16: v61 as u128
                                        field_32: v63 as u128
                                    };
                                    v33 = alloc::collections::vec_deque::VecDeque<T,A>::push_back(&v6, v45);
                                    v2 = v2;
                                    v1 = v1;
                                    continue;
                                }
                            }
LABEL_4b7490:
                            v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0;
                            v62 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v2;
                            v64 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v3;
                            v6 = struct48 {
                                field_0: v56 as u128
                                field_16: v61 as u128
                                field_32: v63 as u128
                            };
                            v33 = alloc::collections::vec_deque::VecDeque<T,A>::push_back(&v6, v87);
                            v2 = v2;
                            v1 = v1;
                        }
                    } else {
                        v27 = <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v13, v60);
                        v65 = v27;
                        if v65 == 3 {
                            break;
                        }
                        v76 = *((&v27 as &char + 8) as &i128);
                        v67 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76;
                        v77 = *((&v27 as &char + 24) as &i128);
                        v69 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77;
                        v78 = *((&v27 as &char + 40) as &i128);
                        v71 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78;
                        v42 = v78;
                        v41 = v77;
                        v40 = v76;
                        if v65 != 2 {
LABEL_4b76f0:
                            v83 = *((&v27 as &char + 56) as &i64);
                            v6 = v65;
                            v84 = v40;
                            v57 = v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v84;
                            v85 = v41;
                            v62 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85;
                            v86 = v42;
                            v64 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86;
                            v10 = v86;
                            v9 = v85;
                            v7 = v84;
                            v11 = v83;
                            v36 = uucore::util_name();
                            v37 = v45;
                            eprint!("{:?}: ", &v36);
                            v36 = 1;
                            v37 = v32;
                            v38 = v4;
                            v39 = 1;
                            eprintln!("recursing in {:?}: {:?}", &v36, &v6);
                            v58 = v58 | -0x100 | 1;
                            v2 = v2;
                            v1 = v1;
                            continue;
                        }
                        v80 = *((&v27 as &char + 8) as &i128);
                        v57 = v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80;
                        v81 = *((&v27 as &char + 24) as &i128);
                        v62 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81;
                        v82 = *((&v27 as &char + 40) as &i128);
                        v64 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82;
                        v3 = v82;
                        v2 = v81;
                        v0 = v80;
                        if (*((&v3 as &char + 8) as &i32) & 0xf000) == 0x4000 {
                            goto LABEL_4b7490;
                        }
                        v79 = uu_rm::remove_file(v1, v2, v5, v12) as i8;
                    }
                    v58 = v58 | -0x100 | (v58 | v79) & 1;
LABEL_4b786f:
                    v2 = v2;
                    v1 = v1;
                }
                v6 = alloc::collections::vec_deque::VecDeque<T,A>::iter(&v33);
                v88 = v6;
                v89 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88;
                v90 = *((&v6 as &char + 16) as &i128);
                v91 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v90;
                v14 = v90;
                v13 = v88;
                loop {
                    v93 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v14);
                    if !(v93) && !((v89 = v89 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13 as u128 as u256, v94 = v14, v91 = v91 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v94 as u128 as u256, v13 = v94, *(&v14.field_0 as &struct16) = struct16 {
    field_0: v56 as u128
}, v93 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v14), v93)) {
                        break;
                    }
                    v58 = v58 | -0x100 | (v58 | uu_rm::remove_dir(*((v93 + 8) as &i64), *((v93 + 16) as &i64), a2) as i8) & 1;
                }
                return (v58 | -0x100 | v58 & 1) & 4294967295 & 4294967295;
            } else {
LABEL_4b7340:
                if !*((a2 + 4) as &i8) {
                    v59 = a1;
                    v6 = uucore::util_name();
                    v7 = v45;
                    eprint!("{:?}: ", &v6);
                    v6 = 1;
                    v7 = a0;
                    v8 = v59;
                    v9 = 1;
                    v27 = &v6;
                    v28 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v13 = Arguments {
                        pieces: &[&str] {
                            ptr: v92
                            len: 2
                        }
                        args: [&v27]
                        fmt: 0
                    };
                    std::io::stdio::_eprint(&v13);
                    v58 = vvar_207{reg 56} | -0x100 | 1;
                    return (v58 | -0x100 | v58 & 1) & 4294967295 & 4294967295;
                }
            }
LABEL_4b7968:
            v51 = *((a2 + 2) as &i8);
            if (1 | !v51) != 1 {
                vvar_1089{stack -552} = uucore::util_name();
                vvar_1090{stack -544} = v45;
                eprint!("{:?}: ", &v6);
                vvar_1092{stack -552} = 1;
                vvar_1093{stack -544} = a0;
                vvar_1094{stack -536} = v59;
                vvar_1095{stack -528} = 1;
                vvar_1096{stack -296} = &v6;
                vvar_1097{stack -288} = <os_display::Quoted as core::fmt::Display>::fmt;
                v13 = Arguments {
                    pieces: &[&str] {
                        ptr: v92
                        len: 2
                    }
                    args: [&v27]
                    fmt: 0
                };
                std::io::stdio::_eprint(&v13);
                return (v58 | -0x100 | v58 & 1) & 4294967295 & 4294967295;
            }
            v58 = uu_rm::remove_dir(a0, a1, a2) as i32;
            return (v58 | -0x100 | v58 & 1) & 4294967295 & 4294967295;
        } else if !(!*((a2 + 3) as &i8)) {
            goto LABEL_4b71b4;
        }
    }
    if !*((a2 + 4) as &i8) {
        vvar_1107{stack -552} = uucore::util_name();
        vvar_1108{stack -544} = v45;
        eprint!("{:?}: ", &v6);
        vvar_1110{stack -552} = 1;
        vvar_1111{stack -544} = a0;
        vvar_1112{stack -536} = v59;
        vvar_1113{stack -528} = 1;
        vvar_1114{stack -296} = &v6;
        vvar_1115{stack -288} = <os_display::Quoted as core::fmt::Display>::fmt;
        v13 = Arguments {
            pieces: &[&str] {
                ptr: v92
                len: 2
            }
            args: [&v27]
            fmt: 0
        };
        std::io::stdio::_eprint(&v13);
        return (v58 | -0x100 | v58 & 1) & 4294967295 & 4294967295;
    }
    goto LABEL_4b7968;
}
