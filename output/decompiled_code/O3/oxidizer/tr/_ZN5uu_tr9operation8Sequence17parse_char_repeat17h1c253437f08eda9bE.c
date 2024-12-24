fn uu_tr::operation::Sequence::parse_char_repeat(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct48;  // [bp-0x60]
    let v1: i320;  // [sp-0x30], Other Possible Types: struct40
    let v3: i64;  // rdi
    let v4: i128;  // xmm0
    let v5: i64;  // rax

    v0 = struct48 {
        field_0: &g_414a09
        field_8: 1
        field_16: &g_414a0c
        field_24: 1
        field_32: &g_414a0d
        field_40: 1
    };
    v1 = nom::sequence::delimited::{{closure}}(&v0, a1, a2);
    v3 = a0 + 8;
    if !v1 {
        v4 = *((&v1 as &char + 8) as &i128);
        *((v3 + 16) as &i128) = *((&v1 as &char + 24) as &i128);
        *(v3 as &i128) = v4;
        v5 = 1;
    } else {
        uu_tr::operation::Sequence::parse_char_repeat::{{closure}}(v3, &v1);
        v5 = 0;
    }
    return struct8 {
        field_0: v5
    };
}
