fn uu_tsort::Graph::add_node(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: struct24;  // [bp-0x48]
    let v1: struct32;  // [bp-0x20]
    let v2: struct24;  // [bp-0x20]

    v1 = hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(a0 + 24, a1);
    if !v1.field_0 {
        v0 = struct24 {
            field_0: 0
            field_8: *(&v1.field_8 as &i128)
        };
        return std::collections::hash::map::Entry<K,V>::or_default(&v0);
    }
    v0 = v2;
    return std::collections::hash::map::Entry<K,V>::or_default(&v0);
}
