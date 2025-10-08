fn just::recipe_resolver::RecipeResolver::resolve_dependency(a0: u64, a1: i64, a2: u64, a3: u64, a4: i64) -> long long {
    let v0: struct16;  // [bp-0x2b8]
    let v1: struct16;  // [bp-0x290]
    let v2: struct25;  // [bp-0x280], Other Possible Types: struct81
    let v3: struct24;  // [bp-0x280]
    let v4: struct80;  // [bp-0x258]
    let v5: struct24;  // [bp-0x248]
    let v6: struct24;  // [bp-0x238]
    let v7: u32;  // [bp-0x234]
    let v8: Option<struct256>;  // [bp-0x230], Other Possible Types: struct24
    let v9: u64;  // [bp-0x230]
    let v10: u8;  // [bp-0x228]
    let v11: struct24;  // [bp-0x210]
    let v12: u64;  // [bp-0x208]
    let v13: u64;  // [bp-0x130]
    let v15: struct144;  // r14
    let v16: struct17;  // rbp
    let v17: u64;  // rdx
    let v19: core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>;  // rax
    let v20: u64;  // cc_ndep
    let v22: struct24;  // rax
    let v23: struct24;  // rax
    let v25: struct24;  // rax
    let v26: core::fmt::Arguments;  // xmm0
    let v27: iNone;  // xmm1

    v15 = *((a2 + 32) as &i64);
    v16 = *((a2 + 40) as &i64);
    v1 = struct16 {
        field_0: just::token::Token::lexeme(just::namepath::Namepath::last(v15, v16))
        field_8: v17
    };
    if v16 > 1 {
        return struct24 {
            field_0: just::analyzer::Analyzer::resolve_recipe(v15, v16, *((a1 + 24) as &i64), a1 + 32)
            padding_8: <UNKNOWN>
            field_72: <UNKNOWN>
        };
    }
    v19 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*((a1 + 32) as &i64), *((a1 + 40) as &i64), v1.field_0, v17);
    if !v19 {
        v0 = struct16 {
            field_0: *((a4 + 8) as &i64)
            field_8: *((a4 + 16) as &i64)
        };
        if <T as core::slice::cmp::SliceContains>::slice_contains(&v1, *((a4 + 8) as &i64), *((a4 + 16) as &i64)) {
            alloc::vec::Vec<T,A>::push(a4, *(v0.field_0 as &i64), *((v0.field_0 + 8) as &i64), "src/recipe_resolver.rs");
            v22 = just::namepath::Namepath::last(v15, v16);
            v23 = just::token::Token::lexeme(a3 + 144);
            v2 = struct25 {
                field_0: *((a4 + 8) as &i64)
                field_8: *((a4 + 16) as &i64) * 16 + *((a4 + 8) as &i64)
                field_16: a2
                field_24: 0
            };
            core::iter::traits::iterator::Iterator::collect(&v10, &v2);
            v11 = v23;
            v12 = v17;
            v8 = 9223372036854775831;
            return just::token::Token::error(a0, v22, &v8);
        }
        v8 = alloc::collections::btree::map::BTreeMap<K,V,A>::remove(a1 + 56, v1.field_0, v17);
        v25 = 0;
        if (((0 ^ v8) & (0 ^ -(v9))) >> 63) as char {
            return struct24 {
                field_0: v25
                padding_8: <UNKNOWN>
                field_72: <UNKNOWN>
            };
        }
        memcpy(&v13, &v8, 0x100);
        v2 = just::recipe_resolver::RecipeResolver::resolve_recipe(a1, a4, &v13);
        v25 = v3;
        if v6 != 37 {
            v26 = *((&v2.field_0 as &char + 8) as &i128);
            v27 = *((&v2.field_16 as &char + 8) as &i128);
            return struct88 {
                field_0: v2.field_0 as i64
                field_8: v26
                field_24: v27
                field_40: v4
                field_56: v5
                field_72: v6
                field_73: v7
                field_76: <UNKNOWN>
            };
        }
        return struct24 {
            field_0: v25
            padding_8: <UNKNOWN>
            field_72: <UNKNOWN>
        };
    } else if !(_ccall(14, 24, atomic_fetch_add(*(v19 as &i64)) as u64 + 1, 0, _ccall(20, v19, 0, v20)) as char) {
        return struct24 {
            field_0: *(v19 as &i64)
            padding_8: <UNKNOWN>
            field_72: <UNKNOWN>
        };
    } else {
        [D] Unsupported jumpkind Ijk_NoDecode at address 6847134()
    }
}
