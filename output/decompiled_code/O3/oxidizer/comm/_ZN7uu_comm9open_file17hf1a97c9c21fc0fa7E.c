fn uu_comm::open_file(a0: void*, a1: &u8, a2: u32, a3: u32) -> u64 {
    let v0: struct8;  // [bp-0x38]
    let v1: u32;  // [bp-0x30]
    let v2: u16;  // [sp-0x2c]
    let v3: Enum;  // [sp-0x28], Other Possible Types: u64
    let v4: i8;  // [bp-0x20]
    let v6: u64;  // rbp
    let v7: u32;  // r14d

    v6 = a3;
    if a2 != 1 || *(a1) != 45 {
        v0 = struct8 {
            field_0: 0x1b600000000
        };
        v1 = 0;
        v2 = 0;
        v1 = 1;
        v3 = std::fs::OpenOptions::_open(&v0, a1, a2);
        if v3 as i32 {
            *(&a0->field_0 as &i8) = v4;
            v6 = v6 | -0x100 | 11;
        } else {
            v7 = *((&v3 as &char + 4) as &i32);
            *(&a0->field_0 as &long long) = __rust_alloc(0x2000, 1);
            a0->field_8 = 0x2000;
            a0->field_10 = 0;
            a0->field_20 = 0;
            a0->field_28 = v7;
        }
    } else {
        a0->field_0 = 0;
        *(&a0->field_8 as &long long) = std::io::stdio::stdin();
    }
    a0->field_30 = v6;
    return a0;
}
