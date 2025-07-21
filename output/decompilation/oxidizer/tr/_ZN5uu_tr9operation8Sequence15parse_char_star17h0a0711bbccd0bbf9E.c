fn uu_tr::operation::Sequence::parse_char_star(a1: i64, a2: i64) -> Result<struct26, struct32> {
    let a0: i64;  // rdi
    let v0: struct33;  // [bp-0x48]
    let v1: struct32;  // [bp-0x28]
    let v3: u8;  // al
    let v4: void*;  // rax
    let v5: u128;  // xmm0
    let v6: u64;  // rax
    let v7: u64;  // rax

    v1 = struct32 {
        field_0: &g_41e611
        field_8: 1
        field_16: &g_41e612
        field_24: 2
    };
    v0 = nom::sequence::delimited::{{closure}}(&v1, a1, a2);
    if v0.field_0 as i32 != 3 {
        v5 = *(&v0.field_0 as &i128);
        v6 = 1;
        return struct40 {
            field_0: v7
            field_8: v5
            field_24: *(&v0.field_16 as &i128)
        };
    }
    v3 = v0.field_24;
    *((a0 + 8) as &i128) = *(&v0.field_8 as &i128);
    *((a0 + 24) as &i64) = 9223372036854775819;
    *((a0 + 32) as &i8) = 2;
    *((a0 + 33) as &u8) = v3;
    v4 = 0;
}
