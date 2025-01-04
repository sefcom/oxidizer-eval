fn uu_tail::follow::files::FileHandling::insert(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0x210], Other Possible Types: i192
    let v1: i192;  // [bp-0x1f8]
    let v2: i128;  // [sp-0x1d8], Other Possible Types: Option<struct216>
    let v3: i64;  // [sp-0x1c8]
    let v4: i192;  // [sp-0xf8], Other Possible Types: struct24
    let v6: i64;  // r8
    let v7: i64;  // r9

    v0 = uu_tail::follow::files::FileHandling::canonicalize_path(a1, a2, a3, a4, a5);
    if a4 {
        v4 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v0);
        v3 = *((&v4 as &char + 16) as &i64);
        v2 = v4;
        *((a0 + 16) as &i64) = v3;
        *(a0 as &i128) = v2;
    }
    v1 = v0;
    memcpy(&v4, a3, 216);
    v2 = hashbrown::map::HashMap<K,V,S,A>::insert(a0 + 24, &v1, &v4, v6, v7);
    return;
}
