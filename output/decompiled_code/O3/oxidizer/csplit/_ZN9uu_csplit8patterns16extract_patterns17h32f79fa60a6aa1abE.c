fn uu_csplit::patterns::extract_patterns(a0: &Result<struct40, struct32>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x210]
    let v1: i64;  // [sp-0x208]
    let v2: i32;  // [sp-0x1fc]
    let v3: i192;  // [sp-0x1f8], Other Possible Types: Option<struct24>, struct4, Result<struct8, struct1>, struct32
    let v4: i32;  // [sp-0x1f4]
    let v5: i64;  // [sp-0x1d0]
    let v6: i64;  // [sp-0x1c8]
    let v7: i192;  // [sp-0x1b8], Other Possible Types: struct32, struct4, struct24, Result<struct16, struct8>
    let v8: i64;  // [sp-0x1b0]
    let v9: i128;  // [sp-0x1a8]
    let v10: i64;  // [sp-0x1a0]
    let v11: i128;  // [sp-0x198]
    let v12: i128;  // [sp-0x188]
    let v13: i64;  // [sp-0x178]
    let v14: i128;  // [sp-0x168]
    let v15: i128;  // [sp-0x158]
    let v16: struct16;  // [sp-0x148], Other Possible Types: i64
    let v17: i64;  // [sp-0x140]
    let v18: i64;  // [sp-0x138]
    let v19: i64;  // [bp-0x130]
    let v20: i8;  // [bp-0x128]
    let v21: i64;  // [bp-0x120]
    let v22: i64;  // [sp-0x118]
    let v23: i256;  // [sp-0x110], Other Possible Types: struct32
    let v24: i8;  // [bp-0xf0]
    let v25: i8;  // [bp-0xe0]
    let v26: i8;  // [bp-0xd0]
    let v27: i8;  // [bp-0xc0]
    let v28: i8;  // [bp-0xb0]
    let v29: i128;  // [sp-0xa8]
    let v30: i128;  // [sp-0x98]
    let v31: i128;  // [sp-0x88]
    let v32: i64;  // [sp-0x78]
    let v33: i8;  // [bp-0x70]
    let v34: struct32;  // [sp-0x50], Other Possible Types: i256
    let v36: i64;  // rcx
    let v37: i64;  // r8
    let v38: i64;  // r9
    let v39: i64;  // rbp
    let v40: i64;  // rax
    let v41: i64;  // r13
    let v42: i256;  // ymm0
    let v43: i256;  // ymm1
    let v44: i256;  // ymm2
    let v45: i256;  // ymm3
    let v46: i64;  // rbx
    let v47: i64;  // rax
    let v48: i64;  // 4120
    let v49: i128;  // xmm0
    let v50: i128;  // xmm1
    let v51: i128;  // xmm2
    let v52: i128;  // xmm3
    let v53: i64;  // 4108
    let v54: i64;  // rax
    let v55: i64;  // rax
    let v56: i64;  // rdx
    let v57: i64;  // r14
    let v58: i64;  // r15
    let v59: i128;  // xmm0
    let v60: i128;  // xmm1
    let v61: i128;  // xmm2
    let v62: i128;  // xmm3
    let v63: i64;  // rax
    let v64: i32;  // r12d
    let v65: i64;  // rax
    let v66: i64;  // rax
    let v67: i128;  // xmm0
    let v68: i256;  // ymm0
    let v69: i128;  // xmm1
    let v70: i256;  // ymm1
    let v71: i128;  // xmm0
    let v72: i64;  // rax
    let v73: i128;  // xmm0
    let v74: i128;  // xmm1
    let v75: i64;  // rdx
    let v76: i128;  // xmm0
    let v77: i128;  // xmm1
    let v78: i128;  // xmm0
    let v79: i256;  // ymm0
    let v80: i128;  // xmm1
    let v81: i256;  // ymm1
    let v82: i128;  // xmm0
    let v83: i128;  // xmm0
    let v84: i128;  // xmm1
    let v85: i64;  // rdx
    let v86: i128;  // xmm0
    let v87: i128;  // xmm1
    let v88: i64;  // rcx
    let v89: i64;  // rcx
    let v90: i64;  // rcx
    let v91: i64;  // rax
    let v92: i128;  // [sp-0x1f0]
    let v93: i128;  // [sp-0x1e0]

    v7 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(a2, 0);
    v16 = v8;
    v17 = v9;
    v18 = 0;
    v7 = regex::regex::string::Regex::new("^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$", v36, v37, v38);
    v2 = core::result::Result<T,E>::unwrap(&v33, &v7, "src/uu/csplit/src/patterns.rs") | -0x100 | 1;
    v7 = regex::regex::string::Regex::new("^\\{(?P<TIMES>\\d+)|\\*\\}$", v36, v37, v38);
    v34 = core::result::Result<T,E>::unwrap(&v7, "src/uu/csplit/src/patterns.rs");
    v39 = &v21;
    v21 = a1;
    v22 = a1 + a2 * 24;
    v41 = &v24;
    loop {
        v46 = v20;
        v40 = 0;
        if !0 {
            v46 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v39);
        }
        if !v46 {
            v88 = a0;
            *((v88 + 24) as &i64) = v18;
            *((v88 + 8) as &i128) = v16;
            *(v88 as &i64) = 12;
            v2 = 0;
            return v91;
        }
        v47 = *(core::option::Option<T>::get_or_insert_with(&v19, v39) as &i64);
        if !v47 {
            v1 = 1;
            v0 = 1;
        } else {
            regex::regex::string::Regex::captures_at(v41, &v34, *((v47 + 8) as &i64), *((v47 + 16) as &i64));
            v1 = 1;
            v48 = v24;
            v0 = 1;
            if v48 != 2 {
                v13 = v28;
                v49 = v24;
                v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49;
                v50 = v25;
                v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50;
                v51 = v26;
                v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51;
                v52 = v27;
                v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52;
                v12 = v52;
                v11 = v51;
                v9 = v50;
                v7 = v49;
                v53 = v40;
                v40 = 0;
                if !v53 {
                    <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v39);
                }
                v3 = regex_automata::util::captures::Captures::get_group_by_name(&v9, "TIMES");
                match v3 {
                    None => {
                        v55 = 0;
                    },
                    Some(_) => {
                        v54 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(*((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), *((&v12 as &char + 8) as &i64), v13);
                        if !v54 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                        v3 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v54, v56);
                        v41 = &v24;
                        v1 = core::result::Result<T,E>::unwrap(&v3) + 1;
                        v55 = 1;
                    },
                }
                v0 = v55;
            }
        }
        v57 = *((v46 + 8) as &i64);
        v58 = *((v46 + 16) as &i64);
        regex::regex::string::Regex::captures_at(v41, &v33, v57, v58);
        if v24 == 2 {
            v3 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v57, v58);
            match v3 {
                Ok(v8) => {
                    v9 = v0;
                    v10 = v1;
                    v7 = struct4 {
                        field_0: 0
                    };
                    v16 = alloc::vec::Vec<T,A>::push(&v7, v56);
                    if v24 != 2 {
                        goto LABEL_5b47e8;
                    }
                },
                Err(_) => {
                    v7 = <alloc::string::String as core::clone::Clone>::clone(v46);
                    v90 = a0;
                    *((v90 + 24) as &i64) = v9;
                    *((v90 + 8) as &i192) = v7;
                    *(v90 as &i64) = 7;
                    if v24 != 2 {
                        break;
                    }
                },
            }
        }
        v13 = v28;
        v59 = v24;
        v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
        v60 = v25;
        v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
        v61 = v26;
        v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61;
        v62 = v27;
        v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
        v12 = v62;
        v11 = v61;
        v9 = v60;
        v7 = v59;
        v3 = regex_automata::util::captures::Captures::get_group_by_name(&v9, "OFFSET");
        match v3 {
            None => {
                v64 = 0;
            },
            Some(_) => {
                v63 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(*((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), *((&v12 as &char + 8) as &i64), v13);
                if !v63 {
                    core::str::slice_error_fail(); /* do not return */
                }
                v39 = &v21;
                v41 = &v24;
                v64 = core::result::Result<T,E>::unwrap(core::num::<impl core::str::traits::FromStr for i32>::from_str(v63, v56)) as i32;
            },
        }
        v3 = regex_automata::util::captures::Captures::get_group_by_name(&v9, "UPTO");
        match v3 {
            None => {
                v3 = regex_automata::util::captures::Captures::get_group_by_name(&v9, "SKIPTO");
                if !v3 {
                    goto LABEL_5b47de;
                }
                v66 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(*((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), *((&v12 as &char + 8) as &i64), v13);
                if !v66 {
                    core::str::slice_error_fail(); /* do not return */
                }
                v23 = regex::regex::string::Regex::new(v66, v56, v36, v37, v38);
                v39 = &v21;
                v41 = &v24;
                if v23 {
                    v78 = v23;
                    v79 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78 as u128 as u256;
                    v80 = *((&v23 as &char + 16) as &i128);
                    v81 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80 as u128 as u256;
                    v15 = v80;
                    v14 = v78;
                } else {
                    v32 = *((&v23 as &char + 24) as &i64);
                    v82 = *((&v23 as &char + 8) as &i128);
                    v31 = v82;
                    v3 = uu_csplit::patterns::extract_patterns::{{closure}}(v46, &v31);
                    v72 = v3;
                    v83 = v92;
                    v79 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83 as u128 as u256;
                    v84 = v93;
                    v81 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v84 as u128 as u256;
                    v14 = v83;
                    v15 = v84;
                    if v72 != 12 {
LABEL_5b4ddc:
                        v30 = v15;
                        v29 = v14;
                        v89 = a0;
                        *((v89 + 24) as &i128) = v30;
                        *((v89 + 8) as &i128) = v29;
                        *(v89 as &i64) = v72;
                        break;
                    }
                }
                v86 = v14;
                v42 = v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86 as u128 as u256;
                v87 = v15;
                v43 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87 as u128 as u256;
                v30 = v87;
                v29 = v86;
                v93 = v87;
                v92 = v86;
                v4 = v64;
                v5 = v0;
                v6 = v1;
                v3 = struct4 {
                    field_0: 2
                };
                v16 = alloc::vec::Vec<T,A>::push(&v3, v85);
            },
            Some(_) => {
                v65 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(*((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), *((&v12 as &char + 8) as &i64), v13);
                if !v65 {
                    core::str::slice_error_fail(); /* do not return */
                }
                v23 = regex::regex::string::Regex::new(v65, v56, v36, v37, v38);
                v39 = &v21;
                v41 = &v24;
                if v23 {
                    v67 = v23;
                    v68 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67 as u128 as u256;
                    v69 = *((&v23 as &char + 16) as &i128);
                    v70 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 as u128 as u256;
                    v15 = v69;
                    v14 = v67;
                    goto LABEL_5b4782;
                }
                v32 = *((&v23 as &char + 24) as &i64);
                v71 = *((&v23 as &char + 8) as &i128);
                v31 = v71;
                v3 = uu_csplit::patterns::extract_patterns::{{closure}}(v46, &v31);
                v72 = v3;
                v73 = v92;
                v68 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 as u128 as u256;
                v74 = v93;
                v70 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 as u128 as u256;
                v14 = v73;
                v15 = v74;
                if !(v72 == 12) {
                    goto LABEL_5b4ddc;
                }
LABEL_5b4782:
                v76 = v14;
                v42 = v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76 as u128 as u256;
                v77 = v15;
                v43 = v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77 as u128 as u256;
                v30 = v77;
                v29 = v76;
                v93 = v77;
                v92 = v76;
                v4 = v64;
                v5 = v0;
                v6 = v1;
                v3 = struct4 {
                    field_0: 1
                };
                v16 = alloc::vec::Vec<T,A>::push(&v3, v75);
            },
        }
LABEL_5b47de:
LABEL_5b47e8:
    }
    return v91;
}
