fn uu_sort::Output::new(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0xdc]
    let v1: i64;  // [sp-0xd8]
    let v2: i32;  // [bp-0xd0]
    let v3: i8;  // [sp-0xcf]
    let v4: i8;  // [bp-0xcc]
    let v5: i64;  // [sp-0xc8], Other Possible Types: Result<struct4, struct8>
    let v6: i8;  // [bp-0xc0]
    let v7: i8;  // [sp-0xb8], Other Possible Types: struct24
    let v8: i16;  // [sp-0xb7]
    let v9: i8;  // [sp-0xb5]
    let v10: i32;  // [sp-0xb4]
    let v11: i128;  // [sp-0xb0]
    let v12: i128;  // [sp-0xa0]
    let v13: i128;  // [sp-0x90]
    let v14: i64;  // [sp-0x80]
    let v15: struct33;  // [sp-0x78], Other Possible Types: i264
    let v16: i8;  // [bp-0x50]
    let v17: i8;  // [bp-0x40]
    let v18: i128;  // [sp-0x38]
    let v20: i64;  // r12
    let v21: i32;  // ebp

    v20 = 0x8000000000000000;
    if a1 {
        v1 = 0x1b600000000;
        v2 = 0;
        v4 = 0;
        v3 = 1;
        v4 = 1;
        v5 = std::fs::OpenOptions::open(&v1, a1, a2);
        match v5 {
            Err(_) => {
                v15 = uu_sort::Output::new::{{closure}}(a1, a2, v6);
                v9 = *((&v15 as &char + 3) as &i8);
                v8 = *((&v15 as &char + 1) as &i16);
                v11 = *((&v15 as &char + 8) as &i128);
                v12 = v15;
                v13 = v16;
                v14 = v17;
                v7 = v15;
                v10 = *((&v15 as &char + 4) as &i32);
                *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v7);
                *((a0 + 16) as &&i64) = &g_5feb50;
                *(a0 as &i64) = 9223372036854775809;
                return struct28 {
                    field_0: v20
                    field_8: v18
                    field_24: v21
                };
            },
            Ok(_) => {
                v21 = *((&v5 as &char + 4) as &i32);
                v0 = v21;
                v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
                v20 = v7;
                v18 = v7.field_8;
            },
        }
    }
    return struct28 {
        field_0: v20
        field_8: v18
        field_24: v21
    };
}
