fn uu_tr::operation::Sequence::parse_backslash(a1: i64, a2: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x38]
    let v1: u64;  // [bp-0x30]
    let v2: i8;  // [bp-0x28], Other Possible Types: u64
    let v4: struct16;  // [bp-0x18]
    let v6: u64;  // rax
    let v7: u128;  // xmm0
    let v8: u8;  // dl

    v4 = struct16 {
        field_0: &g_41e5f6
        field_8: 1
    };
    v4 = struct16 {
        field_0: &g_41e5f6
        field_8: 1
    };
    v6 = nom::sequence::preceded::{{closure}}(&v0, &v4, a1, a2);
    if *(&v0 as &i32) == 3 {
        return struct32 {
            field_0: 3
            field_8: v1
            field_16: v2
            field_24: v8
        };
    }
    v7 = *(&v0 as &i128);
    return struct32 {
        field_0: v7
        field_16: *(&v2 as &i128)
    };
}
