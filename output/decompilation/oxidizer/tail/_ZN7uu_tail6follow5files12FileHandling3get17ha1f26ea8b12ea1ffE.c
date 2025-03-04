fn uu_tail::follow::files::FileHandling::get(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0x28]
    let v2: i64;  // rax

    v0 = uu_tail::follow::files::FileHandling::canonicalize_path(a1, a2);
    v2 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a0 + 24, &v0);
    if v2 {
        return v2 + 24;
    }
    core::option::unwrap_failed("src/uu/tail/src/follow/files.rs"); /* do not return */
}
