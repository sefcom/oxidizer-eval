fn uu_tsort::Graph::dfs(a0: u32, a1: u32, a2: u32, a3: u32, a4: &struct8) -> u64 {
    let v0: u8;  // [bp-0x48]
    let v1: u64;  // [sp-0x38]
    let v2: u64;  // [sp-0x30]
    let v4: u32;  // ebp
    let v5: &u64;  // rax
    let v6: struct8;  // rax
    let v7: u64;  // rax

    v4 = vvar_57{reg 56} | -0x100 | 1;
    if <T as core::slice::cmp::SliceContains>::slice_contains(&v0, a4[1], a4[2]) as i8 {
        return v4;
    }
    if hashbrown::map::HashMap<K,V,S,A>::get_inner(a3, &v0) {
        return 0;
    }
    hashbrown::map::HashMap<K,V,S,A>::insert(a3, a1, a2);
    alloc::vec::Vec<T,A>::push(a4, a1, a2);
    v5 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a0, a1, a2);
    if v5 {
        v1 = v5[3];
        v2 = v5[4] * 16 + v1;
        loop {
            v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v6 {
                break;
            }
            if uu_tsort::Graph::dfs(a0, *(v6 as &i64), *((v6 + 8) as &i64), a3, a4) as i8 {
                return v4;
            }
        }
    }
    v7 = a4[2];
    if v7 {
        a4[2] = v7 - 1;
    }
}
