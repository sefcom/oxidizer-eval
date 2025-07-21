fn uu_tail::follow::files::FileHandling::get(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u8;  // [bp-0x28]
    let v2: u64;  // rcx
    let v3: core::option::Option<&(&str, proc_macro::bridge::symbol::Symbol)>;  // rax

    uu_tail::follow::files::FileHandling::canonicalize_path(a1, a2, v2);
    v3 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a0 + 24, &v0, a2);
    match v3 {
        None => {
            core::option::unwrap_failed(); /* do not return */
        },
        Some(_) => {
            return v3 + 24;
        },
    }
}
