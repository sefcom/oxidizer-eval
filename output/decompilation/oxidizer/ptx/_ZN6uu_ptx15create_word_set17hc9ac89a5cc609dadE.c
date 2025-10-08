fn uu_ptx::create_word_set(a0: i64, a1: i64, a2: i64, a3: &struct48) -> u64 {
    let v0: u8;  // [bp-0x24c]
    let v1: u8;  // [bp-0x24b]
    let v2: u8;  // [bp-0x24a]
    let v3: u8;  // [bp-0x249]
    let v4: iNone;  // [bp-0x248]
    let v5: u64;  // [bp-0x240]
    let v6: u64;  // [bp-0x238]
    let v7: void*;  // [bp-0x228]
    let v8: void*;  // [bp-0x220]
    let v9: u64;  // [bp-0x218]
    let v10: u64;  // [bp-0x210]
    let v11: i64;  // [bp-0x208]
    let v12: u64;  // [bp-0x200]
    let v13: u64;  // [bp-0x1f8]
    let v14: i64;  // [bp-0x1f0]
    let v15: u64;  // [bp-0x1e8]
    let v16: u64;  // [bp-0x1e0]
    let v17: u64;  // [bp-0x1d8]
    let v18: void*;  // [bp-0x1d0]
    let v19: void*;  // [bp-0x1c0]
    let v20: alloc::string::String;  // [bp-0x1b8], Other Possible Types: struct24, struct25, struct32, struct80
    let v21: u64;  // [bp-0x1b0]
    let v22: Result<struct48, struct24>;  // [bp-0x1a8]
    let v23: u64;  // [bp-0x1a8]
    let v24: u64;  // [bp-0x198]
    let v25: alloc::string::String;  // [bp-0x188]
    let v26: alloc::string::String;  // [bp-0x188]
    let v27: Result<struct48, struct24>;  // [bp-0x178]
    let v28: i64;  // [bp-0x178]
    let v29: iNone;  // [bp-0x168]
    let v30: iNone;  // [bp-0x158]
    let v31: iNone;  // [bp-0x148]
    let v32: u64;  // [bp-0x138]
    let v33: struct32;  // [bp-0x128], Other Possible Types: u128
    let v34: struct32;  // [bp-0x128]
    let v35: u128;  // [bp-0x118]
    let v36: u64;  // [bp-0x110]
    let v37: iNone;  // [bp-0x108]
    let v38: iNone;  // [bp-0xf8]
    let v39: iNone;  // [bp-0xe8]
    let v40: iNone;  // [bp-0xd8]
    let v41: u64;  // [bp-0xc8]
    let v42: u64;  // [bp-0xc0]
    let v43: u64;  // [bp-0xb8]
    let v44: struct32;  // [bp-0xb0], Other Possible Types: u64
    let v45: u192;  // [bp-0xa8]
    let v46: struct32;  // [bp-0x90]
    let v47: u64;  // [bp-0x60]
    let v48: struct8;  // [bp-0x58]
    let v50: i64;  // rdx
    let v51: i64;  // r14
    let v52: i64;  // rax
    let v53: u64;  // r15
    let v54: u64;  // r13
    let v55: iNone;  // xmm0
    let v56: u64;  // r15
    let v57: u64;  // r13
    let v59: struct24;  // [bp-0x70]

    v33 = regex::regex::string::Regex::new(*((a2 + 8) as &i64), *((a2 + 16) as &i64));
    v46 = core::result::Result<T,E>::unwrap(&v33, "src/uu/ptx/src/ptx.rs");
    v33 = regex::regex::string::Regex::new(*((a1 + 56) as &i64), *((a1 + 64) as &i64));
    v44 = core::result::Result<T,E>::unwrap(&v33, "src/uu/ptx/src/ptx.rs");
    v18 = 0;
    v19 = 0;
    v48 = hashbrown::map::HashMap<K,V,S,A>::iter(a3);
    v8 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v48);
    if v8 {
        v3 = *((a1 + 90) as &i8);
        v0 = *((a1 + 92) as &i8);
        v2 = *((a2 + 120) as &i8);
        v1 = *((a2 + 121) as &i8);
        v16 = a2 + 24;
        v15 = a2 + 72;
        do {
            if *((v50 + 16) as &i64) {
                v13 = *((v50 + 48) as &i64);
                v51 = *((v50 + 8) as &i64);
                v12 = v51 + *((v50 + 16) as &i64) * 24;
                v52 = v51 + 24;
                v7 = 0;
                loop {
                    v14 = v51;
                    v34 = regex::regex::string::Regex::find_at(v44, v45 as i64, *((v51 + 8) as &i64), *((v51 + 16) as &i64));
                    v9 = v34.field_0;
                    v10 = v9;
                    if v9 {
                        v10 = v34.field_16;
                        v9 = v36;
                    }
                    v53 = *((v51 + 8) as &i64);
                    v54 = *((v51 + 16) as &i64);
                    v20 = regex_automata::meta::regex::Regex::find_iter(&v46, v53, v54);
                    v41 = v30 as i64;
                    v40 = v29;
                    v39 = v27 as i128;
                    v55 = *(&v20.field_0 as &i128);
                    v38 = *(&v25.vec.buf.inner.cap as &i128);
                    v37 = *(&v24 as &i128);
                    v35 = v22 as i128;
                    v33 = v55;
                    v42 = v53;
                    v43 = v54;
                    v17 = v13 + v7;
                    loop {
                        v20 = regex_automata::util::iter::Searcher::advance(&v37, v41, &v33);
                        if v20.field_0 as i32 != 1 {
                            break;
                        }
                        v56 = v21;
                        v57 = v22;
                        if (v3 & 1) && v56 == v10 && v57 == v9 {
                            continue;
                        }
                        v20 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v56, v57, *((v51 + 8) as &i64), *((v51 + 16) as &i64)) as u64, a2);
                        v6 = v22;
                        *(&v4 as &i128) = *(&v20.field_0 as &i128);
                        if (v2 & 1) && !hashbrown::map::HashMap<K,V,S,A>::get_inner(v16, &v4 as u8) || (v1 & 1) && hashbrown::map::HashMap<K,V,S,A>::get_inner(v15, &v4 as u8) {
                            continue;
                        }
                        if (v0 & 1) {
                            v20 = alloc::str::<impl str>::to_uppercase(v5, v6);
                            v6 = v22;
                            *(&v4 as &i128) = *(&v20.vec.buf.inner.cap as &i128);
                        }
                        v32 = v6;
                        v31 = v4 as i128;
                        v59 = <alloc::string::String as core::clone::Clone>::clone(v8);
                        v20 = struct80 {
                            field_0: v31
                            field_16: v32
                            field_24: *(&v59.field_0 as &i128)
                            field_40: v47
                            field_48: v17
                            field_56: v7
                            field_64: v56
                            field_72: v57
                        };
                        alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v18, &v20);
                        v27 = v28;
                        v22 = v23;
                        v25 = v26;
                    }
                    v7 += 1;
                    v51 = v14;
                    v52 = v51 + 24;
                    if v51 == v12 {
                        if v51 == v12 {
                            break;
                        }
                    } else {
                        if v51 == v12 {
                            break;
                        }
                    }
                }
            }
            v8 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v48);
        } while (v8);
    }
    *((v11 + 16) as &i64) = 0;
    *(v11 as &i128) = *(&v18 as &i128);
    return v11;
}
