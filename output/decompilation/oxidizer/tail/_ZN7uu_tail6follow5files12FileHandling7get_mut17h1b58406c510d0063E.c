fn uu_tail::follow::files::FileHandling::get_mut(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct24;  // [bp-0x28]
    let v2: u64;  // rax

    v0 = uu_tail::follow::files::FileHandling::canonicalize_path(a1, a2);
    v2 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a0 + 24, &v0);
    core::option::unwrap(v2);
    return v2 + 24;
}
