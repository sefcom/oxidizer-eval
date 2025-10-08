fn just::search::Search::find_in_directory(a0: i64, a1: u64, a2: u64, a3: u32, a4: u64) -> int {
    let v0: struct72;  // [bp-0x78], Other Possible Types: struct80
    let v1: struct80;  // [bp-0x68], Other Possible Types: struct89
    let v2: struct8;  // [bp-0x58], Other Possible Types: struct80
    let v3: struct32;  // [bp-0x58]
    let v4: i8;  // [bp-0x50]
    let v5: struct24;  // [bp-0x48]
    let v6: struct72;  // [bp-0x40], Other Possible Types: char
    let v7: struct80;  // [bp-0x38]
    let v8: &str;  // [bp-0x30]
    let v9: struct80;  // [bp-0x28]
    let v10: &u8;  // [bp-0x20]
    let v11: struct72;  // [bp-0x18]
    let v13: struct8;  // rax
    let v14: u64;  // rax
    let v15: struct80;  // xmm0

    v2 = just::search::Search::justfile(a1, a2, a3, a4);
    v13 = v2.field_0;
    v0 = *(&v4 as &i128);
    v1 = *(&v6 as &i64);
    if v13 != 9223372036854775814 {
        return struct40 {
            field_0: 0x8000000000000000
            field_8: v13
            field_16: v0
            field_32: v1
        };
    }
    v11 = v1;
    v9 = v0;
    v3 = just::search::Search::working_directory_from_justfile(v10, v1);
    v14 = v3.field_0;
    v0 = *(&v3.field_8 as &i128);
    v1 = *((&v3.field_16 as &char + 8) as &i64);
    if v14 != 9223372036854775814 {
        return struct40 {
            field_0: 0x8000000000000000
            field_8: v14
            field_16: v0
            field_32: v1
        };
    }
    v8 = v1;
    v6 = v0;
    v5 = v11;
    v15 = *(&v9.field_0 as &i128);
    v2 = v15;
    return struct48 {
        field_0: v15
        field_16: v5
        field_24: v6.field_0 as i64
        field_32: v7
        field_40: v8
    };
}
