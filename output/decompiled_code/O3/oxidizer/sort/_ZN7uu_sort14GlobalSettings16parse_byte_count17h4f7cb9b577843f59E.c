fn uu_sort::GlobalSettings::parse_byte_count(a0: &u64, a1: u64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x78]
    let v1: u64;  // [sp-0x70]
    let v2: u64;  // [sp-0x68]
    let v3: u64;  // [sp-0x60]
    let v4: u16;  // [sp-0x58]
    let v5: u8;  // [sp-0x56]
    let v6: u64;  // [sp-0x48], Other Possible Types: struct32
    let v7: u64;  // [sp-0x28]
    let v8: u64;  // [sp-0x20]
    let v10: u64;  // rdx
    let v11: u64;  // rax
    let v12: u128;  // xmm0
    let v13: u64;  // rcx
    let v14: u64;  // rax

    v4 = 0;
    v0 = "b";
    v1 = 13;
    v2 = &g_42ec64;
    v3 = 1;
    v5 = 1;
    v6 = uucore::parser::parse_size::Parser::parse(&v0, core::str::<impl str>::trim_matches(a1, a2), v10);
    v11 = v6;
    if v11 != 3 {
        v12 = *((&v6 as &char + 8) as &i128);
        v13 = *((&v6 as &char + 24) as &i64);
        return struct8 {
            field_0: v14
        };
    }
    v8 = *((&v6 as &char + 24) as &i64);
    v7 = *((&v6 as &char + 16) as &i64);
    if !v8 {
        a0[1] = v7;
        v14 = 3;
    } else {
        format!("Buffer size {:?} does not fit in address space", &v7);
        v14 = 2;
    }
    return struct8 {
        field_0: v14
    };
}
