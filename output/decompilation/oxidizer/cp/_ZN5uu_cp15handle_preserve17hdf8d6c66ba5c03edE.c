fn uu_cp::handle_preserve(a1: i8, a2: i8, a3: i64, a4: i64) -> Option<struct64> {
    let a0: i64;  // rdi
    let v0: Option<struct8>;  // [bp-0x98]
    let v1: u8;  // [bp-0x88]
    let v2: i8;  // [bp-0x80]
    let v3: u8;  // [bp-0x78]
    let v4: i8;  // [bp-0x70]
    let v5: u8;  // [bp-0x68]
    let v6: u64;  // [bp-0x60]
    let v7: u8;  // [bp-0x58]
    let v8: u8;  // [bp-0x48]
    let v9: u8;  // [bp-0x38]
    let v10: u8;  // [bp-0x28]
    let v12: u128;  // xmm0
    let v13: u128;  // xmm1

    if !a1 {
        return struct8 {
            field_0: 13
        };
    }
    v0 = uu_cp::copy_attributes::{{closure}}(a3, a4);
    if a2 {
        if let Some(_) = v0 {
            v12 = v0;
            v13 = *(&v2 as &i128);
            return struct72 {
                field_0: v0 as i64
                field_8: <UNKNOWN>
                field_24: <UNKNOWN>
                field_40: <UNKNOWN>
                field_56: <UNKNOWN>
            };
        }
    } else {
        if let Some(_) = v0 {
            memcpy(&v10, &v5, 16);
            memcpy(&v9, &v3, 16);
            memcpy(&v8, &v1, 16);
            memcpy(&v7, &v0, 16);
            uu_cp::show_error_if_needed(&v7 as u128);
        }
    }
    return struct8 {
        field_0: 13
    };
}
