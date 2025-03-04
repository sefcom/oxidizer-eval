fn uu_tail::follow::files::FileHandling::remove(a0: &struct216, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct24;  // [sp-0x108]
    let v1: Option<struct216>;  // [sp-0xf0]

    v0 = uu_tail::follow::files::FileHandling::canonicalize_path(a2, a3);
    v1 = hashbrown::map::HashMap<K,V,S,A>::remove(a1 + 24, &v0);
    match v1 {
        Some(_) => {
            memcpy(a0, &v1, 216);
            return a0;
        },
        None => {
            core::option::unwrap_failed("src/uu/tail/src/follow/files.rs"); /* do not return */
        },
    }
}
