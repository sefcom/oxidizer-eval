fn uu_tr::operation::Sequence::parse_backslash(a0: &Result<struct32, struct17>, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x38]
    let v1: i8;  // [bp-0x30]
    let v2: i8;  // [bp-0x28]
    let v3: u8;  // [bp-0x20]
    let v4: struct16;  // [bp-0x18]
    let v6: struct32;  // rax
    let v7: u64;  // rcx
    let v8: u64;  // rdx
    let v9: u128;  // xmm0

    v4 = struct16 {
        field_0: &g_41e5f6
        field_8: 1
    };
    v6 = nom::sequence::preceded::{{closure}}(&v4, a1, a2);
    if *(&v0 as &i32) != 3 {
        v9 = *(&v0 as &i128);
        return Ok(struct32 {
            field_0: v9
            field_16: *(&v2 as &i128)
        });
    }
    v6 = *(&v1 as &i64);
    v7 = *(&v2 as &i64);
    v8 = v3;
    match (v8) {
        97 => {
            v8 = v8 & -0x100 | 7;
            break;
        }
        98 => {
            v8 = v8 & -0x100 | 8;
            break;
        }
        102 => {
            v8 = v8 & -0x100 | 12;
            break;
        }
        110 => {
            v8 = v8 & -0x100 | 10;
            break;
        }
        114 => {
            v8 = v8 & -0x100 | 13;
            break;
        }
        116 => {
            v8 = v8 & -0x100 | 9;
            break;
        }
        118 => {
            v8 = v8 & -0x100 | 11;
            break;
        }
    }
    return Err(struct17 {
        field_0: v6
        field_8: v7
        field_16: v8 as u8
    });
}
