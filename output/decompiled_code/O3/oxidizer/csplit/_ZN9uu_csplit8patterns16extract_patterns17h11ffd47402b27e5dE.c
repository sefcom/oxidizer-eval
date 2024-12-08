fn uu_csplit::patterns::extract_patterns(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x210]
    let v1: i64;  // [sp-0x208]
    let v2: i32;  // [sp-0x1fc]
    let v3: i192;  // [sp-0x1f8], Other Possible Types: Option<struct24>, Result<struct8, struct1>, struct4
    let v4: i32;  // [sp-0x1f4]
    let v5: i64;  // [sp-0x1d0]
    let v6: i64;  // [sp-0x1c8]
    let v7: i128;  // [sp-0x1b8], Other Possible Types: struct4, struct24, Result<struct16, struct8>
    let v8: i64;  // [sp-0x1b0]
    let v9: i128;  // [sp-0x1a8]
    let v10: i64;  // [sp-0x1a0]
    let v11: i128;  // [sp-0x198]
    let v12: i128;  // [sp-0x188]
    let v13: i64;  // [sp-0x178]
    let v14: i128;  // [sp-0x168]
    let v15: i128;  // [sp-0x158]
    let v16: struct16;  // [sp-0x148], Other Possible Types: i128
    let v17: i64;  // [sp-0x140]
    let v18: i64;  // [sp-0x138]
    let v19: i64;  // [bp-0x130]
    let v20: i8;  // [bp-0x128]
    let v21: i64;  // [bp-0x120]
    let v22: i64;  // [sp-0x118]
    let v23: i8;  // [bp-0x110]
    let v24: i8;  // [bp-0x108]
    let v25: i8;  // [bp-0x100]
    let v27: i8;  // [bp-0xf0]
    let v28: i8;  // [bp-0xe0]
    let v29: i8;  // [bp-0xd0]
    let v30: i8;  // [bp-0xc0]
    let v31: i8;  // [bp-0xb0]
    let v32: i128;  // [sp-0xa8]
    let v33: i128;  // [sp-0x98]
    let v34: i128;  // [sp-0x88]
    let v35: i64;  // [sp-0x78]
    let v36: i8;  // [bp-0x70]
    let v37: struct32;  // [sp-0x50], Other Possible Types: i256
    let v39: i64;  // rcx
    let v40: i64;  // r8
    let v41: i64;  // r9
    let v42: i64;  // rbp
    let v43: i64;  // rax
    let v44: i64;  // r13
    let v45: i256;  // ymm0
    let v46: i256;  // ymm1
    let v47: i256;  // ymm2
    let v48: i256;  // ymm3
    let v49: i64;  // rbx
    let v50: i64;  // rax
    let v51: i64;  // 4120
    let v52: i128;  // xmm0
    let v53: i128;  // xmm1
    let v54: i128;  // xmm2
    let v55: i128;  // xmm3
    let v56: i64;  // 4108
    let v57: i64;  // rax
    let v58: i64;  // rax
    let v59: i64;  // rdx
    let v60: i64;  // r14
    let v61: i64;  // r15
    let v62: i128;  // xmm0
    let v63: i128;  // xmm1
    let v64: i128;  // xmm2
    let v65: i128;  // xmm3
    let v66: i64;  // rax
    let v67: i32;  // r12d
    let v68: i64;  // rax
    let v69: i64;  // rax
    let v70: i128;  // xmm0
    let v71: i256;  // ymm0
    let v72: i128;  // xmm1
    let v73: i256;  // ymm1
    let v74: i128;  // xmm0
    let v75: i64;  // rax
    let v76: i128;  // xmm0
    let v77: i128;  // xmm1
    let v78: i64;  // rdx
    let v79: i128;  // xmm0
    let v80: i128;  // xmm1
    let v81: i128;  // xmm0
    let v82: i256;  // ymm0
    let v83: i128;  // xmm1
    let v84: i256;  // ymm1
    let v85: i128;  // xmm0
    let v86: i128;  // xmm0
    let v87: i128;  // xmm1
    let v88: i64;  // rdx
    let v89: i128;  // xmm0
    let v90: i128;  // xmm1
    let v91: i64;  // rcx
    let v92: i64;  // rcx
    let v93: i64;  // rcx
    let v94: i64;  // rax
    let v95: i128;  // [sp-0x1f0]
    let v96: i128;  // [sp-0x1e0]

    v7 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(a2, 0);
    v16 = v8;
    v17 = v9;
    v18 = 0;
    regex::regex::string::Regex::new(&v7, "^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$", v39, v40, v41);
    v2 = core::result::Result<T,E>::unwrap(&v36, &v7, "src/uu/csplit/src/patterns.rs") | -0x100 | 1;
    regex::regex::string::Regex::new(&v7, "^\\{(?P<TIMES>\\d+)|\\*\\}$", v39, v40, v41);
    v37 = core::result::Result<T,E>::unwrap(&v7, "src/uu/csplit/src/patterns.rs");
    v42 = &v21;
    v21 = a1;
    v22 = a1 + a2 * 24;
    v44 = &v27;
    loop {
        v49 = v20;
        v43 = 0;
        if !0 {
            v49 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v42);
        }
        if !v49 {
            v91 = a0;
            *((v91 + 24) as &i64) = v18;
            *((v91 + 8) as &i128) = v16;
            *(v91 as &i64) = 12;
            v2 = 0;
            return v94;
        }
        v50 = *(core::option::Option<T>::get_or_insert_with(&v19, v42) as &i64);
        if !v50 {
            v1 = 1;
            v0 = 1;
        } else {
            regex::regex::string::Regex::captures_at(v44, &v37, *((v50 + 8) as &i64), *((v50 + 16) as &i64));
            v1 = 1;
            v51 = v27;
            v0 = 1;
            if v51 != 2 {
                v13 = v31;
                v52 = v27;
                v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52;
                v53 = v28;
                v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53;
                v54 = v29;
                v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54;
                v55 = v30;
                v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55;
                v12 = v55;
                v11 = v54;
                v9 = v53;
                v7 = v52;
                v56 = v43;
                v43 = 0;
                if !v56 {
                    <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v42);
                }
                v3 = regex_automata::util::captures::Captures::get_group_by_name(&v9, "TIMES");
                match v3 {
                    None => {
                        v58 = 0;
                    },
                    Some(_) => {
                        v57 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(*((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), *((&v12 as &char + 8) as &i64), v13);
                        if !v57 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                        v3 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v57, v59);
                        v44 = &v27;
                        v1 = core::result::Result<T,E>::unwrap(&v3) + 1;
                        v58 = 1;
                    },
                }
                v0 = v58;
            }
        }
        v60 = *((v49 + 8) as &i64);
        v61 = *((v49 + 16) as &i64);
        regex::regex::string::Regex::captures_at(v44, &v36, v60, v61);
        if v27 == 2 {
            v3 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v60, v61);
            match v3 {
                Ok(v8) => {
                    v9 = v0;
                    v10 = v1;
                    v7 = struct4 {
                        field_0: 0
                    };
                    v16 = alloc::vec::Vec<T,A>::push(&v7, v59);
                    if v27 != 2 {
                        goto LABEL_5b4648;
                    }
                },
                Err(_) => {
                    v7 = <alloc::string::String as core::clone::Clone>::clone(v49);
                    v93 = a0;
                    *((v93 + 24) as &struct24) = v7.field_16;
                    *((v93 + 8) as &i192) = v7;
                    *(v93 as &i64) = 7;
                    if v27 != 2 {
                        break;
                    }
                },
            }
        }
        v13 = v31;
        v62 = v27;
        v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
        v63 = v28;
        v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63;
        v64 = v29;
        v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
        v65 = v30;
        v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65;
        v12 = v65;
        v11 = v64;
        v9 = v63;
        v7 = v62;
        v3 = regex_automata::util::captures::Captures::get_group_by_name(&v9, "OFFSET");
        match v3 {
            None => {
                v67 = 0;
            },
            Some(_) => {
                v66 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(*((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), *((&v12 as &char + 8) as &i64), v13);
                if !v66 {
                    core::str::slice_error_fail(); /* do not return */
                }
                v42 = &v21;
                v44 = &v27;
                v67 = core::result::Result<T,E>::unwrap(core::num::<impl core::str::traits::FromStr for i32>::from_str(v66, v59)) as i32;
            },
        }
        v3 = regex_automata::util::captures::Captures::get_group_by_name(&v9, "UPTO");
        match v3 {
            None => {
                v3 = regex_automata::util::captures::Captures::get_group_by_name(&v9, "SKIPTO");
                if !v3 {
                    goto LABEL_5b463e;
                }
                v69 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(*((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), *((&v12 as &char + 8) as &i64), v13);
                if !v69 {
                    core::str::slice_error_fail(); /* do not return */
                }
                regex::regex::string::Regex::new(&v23, v69, v59, v39, v40, v41);
                v42 = &v21;
                v44 = &v27;
                if v23 {
                    v81 = v23;
                    v82 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81 as u128 as u256;
                    v83 = v25;
                    v84 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83 as u128 as u256;
                    v15 = v83;
                    v14 = v81;
                } else {
                    v35 = (&v25)[8];
                    v85 = v24;
                    v34 = v85;
                    uu_csplit::patterns::extract_patterns::{{closure}}(&v3, v49, &v34);
                    v75 = v3;
                    v86 = v95;
                    v82 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86 as u128 as u256;
                    v87 = v96;
                    v84 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87 as u128 as u256;
                    v14 = v86;
                    v15 = v87;
                    if v75 != 12 {
LABEL_5b4c3c:
                        v33 = v15;
                        v32 = v14;
                        v92 = a0;
                        *((v92 + 24) as &i128) = v33;
                        *((v92 + 8) as &i128) = v32;
                        *(v92 as &i64) = v75;
                        break;
                    }
                }
                v89 = v14;
                v45 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89 as u128 as u256;
                v90 = v15;
                v46 = v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v90 as u128 as u256;
                v33 = v90;
                v32 = v89;
                v96 = v90;
                v95 = v89;
                v4 = v67;
                v5 = v0;
                v6 = v1;
                v3 = struct4 {
                    field_0: 2
                };
                v16 = alloc::vec::Vec<T,A>::push(&v3, v88);
            },
            Some(_) => {
                v68 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(*((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), *((&v12 as &char + 8) as &i64), v13);
                if !v68 {
                    core::str::slice_error_fail(); /* do not return */
                }
                regex::regex::string::Regex::new(&v23, v68, v59, v39, v40, v41);
                v42 = &v21;
                v44 = &v27;
                if !v23 {
                    v35 = (&v25)[8];
                    v74 = (&v23)[8];
                    v34 = v74;
                    uu_csplit::patterns::extract_patterns::{{closure}}(&v3, v49, &v34);
                    v75 = v3;
                    v76 = v95;
                    v71 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76 as u128 as u256;
                    v77 = v96;
                    v73 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77 as u128 as u256;
                    v14 = v76;
                    v15 = v77;
                    if v75 == 12 {
                        goto LABEL_5b45e2;
                    }
                    goto LABEL_5b4c3c;
                } else {
                    v70 = v23;
                    v71 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70 as u128 as u256;
                    v72 = v25;
                    v73 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72 as u128 as u256;
                    v15 = v72;
                    v14 = v70;
LABEL_5b45e2:
                    v79 = v14;
                    v45 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79 as u128 as u256;
                    v80 = v15;
                    v46 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80 as u128 as u256;
                    v33 = v80;
                    v32 = v79;
                    v96 = v80;
                    v95 = v79;
                    v4 = v67;
                    v5 = v0;
                    v6 = v1;
                    v3 = struct4 {
                        field_0: 1
                    };
                    v16 = alloc::vec::Vec<T,A>::push(&v3, v78);
                }
            },
        }
LABEL_5b463e:
LABEL_5b4648:
    }
    return v94;
}
