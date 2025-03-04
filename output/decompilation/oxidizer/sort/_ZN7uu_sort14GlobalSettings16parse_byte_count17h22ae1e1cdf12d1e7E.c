fn uu_sort::GlobalSettings::parse_byte_count(a0: &Option<Result<struct32, struct8>>, a1: u64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x78]
    let v1: u64;  // [sp-0x70]
    let v2: u64;  // [sp-0x68]
    let v3: u64;  // [sp-0x60]
    let v4: u16;  // [sp-0x58]
    let v5: u8;  // [sp-0x56]
    let v6: u64;  // [sp-0x48], Other Possible Types: struct32
    let v7: u64;  // [sp-0x28]
    let v8: u64;  // [sp-0x20]
    let v10: u32;  // rdx

    v4 = 0;
    v0 = "b";
    v1 = 13;
    v2 = &g_42edb2;
    v3 = 1;
    v5 = 1;
    v6 = uucore::parser::parse_size::Parser::parse(&v0, core::str::<impl str>::trim_matches(a1, a2), v10);
    if v6 != 3 {
        return Some(struct32 {
            field_0: v11
            field_8: v12
            field_24: v13
        });
    }
    v8 = v6.field_24;
    v7 = v6.field_16;
    if !v8 {
        a0->field_8 = v7;
    } else {
        format!("Buffer size {} does not fit in address space", &v7);
    }
    return struct8 {
        field_0: v14
    };
}
