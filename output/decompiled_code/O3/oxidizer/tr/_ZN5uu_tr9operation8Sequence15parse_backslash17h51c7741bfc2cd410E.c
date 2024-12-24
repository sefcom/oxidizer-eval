fn uu_tr::operation::Sequence::parse_backslash(a0: &u64, a1: u64, a2: u64) -> u64 {
    let v0: u8;  // [bp-0x38]
    let v1: u8;  // [bp-0x30]
    let v2: u8;  // [bp-0x28]
    let v3: u8;  // [bp-0x20]
    let v4: struct16;  // [bp-0x18]
    let v6: struct32;  // rax
    let v7: u64;  // rcx
    let v8: u64;  // rdx
    let v9: u128;  // xmm0

    v4 = struct16 {
        field_0: &g_4149ee
        field_8: 1
    };
    v6 = nom::sequence::preceded::{{closure}}(&v4, a1, a2);
    if *(&v0 as &i32) != 3 {
        v9 = *(&v0 as &i128);
        return struct32 {
            field_0: v9
            field_16: *(&v2 as &i128)
        };
    }
    v6 = *(&v1 as &i64);
    v7 = *(&v2 as &i64);
    v8 = v3;
    switch (v8) {
    case 97:
        v8 = v8 | -0x100 | 7;
        break;
    case 98:
        v8 = v8 | -0x100 | 8;
        break;
    case 102:
        v8 = v8 | -0x100 | 12;
        break;
    case 110:
        v8 = v8 | -0x100 | 10;
        break;
    case 114:
        v8 = v8 | -0x100 | 13;
        break;
    case 116:
        v8 = v8 | -0x100 | 9;
        break;
    case 118:
        v8 = v8 | -0x100 | 11;
        break;
    }
    return struct25 {
        field_0: 3
        field_8: v6
        field_16: v7
        field_24: v8 as u8
    };
}
