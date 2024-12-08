fn uu_tail::follow::files::FileHandling::remove(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: struct24;  // [sp-0x108], Other Possible Types: i192
    let v1: i1728;  // [sp-0xf0], Other Possible Types: Option<struct216>
    let v3: i64;  // rcx
    let v4: i64;  // r8
    let v5: i64;  // r9

    v0 = uu_tail::follow::files::FileHandling::canonicalize_path(a2, a3, a3, a4, a5);
    v1 = hashbrown::map::HashMap<K,V,S,A>::remove(a1 + 24, &v0, v3, v4, v5);
    match v1 {
        Some(_) => {
            memcpy(a0, &v1, 216);
            return a0;
        },
        None => {
            core::option::unwrap_failed(); /* do not return */
        },
    }
}
