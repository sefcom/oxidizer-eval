fn uu_tail::follow::files::FileHandling::get(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i192;  // [sp-0x28], Other Possible Types: struct24
    let v2: i64;  // rax

    v0 = uu_tail::follow::files::FileHandling::canonicalize_path(a1, a2, a3, a4, a5);
    v2 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a0 + 24, &v0);
    if v2 {
        return v2 + 24;
    }
    core::option::unwrap_failed(); /* do not return */
}
