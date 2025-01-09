fn uu_tr::operation::Sequence::parse_char_repeat(a0: &struct8, a1: u32, a2: u32) -> u64 {
    let v0: struct48;  // [bp-0x60]
    let v1: struct40;  // [sp-0x30], Other Possible Types: i320
    let v3: i64;  // rdi
    let v4: i128;  // xmm0

    v0 = struct48 {
        field_0: &g_41e611
        field_8: 1
        field_16: &g_41e614
        field_24: 1
        field_32: &g_41e615
        field_40: 1
    };
    v1 = nom::sequence::delimited::{{closure}}(&v0, a1, a2);
    v3 = a0 + 8;
    if !v1 {
        v4 = *((&v1 as &char + 8) as &i128);
        *((v3 + 16) as &i128) = *((&v1 as &char + 24) as &i128);
        *(v3 as &i128) = v4;
    } else {
        uu_tr::operation::Sequence::parse_char_repeat::{{closure}}(v3, &v1);
    }
    return struct8 {
        field_0: v5
    };
}
