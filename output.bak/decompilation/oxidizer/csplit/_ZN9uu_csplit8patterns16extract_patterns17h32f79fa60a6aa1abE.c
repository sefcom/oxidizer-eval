fn uu_csplit::patterns::extract_patterns(a0: &Result<struct40, struct24>, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x210]
    let v1: i64;  // [sp-0x208]
    let v2: i32;  // [sp-0x1fc]
    let v3: i256;  // [sp-0x1f8], Other Possible Types: Option<struct24>, struct4, struct32, Result<struct8, struct1>
    let v4: i32;  // [sp-0x1f4]
    let v5: i64;  // [sp-0x1d0]
    let v6: i64;  // [sp-0x1c8]
    let v7: i256;  // [sp-0x1b8], Other Possible Types: struct32, Result<struct16, struct8>, struct24, struct4
    let v8: i64;  // [bp-0x1b0]
    let v9: i64;  // [sp-0x1a8]
    let v10: i64;  // [sp-0x1a0]
    let v11: i128;  // [sp-0x198]
    let v12: i128;  // [sp-0x188]
    let v13: i64;  // [sp-0x178]
    let v14: i128;  // [sp-0x168]
    let v15: i128;  // [sp-0x158]
    let v16: struct16;  // [bp-0x148], Other Possible Types: i128
    let v17: i64;  // [sp-0x138]
    let v18: i64;  // [bp-0x130]
    let v19: i8;  // [bp-0x128]
    let v20: i64;  // [bp-0x120]
    let v21: i64;  // [sp-0x118]
    let v22: struct32;  // [sp-0x110], Other Possible Types: i256
    let v23: i8;  // [bp-0xf0]
    let v24: i8;  // [bp-0xe0]
    let v25: i8;  // [bp-0xd0]
    let v26: i8;  // [bp-0xc0]
    let v27: i8;  // [bp-0xb0]
    let v28: i128;  // [sp-0xa8]
    let v29: i128;  // [sp-0x98]
    let v30: struct24;  // [bp-0x88]
    let v31: i8;  // [bp-0x70]
    let v32: struct32;  // [sp-0x50], Other Possible Types: i256
    let v34: i64;  // rbp
    let v35: i64;  // rax
    let v36: i64;  // r13
    let v37: i256;  // ymm0
    let v38: i256;  // ymm1
    let v39: i256;  // ymm2
    let v40: i256;  // ymm3
    let v41: i64;  // rbx
    let v42: i64;  // rax
    let v43: i64;  // 4120
    let v44: i128;  // xmm0
    let v45: i128;  // xmm1
    let v46: i128;  // xmm2
    let v47: i128;  // xmm3
    let v48: i64;  // 4108
    let v49: i64;  // r15
    let v50: i64;  // r14
    let v51: i64;  // r12
    let v52: i64;  // r13
    let v53: i64;  // rax
    let v54: i64;  // rax
    let v55: i64;  // rdx
    let v56: i64;  // r14
    let v57: i64;  // r15
    let v58: i128;  // xmm0
    let v59: i128;  // xmm1
    let v60: i128;  // xmm2
    let v61: i128;  // xmm3
    let v62: i64;  // r14
    let v63: i64;  // rbp
    let v64: i64;  // r15
    let v65: i64;  // r13
    let v66: i32;  // r12d
    let v67: i64;  // rax
    let v68: i64;  // rax
    let v69: i128;  // xmm0
    let v70: i256;  // ymm0
    let v71: i128;  // xmm1
    let v72: i256;  // ymm1
    let v73: i128;  // xmm0
    let v75: i128;  // xmm0
    let v76: i128;  // xmm1
    let v77: i128;  // xmm0
    let v78: i128;  // xmm1
    let v79: i128;  // xmm0
    let v80: i256;  // ymm0
    let v81: i128;  // xmm1
    let v82: i256;  // ymm1
    let v83: i128;  // xmm0
    let v84: i128;  // xmm0
    let v85: i128;  // xmm1
    let v86: i128;  // xmm0
    let v87: i128;  // xmm1
    let v88: i64;  // rcx
    let v91: i128;  // [sp-0x1f0]
    let v92: i128;  // [sp-0x1e0]

    v7 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(a2, 0);
    v16 = v7;
    v17 = 0;
    v7 = regex::regex::string::Regex::new("^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$");
    v2 = core::result::Result<T,E>::unwrap(&v31, &v7, "src/uu/csplit/src/patterns.rs") | -0x100 | 1;
    v7 = regex::regex::string::Regex::new("^\\{(?P<TIMES>\\d+)|\\*\\}$");
    v32 = core::result::Result<T,E>::unwrap(&v7, "src/uu/csplit/src/patterns.rs");
    v34 = &v20;
    v20 = a1;
    v21 = a1 + a2 * 24;
    v36 = &v23;
    loop {
        v41 = v19;
        v35 = 0;
        if !0 {
            v41 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v34);
        }
        if !v41 {
            v88 = a0;
            *((v88 + 24) as &i64) = v17;
            *((v88 + 8) as &i128) = v16;
            *(v88 as &i64) = 12;
            v2 = 0;
        }
        v42 = *(core::option::Option<T>::get_or_insert_with(&v18, v34) as &i64);
        if !v42 {
            v1 = 1;
            v0 = 1;
        } else {
            regex::regex::string::Regex::captures_at(v36, &v32, *((v42 + 8) as &i64), *((v42 + 16) as &i64));
            v1 = 1;
            v43 = v23;
            v0 = 1;
            if v43 != 2 {
                v13 = v27;
                v44 = v23;
                v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44;
                v45 = v24;
                v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45;
                v46 = v25;
                v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
                v47 = v26;
                v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
                v12 = v47;
                v11 = v46;
                v9 = v45;
                v7 = v44;
                v48 = v35;
                v35 = 0;
                if !v48 {
                    <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v34);
                }
                v3 = regex_automata::util::captures::Captures::get_group_by_name(&v9, "TIMES");
                match v3 {
                    None => {
                        v54 = 0;
                    },
                    Some(_) => {
                        v49 = *((&v12 as &char + 8) as &i64);
                        v50 = v13;
                        v51 = *((&v3 as &char + 8) as &i64);
                        v52 = *((&v3 as &char + 16) as &i64);
                        v53 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v51, v52, v49, v50);
                        if !v53 {
                            core::str::slice_error_fail(v49, v50, v51, v52, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/regex-1.11.1/src/regex/string.rs"); /* do not return */
                        }
                        v3 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v53, v55) as u64;
                        v36 = &v23;
                        v1 = core::result::Result<T,E>::unwrap(&v3) + 1;
                        v54 = 1;
                    },
                }
                v0 = v54;
            }
        }
        v56 = *((v41 + 8) as &i64);
        v57 = *((v41 + 16) as &i64);
        regex::regex::string::Regex::captures_at(v36, &v31, v56, v57);
        if v23 == 2 {
            v3 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v56, v57) as u64;
            match v3 {
                Err(_) => {
                    v7 = <alloc::string::String as core::clone::Clone>::clone(v41);
                    return Err(struct24 {
                        field_0: v7
                        field_16: v9
                    });
                },
                Ok(v8) => {
                    v9 = v0;
                    v10 = v1;
                    v7 = struct4 {
                        field_0: 0
                    };
                    v16 = alloc::vec::Vec<T,A>::push(&v7);
                },
            }
        } else {
            v13 = v27;
            v58 = v23;
            v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
            v59 = v24;
            v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
            v60 = v25;
            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
            v61 = v26;
            v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61;
            v12 = v61;
            v11 = v60;
            v9 = v59;
            v7 = v58;
            v3 = regex_automata::util::captures::Captures::get_group_by_name(&v9, "OFFSET");
            match v3 {
                None => {
                    v66 = 0;
                },
                Some(_) => {
                    v62 = *((&v12 as &char + 8) as &i64);
                    v63 = v13;
                    v64 = *((&v3 as &char + 8) as &i64);
                    v65 = *((&v3 as &char + 16) as &i64);
                    if !core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v64, v65, v62, v63) {
                        break;
                    }
                    v34 = &v20;
                    v36 = &v23;
                    v66 = core::result::Result<T,E>::unwrap(core::num::<impl core::str::traits::FromStr for i32>::from_str()) as i32;
                },
            }
            v3 = regex_automata::util::captures::Captures::get_group_by_name(&v9, "UPTO");
            match v3 {
                Some(_) => {
                    v62 = *((&v12 as &char + 8) as &i64);
                    v63 = v13;
                    v64 = *((&v3 as &char + 8) as &i64);
                    v65 = *((&v3 as &char + 16) as &i64);
                    v67 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v64, v65, v62, v63);
                    if !v67 {
                        core::str::slice_error_fail(v62, v63, v64, v65, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/regex-1.11.1/src/regex/string.rs"); /* do not return */
                    }
                    v22 = regex::regex::string::Regex::new(v67, v55);
                    v34 = &v20;
                    v36 = &v23;
                    if v22 {
                        v69 = v22;
                        v70 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 as u128 as u256;
                        v71 = *((&v22 as &char + 16) as &i128);
                        v72 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71 as u128 as u256;
                        v15 = v71;
                        v14 = v69;
                    } else {
                        v73 = *((&v22 as &char + 8) as &i128);
                        v30 = struct24 {
                            field_0: v73
                            field_16: *((&v22 as &char + 24) as &i64)
                        };
                        v3 = uu_csplit::patterns::extract_patterns::{{closure}}(v41, &v30);
                        v75 = v91;
                        v70 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75 as u128 as u256;
                        v76 = v92;
                        v72 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76 as u128 as u256;
                        v14 = v75;
                        v15 = v76;
                        if v3 != 12 {
                            vvar_883{stack -152} = v15;
                            vvar_884{stack -168} = v14;
                            return Ok(struct40 {
                                field_0: v74
                                field_8: v28
                                field_24: v29
                            });
                        }
                    }
                    v77 = v14;
                    v37 = v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77 as u128 as u256;
                    v78 = v15;
                    v38 = v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78 as u128 as u256;
                    v29 = v78;
                    v28 = v77;
                    v92 = v78;
                    v91 = v77;
                    v4 = v66;
                    v5 = v0;
                    v6 = v1;
                    v3 = struct4 {
                        field_0: 1
                    };
                    v16 = alloc::vec::Vec<T,A>::push(&v3);
                },
                None => {
                    v3 = regex_automata::util::captures::Captures::get_group_by_name(&v9, "SKIPTO");
                    if v3 {
                        v62 = *((&v12 as &char + 8) as &i64);
                        v63 = v13;
                        v64 = *((&v3 as &char + 8) as &i64);
                        v65 = *((&v3 as &char + 16) as &i64);
                        v68 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v64, v65, v62, v63);
                        if !v68 {
                            break;
                        }
                        v22 = regex::regex::string::Regex::new(v68, v55);
                        v34 = &v20;
                        v36 = &v23;
                        if v22 {
                            v79 = v22;
                            v80 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79 as u128 as u256;
                            v81 = *((&v22 as &char + 16) as &i128);
                            v82 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81 as u128 as u256;
                            v15 = v81;
                            v14 = v79;
                        } else {
                            v83 = *((&v22 as &char + 8) as &i128);
                            v30 = struct24 {
                                field_0: v83
                                field_16: *((&v22 as &char + 24) as &i64)
                            };
                            v3 = uu_csplit::patterns::extract_patterns::{{closure}}(v41, &v30);
                            v84 = v91;
                            v80 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v84 as u128 as u256;
                            v85 = v92;
                            v82 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85 as u128 as u256;
                            v14 = v84;
                            v15 = v85;
                            if v3 != 12 {
                                v29 = v15;
                                v28 = v14;
                                return Ok(struct40 {
                                    field_0: v74
                                    field_8: v28
                                    field_24: v29
                                });
                            }
                        }
                        v86 = v14;
                        v37 = v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86 as u128 as u256;
                        v87 = v15;
                        v38 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87 as u128 as u256;
                        v29 = v87;
                        v28 = v86;
                        v92 = v87;
                        v91 = v86;
                        v4 = v66;
                        v5 = v0;
                        v6 = v1;
                        v3 = struct4 {
                            field_0: 2
                        };
                        v16 = alloc::vec::Vec<T,A>::push(&v3);
                    }
                },
            }
        }
    }
    core::str::slice_error_fail(v62, v63, v64, v65, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/regex-1.11.1/src/regex/string.rs"); /* do not return */
}
