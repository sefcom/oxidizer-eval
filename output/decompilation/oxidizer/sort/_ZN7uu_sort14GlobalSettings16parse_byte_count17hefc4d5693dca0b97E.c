fn uu_sort::GlobalSettings::parse_byte_count(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: u64;  // [bp-0x78]
    let v1: u64;  // [bp-0x70]
    let v2: &str;  // [bp-0x68]
    let v3: u16;  // [bp-0x58]
    let v4: u8;  // [bp-0x56]
    let v5: struct32;  // [bp-0x48]
    let v6: struct16;  // [bp-0x38], Other Possible Types: u64
    let v7: u64;  // [bp-0x30]
    let v8: struct16;  // [bp-0x28]
    let v10: u64;  // rax
    let v13: u64;  // rax
    let v14: iNone;  // xmm0
    let v15: &str;  // rax:rdx

    v3 = 0;
    v0 = "b";
    v1 = 16;
    v2 = "K";
    v4 = 1;
    v15 = core::str::<impl str>::trim_matches(a1, a2, a2);
    v5 = uucore::features::parser::parse_size::Parser::parse(&v0, v15.ptr, v15.len);
    if v5.field_0 as i64 != 4 {
        v14 = *((&v5.field_0 as &char + 8) as &i128);
        return struct32 {
            field_0: v5.field_0 as i64
            field_8: v14
            field_24: v7
        };
    }
    v8 = v6;
    if !v7 {
        v13 = 4;
        return struct16 {
            field_0: v10
            field_8: v6
        };
    }
    format!("Buffer size {} does not fit in address space", &v8);
}
