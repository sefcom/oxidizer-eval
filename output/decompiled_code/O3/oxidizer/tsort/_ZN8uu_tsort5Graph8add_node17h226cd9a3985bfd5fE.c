fn uu_tsort::Graph::add_node(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x50]
    let v1: i128;  // [sp-0x48]
    let v2: i128;  // [sp-0x38]
    let v3: struct40;  // [sp-0x28], Other Possible Types: i320

    v3 = hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(a0, a1, a2);
    v1 = *((&v3 as &char + 8) as &i128);
    v2 = *((&v3 as &char + 24) as &i128);
    v0 = v3;
    return std::collections::hash::map::Entry<K,V>::or_insert_with(&v0);
}
