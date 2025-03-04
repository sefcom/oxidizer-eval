fn uu_tail::follow::files::FileHandling::insert(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: struct24;  // [sp-0x210]
    let v1: struct24;  // [sp-0x1f8]
    let v2: Option<struct216>;  // [sp-0x1d8], Other Possible Types: int
    let v3: i64;  // [sp-0x1c8]
    let v4: struct24;  // [sp-0xf8]

    v0 = uu_tail::follow::files::FileHandling::canonicalize_path(a1, a2);
    if a4 {
        v4 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v0);
        *((a0 + 16) as &unsigned long) = v3;
        *(a0 as void*) = v2;
    }
    v1 = v0;
    memcpy(&v4, a3, 216);
    v2 = hashbrown::map::HashMap<K,V,S,A>::insert(a0 + 24, &v1, &v4);
    return;
}
