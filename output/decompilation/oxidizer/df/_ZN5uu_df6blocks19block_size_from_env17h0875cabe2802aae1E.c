fn uu_df::blocks::block_size_from_env() -> u64 {
    let v0: i256;  // [sp-0xb8], Other Possible Types: Result<struct24, struct8>
    let v1: i192;  // [sp-0x98]
    let v2: i64;  // [sp-0x78]
    let v3: i64;  // [sp-0x70]
    let v4: i64;  // [sp-0x68]
    let v5: i64;  // [sp-0x60]
    let v6: i64;  // [sp-0x58]
    let v7: i64;  // [sp-0x50]
    let v8: i64;  // [sp-0x48]
    let v9: i64;  // [sp-0x40]
    let v10: Option<Result<struct32, struct8>>;  // [sp-0x38]
    let v12: i64;  // rax
    let v13: i64;  // rdx
    let v14: i64;  // rbx

    v2 = &g_4160ed;
    v3 = 13;
    v4 = &g_4160fa;
    v5 = 10;
    v6 = &g_416104;
    v7 = 9;
    v8 = 0;
    v9 = 3;
    loop {
        v12 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v2);
        if !v12 {
            return 0;
        }
        v0 = std::env::var(v12, v13);
        if !v0 {
            v10 = uucore::parser::parse_size::parse_size_u64(*((&v1 as &char + 8) as &i64), *((&v0 as &char + 24) as &i64));
            return v14;
        }
    }
}
