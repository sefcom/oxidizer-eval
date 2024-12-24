fn uu_tr::operation::Sequence::parse_char_equal(a0: void*, a1: u64, a2: u64) -> u64 {
    let v0: struct8;  // [bp-0x50]
    let v1: u64;  // [sp-0x38]
    let v2: u64;  // [sp-0x30]
    let v3: u64;  // [sp-0x28]
    let v4: u64;  // [sp-0x20]
    let v5: u64;  // [sp-0x18]
    let v6: u64;  // [sp-0x10]

    v3 = &g_414a50;
    v4 = 2;
    v0 = struct8 {
        field_0: 9223372036854775809
    };
    v1 = &g_414a52;
    v2 = 2;
    v5 = &g_414a52;
    v6 = 2;
    nom::sequence::delimited::{{closure}}(a0, &v0, a1, a2);
    return;
}
