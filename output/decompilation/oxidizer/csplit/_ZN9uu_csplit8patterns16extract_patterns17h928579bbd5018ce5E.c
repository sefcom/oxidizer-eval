fn uu_csplit::patterns::extract_patterns(a0: i64, a1: i64, a2: i64) {
    let v0: u32;  // [bp-0x1f4]
    let v1: u64;  // [bp-0x1f0]
    let v2: u32;  // [bp-0x1e4]
    let v3: i64;  // [bp-0x1e0]
    let v4: alloc::string::String;  // [bp-0x1d8], Other Possible Types: u128
    let v5: struct32;  // [bp-0x1d8], Other Possible Types: u32
    let v6: struct32;  // [bp-0x1d8]
    let v7: u64;  // [bp-0x1d0]
    let v8: u64;  // [bp-0x1c8]
    let v9: u128;  // [bp-0x1c8]
    let v10: u64;  // [bp-0x1c0]
    let v11: iNone;  // [bp-0x1b8]
    let v12: u128;  // [bp-0x1a8]
    let v13: u64;  // [bp-0x1a0]
    let v14: u64;  // [bp-0x198]
    let v16: core::option::Option<&str>;  // [bp-0x190]
    let v17: struct32;  // [bp-0x190]
    let v18: struct32;  // [bp-0x190]
    let v19: u32;  // [bp-0x18c]
    let v20: iNone;  // [bp-0x188], Other Possible Types: u8
    let v21: u64;  // [bp-0x180]
    let v22: iNone;  // [bp-0x178]
    let v23: u64;  // [bp-0x168]
    let v24: u64;  // [bp-0x160]
    let v25: iNone;  // [bp-0x158]
    let v27: iNone;  // [bp-0x148]
    let v29: void*;  // [bp-0x138]
    let v30: void*;  // [bp-0x138]
    let v31: i64;  // [bp-0x130]
    let v32: i64;  // [bp-0x128]
    let v33: u64;  // [bp-0x120]
    let v34: u64;  // [bp-0x118]
    let v35: struct16;  // [bp-0x118]
    let v36: struct16;  // [bp-0x118]
    let v37: struct16;  // [bp-0x118]
    let v38: u64;  // [bp-0x110]
    let v39: void*;  // [bp-0x108]
    let v40: struct32;  // [bp-0x100]
    let v41: struct32;  // [bp-0x100]
    let v42: iNone;  // [bp-0xf0]
    let v43: u8;  // [bp-0xe0]
    let v44: u64;  // [bp-0xd8]
    let v45: u128;  // [bp-0xd0]
    let v46: iNone;  // [bp-0xc0]
    let v47: u128;  // [bp-0xb0]
    let v48: u64;  // [bp-0xa0]
    let v49: iNone;  // [bp-0x98]
    let v50: iNone;  // [bp-0x88]
    let v51: u8;  // [bp-0x70]
    let v52: struct32;  // [bp-0x50]
    let v54: u64;  // rdx
    let v55: i64;  // rbp
    let v56: i64;  // r15
    let v57: i64;  // r12
    let v58: i64;  // rax
    let v59: u64;  // rbx
    let v60: iNone;  // xmm0
    let v62: u128;  // xmm0
    let v63: u64;  // r15
    let v64: u64;  // r14
    let v65: u64;  // rbp
    let v67: core::option::Option<&str>;  // rax
    let v69: u64;  // r15
    let v70: u64;  // r14
    let v71: u64;  // rbp
    let v73: core::option::Option<&str>;  // rax
    let v74: u64;  // rax
    let v75: struct40;  // r15
    let v76: struct64;  // r14
    let v77: struct40;  // rbp
    let v79: core::option::Option<&str>;  // rax
    let v80: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v81: core::result::Result<i32, core::num::error::ParseIntError>;  // rax:rax
    let v82: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v84: u64;  // [bp-0xf8]

    v34 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(a2, 8, 56, "src/uu/csplit/src/patterns.rs");
    v38 = v54;
    v39 = 0;
    v5 = regex::regex::string::Regex::new("^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]?\\d+)?$");
    v2 = core::result::Result<T,E>::unwrap(&v5, "src/uu/csplit/src/patterns.rs") & -0x100 | 1;
    v6 = regex::regex::string::Regex::new("^\\{(?P<TIMES>\\d+)|\\*\\}$");
    v52 = core::result::Result<T,E>::unwrap(&v6, "src/uu/csplit/src/patterns.rs");
    v32 = a1;
    v33 = a1 + a2 * 24;
    v55 = &v6 as u8;
    v56 = &v43;
    v57 = &v16 as u8;
    loop {
        v29 = 0;
        v31 = v32;
        if v31 == v33 {
            *((v3 + 24) as &i64) = 0;
            *((v3 + 8) as &i128) = *(&v37.field_0 as &i128);
            *(v3 as &i64) = 13;
            v2 = 0;
            return;
        }
        v58 = *(core::option::Option<T>::get_or_insert_with(&v29, &v32) as &i64);
        if v58 {
            regex::regex::string::Regex::captures_at(v56, &v52, *((v58 + 8) as &i64), *((v58 + 16) as &i64));
            v59 = 1;
            v1 = 1;
            if *(&v43 as &i32) != 2 {
                v14 = v48;
                v60 = *(&v43 as &i128);
                v12 = v47;
                v11 = v46;
                v9 = v45;
                *(&v4 as void*) = v60;
                v30 = 0;
                regex_automata::util::captures::Captures::get_group_by_name(v57, &v6 as u8, "TIMES");
                if (v16 as i8 & 1) {
                    v57 = &v16 as u8;
                    v82 = core::num::<impl usize>::from_ascii_radix(&v16 as u8, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(*(&v20 as &i64), v21, v13, v14) as u64, a2);
                    v56 = &v43;
                    v59 = core::result::Result<T,E>::unwrap(&v16 as u8) + 1;
                    v1 = 1;
                }
            }
        }
        regex::regex::string::Regex::captures_at(v56, &v51, *((v31 + 8) as &i64), *((v31 + 16) as &i64));
        if *(&v43 as &i32) == 2 {
            v80 = core::num::<impl usize>::from_ascii_radix(v56, *((v31 + 8) as &i64), *((v31 + 16) as &i64));
            if v43 != 1 {
                v7 = v44;
                v8 = v1;
                v10 = v59;
                v5 = 0;
                v35 = alloc::vec::Vec<T,A>::push(&v5, "src/uu/csplit/src/patterns.rs");
            } else {
                v4 = <alloc::string::String as core::clone::Clone>::clone(v31);
                *((v3 + 24) as &u64) = v8;
                *((v3 + 8) as &i128) = *(&v4.vec.buf.inner.cap as &i128);
                *(v3 as &i64) = 7;
                break;
            }
        }
        v14 = v48;
        v62 = *(&v43 as &i128);
        v12 = v47;
        v11 = v46;
        v9 = v45;
        v4 = v62;
        regex_automata::util::captures::Captures::get_group_by_name(v57, v55, "OFFSET");
        if (v16 as i8 & 1) {
            v63 = v13;
            v64 = v14;
            v65 = *(&v20 as &i64);
            v67 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v65, v21, v63, v64) as u64;
            v81 = core::num::<impl i32>::from_ascii_radix(v67, v54, a2) as u128;
            v0 = core::result::Result<T,E>::unwrap(v81);
            v55 = &v6 as u8;
            v56 = &v43;
            v57 = &v16 as u8;
        }
        regex_automata::util::captures::Captures::get_group_by_name(v57, v55, "UPTO");
        if v16 == 1 {
            v69 = v13;
            v70 = v14;
            v71 = *(&v20 as &i64);
            v73 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v71, v21, v69, v70) as u64;
            v40 = regex::regex::string::Regex::new(v73, a2);
            v55 = &v6 as u8;
            v56 = &v43;
            v57 = &v16 as u8;
            if v40.field_0 {
                v27 = v42;
                v25 = *(&v40.field_0 as &i128);
                goto LABEL_520d68;
            } else {
                v17 = uu_csplit::patterns::extract_patterns::{{closure}}(v31, &v84);
                v74 = v17.field_0;
                v25 = *(&v17.field_8 as &i128);
                v27 = v22;
                if v74 == 13 {
LABEL_520d68:
                    v50 = v27;
                    v49 = v25;
                    v22 = v50;
                    v20 = v25;
                    v19 = v0;
                    v23 = v1;
                    v24 = v59;
                    v16 = 1;
                    v36 = alloc::vec::Vec<T,A>::push(&v16, "src/uu/csplit/src/patterns.rs");
                }
            }
LABEL_520f02:
            v50 = v27;
            v49 = v25;
            *((v3 + 24) as void*) = v27;
            *((v3 + 8) as void*) = v25;
            *(v3 as &u64) = v74;
        } else {
            regex_automata::util::captures::Captures::get_group_by_name(v57, v55, "SKIPTO");
            if let None = v16 as u8 {
                continue;
            }
            v75 = v13;
            v76 = v14;
            v77 = *(&v20 as &i64);
            v79 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v77, v21, v75, v76) as u64;
            v41 = regex::regex::string::Regex::new(v79, a2);
            v55 = &v6 as u8;
            v56 = &v43;
            v57 = &v16 as u8;
            if v41.field_0 {
                v27 = v42;
                v25 = *(&v41.field_0 as &i128);
            } else {
                v18 = uu_csplit::patterns::extract_patterns::{{closure}}(v31, &v84);
                v74 = v18.field_0;
                v25 = *(&v18.field_8 as &i128);
                v27 = v22;
                if v74 != 13 {
                    goto LABEL_520f02;
                }
            }
            v50 = v27;
            v49 = v25;
            v22 = v50;
            v20 = v25;
            v19 = v0;
            v23 = v1;
            v24 = v59;
            v16 = 2;
            v37 = alloc::vec::Vec<T,A>::push(&v16, "src/uu/csplit/src/patterns.rs");
        }
    }
    return;
}
