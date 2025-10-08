fn uu_cp::handle_preserve(a0: i64, a1: u8, a2: u8, a3: void*) -> int {
    let v0: Option<struct32>;  // [bp-0x90]
    let v1: struct32;  // [bp-0x90]
    let v2: i8;  // [bp-0x68]
    let v3: i64;  // [bp-0x60]
    let v4: struct32;  // [bp-0x58]
    let v5: iNone;  // [bp-0x38]
    let v6: Result<struct40, struct16>;  // [bp-0x28]
    let v8: iNone;  // xmm0
    let v9: core::fmt::rt::Argument;  // xmm1

    if (a1 & 1) {
        v0 = uu_cp::copy_attributes::{{closure}}(a3);
        if (a2 & 1) {
            if let Some(_) = v0 {
                v8 = *((&v0 as &char + 8) as &i128);
                v9 = *((&v0 as &char + 24) as &i128);
                return struct56 {
                    field_0: v0 as i64
                    field_8: v8
                    field_24: v9
                    field_40: *(&v2 as &i128)
                };
            }
        } else {
            if let Some(_) = v0 {
                v6 = v3;
                v5 = v0 as i128;
                v4 = v1;
                uu_cp::show_error_if_needed(&v4);
            }
        }
    }
    return struct8 {
        field_0: 9223372036854775820
    };
}
