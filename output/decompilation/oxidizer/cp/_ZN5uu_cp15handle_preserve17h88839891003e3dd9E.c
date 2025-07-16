fn uu_cp::handle_preserve(a1: i8, a2: i8, a3: i64) -> Option<struct64> {
    let a0: i64;  // rdi
    let v0: struct40;  // [bp-0x98]
    let v1: i8;  // [bp-0x70]
    let v2: u8;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v4: u8;  // [bp-0x58]
    let v5: u8;  // [bp-0x48]
    let v6: u8;  // [bp-0x38]
    let v7: u8;  // [bp-0x28]
    let v9: u128;  // xmm0
    let v10: u128;  // xmm1

    if !a1 {
        return struct8 {
            field_0: 13
        };
    }
    v0 = uu_cp::copy_attributes::{{closure}}(a3);
    if a2 {
        if v0.field_0 != 13 {
            v9 = *(&(&v0.field_0)[1] as &i128);
            v10 = *((&v0.field_8 as &char + 8) as &i128);
            return struct72 {
                field_0: v0.field_0
                field_8: <UNKNOWN>
                field_24: <UNKNOWN>
                field_40: <UNKNOWN>
                field_56: <UNKNOWN>
            };
        }
    } else {
        if v0.field_0 != 13 {
            memcpy(&v7, &v2, 16);
            memcpy(&v6, &v0, 16);
            memcpy(&v5, &v0, 16);
            memcpy(&v4, &v0, 16);
            uu_cp::show_error_if_needed(&v4);
        }
    }
    return struct8 {
        field_0: 13
    };
}
