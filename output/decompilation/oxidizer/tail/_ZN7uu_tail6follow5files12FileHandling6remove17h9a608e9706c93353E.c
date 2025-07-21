fn uu_tail::follow::files::FileHandling::remove(a0: &struct216, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u8;  // [bp-0x108]
    let v1: Option<struct216>;  // [bp-0xf0]
    let v2: <anon>;  // [bp-0xf0]

    uu_tail::follow::files::FileHandling::canonicalize_path(a2, a3, a3);
    v1 = hashbrown::map::HashMap<K,V,S,A>::remove(a1 + 24, &v0);
    v2 = core::option::unwrap(v1);
    memcpy(a0, &v1, 216);
    return a0;
}
