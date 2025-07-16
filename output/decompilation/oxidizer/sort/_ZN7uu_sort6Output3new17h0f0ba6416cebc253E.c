fn uu_sort::Output::new(a1: i64, a2: i64) -> Result<struct28, struct24> {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0xd8]
    let v1: u32;  // [bp-0xd0]
    let v2: u8;  // [bp-0xcf]
    let v3: u8;  // [bp-0xcc]
    let v4: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0xc8]
    let v5: u32;  // [bp-0xc4]
    let v6: u32;  // [bp-0xc0]
    let v7: u8;  // [bp-0xb8], Other Possible Types: struct24
    let v8: u16;  // [bp-0xb7]
    let v9: u8;  // [bp-0xb5]
    let v10: u32;  // [bp-0xb4]
    let v11: u128;  // [bp-0xa0]
    let v12: u8;  // [bp-0x90]
    let v13: u64;  // [bp-0x80]
    let v14: struct33;  // [bp-0x78]
    let v15: u16;  // [bp-0x77]
    let v16: u8;  // [bp-0x75]
    let v17: u32;  // [bp-0x74]
    let v18: u128;  // [bp-0x60]
    let v19: u8;  // [bp-0x50]
    let v20: u64;  // [bp-0x40]
    let v21: u8;  // [bp-0x38]
    let v23: u64;  // r12
    let v24: i64;  // rdi
    let v25: i64;  // rdi

    v23 = 0x8000000000000000;
    if a0 {
        v0 = 0x1b600000000;
        v1 = 0;
        v3 = 0;
        v2 = 1;
        v3 = 1;
        v4 = std::fs::OpenOptions::open(&v0, a0, a1);
        match v4 {
            Err(_) => {
                v14 = uu_sort::Output::new::{{closure}}(a0, a1, v6);
                v9 = v16;
                v8 = v15;
                memcpy(&v9, &v14 as u128, 16);
                v11 = v18;
                memcpy(&v12, &v19 as u128, 16);
                v13 = v20;
                v7 = v14.field_0;
                v10 = v17;
                *((v24 + 8) as &double) = alloc::boxed::Box<T>::new(&v7);
                *((v24 + 16) as &&u8) = &g_5ff678;
                *(v24 as &i64) = 9223372036854775809;
                return;
            },
            Ok(_) => {
                v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0, a1);
                v23 = v7.field_0;
                memcpy(&v21, &v7 as u8, 16);
            },
        }
    }
    *(v25 as &u64) = v23;
    *((v25 + 8) as &i128) = *(&v21 as &i128);
    *((v25 + 24) as &u32) = v5;
    return;
}
