fn uu_ptx::create_word_set(a0: &struct24, a1: void*, a2: void*, a3: &struct48, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x23c]
    let v1: i8;  // [sp-0x23b]
    let v2: i8;  // [sp-0x23a]
    let v3: i8;  // [sp-0x239]
    let v4: i128;  // [sp-0x238]
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
    let v17: i128;  // [sp-0x1b8], Other Possible Types: struct24, struct96
    let v18: i64;  // [sp-0x1a8]
    let v19: i128;  // [sp-0x1a0]
    let v20: i64;  // [sp-0x190]
    let v21: i64;  // [sp-0x188]
    let v22: i64;  // [sp-0x180]
    let v23: i64;  // [sp-0x178]
    let v24: i64;  // [sp-0x170]
    let v25: i8;  // [bp-0x158]
    let v26: i256;  // [sp-0x148], Other Possible Types: struct32, struct26, Option<struct32>
    let v27: i128;  // [sp-0x138]
    let v28: i128;  // [bp-0x128]
    let v29: i128;  // [sp-0x118]
    let v30: i128;  // [sp-0x108]
    let v31: i128;  // [sp-0xf8]
    let v32: i64;  // [sp-0xe8]
    let v33: i64;  // [sp-0xe0]
    let v34: i64;  // [sp-0xd8]
    let v35: i128;  // [sp-0xc8]
    let v36: i64;  // [sp-0xb8]
    let v37: struct32;  // [sp-0xb0], Other Possible Types: i256
    let v38: i256;  // [sp-0x90], Other Possible Types: struct32
    let v39: i192;  // [sp-0x70], Other Possible Types: struct24
    let v40: i128;  // [sp-0x58]
    let v41: i128;  // [sp-0x48]
    let v42: i64;  // [sp-0x38]
    let v44: i64;  // rcx
    let v45: i64;  // r8
    let v46: i64;  // r9
    let v47: i128;  // xmm0
    let v48: i256;  // ymm0
    let v49: i256;  // ymm0
    let v50: i128;  // xmm1
    let v51: i256;  // ymm1
    let v52: i256;  // ymm1
    let v53: i256;  // ymm2
    let v54: i256;  // ymm3
    let v55: struct18;  // rax
    let v56: i64;  // rdx
    let v57: struct8;  // rax
    let v58: i256;  // ymm1
    let v59: i64;  // r14
    let v60: i64;  // r12
    let v61: i64;  // r15
    let v62: i128;  // xmm0
    let v63: i128;  // xmm0
    let v64: i128;  // xmm0
    let v65: i128;  // xmm1
    let v66: i128;  // xmm2
    let v67: i128;  // xmm3
    let v68: i64;  // rbp
    let v69: i64;  // rbx
    let v70: i64;  // rax
    let v71: i128;  // xmm0
    let v72: i128;  // xmm0
    let v73: i128;  // xmm0
    let v74: i128;  // xmm0
    let v75: i128;  // xmm0

    v26 = regex::regex::string::Regex::new(*((a2 + 8) as &i64), *((a2 + 16) as &i64), a3, a4, a5);
    v38 = core::result::Result<T,E>::unwrap(&v26, "src/uu/ptx/src/ptx.rs");
    v26 = regex::regex::string::Regex::new(*((a1 + 56) as &i64), *((a1 + 64) as &i64), v44, v45, v46);
    v37 = core::result::Result<T,E>::unwrap(&v26, "src/uu/ptx/src/ptx.rs");
    v13 = 0;
    v14 = 0;
    v26 = hashbrown::map::HashMap<K,V,S,A>::iter(a3);
    v42 = v28;
    v47 = v26;
    v49 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
    v50 = v27;
    v52 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50;
    v41 = v50;
    v40 = v47;
    v3 = *((a1 + 90) as &i8);
    v0 = *((a1 + 92) as &i8);
    v2 = *((a2 + 120) as &i8);
    v1 = *((a2 + 121) as &i8);
    v12 = a2 + 24;
    v10 = a2 + 72;
    loop {
        v55 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next();
        if !v55 {
            *((a0 + 16) as &i64) = v14;
            *(a0 as &i64) = v13;
            return a0;
        }
        v9 = v55;
        v8 = *((v56 + 48) as &i64);
        v15 = *((v56 + 8) as &i64);
        v16 = v15 + *((v56 + 16) as &i64) * 24;
        v57 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if v57 {
            v6 = 0;
            do {
                v59 = *((v57 + 8) as &i64);
                v60 = *((v57 + 16) as &i64);
                v26 = regex::regex::string::Regex::find_at(v37, *((&v37 as &char + 8) as &i64), v59, v60);
                v61 = v26;
                v7 = v61;
                match v26 {
                    Some(_) => {
                        v61 = *((&v26 as &char + 16) as &i64);
                        v7 = *((&v26 as &char + 24) as &i64);
                    },
                    None => {
                        v17 = regex_automata::meta::regex::Regex::find_iter(&v38, v59, v60);
                        v32 = v25;
                        v62 = *((&v17 as &char + 80) as &i128);
                        v31 = v62;
                        v63 = *((&v17 as &char + 64) as &i128);
                        v30 = v63;
                        v64 = v17;
                        v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 as u128 as u256;
                        v65 = *((&v17 as &char + 16) as &i128);
                        v52 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65 as u128 as u256;
                        v66 = *((&v17 as &char + 32) as &i128);
                        v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66 as u128 as u256;
                        v67 = *((&v17 as &char + 48) as &i128);
                        v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67 as u128 as u256;
                        v29 = v67;
                        v28 = v66;
                        v27 = v65;
                        v26 = v64;
                        v33 = v59;
                        v34 = v60;
                        v11 = v8 + v6;
                    },
                }
                loop {
                    regex_automata::util::iter::Searcher::advance(&v17, &v28, v32, &v26);
                    if !v17 {
                        break;
                    }
                    v68 = *((&v17 as &char + 8) as &i64);
                    v69 = v18;
                    if !(!v3) && !(v68 != v61) && !(!core::cmp::impls::<impl core::cmp::PartialEq for usize>::eq(v69, v7)) {
                        continue;
                    }
                    v70 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v68, v69, v59, v60);
                    if !v70 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                    v17 = <T as alloc::slice::hack::ConvertVec>::to_vec(v70, v56);
                    v5 = v18;
                    v71 = v17;
                    v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71;
                    v4 = v71;
                    if !v2 && !hashbrown::map::HashMap<K,V,S,A>::get_inner(v10, &v4) || !v2 && !v1 || !hashbrown::map::HashMap<K,V,S,A>::get_inner(v10, &v4) && hashbrown::map::HashMap<K,V,S,A>::get_inner(v12, &v4) || !v1 && hashbrown::map::HashMap<K,V,S,A>::get_inner(v12, &v4) {
                        if v0 {
                            v17 = alloc::str::<impl str>::to_lowercase(*((&v4 as &char + 8) as &i64), v5);
                            v5 = v18;
                            v72 = v17;
                            v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72;
                            v4 = v72;
                        }
                        v36 = v5;
                        v73 = v4;
                        v35 = v73;
                        v39 = <alloc::string::String as core::clone::Clone>::clone(v9);
                        v18 = v36;
                        v74 = v35;
                        v17 = v74;
                        v21 = v11;
                        v22 = v6;
                        v23 = v68;
                        v24 = v69;
                        v20 = *((&v39 as &char + 16) as &i64);
                        v75 = v39;
                        v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75;
                        v19 = v75;
                        alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v13, &v17);
                    }
                }
                v6 += 1;
                v57 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            } while (v57);
        }
    }
}
