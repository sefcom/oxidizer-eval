fn uu_sort::Output::new(a1: i64, a2: i64) -> Result<struct28, struct24> {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0xd8]
    let v1: u32;  // [bp-0xd0]
    let v2: u8;  // [bp-0xcf]
    let v3: u8;  // [bp-0xcc]
    let v4: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0xc8]
    let v5: u32;  // [bp-0xc4]
    let v6: u32;  // [bp-0xc0]
    let v7: struct24;  // [bp-0xb8], Other Possible Types: struct72
    let v8: u128;  // [bp-0xb0]
    let v9: struct72;  // [bp-0x78]
    let v10: struct33;  // [bp-0x78]
    let v11: core::fmt::rt::Argument;  // [bp-0x38]
    let v13: u64;  // r12
    let v14: i64;  // rdi
    let v15: i64;  // rdi

    v13 = 0x8000000000000000;
    if a0 {
        v0 = 0x1b600000000;
        v1 = 0;
        v3 = 0;
        v2 = 1;
        v3 = 1;
        v4 = std::fs::OpenOptions::open(&v0, a0, a1);
        match v4 {
            Err(_) => {
                v10 = uu_sort::Output::new::{{closure}}(a0, a1, v6);
                v7 = v9;
                *((v14 + 8) as &double) = alloc::boxed::Box<T>::new(&v7);
                *((v14 + 16) as &&u8) = &g_5ff678;
                *(v14 as &i64) = 9223372036854775809;
                return;
            },
            Ok(_) => {
                v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0, a1);
                v13 = v7.field_0;
                v11 = v8;
            },
        }
    }
    *(v15 as &u64) = v13;
    *((v15 + 8) as &core::fmt::rt::Argument) = v11;
    *((v15 + 24) as &u32) = v5;
    return;
}
