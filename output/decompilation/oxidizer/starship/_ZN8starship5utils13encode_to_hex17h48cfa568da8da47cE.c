fn starship::utils::encode_to_hex(a1: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: &str;  // [bp-0x98], Other Possible Types: struct16
    let v1: struct16;  // [bp-0x98]
    let v2: struct24;  // [bp-0x90]
    let v3: struct24;  // [bp-0x88]
    let v4: &str;  // [bp-0x78]
    let v5: Option<struct24>;  // [bp-0x68]
    let v6: Result<struct40, struct32>;  // [bp-0x58]
    let v8: struct24;  // rdx
    let v9: i64;  // rbp
    let v10: core::option::Option<&str>;  // r15d

    v0 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(40, 1, 1, "src/utils.rs");
    v2 = v8;
    v3 = 0;
    for (v9 = 0; v9 != 20; v1 = alloc::vec::Vec<T,A>::push((&g_543818.field_0)[v10 & 15], "src/utils.rs")) {
        v10 = *((a1 + v9) as &i8);
        v0 = alloc::vec::Vec<T,A>::push((&g_543818.field_0)[v10 >> 4], "src/utils.rs");
        v9 += 1;
    }
    v5 = 0;
    v4 = *(&v1.field_0 as &i128);
    v6 = alloc::string::String::from_utf8(&v4);
    core::result::Result<T,E>::unwrap(a0, &v6);
    return;
}
