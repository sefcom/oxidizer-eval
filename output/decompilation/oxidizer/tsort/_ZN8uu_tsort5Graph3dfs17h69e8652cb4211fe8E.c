fn uu_tsort::Graph::dfs(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: u64;  // [bp-0x40]
    let v2: u32;  // ebp
    let v3: i64;  // rax
    let v4: i64;  // r13

    v0 = a1;
    v2 = vvar_57{reg 56} & -0x100 | 1;
    if <T as core::slice::cmp::SliceContains>::slice_contains(&v0, *((a4 + 8) as &i64), *((a4 + 16) as &i64)) {
        return v2;
    }
    if hashbrown::map::HashMap<K,V,S,A>::get_inner(a3, &v0) {
        return 0;
    }
    hashbrown::map::HashMap<K,V,S,A>::insert(a3, v0, a2);
    alloc::vec::Vec<T,A>::push(a4, v0, a2, "src/uu/tsort/src/tsort.rs");
    v3 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a0 + 24, v0, a2);
    if v3 && *((v3 + 32) as &i64) {
        do {
            if uu_tsort::Graph::dfs(a0, *(v4 as &i64), *((v4 + 8) as &i64), a3, a4) {
                return v2;
            }
            v4 += 16;
        } while (v4 != *((v3 + 32) as &i64) * 16 + *((v3 + 24) as &i64));
    }
    if *((a4 + 16) as &i64) {
        *((a4 + 16) as &i64) = *((a4 + 16) as &i64) - 1;
    }
    return 0;
}
