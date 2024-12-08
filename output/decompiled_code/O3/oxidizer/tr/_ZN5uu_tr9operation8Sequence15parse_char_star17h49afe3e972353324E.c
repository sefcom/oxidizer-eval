fn uu_tr::operation::Sequence::parse_char_star(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct33;  // [sp-0x48], Other Possible Types: i264
    let v1: struct32;  // [bp-0x28]
    let v3: i8;  // al
    let v4: i64;  // rax
    let v5: i128;  // xmm0

    v1 = struct32 {
        field_0: &g_414a09
        field_8: 1
        field_16: &g_414a0a
        field_24: 2
    };
    v0 = nom::sequence::delimited::{{closure}}(&v1, a1, a2);
    if v0 != 3 {
        v5 = v0;
        *((a0 + 24) as &i128) = *((&v0 as &char + 16) as &i128);
        *((a0 + 8) as &i128) = v5;
        v4 = 1;
    } else {
        v3 = *((&v0 as &char + 24) as &i8);
        *((a0 + 8) as &i128) = *((&v0 as &char + 8) as &i128);
        *((a0 + 24) as &i64) = 9223372036854775819;
        *((a0 + 32) as &i8) = 2;
        *((a0 + 33) as &i8) = v3;
        v4 = 0;
    }
    return struct8 {
        field_0: v4
    };
}
