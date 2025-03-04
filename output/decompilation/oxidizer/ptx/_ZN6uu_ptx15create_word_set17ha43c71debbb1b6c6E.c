fn uu_ptx::create_word_set(a0: u32, a1: void*, a2: void*, a3: &struct48) -> u64 {
    let v0: i8;  // [sp-0x23c]
    let v1: i8;  // [sp-0x23b]
    let v2: i8;  // [sp-0x23a]
    let v3: i8;  // [sp-0x239]
    let v4: iNone;  // [sp-0x238]
    let v5: i64;  // [sp-0x228]
    let v6: i64;  // [sp-0x220]
    let v7: i64;  // [sp-0x218]
    let v8: i64;  // [sp-0x208]
    let v9: struct18;  // [sp-0x200]
    let v10: i64;  // [sp-0x1f8]
    let v11: i64;  // [sp-0x1f0]
    let v12: i64;  // [sp-0x1e8]
    let v13: i64;  // [sp-0x1e0]
    let v14: i64;  // [sp-0x1d0]
    let v15: i64;  // [sp-0x1c8]
    let v16: i64;  // [sp-0x1c0]
    let v17: struct24;  // [sp-0x1b8], Other Possible Types: struct96, struct80, int
    let v18: i64;  // [sp-0x1a8]
    let v19: i8;  // [bp-0x158]
    let v20: struct32;  // [sp-0x148], Other Possible Types: int, struct26, Option<struct32>
    let v21: iNone;  // [sp-0x138]
    let v22: i8;  // [sp-0x128], Other Possible Types: int
    let v23: iNone;  // [sp-0x118]
    let v24: iNone;  // [sp-0x108]
    let v25: iNone;  // [sp-0xf8]
    let v26: i64;  // [sp-0xe8]
    let v27: i64;  // [sp-0xe0]
    let v28: i64;  // [sp-0xd8]
    let v29: iNone;  // [sp-0xc8]
    let v30: i64;  // [sp-0xb8]
    let v31: struct32;  // [sp-0xb0]
    let v32: struct32;  // [sp-0x90]
    let v33: struct24;  // [sp-0x70]
    let v34: iNone;  // [sp-0x58]
    let v35: iNone;  // [sp-0x48]
    let v36: i64;  // [sp-0x38]
    let v38: iNone;  // xmm0
    let v39: iNone;  // ymm0
    let v40: iNone;  // ymm0
    let v41: iNone;  // xmm1
    let v42: iNone;  // ymm1
    let v43: iNone;  // ymm2
    let v44: iNone;  // ymm3
    let v45: struct18;  // rax
    let v46: i64;  // rdx
    let v47: struct8;  // rax
    let v48: iNone;  // ymm1
    let v49: i64;  // r14
    let v50: i64;  // r12
    let v51: i64;  // r15
    let v52: iNone;  // xmm0
    let v53: iNone;  // xmm0
    let v54: iNone;  // xmm0
    let v55: iNone;  // xmm1
    let v56: iNone;  // xmm2
    let v57: iNone;  // xmm3
    let v58: i64;  // rbp
    let v59: i64;  // rbx
    let v60: iNone;  // xmm0
    let v61: iNone;  // xmm0
    let v62: iNone;  // xmm0

    v20 = regex::regex::string::Regex::new(*((a2 + 8) as &i64), *((a2 + 16) as &i64));
    v32 = core::result::Result<T,E>::unwrap(&v20, "src/uu/ptx/src/ptx.rs");
    v20 = regex::regex::string::Regex::new(*((a1 + 56) as &i64), *((a1 + 64) as &i64));
    v31 = core::result::Result<T,E>::unwrap(&v20, "src/uu/ptx/src/ptx.rs");
    v13 = 0;
    v14 = 0;
    v20 = hashbrown::map::HashMap<K,V,S,A>::iter(a3);
    v36 = *(&v22 as &i64);
    v38 = v20;
    v40 = v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 as u256;
    v41 = v21;
    v48 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 as u256;
    v35 = v41;
    v34 = v38;
    v3 = *((a1 + 90) as &i8);
    v0 = *((a1 + 92) as &i8);
    v2 = *((a2 + 120) as &i8);
    v1 = *((a2 + 121) as &i8);
    v12 = a2 + 24;
    v10 = a2 + 72;
    loop {
        v45 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next();
        if !v45 {
            return a0;
        }
        v9 = v45;
        v8 = *((v46 + 48) as &i64);
        v15 = *((v46 + 8) as &i64);
        v16 = v15 + *((v46 + 16) as &i64) * 24;
        v47 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if v47 {
            v6 = 0;
            do {
                v49 = *((v47 + 8) as &i64);
                v50 = *((v47 + 16) as &i64);
                v20 = regex::regex::string::Regex::find_at(v31.field_0, v31.field_8 as i64, v49, v50);
                v51 = v20 as i64;
                v7 = v51;
                match v20 {
                    Some(_) => {
                        v51 = *((&v20 as &char + 16) as &i64);
                        v7 = *((&v20 as &char + 24) as &i64);
                    },
                    None => {
                        v17 = regex_automata::meta::regex::Regex::find_iter(&v32, v49, v50);
                        v26 = *(&v19 as &i64);
                        v52 = *((&v17.field_80 as &char + 8) as &i128);
                        v25 = v52;
                        v53 = *((&v17.field_64 as &char + 8) as &i128);
                        v24 = v53;
                        v54 = v17;
                        v40 = ((v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 as u256;
                        v55 = v17.field_16;
                        v48 = v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 as u256;
                        v56 = *(&v17.field_32 as &i128);
                        v43 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 as u256;
                        v57 = *((&v17.field_48 as &char + 8) as &i128);
                        v44 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 as u256;
                        v23 = v57;
                        v22 = v56;
                        v21 = v55;
                        v20 = v54;
                        v27 = v49;
                        v28 = v50;
                        v11 = v8 + v6;
                    },
                }
                loop {
                    regex_automata::util::iter::Searcher::advance(&v17, &v22, v26, &v20);
                    if !v17 as i64 {
                        break;
                    }
                    v58 = (&v17)[8] as i64;
                    v59 = v18;
                    if !(!v3 || v58 != v51 || !core::cmp::impls::<impl core::cmp::PartialEq for usize>::eq(v59, v7)) {
                        continue;
                    }
                    v17 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v58, v59, v49, v50), a2);
                    v5 = v18;
                    v60 = v17;
                    v40 = v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 as u256;
                    v4 = v60;
                    if !((!v2 || hashbrown::map::HashMap<K,V,S,A>::get_inner(v12, &v4)) && (!v1 || !hashbrown::map::HashMap<K,V,S,A>::get_inner(v10, &v4))) {
                        continue;
                    }
                    if v0 {
                        v17 = alloc::str::<impl str>::to_lowercase((&v4)[8] as i64, v5);
                        v5 = v18;
                        v61 = v17;
                        v40 = v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 as u256;
                        v4 = v61;
                    }
                    v30 = v5;
                    v62 = v4;
                    v29 = v62;
                    v33 = <alloc::string::String as core::clone::Clone>::clone(v9);
                    v17 = struct80 {
                        field_0: v63
                        field_16: v30
                        field_24: v64
                        field_40: v33.field_16
                        field_48: v11
                        field_56: v6
                        field_64: v58
                        field_72: v59
                    };
                    v40 = ((v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v33.field_0 as &i128);
                    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v13, &v17);
                }
                v6 += 1;
                v47 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            } while (v47);
        }
    }
}
