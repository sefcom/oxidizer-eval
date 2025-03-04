fn uu_sort::Output::new(a0: &Result<struct20, struct16>, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0xdc]
    let v1: struct13;  // [bp-0xd8]
    let v2: i8;  // [sp-0xcf]
    let v3: i16;  // [bp-0xcc]
    let v4: Result<struct4, struct8>;  // [sp-0xc8]
    let v5: struct24;  // [sp-0xb8], Other Possible Types: char
    let v6: i16;  // [sp-0xb7]
    let v7: i8;  // [sp-0xb5]
    let v8: i32;  // [sp-0xb4]
    let v9: iNone;  // [sp-0xb0]
    let v10: iNone;  // [sp-0xa0]
    let v11: iNone;  // [sp-0x90]
    let v12: i64;  // [sp-0x80]
    let v13: struct33;  // [sp-0x78]
    let v14: i8;  // [bp-0x50]
    let v15: i8;  // [bp-0x40]
    let v16: iNone;  // [sp-0x38]
    let v19: i32;  // ebp

    if !a1 {
        return struct28 {
            field_0: v18
            field_8: v16
            field_24: v19
        };
    }
    v1 = struct13 {
        field_0: 0x1b600000000
        field_8: 0
        field_12: 1
    };
    *(&v3 as &i16) = 0;
    v2 = 1;
    v4 = std::fs::OpenOptions::open(&v1, a1, a2);
    match v4 {
        Err(_) => {
            v13 = uu_sort::Output::new::{{closure}}(a1, a2, v4 as i64);
            v7 = *((&v13.field_8 as &char + 2) as &i8);
            v6 = v13.field_8 as i16;
            v9 = *((&v13.field_8 as &char + 7) as &i128);
            v10 = *(&v13.field_0 as &i128);
            v11 = *(&v14 as &i128);
            v12 = *(&v15 as &i64);
            v5 = v13.field_0;
            v8 = *((&v13.field_8 as &char + 3) as &i32);
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v5);
            *((a0 + 16) as &&i64) = &g_5ff678;
            *(a0 as &i64) = 9223372036854775809;
        },
        Ok(v19) => {
            v0 = *((&v4 as &char + 4) as &i32);
            v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
            v16 = v9;
        },
    }
}
