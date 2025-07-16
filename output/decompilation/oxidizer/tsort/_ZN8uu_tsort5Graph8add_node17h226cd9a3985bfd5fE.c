fn uu_tsort::Graph::add_node(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u192;  // [bp-0x50]
    let v1: u8;  // [bp-0x38]
    let v2: struct40;  // [bp-0x28]
    let v3: u192;  // [bp-0x28]

    v2 = hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(a0, a1);
    memcpy(&v1, &v2 as u8, 16);
    v0 = v3;
    return std::collections::hash::map::Entry<K,V>::or_insert_with(&v0);
}
