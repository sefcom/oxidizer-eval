fn uu_df::blocks::block_size_from_env() -> long long {
    let v0: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0xb8]
    let v1: u64;  // [bp-0xa0]
    let v2: u64;  // [bp-0x90]
    let v3: u64;  // [bp-0x88]
    let v4: u64;  // [bp-0x78]
    let v5: u64;  // [bp-0x70]
    let v6: u64;  // [bp-0x68]
    let v7: u64;  // [bp-0x60]
    let v8: u64;  // [bp-0x58]
    let v9: u64;  // [bp-0x50]
    let v10: void*;  // [bp-0x48]
    let v11: u64;  // [bp-0x40]
    let v12: i8;  // [bp-0x38]
    let v14: u64;  // rax
    let v15: u64;  // rdx
    let v16: u64;  // rcx

    v4 = &g_4160ed;
    v5 = 13;
    v6 = &g_4160fa;
    v7 = 10;
    v8 = &g_416104;
    v9 = 9;
    v10 = 0;
    v11 = 3;
    loop {
        v14 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v4);
        if !v14 {
            return 0;
        }
        v0 = std::env::var(v14, v15);
        if let Ok(_) = v0 {
            v3 = v1;
            memcpy(&v0 as u8, &v0 as u128, 16);
            uucore::parser::parse_size::parse_size_u64(v2, v15, v16);
            return (*(&v12 as &i32) == 3) as u8 as u64;
        }
    }
}
