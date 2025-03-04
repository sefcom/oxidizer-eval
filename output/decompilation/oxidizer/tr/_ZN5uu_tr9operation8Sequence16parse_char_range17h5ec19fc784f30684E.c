fn uu_tr::operation::Sequence::parse_char_range(a0: &struct40, a1: u32, a2: u32) -> u64 {
    let v0: struct33;  // [sp-0x38]
    let v1: struct16;  // [bp-0x18]
    let v4: i64;  // rax
    let v5: i64;  // rcx
    let v6: i64;  // r8
    let v7: iNone;  // xmm0

    v1 = struct16 {
        field_0: &g_41e5cc
        field_8: 1
    };
    v0 = nom::sequence::separated_pair::{{closure}}(&v1, a1, a2);
    if v0.field_0 as i32 != 3 {
        v7 = *(&v0.field_0 as &i128);
        *((a0 + 24) as &i128) = *(&v0.field_16 as &i128);
        *((a0 + 8) as void*) = v7;
    } else {
        v4 = v0.field_24;
        v5 = v0.field_25;
        v6 = 9223372036854775819;
        if v4 as u8 > v5 as u8 {
            v6 = 9223372036854775818;
        }
        *((a0 + 8) as &i128) = *(&v0.field_8 as &i128);
        *((a0 + 24) as &unsigned long) = v6;
        *((a0 + 32) as &i32) = (v4 as u8 > v5 as u8 ? v5 as u32 : (((v4 & 4294967295 & 4294967295) * 0x100 & 4294967295) + ((v5 & 4294967295 & 4294967295) * 0x10000 & 4294967295) + 1) as u32);
        *((a0 + 36) as &u32) = v4 as u32;
    }
    return struct8 {
        field_0: v8
    };
}
