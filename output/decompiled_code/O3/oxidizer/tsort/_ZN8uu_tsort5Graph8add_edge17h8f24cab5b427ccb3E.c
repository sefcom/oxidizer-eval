fn uu_tsort::Graph::add_edge(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v1: &struct_0;  // rax
    let v2: u64;  // rax

    uu_tsort::Graph::add_node(a0, a1, a2);
    v1 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, a3, a4);
    if v1 as u8 {
        return v1;
    }
    uu_tsort::Graph::add_node(a0, a3, a4);
    v2 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a0, a1, a2);
    if !v2 {
        core::option::unwrap_failed(); /* do not return */
    }
    uu_tsort::Node::add_successor(v2 + 16, a3, a4);
    v1 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a0, a3, a4);
    if v1 {
        v1->field_28 = v1->field_28 + 1;
        return v1;
    }
    core::option::unwrap_failed(); /* do not return */
}
