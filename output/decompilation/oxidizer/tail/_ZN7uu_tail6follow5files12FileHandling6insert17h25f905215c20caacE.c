fn uu_tail::follow::files::FileHandling::insert(a0: i64, a1: u64, a2: u64, a3: void*, a4: u8) -> void {
    let v0: iNone;  // [bp-0x128], Other Possible Types: struct24
    let v1: core::option::Option<&str>;  // [bp-0x118]
    let v2: struct24;  // [bp-0x110]
    let v3: struct24;  // [bp-0x110]
    let v4: void*;  // [bp-0x108]
    let v5: struct11;  // [bp-0x100]
    let v6: struct24;  // [bp-0xf8]
    let v7: struct216;  // [bp-0xf8]

    v2 = uu_tail::follow::files::FileHandling::canonicalize_path(a1, a2);
    if a4 {
        v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v4, v5);
        v1 = v6.field_16;
        v0 = *(&v6.field_0 as &i128);
        *((a0 + 16) as &core::option::Option<&str>) = v1;
        *(a0 as void*) = v0;
    }
    v0 = v3;
    hashbrown::map::HashMap<K,V,S,A>::insert(&v7, a0 + 24, &v0, a3);
    return;
}
