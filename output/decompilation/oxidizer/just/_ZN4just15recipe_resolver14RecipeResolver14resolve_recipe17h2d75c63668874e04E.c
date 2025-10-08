fn just::recipe_resolver::RecipeResolver::resolve_recipe(a1: i64, a2: &struct24, a3: i64) -> : struct81 {
    let a0: i64;  // rdi
    let v0: struct40;  // [bp-0x2b8]
    let v1: std::io::stdio::Stdin;  // [bp-0x2b8]
    let v2: struct24;  // [bp-0x2a8]
    let v3: Result<struct16, struct64>;  // [bp-0x298]
    let v4: core::option::Option<(std::ffi::os_str::OsString, std::ffi::os_str::OsString)>;  // [bp-0x288]
    let v5: struct16;  // [bp-0x278]
    let v6: u64;  // [bp-0x260]
    let v7: struct24;  // [bp-0x258]
    let v8: struct24;  // [bp-0x238], Other Possible Types: u64
    let v9: u64;  // [bp-0x230]
    let v10: struct24;  // [bp-0x228]
    let v11: std::io::stdio::Stdin;  // [bp-0x220]
    let v12: i8;  // [bp-0x218]
    let v13: struct24;  // [bp-0x210]
    let v14: i8;  // [bp-0x208]
    let v15: u128;  // [bp-0x200]
    let v16: struct24;  // [bp-0x1f8]
    let v17: struct104;  // [bp-0x1f0], Other Possible Types: u128
    let v18: i8;  // [bp-0x1ef]
    let v19: i8;  // [bp-0x1ec]
    let v20: iNone;  // [bp-0x1e0]
    let v21: u8;  // [bp-0x1d0]
    let v22: u128;  // [bp-0x128]
    let v23: i8;  // [bp-0x120]
    let v24: u128;  // [bp-0x118]
    let v25: i8;  // [bp-0x110]
    let v26: u128;  // [bp-0x108]
    let v27: i8;  // [bp-0x100]
    let v28: u128;  // [bp-0xf8]
    let v29: i8;  // [bp-0xf0]
    let v30: struct24;  // [bp-0xe8]
    let v31: u128;  // [bp-0xe0]
    let v32: u8;  // [bp-0xd0]
    let v34: core::option::Option<u32>;  // r13
    let v35: struct72;  // rax
    let v36: u64;  // rdx
    let v37: struct80;  // rax
    let v38: u64;  // cc_ndep
    let v40: struct104;  // al
    let v41: struct24;  // rax
    let v42: std::io::stdio::Stdin;  // xmm0
    let v43: struct24;  // xmm1
    let v44: struct24;  // xmm1
    let v45: iNone;  // xmm0
    let v46: struct80;  // xmm1
    let v47: iNone;  // xmm2
    let v48: iNone;  // xmm0
    let v49: iNone;  // xmm1
    let v50: iNone;  // xmm2

    v34 = a3 + 144;
    v35 = just::token::Token::lexeme(v34);
    v37 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*((a1 + 32) as &i64), *((a1 + 40) as &i64), v35, v36);
    if !v37 {
        alloc::vec::Vec<T,A>::push(a2, just::token::Token::lexeme(v34), a2, "src/recipe_resolver.rs");
        v0 = struct40 {
            field_0: *((a3 + 32) as &i64)
            field_8: *((a3 + 40) as &i64) * 48 + *((a3 + 32) as &i64)
            field_16: a1
            field_24: a3
            field_32: a2
        };
        core::iter::traits::iterator::Iterator::collect(&v8, &v0);
        v40 = v17.field_0 as i8;
        if v40 != 37 {
            v30 = v16;
            v45 = v8.field_0;
            v46 = v10.field_0;
            v47 = *(&v12 as &i128);
            v28 = *(&v14 as &i128);
            *(&v26 as void*) = v47;
            *(&v24 as &struct80) = v46;
            *(&v22 as void*) = v45;
            v48 = v22;
            v49 = v24;
            v50 = v26;
            return struct88 {
                field_0: v48
                field_16: v49
                field_32: v50
                field_48: v28
                field_64: v30
                field_72: v40
                field_73: *(&v19 as &i32)
                field_76: <UNKNOWN>
            };
        }
        v7 = v8;
        if *((a2 + 16) as &i64) {
            *((a2 + 16) as &i64) = *((a2 + 16) as &i64) - 1;
        }
        memcpy(&v8, a3, 0x100);
        just::unresolved_recipe::<impl just::recipe::Recipe<just::unresolved_dependency::UnresolvedDependency>>::resolve(&v22, &v8, *((a1 + 8) as &i64), *((a1 + 16) as &i64), &v7);
        v41 = *(&v22 as &i64);
        *(&v1 as &i128) = *(&v23 as &i128);
        v2.field_0 = *(&v25 as &i128);
        v3 = *(&v27 as &i128);
        v4 = *(&v29 as &i128);
        v5 = v31;
        if (((0 ^ v41) & (0 ^ -(v41))) >> 63) as char {
            v42 = *(&v1 as &i128);
            v43 = v2.field_0;
            return struct80 {
                field_0: v42
                field_16: v43
                field_32: v3
                field_48: v4
                field_64: v5
            };
        }
        memcpy(&v21, &v32, 168);
        v44 = v2.field_0;
        *(&v11 as &i128) = *(&v1 as &i128);
        v13 = v44;
        *(&v15 as &Result<struct16, struct64>) = v3;
        *(&v17 as &core::option::Option<(std::ffi::os_str::OsString, std::ffi::os_str::OsString)>) = v4;
        v20 = v5;
        v8 = 1;
        v9 = 1;
        v10 = v41;
        v6 = alloc::boxed::Box<T>::new(&v8);
        if !(_ccall(14, 24, atomic_fetch_add(v6) as u64 + 1, 0, (0 < v41) as u8 as u64) as char) {
            just::table::Table<V>::insert(a1 + 32, v6);
            return struct24 {
                field_0: v6
                padding_8: <UNKNOWN>
                field_72: <UNKNOWN>
            };
        }
    } else if !(_ccall(14, 24, atomic_fetch_add(*(v37 as &i64)) as u64 + 1, 0, _ccall(20, v37, 0, v38)) as char) {
        return struct24 {
            field_0: *(v37 as &i64)
            padding_8: <UNKNOWN>
            field_72: <UNKNOWN>
        };
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 6846131()
}
