fn uu_ptx::create_word_set(a0: i64, a1: i64, a2: i64, a3: &struct48) -> long long {
    let v0: u8;  // [bp-0x23c]
    let v1: u8;  // [bp-0x23b]
    let v2: u8;  // [bp-0x23a]
    let v3: u8;  // [bp-0x239]
    let v4: u128;  // [bp-0x238]
    let v5: struct32;  // [bp-0x230]
    let v6: core::result::Result<alloc::string::String, core::char::decode::DecodeUtf16Error>;  // [bp-0x228]
    let v7: void*;  // [bp-0x220]
    let v8: u64;  // [bp-0x218]
    let v9: i64;  // [bp-0x210]
    let v10: u64;  // [bp-0x208]
    let v11: u64;  // [bp-0x200]
    let v12: u64;  // [bp-0x1f8]
    let v13: u64;  // [bp-0x1f0]
    let v14: u64;  // [bp-0x1e8]
    let v15: void*;  // [bp-0x1e0]
    let v16: void*;  // [bp-0x1d0]
    let v17: u64;  // [bp-0x1c8]
    let v18: u64;  // [bp-0x1c0]
    let v19: alloc::string::String;  // [bp-0x1b8], Other Possible Types: struct32, struct80, struct96
    let v20: u64;  // [bp-0x1b0]
    let v21: u64;  // [bp-0x1a8]
    let v22: u64;  // [bp-0x1a8]
    let v23: u64;  // [bp-0x188]
    let v24: u64;  // [bp-0x188]
    let v25: u64;  // [bp-0x178]
    let v26: u64;  // [bp-0x178]
    let v27: u128;  // [bp-0x168]
    let v28: u128;  // [bp-0x158]
    let v29: Result<struct32, struct32>;  // [bp-0x148], Other Possible Types: u128
    let v30: Result<struct32, struct32>;  // [bp-0x148]
    let v31: struct32;  // [bp-0x148]
    let v32: struct26;  // [bp-0x148]
    let v33: u128;  // [bp-0x138]
    let v34: u64;  // [bp-0x130]
    let v35: u128;  // [bp-0x128]
    let v36: u128;  // [bp-0x118]
    let v37: u128;  // [bp-0x108]
    let v38: u128;  // [bp-0xf8]
    let v39: u64;  // [bp-0xe8]
    let v40: u64;  // [bp-0xe0]
    let v41: alloc::string::String;  // [bp-0xd8]
    let v42: u128;  // [bp-0xc8]
    let v43: u64;  // [bp-0xb8]
    let v44: struct32;  // [bp-0xb0], Other Possible Types: u64
    let v45: u192;  // [bp-0xa8]
    let v46: struct32;  // [bp-0x90]
    let v47: Result<struct4, struct8>;  // [bp-0x60]
    let v48: u128;  // [bp-0x58]
    let v49: u128;  // [bp-0x48]
    let v50: u64;  // [bp-0x38]
    let v52: u64;  // rax
    let v53: i64;  // rdx
    let v54: i64;  // rax
    let v55: u64;  // r14
    let v56: alloc::string::String;  // r12
    let v57: core::fmt::Arguments;  // r15
    let v58: u128;  // xmm0
    let v59: u64;  // rbp
    let v60: u64;  // rbx
    let v63: alloc::string::String;  // [bp-0x70]

    v29 = regex::regex::string::Regex::new(*((a2 + 8) as &i64), *((a2 + 16) as &i64));
    v46 = core::result::Result<T,E>::unwrap(&v29, "src/uu/ptx/src/ptx.rs");
    v30 = regex::regex::string::Regex::new(*((a1 + 56) as &i64), *((a1 + 64) as &i64));
    v44 = core::result::Result<T,E>::unwrap(&v30, "src/uu/ptx/src/ptx.rs");
    v15 = 0;
    v16 = 0;
    v32 = hashbrown::map::HashMap<K,V,S,A>::iter(a3);
    v50 = *((&v30 as &char + 32) as &i64);
    v49 = *(&v32.field_16 as &i128);
    v48 = *(&v32.field_0 as &i128);
    v3 = *((a1 + 90) as &i8);
    v0 = *((a1 + 92) as &i8);
    v2 = *((a2 + 120) as &i8);
    v1 = *((a2 + 121) as &i8);
    v14 = a2 + 24;
    v12 = a2 + 72;
    loop {
        v52 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v48);
        if !v52 {
            *((v9 + 16) as &i64) = 0;
            *(v9 as &i128) = *(&v15 as &i128);
            return v9;
        }
        v11 = v52;
        v10 = *((v53 + 48) as &i64);
        v17 = *((v53 + 8) as &i64);
        v18 = *((v53 + 8) as &i64) + *((v53 + 16) as &i64) * 24;
        v54 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v17);
        if v54 {
            do {
                v55 = *((v54 + 8) as &i64);
                v56 = *((v54 + 16) as &i64);
                v31 = regex::regex::string::Regex::find_at(v44, v45 as i64, v55, v56);
                v57 = v31.field_0 as i64;
                v8 = v31.field_0;
                if v8 {
                    v57 = v31.field_16 as i64;
                    v8 = v34;
                }
                v19 = regex_automata::meta::regex::Regex::find_iter(&v46, v55, v56);
                v39 = v28;
                v38 = v27;
                v37 = *((&v19.field_64 as &char + 8) as &i128);
                v58 = v19.field_0;
                v36 = *((&v19.field_48 as &char + 8) as &i128);
                v35 = *(&v19.field_32 as &i128);
                v33 = *(&v21 as &i128);
                v29 = v58;
                v40 = v55;
                v41 = v56;
                v13 = v10 + v7;
                loop {
                    v19 = regex_automata::util::iter::Searcher::advance(&v35, v39, &v29);
                    if !v19.field_0 as i64 {
                        break;
                    }
                    v59 = v20;
                    v60 = v21;
                    if !(!v3 || v59 != v57 || !core::cmp::impls::<impl core::cmp::PartialEq for usize>::eq(v60, v8)) {
                        continue;
                    }
                    <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v59, v60, v55, v56) as u64, a2, a3);
                    v6 = v21;
                    v4 = v19.field_0;
                    if !((!v2 || hashbrown::map::HashMap<K,V,S,A>::get_inner(v14, &v4, a2)) && (!v1 || !hashbrown::map::HashMap<K,V,S,A>::get_inner(v12, &v4, a2))) {
                        continue;
                    }
                    if v0 {
                        v19 = alloc::str::<impl str>::to_lowercase(v5, v6);
                        v6 = v21;
                        v4 = *(&v19.vec.buf.cap as &i128);
                    }
                    v43 = v6;
                    v42 = v4;
                    v63 = <alloc::string::String as core::clone::Clone>::clone(v11);
                    v19 = struct80 {
                        field_0: v42
                        field_16: v43
                        field_24: *(&v63.vec.buf.cap as &i128)
                        field_40: v47
                        field_48: v13
                        field_56: v7
                        field_64: v59
                        field_72: v60
                    };
                    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v15, &v19);
                    v25 = v26;
                    v21 = v22;
                    v23 = v24;
                }
                v7 += 1;
                v54 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v17);
            } while (v54);
        }
    }
}
