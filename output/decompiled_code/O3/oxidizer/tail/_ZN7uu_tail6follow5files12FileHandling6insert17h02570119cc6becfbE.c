fn uu_tail::follow::files::FileHandling::insert(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32, a5: i64) -> u64 {
    let v0: struct24;  // [sp-0x210], Other Possible Types: i192
    let v1: i128;  // [sp-0x1f8]
    let v2: i64;  // [sp-0x1e8]
    let v3: i128;  // [sp-0x1d8], Other Possible Types: Option<struct216>
    let v4: i64;  // [sp-0x1c8]
    let v5: i192;  // [sp-0xf8], Other Possible Types: struct24
    let v7: i64;  // r8
    let v8: i64;  // r9

    v0 = uu_tail::follow::files::FileHandling::canonicalize_path(a1, a2, a3, a4, a5);
    if a4 {
        v5 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v0);
        v4 = *((&v5 as &char + 16) as &i64);
        v3 = v5;
        *((a0 + 16) as &i64) = v4;
        *(a0 as &i128) = v3;
    }
    v2 = *((&v0 as &char + 16) as &i64);
    v1 = v0;
    memcpy(&v5, a3, 216);
    v3 = hashbrown::map::HashMap<K,V,S,A>::insert(a0 + 24, &v1, &v5, v7, v8);
}
