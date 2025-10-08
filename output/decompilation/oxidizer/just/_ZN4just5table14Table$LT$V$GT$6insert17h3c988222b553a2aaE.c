fn just::table::Table<V>::insert(a0: u64, a1: u64) -> int {
    let v0: Option<struct152>;  // [bp-0xb0]
    let v3: u64;  // rdx

    v0 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(a0, <just::set::Set as just::keyed::Keyed>::key(a1), v3, a1);
    return;
}
