fn uu_tsort::Graph::dfs(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u64;  // [bp-0x48]
    let v1: struct16;  // [bp-0x38]
    let v3: u32;  // ebp
    let v4: core::option::Option<&(&str, proc_macro::bridge::symbol::Symbol)>;  // rax
    let v5: i64;  // rax

    v0 = a1;
    v3 = vvar_53{reg 56} & -0x100 | 1;
    if <T as core::slice::cmp::SliceContains>::slice_contains(&v0, *((a4 + 8) as &i64), *((a4 + 16) as &i64)) {
        return v3;
    }
    if hashbrown::map::HashMap<K,V,S,A>::get_inner(a3, &v0, a2) {
        return 0;
    }
    hashbrown::map::HashMap<K,V,S,A>::insert(a3, v0, a2, a3);
    alloc::vec::Vec<T,A>::push(v0, a2, a3);
    v4 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a0);
    if let Some(_) = v4 {
        v1 = struct16 {
            field_0: *((v4 + 24) as &i64)
            field_8: *((v4 + 32) as &i64) * 16 + *((v4 + 24) as &i64)
        };
        loop {
            v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
            if !v5 {
                break;
            }
            if uu_tsort::Graph::dfs(a0, *(v5 as &i64), *((v5 + 8) as &i64), a3, a4) as i8 {
                return v3 as u64;
            }
        }
    }
    if *((a4 + 16) as &i64) {
        *((a4 + 16) as &i64) = *((a4 + 16) as &i64) - 1;
    }
    return 0;
}
