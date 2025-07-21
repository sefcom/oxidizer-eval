fn uu_tail::follow::files::FileHandling::insert(a0: i64, a1: i64, a2: i64, a3: i64, a4: i8) {
    let v0: struct24;  // [bp-0x210], Other Possible Types: u192
    let v1: u64;  // [bp-0x200]
    let v2: u128;  // [bp-0x1f8]
    let v3: u64;  // [bp-0x1e8]
    let v4: u128;  // [bp-0x1d8]
    let v5: u64;  // [bp-0x1c8]
    let v6: u128;  // [bp-0xf8]
    let v7: i8;  // [bp-0xe8]

    v0 = uu_tail::follow::files::FileHandling::canonicalize_path(a1, a2);
    if a4 {
        v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a2);
        v5 = *(&v7 as &i64);
        v4 = v6;
        *((a0 + 16) as &u64) = v5;
        *(a0 as &u128) = v4;
    }
    v3 = v1;
    v2 = v0;
    memcpy(&v6, a3, 216);
    hashbrown::map::HashMap<K,V,S,A>::insert(&v4, a0 + 24, &v2, &v6 as u32);
    return;
}
