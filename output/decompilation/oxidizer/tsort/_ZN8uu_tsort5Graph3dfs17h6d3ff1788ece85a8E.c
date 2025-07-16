fn uu_tsort::Graph::dfs(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u64;  // [bp-0x48]
    let v1: u64;  // [bp-0x38]
    let v2: u64;  // [bp-0x30]
    let v4: u32;  // ebp
    let v5: core::option::Option<&(&str, proc_macro::bridge::symbol::Symbol)>;  // rax
    let v6: i64;  // rax

    v0 = a1;
    v4 = vvar_53{reg 56} & -0x100 | 1;
    if <T as core::slice::cmp::SliceContains>::slice_contains(&v0, *((a4 + 8) as &i64), *((a4 + 16) as &i64)) {
        return v4;
    }
    if hashbrown::map::HashMap<K,V,S,A>::get_inner(a3, &v0, a2) {
        return 0;
    }
    hashbrown::map::HashMap<K,V,S,A>::insert(a3, v0, a2, a3);
    alloc::vec::Vec<T,A>::push(v0, a2, a3);
    v5 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a0);
    if let Some(_) = v5 {
        v1 = *((v5 + 24) as &i64);
        v2 = *((v5 + 32) as &i64) * 16 + *((v5 + 24) as &i64);
        loop {
            v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
            if !v6 {
                break;
            }
            if uu_tsort::Graph::dfs(a0, *(v6 as &i64), *((v6 + 8) as &i64), a3, a4) as i8 {
                return v4 as u64;
            }
        }
    }
    if *((a4 + 16) as &i64) {
        *((a4 + 16) as &i64) = *((a4 + 16) as &i64) - 1;
    }
    return 0;
}
