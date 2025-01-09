fn uu_sort::GlobalSettings::parse_byte_count(a0: &Option<Result<struct32, struct8>>, a1: u64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x78]
    let v1: u64;  // [sp-0x70]
    let v2: u64;  // [sp-0x68], Other Possible Types: &&struct_0
    let v3: u64;  // [sp-0x60]
    let v4: u16;  // [sp-0x58], Other Possible Types: void*
    let v5: u8;  // [sp-0x56]
    let v6: &u8;  // [sp-0x48], Other Possible Types: u256, struct32
    let v7: u64;  // [sp-0x40]
    let v8: u64;  // [sp-0x28]
    let v9: u64;  // [sp-0x20]
    let v11: u32;  // rdx

    v4 = 0;
    v0 = "b";
    v1 = 13;
    v2 = &g_42edb2;
    v3 = 1;
    v5 = 1;
    v6 = uucore::parser::parse_size::Parser::parse(&v0, core::str::<impl str>::trim_matches(a1, a2), v11);
    if v6 != 3 {
        return struct32 {
            field_0: v12
            field_8: v13
            field_24: v14
        };
    }
    v9 = *((&v6 as &char + 24) as &i64);
    v8 = *((&v6 as &char + 16) as &i64);
    if !v9 {
        a0->field_8 = v8;
    } else {
        v6 = &v8;
        v7 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v0 = "Buffer size ";
        v1 = 2;
        v4 = 0;
        v2 = &v6;
        v3 = 1;
        core::option::Option<T>::map_or_else();
    }
    return struct8 {
        field_0: v15
    };
}
