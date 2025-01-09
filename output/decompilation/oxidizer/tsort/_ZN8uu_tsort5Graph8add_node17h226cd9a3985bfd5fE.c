fn uu_tsort::Graph::add_node(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i320;  // [sp-0x50], Other Possible Types: struct40
    let v1: struct40;  // [sp-0x28]

    v1 = hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(a0, a1);
    v0 = v1;
    return std::collections::hash::map::Entry<K,V>::or_insert_with(&v0);
}
