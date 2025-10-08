fn uu_tsort::Graph::add_edge(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // r15
    let v3: struct24;  // rax
    let v4: i64;  // rax

    uu_tsort::Graph::add_node(a0, a1, a2);
    v1 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, a3, a4);
    if v1 {
        return v1;
    }
    uu_tsort::Graph::add_node(a0, a3, a4);
    v2 = a0 + 24;
    v3 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(v2, a1, a2);
    core::option::unwrap(v3);
    uu_tsort::Node::add_successor(v3 + 16, a3 as u32, a4);
    v4 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(v2, a3, a4);
    core::option::unwrap(v4);
    *((v4 + 40) as &i64) = *((v4 + 40) as &i64) + 1;
    return v4;
}
