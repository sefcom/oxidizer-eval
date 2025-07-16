fn uu_tsort::Graph::add_edge(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v1: u64;  // rax
    let v2: i64;  // rax

    uu_tsort::Graph::add_node(a0, a1, a2);
    v1 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, a3, a4);
    if v1 {
        return v1;
    }
    uu_tsort::Graph::add_node(a0, a3, a4);
    if !hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a0, a1, a2) {
        core::option::unwrap_failed(); /* do not return */
    }
    uu_tsort::Node::add_successor(a3, a4, a3);
    v2 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a0, a3, a4);
    if !v2 {
        core::option::unwrap_failed(); /* do not return */
    }
    *((v2 + 40) as &i64) = *((v2 + 40) as &i64) + 1;
    return v2;
}
