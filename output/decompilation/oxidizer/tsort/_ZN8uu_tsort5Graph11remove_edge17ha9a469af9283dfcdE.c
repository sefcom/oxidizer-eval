fn uu_tsort::Graph::remove_edge(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64) -> long long {
    let v1: u64;  // r15
    let v2: u64;  // rax
    let v3: i64;  // rax

    v1 = a0 + 24;
    v2 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(v1, a1, a2);
    core::option::unwrap(v2);
    uu_tsort::remove(v2 + 16, a3, a4);
    v3 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(v1, a3, a4);
    core::option::unwrap(v3);
    *((v3 + 40) as &i64) = *((v3 + 40) as &i64) - 1;
    return v3;
}
