fn starship::configure::extract_toml_paths(a1: &struct80, a2: i64, a3: i64) -> : struct80 {
    let a0: i64;  // rdi
    let v0: i64;  // [bp-0x1f8]
    let v1: u64;  // [bp-0x1f0]
    let v2: u64;  // [bp-0x1e8]
    let v3: u64;  // [bp-0x1e0]
    let v4: void*;  // [bp-0x1d8]
    let v5: u64;  // [bp-0x1d0]
    let v6: void*;  // [bp-0x1c8]
    let v7: u128;  // [bp-0x1c0]
    let v8: u128;  // [bp-0x1b0]
    let v9: u64;  // [bp-0x1a0]
    let v10: u16;  // [bp-0x190]
    let v11: u8;  // [bp-0x18e]
    let v12: u32;  // [bp-0x18d]
    let v13: u8;  // [bp-0x189]
    let v14: u64;  // [bp-0x180]
    let v15: i64;  // [bp-0x178]
    let v16: i64;  // [bp-0x178]
    let v17: i64;  // [bp-0x170]
    let v18: struct48;  // [bp-0x168]
    let v19: struct8;  // [bp-0x160]
    let v20: Result<struct168, struct40>;  // [bp-0x158]
    let v21: core::fmt::Arguments;  // [bp-0x150], Other Possible Types: u64
    let v22: Option<struct80>;  // [bp-0x150], Other Possible Types: Result<struct48, struct40>, struct24
    let v23: struct24;  // [bp-0x150], Other Possible Types: struct80
    let v24: struct88;  // [bp-0x150]
    let v25: struct16;  // [bp-0x148]
    let v26: u128;  // [bp-0x140]
    let v27: struct24;  // [bp-0x130]
    let v28: u128;  // [bp-0x120]
    let v29: u16;  // [bp-0x110]
    let v32: core::str::pattern::CharSearcher;  // [bp-0xf8]
    let v33: struct24;  // [bp-0xe8]
    let v34: Result<struct24, struct24>;  // [bp-0xd8]
    let v37: struct24;  // [bp-0xa8]
    let v38: struct80;  // [bp-0x88]
    let v40: i64;  // r15
    let v41: u64;  // rax
    let v43: struct700;  // cc_ndep
    let v44: iNone;  // xmm0
    let v45: iNone;  // xmm1
    let v46: iNone;  // xmm2
    let v47: u64;  // rdx
    let v48: i64;  // rax
    let v49: i64;  // rbx
    let v50: struct16;  // r14
    let v51: core::result::Result<u8, core::num::error::ParseIntError>;  // rcx
    let v52: struct40;  // r14
    let v53: struct40;  // rax
    let v54: u64;  // rax
    let v56: i64;  // rbp
    let v57: i64;  // rbp
    let v59: u64;  // rbx
    let v60: u64;  // rbx
    let v61: i64;  // rax
    let v62: struct40;  // r12
    let v63: u64;  // rcx
    let v64: u64;  // rbx
    let v65: i64;  // rax
    let v66: i64;  // rbp
    let v67: i64;  // rax
    let v69: i64;  // rbp
    let v70: i64;  // rax
    let v71: u64;  // rdx
    let v72: u64;  // r12
    let v73: i64;  // rbp
    let v74: iNone;  // xmm0
    let v75: iNone;  // xmm1
    let v76: iNone;  // xmm2

    v40 = a2;
    v41 = std::thread::local::LocalKey<T>::with();
    v4 = 0;
    v5 = 8;
    v6 = 0;
    v8 = g_11ed468.field_0;
    v7 = g_11ed458.field_0;
    v9 = v41;
    v10 = 0;
    v11 = 0;
    v15 = a1;
    if *(a1 as &i64) < 9223372036854775814 {
        v44 = *(&v4 as &i128);
        v45 = *(&v6 as &i128);
        v46 = *((&v7 as &char + 8) as &i128);
        return struct88 {
            field_0: v44
            field_16: v45
            field_32: v46
            field_48: *((&v8 as &char + 8) as &i128)
            field_64: v47
            field_72: 0
            field_74: 0
            field_75: <UNKNOWN>
            field_79: <UNKNOWN>
        };
    }
    v0 = a1;
    v14 = a2 + a3 * 24;
    v48 = a2 + 24;
    v49 = &v21;
    do {
        v50 = *((v40 + 16) as &i64);
        v17 = v40;
        v32 = <char as core::str::pattern::Pattern>::into_searcher(0x2e, *((v40 + 8) as &i64), v50);
        *(&v28 as &Result<struct24, struct24>) = v34;
        v27 = v33;
        v26 = *(&v32.haystack.data_ptr as &i128);
        v21 = 0;
        v25 = v50;
        v29 = 1;
        core::iter::traits::iterator::Iterator::collect(&v18, v49);
        v51 = v19;
        v52 = v20;
        v53 = v52;
        v54 = v53 - 1;
        if v53 < 1 {
            v56 = 8;
        } else {
            v56 = v51;
        }
        v57 = v56;
        if _ccall(2, 8, v53, 1, v43) as char {
            v59 = 0;
        } else {
            v59 = v54;
        }
        v60 = v59;
        v1 = v51;
        v61 = v54 * 16 + v51;
        v62 = v52;
        v63 = *(v61 as &i64);
        v3 = *(v61 as &i64);
        v2 = *((v61 + 8) as &i64);
        v64 = v60 * 16 + v57;
        v16 = v15;
        do {
            v65 = v67;
            v66 = v57;
            if v66 != v64 {
                v67 = indexmap::map::IndexMap<K,V,S>::get_mut(v65, *(v66 as &i64), *((v66 + 8) as &i64), v63);
                if !v67 {
                    break;
                }
                continue;
            } else {
                v22 = indexmap::map::IndexMap<K,V,S>::shift_remove(v65, v3, v2);
                v38 = v23;
                v72 = v71 * 16 + <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v62 - 1, v1, v52, "src/configure.rs");
                v73 = &v4;
                while (v70 != v72 && v70) {
                    v22 = toml::map::Map<K,V>::entry(v73, *(v70 as &i64), *((v70 + 8) as &i64));
                    v73 = toml::map::Entry<K,V>::or_insert_with(&v22);
                    v70 += (v70 != v72) * 16;
                    if *(v73 as &i64) < 9223372036854775814 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                }
                v22 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v3, v2);
                v37 = v23;
                v24 = indexmap::map::IndexMap<K,V,S>::insert_full(v73, &v37, &v38);
            }
            v69 = v66 + (v66 != v64) * 16;
            v43 = (v66 + (v66 != v64) * 16 <= v66 ? 1 : 0);
            v63 = 9223372036854775813;
            v57 = v69;
        } while (*(v16 as &i64) > 9223372036854775813);
        v40 = v17;
        v48 = v40 + 24;
        v49 = &v21;
    } while (v40 != v14);
    v74 = *(&v4 as &i128);
    v75 = *(&v6 as &i128);
    v76 = *((&v7 as &char + 8) as &i128);
    return struct80 {
        field_0: v74
        field_16: v75
        field_32: v76
        field_48: *((&v8 as &char + 8) as &i128)
        field_64: vvar_140{reg 32}
    };
}
