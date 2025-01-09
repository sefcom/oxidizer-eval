fn uu_sort::GlobalSettings::parse_byte_count(a0: &Option<Result<struct32, struct8>>, a1: u64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x78]
    let v1: u64;  // [sp-0x70]
    let v2: u64;  // [sp-0x68], Other Possible Types: &&struct_0
    let v3: u64;  // [sp-0x60]
    let v4: void*;  // [sp-0x58], Other Possible Types: u16
    let v5: u8;  // [sp-0x56]
    let v6: &u8;  // [bp-0x48], Other Possible Types: u64
    let v7: u64;  // [bp-0x40]
    let v8: i8;  // [bp-0x38]
    let v9: i8;  // [bp-0x30]
    let v10: u64;  // [sp-0x28]
    let v11: u64;  // [sp-0x20]
    let v13: u64;  // rdx

    v4 = 0;
    v0 = "b";
    v1 = 13;
    v2 = &g_42edb2;
    v3 = 1;
    v5 = 1;
    uucore::parser::parse_size::Parser::parse(&v6, &v0, core::str::<impl str>::trim_matches(a1, a2), v13);
    if v6 != 3 {
        return Some(struct32 {
            field_0: v14
            field_8: v15
            field_24: v16
        });
    }
    v11 = v9;
    v10 = v8;
    if !v11 {
        a0->field_8 = v10;
    } else {
        v6 = &v10;
        v7 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v0 = "Buffer size ";
        v1 = 2;
        v4 = 0;
        v2 = &v6;
        v3 = 1;
        core::option::Option<T>::map_or_else();
    }
    return struct8 {
        field_0: v17
    };
}
