fn change_log::domain::changelog::generate_changelog(a0: u64, a1: i64) -> long long {
    let v0: alloc::string::String;  // [bp-0x200]
    let v1: alloc::string::String;  // [bp-0x200]
    let v2: u64;  // [bp-0x1f0]
    let v3: u128;  // [bp-0x1e8]
    let v4: u64;  // [bp-0x1e0]
    let v5: u64;  // [bp-0x1d8]
    let v6: Result<struct24, struct24>;  // [bp-0x1c8], Other Possible Types: struct24, u128
    let v7: struct48;  // [bp-0x1c8]
    let v8: Result<struct24, struct24>;  // [bp-0x1c8]
    let v9: alloc::string::String;  // [bp-0x1c8]
    let v10: struct32;  // [bp-0x1c8]
    let v11: struct32;  // [bp-0x1c8]
    let v12: struct40;  // [bp-0x1c8]
    let v13: Result<struct24, struct24>;  // [bp-0x1c8]
    let v14: u64;  // [bp-0x1b8]
    let v15: u64;  // [bp-0x1b8]
    let v16: u64;  // [bp-0x1b8]
    let v17: u128;  // [bp-0x188]
    let v18: Option<struct24>;  // [bp-0x188]
    let v19: u64;  // [bp-0x188]
    let v20: u64;  // [bp-0x178]
    let v21: struct24;  // [bp-0x168], Other Possible Types: struct8
    let v22: i64;  // [bp-0x150], Other Possible Types: struct_2 *, struct_7 *
    let v23: void*;  // [bp-0x138], Other Possible Types: u64
    let v24: void*;  // [bp-0x138], Other Possible Types: struct32, struct48, struct24
    let v25: i64;  // [bp-0x138]
    let v26: iNone;  // [bp-0x138]
    let v27: void*;  // [bp-0x138]
    let v28: u128;  // [bp-0x138]
    let v29: void*;  // [bp-0x138]
    let v30: &str;  // [bp-0x138]
    let v31: u64;  // [bp-0x130]
    let v32: u64;  // [bp-0x130]
    let v33: u128;  // [bp-0x130]
    let v34: u64;  // [bp-0x130]
    let v35: u128;  // [bp-0x130]
    let v36: u64;  // [bp-0x128]
    let v37: u64;  // [bp-0x128]
    let v38: u64;  // [bp-0x128]
    let v39: u128;  // [bp-0x128]
    let v40: u128;  // [bp-0x128]
    let v41: &str;  // [bp-0x128]
    let v42: u64;  // [bp-0x118]
    let v43: &str;  // [bp-0x118]
    let v44: i64;  // [bp-0xf8]
    let v45: void*;  // [bp-0xf0], Other Possible Types: struct16
    let v46: u64;  // [bp-0xe8]
    let v47: void*;  // [bp-0xe0]
    let v48: u128;  // [bp-0xd8]
    let v49: u128;  // [bp-0xc8]
    let v50: u64;  // [bp-0xc0]
    let v51: u64;  // [bp-0xb8]
    let v52: u64;  // [bp-0xb0]
    let v53: struct48;  // [bp-0xa8]
    let v54: iNone;  // [bp-0x78]
    let v55: struct16;  // [bp-0x78]
    let v56: u128;  // [bp-0x68]
    let v57: u64;  // [bp-0x60]
    let v58: iNone;  // [bp-0x58]
    let v59: u64;  // [bp-0x48]
    let v60: u64;  // [bp-0x40]
    let v61: u8;  // [bp-0x38]
    let v63: u64;  // rax
    let v64: u64;  // rdx
    let v65: u64;  // rax
    let v66: iNone;  // xmm0
    let v67: u64;  // rax
    let v68: u64;  // r12
    let v69: void*;  // r13
    let v70: void*;  // rax
    let v71: iNone;  // xmm0
    let v72: u64;  // rax
    let v73: u128;  // xmm0
    let v74: u64;  // rax
    let v76: i64;  // rbx
    let v77: i64;  // rbx
    let v78: i64;  // rbx
    let v79: i64;  // rax
    let v80: i64;  // rax
    let v81: i64;  // rax
    let v82: u64;  // rdx
    let v84: &str;  // rax:rdx
    let v87: u64;  // [bp-0x1c0]

    v21 = struct24 {
        field_0: 0
        field_8: ""
    };
    v63 = std::thread::local::LocalKey<T>::with();
    v53 = struct48 {
        field_0: g_aa5b48.field_0
        field_16: g_aa5b58.field_0
        field_32: v63
        field_40: v64
    };
    v65 = std::thread::local::LocalKey<T>::with();
    v49 = g_aa5b58.field_0;
    v48 = g_aa5b48.field_0;
    v51 = v65;
    v52 = v64;
    v45 = 0;
    v46 = 8;
    v47 = 0;
    v7 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
    v66 = v7.field_0;
    v58 = *(&v7.field_32 as &i128);
    v56 = v7.field_16;
    v54 = v66;
    v67 = *((a1 + 16) as &i64);
    if *((a1 + 16) as &i64) {
        v68 = *((a1 + 8) as &i64);
        v69 = 0;
        do {
            if *((88 + v68 + v69 as &u8) as &i64) {
                v9 = <alloc::string::String as core::clone::Clone>::clone(v68 + v69 + 72);
                v55 = hashbrown::map::HashMap<K,V,S,A>::insert(&v9);
            }
            v70 = change_log::domain::changelog::category_from_pr_type(*((8 + v68 + v69 as &u8) as &i64), *((16 + v68 + v69 as &u8) as &i64));
            v38 = v37;
            v25 = v24;
            v32 = v31;
            if v70 {
                if *((96 + v68 + v69 as &u8) as &i8) {
                    v10 = hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v48, v70);
                    if v10.field_0 {
                        v71 = *(&v10.field_0 as &i128);
                        v39 = *(&v10.field_16 as &i128);
                        v26 = v71;
                    } else {
                        v33 = *(&v87 as &i128);
                        v27 = 0;
                    }
                    vvar_1163{stack -312} = struct24 OrderedDict([(0, 𝜙@64b [((8091372, None), vvar_802{stack -312}), ((8091470, None), vvar_957{stack -312})]), (8, 𝜙@64b [((8091372, None), vvar_803{stack -304}), ((8091470, None), vvar_803{stack -304})]), (16, 𝜙@64b [((8091372, None), vvar_800{stack -296}), ((8091470, None), vvar_800{stack -296})])])
                    v72 = std::collections::hash::map::Entry<K,V>::or_default(&v24);
                    v9 = <alloc::string::String as core::clone::Clone>::clone(v68 + v69 + 24);
                    alloc::vec::Vec<T,A>::push(v72, &v9, "scripts/change-log/src/domain/changelog.rs");
                    v9 = <alloc::string::String as core::clone::Clone>::clone(v68 + v69 + 48);
                    v45 = alloc::vec::Vec<T,A>::push(&v9, "scripts/change-log/src/domain/changelog.rs");
                    v38 = v36;
                    v25 = v23;
                    v32 = v34;
                } else {
                    v11 = hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v53, v70);
                    if v11.field_0 {
                        v73 = *(&v11.field_0 as &i128);
                        v40 = *(&v11.field_16 as &i128);
                        v28 = v73;
                    } else {
                        v35 = *(&v87 as &i128);
                        v29 = 0;
                    }
                    vvar_1162{stack -312} = struct24 OrderedDict([(0, 𝜙@64b [((8091439, None), vvar_802{stack -312}), ((8091583, None), vvar_964{stack -312})]), (8, 𝜙@64b [((8091439, None), vvar_803{stack -304}), ((8091583, None), vvar_803{stack -304})]), (16, 𝜙@64b [((8091439, None), vvar_800{stack -296}), ((8091583, None), vvar_800{stack -296})])])
                    v74 = std::collections::hash::map::Entry<K,V>::or_default(&v24);
                    v9 = <alloc::string::String as core::clone::Clone>::clone(v68 + v69 + 24);
                    alloc::vec::Vec<T,A>::push(v74, &v9, "scripts/change-log/src/domain/changelog.rs");
                    v38 = v36;
                    v25 = v23;
                    v32 = v34;
                }
            }
            v31 = v32;
            v24 = v25;
            v37 = v38;
            v69 += 104;
        } while (v67 * 104 != v69);
    }
    if v57 {
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v21, &g_4c54d0, &g_4c54f0);
        v24 = struct48 {
            field_0: v55
            field_16: v56
            field_32: v58
        };
        v12 = <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v24);
        core::iter::traits::iterator::Iterator::collect(&v59, &v12);
        alloc::slice::stable_sort(v60, *(&v61 as &i64));
        v24 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v59);
        v18 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v24);
        if !((((0 ^ v18 as i64) & (0 ^ -(v19))) >> 63) as char) {
            do {
                v5 = v20;
                v3 = v18 as i128;
                v1 = format!("{}\n", &v3 as u8);
                v6 = *(&v1.vec.buf.inner.cap as &i128);
                v15 = v2;
                <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v21, 2, v2 + 2);
                v18 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v24);
            } while (v18 as i64 != 0x8000000000000000);
        }
        alloc::string::String::push(&v21, 10);
    }
    v30 = "Features";
    v41 = "Fixes";
    v43 = "Chores";
    v16 = v15;
    if v50 {
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v21, &g_4cacf7, &g_4cad03);
        v22 = &v30 as u64;
        v76 = hashbrown::map::HashMap<K,V,S,A>::get_inner(&v48, &v30 as u64);
        v16 = v15;
        if v76 {
            v0 = format!("- {}\n", &v22);
            v3 = *(&v0.vec.buf.inner.cap as &i128);
            v5 = v2;
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v21, v4, v2 + v4);
            core::iter::traits::iterator::Iterator::collect(&v0, *((v76 + 24) as &i64), *((v76 + 24) as &i64) + *((v76 + 32) as &i64) * 24);
            v13 = alloc::str::join_generic_copy(v0, "\n");
            v20 = v14;
            v17 = v13 as i128;
            v0 = format!("{}\n\n", &v17);
            v3 = *(&v0.vec.buf.inner.cap as &i128);
            v5 = v2;
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v21, v4, v2 + v4);
            v16 = v14;
        }
        v22 = &v41 as u64;
        v77 = hashbrown::map::HashMap<K,V,S,A>::get_inner(&v48, &v41 as u64);
        if v77 {
            v0 = format!("- {}\n", &v22);
            v3 = *(&v0.vec.buf.inner.cap as &i128);
            v5 = v2;
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v21, v4, v2 + v4);
            core::iter::traits::iterator::Iterator::collect(&v0, *((v77 + 24) as &i64), *((v77 + 24) as &i64) + *((v77 + 32) as &i64) * 24);
            v6 = alloc::str::join_generic_copy(v0, "\n");
            v20 = v14;
            v17 = v6 as i128;
            v0 = format!("{}\n\n", &v17);
            v3 = *(&v0.vec.buf.inner.cap as &i128);
            v5 = v2;
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v21, v4, v2 + v4);
            v16 = v14;
        }
        v22 = &v43 as u64;
        v78 = hashbrown::map::HashMap<K,V,S,A>::get_inner(&v48, &v43 as u64);
        if v78 {
            v0 = format!("- {}\n", &v22);
            v3 = *(&v0.vec.buf.inner.cap as &i128);
            v5 = v2;
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v21, v4, v2 + v4);
            core::iter::traits::iterator::Iterator::collect(&v0, *((v78 + 24) as &i64), *((v78 + 24) as &i64) + *((v78 + 32) as &i64) * 24);
            v8 = alloc::str::join_generic_copy(v0, "\n");
            v20 = v14;
            v17 = v8 as i128;
            v0 = format!("{}\n\n", &v17);
            v3 = *(&v0.vec.buf.inner.cap as &i128);
            v5 = v2;
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v21, v4, v2 + v4);
            v16 = v14;
        }
    }
    v79 = hashbrown::map::HashMap<K,V,S,A>::get_inner(&v53, &v30 as u64);
    if v79 {
        v21 = change_log::domain::changelog::generate_changelog::{{closure}}(v23, 8, *((v79 + 24) as &i64), *((v79 + 32) as &i64));
    }
    v80 = hashbrown::map::HashMap<K,V,S,A>::get_inner(&v53, &v41 as u64);
    if v80 {
        v21 = change_log::domain::changelog::generate_changelog::{{closure}}(v36, 5, *((v80 + 24) as &i64), *((v80 + 32) as &i64));
    }
    v81 = hashbrown::map::HashMap<K,V,S,A>::get_inner(&v53, &v43 as u64);
    if v81 {
        v21 = change_log::domain::changelog::generate_changelog::{{closure}}(v42, 6, *((v81 + 24) as &i64), *((v81 + 32) as &i64));
    }
    if v47 {
        v21 = change_log::domain::changelog::generate_changelog::{{closure}}("Migration Notes", 8, v47);
    }
    v84 = core::str::<impl str>::trim_matches(1, None, v82);
    v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v84.ptr, v64);
    *((v44 + 16) as &u64) = v16;
    *(v44 as &i128) = *(&v6.field_0 as &i128);
    return a0;
}
