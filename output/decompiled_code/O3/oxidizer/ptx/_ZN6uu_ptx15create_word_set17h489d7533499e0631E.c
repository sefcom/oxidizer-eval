fn uu_ptx::create_word_set(a0: void*, a1: void*, a2: void*, a3: u32, a4: u32, a5: u32) -> u64 {
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
    let v19: i8;  // [bp-0x158]
    let v20: i128;  // [bp-0x148], Other Possible Types: struct26, Option<struct32>
    let v21: i128;  // [sp-0x138]
    let v22: i128;  // [bp-0x128]
    let v23: i128;  // [sp-0x118]
    let v24: i128;  // [sp-0x108]
    let v25: i128;  // [sp-0xf8]
    let v26: i64;  // [sp-0xe8]
    let v27: i64;  // [sp-0xe0]
    let v28: i64;  // [sp-0xd8]
    let v29: i128;  // [sp-0xc8]
    let v30: i64;  // [sp-0xb8]
    let v31: struct32;  // [sp-0xb0], Other Possible Types: i256
    let v32: i256;  // [sp-0x90], Other Possible Types: struct32
    let v33: struct24;  // [sp-0x70], Other Possible Types: i192
    let v34: i128;  // [sp-0x58]
    let v35: i128;  // [sp-0x48]
    let v36: i64;  // [sp-0x38]
    let v38: i64;  // rcx
    let v39: i64;  // r8
    let v40: i64;  // r9
    let v41: i128;  // xmm0
    let v42: i256;  // ymm0
    let v43: i256;  // ymm0
    let v44: i128;  // xmm1
    let v45: i256;  // ymm1
    let v46: i256;  // ymm1
    let v47: i256;  // ymm2
    let v48: i256;  // ymm3
    let v49: struct18;  // rax
    let v50: i64;  // rdx
    let v51: struct8;  // rax
    let v52: i256;  // ymm1
    let v53: i64;  // r14
    let v54: i64;  // r12
    let v55: i64;  // r15
    let v56: i128;  // xmm0
    let v57: i128;  // xmm0
    let v58: i128;  // xmm0
    let v59: i128;  // xmm1
    let v60: i128;  // xmm2
    let v61: i128;  // xmm3
    let v62: i64;  // rbp
    let v63: i64;  // rbx
    let v64: i64;  // rax
    let v65: i128;  // xmm0
    let v66: i128;  // xmm0
    let v67: i128;  // xmm0
    let v68: i128;  // xmm0

    regex::regex::string::Regex::new(&v20, *((a2 + 8) as &i64), *((a2 + 16) as &i64), a3, a4, a5);
    v32 = core::result::Result<T,E>::unwrap(&v20, "src/uu/ptx/src/ptx.rs");
    regex::regex::string::Regex::new(&v20, *((a1 + 56) as &i64), *((a1 + 64) as &i64), v38, v39, v40);
    v31 = core::result::Result<T,E>::unwrap(&v20, "src/uu/ptx/src/ptx.rs");
    v13 = 0;
    v14 = 0;
    v20 = hashbrown::map::HashMap<K,V,S,A>::iter(a3);
    v36 = v22;
    v41 = v20;
    v43 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41;
    v44 = v20.field_16;
    v46 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44;
    v35 = v44;
    v34 = v41;
    v3 = *((a1 + 90) as &i8);
    v0 = *((a1 + 92) as &i8);
    v2 = *((a2 + 120) as &i8);
    v1 = *((a2 + 121) as &i8);
    v12 = a2 + 24;
    v10 = a2 + 72;
    loop {
        v49 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next();
        if !v49 {
            *((a0 + 16) as &i64) = v14;
            *(a0 as &i64) = v13;
            return a0;
        }
        v9 = v49;
        v8 = *((v50 + 48) as &i64);
        v15 = *((v50 + 8) as &i64);
        v16 = v15 + *((v50 + 16) as &i64) * 24;
        v51 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if v51 {
            v6 = 0;
            do {
                v53 = *((v51 + 8) as &i64);
                v54 = *((v51 + 16) as &i64);
                v20 = regex::regex::string::Regex::find_at(v31, *((&v31 as &char + 8) as &i64), v53, v54);
                v55 = v20;
                v7 = v55;
                match v20 {
                    Some(_) => {
                        v55 = *((&v20 as &char + 16) as &i64);
                        v7 = *((&v20 as &char + 24) as &i64);
                    },
                    None => {
                        v17 = regex_automata::meta::regex::Regex::find_iter(&v32, v53, v54);
                        v26 = v19;
                        v56 = *((&v17 as &char + 80) as &i128);
                        v25 = v56;
                        v57 = *((&v17 as &char + 64) as &i128);
                        v24 = v57;
                        v58 = v17;
                        v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 as u128 as u256;
                        v59 = *((&v17 as &char + 16) as &i128);
                        v46 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 as u128 as u256;
                        v60 = *((&v17 as &char + 32) as &i128);
                        v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 as u128 as u256;
                        v61 = *((&v17 as &char + 48) as &i128);
                        v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 as u128 as u256;
                        v23 = v61;
                        v22 = v60;
                        v21 = v59;
                        v20 = v58;
                        v27 = v53;
                        v28 = v54;
                        v11 = v8 + v6;
                        v18 = v18;
                    },
                }
                loop {
                    v18 = v18;
                    regex_automata::util::iter::Searcher::advance(&v17, &v22, v26, &v20);
                    if !v17 {
                        break;
                    }
                    v62 = *((&v17 as &char + 8) as &i64);
                    v63 = v18;
                    if !(!v3) && !(v62 != v55) && !(!core::cmp::impls::<impl core::cmp::PartialEq for usize>::eq(v63, v7)) {
                        continue;
                    }
                    v64 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v62, v63, v53, v54);
                    if !v64 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                    v17 = <T as alloc::slice::hack::ConvertVec>::to_vec(v64, v50);
                    v5 = v17.field_16;
                    v65 = v17;
                    v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65;
                    v4 = v65;
                    if !hashbrown::map::HashMap<K,V,S,A>::get_inner(v10, &v4) && !v2 || !v1 && !v2 || !hashbrown::map::HashMap<K,V,S,A>::get_inner(v10, &v4) && hashbrown::map::HashMap<K,V,S,A>::get_inner(v12, &v4) || !v1 && hashbrown::map::HashMap<K,V,S,A>::get_inner(v12, &v4) {
                        if v0 {
                            v17 = alloc::str::<impl str>::to_lowercase(*((&v4 as &char + 8) as &i64), v5);
                            v5 = v17.field_16;
                            v66 = v17;
                            v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
                            v4 = v66;
                        }
                        v30 = v5;
                        v67 = v4;
                        v29 = v67;
                        v33 = <alloc::string::String as core::clone::Clone>::clone(v9);
                        v17.field_16 = vvar_501{stack -184};
                        v68 = v29;
                        v17 = v68;
                        v17.48 = vvar_487{stack -496};
                        v17.field_64 = vvar_404{stack -544};
                        v17.64 = vvar_236{reg 56};
                        v17.field_80 = vvar_237{reg 40};
                        v17.field_48 = (stack_base)[96] as i64;
                        v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
                        v17.24 = vvar_318{reg 224};
                        alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v13, &v17);
                        v18 = v18;
                    }
                }
                v6 += 1;
                v51 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            } while (v51);
        }
    }
}
