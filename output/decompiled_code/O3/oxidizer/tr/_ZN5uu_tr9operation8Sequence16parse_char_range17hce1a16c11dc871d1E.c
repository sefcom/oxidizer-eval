fn uu_tr::operation::Sequence::parse_char_range(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i264;  // [sp-0x38], Other Possible Types: struct33
    let v1: struct16;  // [bp-0x18]
    let v4: i64;  // rax
    let v5: i64;  // rcx
    let v6: i64;  // r8
    let v8: i128;  // xmm0
    let v9: i64;  // rax

    v1 = struct16 {
        field_0: &g_4149c4
        field_8: 1
    };
    v0 = nom::sequence::separated_pair::{{closure}}(&v1, a1, a2);
    if v0 != 3 {
        v8 = v0;
        *((a0 + 24) as &i128) = *((&v0 as &char + 16) as &i128);
        *((a0 + 8) as &i128) = v8;
        v9 = 1;
    } else {
        v4 = *((&v0 as &char + 24) as &i8);
        v5 = *((&v0 as &char + 25) as &i8);
        v6 = 9223372036854775819;
        if v4 > v5 {
            v6 = 9223372036854775818;
        }
        *((a0 + 8) as &i128) = *((&v0 as &char + 8) as &i128);
        *((a0 + 24) as &i64) = v6;
        *((a0 + 32) as &i32) = (v4 > v5 ? v5 : ((v4 & 4294967295 & 4294967295) * 0x100 & 4294967295) + ((v5 & 4294967295 & 4294967295) * 0x10000 & 4294967295) + 1);
        *((a0 + 36) as &i32) = v4;
        v9 = 0;
    }
    return struct8 {
        field_0: v9
    };
}
