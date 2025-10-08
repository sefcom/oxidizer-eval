fn just::compilation::Compilation::root_src(a0: u64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v3: i64;  // rax

    v0 = v2;
    v3 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a0 + 816, a0 + 744);
    core::option::unwrap(v3);
    return *((v3 + 24) as &i64);
}
