fn just::analyzer::Analyzer::resolve_recipe(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: struct24;  // [bp-0x48]
    let v1: void*;  // [bp-0x40]
    let v3: u64;  // r13
    let v4: u64;  // r13
    let v5: u64;  // rax
    let v6: u64;  // rdx
    let v7: i64;  // rax
    let v8: u64;  // r13
    let v9: struct80;  // rax
    let v10: i64;  // rax
    let v11: u64;  // cc_ndep

    v0 = just::namepath::Namepath::split_last(a0, a1);
    if v0.field_16 {
        do {
            v4 = v3;
            v5 = just::token::Token::lexeme(v1);
            v7 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*(a2 as &i64), *((a2 + 8) as &i64), v5, v6);
            if !v7 {
                return 0;
            }
            v1 += 72;
            a2 = v7 + 672;
            v8 = v4 - 72;
            v3 = v8;
        } while (v4 != 72);
    }
    v9 = just::token::Token::lexeme(v0.field_0);
    v10 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*(a3 as &i64), *((a3 + 8) as &i64), v9, v6);
    if !v10 {
        return 0;
    } else if !(_ccall(14, 24, atomic_fetch_add(*(v10 as &i64)) as u64 + 1, 0, _ccall(20, v10, 0, v11)) as char) {
        return *(v10 as &i64);
    } else {
        [D] Unsupported jumpkind Ijk_NoDecode at address 6643961()
    }
}
