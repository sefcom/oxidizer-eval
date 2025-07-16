fn uu_sort::GlobalSettings::parse_byte_count(a1: i64, a2: i64) -> Result<struct32, struct16> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x78]
    let v1: u64;  // [bp-0x70]
    let v2: u64;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v4: u16;  // [bp-0x58]
    let v5: u8;  // [bp-0x56]
    let v6: struct32;  // [bp-0x48]
    let v7: u64;  // [bp-0x38]
    let v8: u64;  // [bp-0x30]
    let v9: u64;  // [bp-0x28]
    let v10: u64;  // [bp-0x20]
    let v12: u32;  // rax
    let v14: u128;  // xmm0
    let v15: u64;  // rax
    let v17: &str;  // rax:rdx

    v4 = 0;
    v0 = "b";
    v1 = 13;
    v2 = &g_42edb2;
    v3 = 1;
    v5 = 1;
    v17 = core::str::<impl str>::trim_matches(a1, a2);
    v6 = uucore::parser::parse_size::Parser::parse(&v0, v17.data_ptr, v17.length);
    if v6.field_0 as i64 != 3 {
        v14 = *((&v6.field_0 as &char + 8) as &i128);
        return struct40 {
            field_0: v6.field_0 as i64
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
        };
    }
    v10 = v8;
    v9 = v7;
    if !v8 {
        v15 = 3;
        return struct16 {
            field_0: v12
            field_8: v7
        };
    }
    format!("Buffer size {} does not fit in address space", &v9);
}
