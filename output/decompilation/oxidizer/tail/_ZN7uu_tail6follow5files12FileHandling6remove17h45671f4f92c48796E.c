fn uu_tail::follow::files::FileHandling::remove(a0: u64, a1: u64, a2: u64, a3: u64) -> void {
    let v0: struct24;  // [bp-0x108]
    let v1: Option<struct216>;  // [bp-0xf0]
    let v2: <anon>;  // [bp-0xf0]

    v0 = uu_tail::follow::files::FileHandling::canonicalize_path(a2, a3);
    v1 = hashbrown::map::HashMap<K,V,S,A>::remove(a1 + 24, &v0);
    v2 = core::option::unwrap(v1);
    memcpy(a0, &v1, 216);
    return;
}
