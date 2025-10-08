fn just::scope::Scope::value(a0: i64, a1: i64, a2: i64) -> u64 {
    let v1: i64;  // rax

    v1 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*(a0 as &i64), *((a0 + 8) as &i64), a1, a2);
    if v1 {
        return *((v1 + 8) as &i64);
    } else if *((a0 + 24) as &i64) {
        return just::scope::Scope::value(*((a0 + 24) as &i64), a1, a2);
    } else {
        return 0;
    }
}
