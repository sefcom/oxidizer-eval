fn uu_cp::handle_preserve(a0: &struct_0, a1: u8, a2: u8, a3: u64, a4: u64, a5: i64) -> u64 {
    let v0: u8;  // [bp-0x98]
    let v1: u8;  // [bp-0x90]
    let v2: u8;  // [bp-0x88]
    let v3: u8;  // [bp-0x80]
    let v4: u8;  // [bp-0x78]
    let v6: u8;  // [bp-0x68]
    let v8: u128;  // [sp-0x58]
    let v9: u128;  // [sp-0x48]
    let v10: u128;  // [sp-0x38]
    let v11: u128;  // [sp-0x28]
    let v13: u64;  // rax
    let v14: u128;  // xmm0
    let v15: u128;  // xmm1
    let v16: u64;  // rsi
    let v17: u64;  // rdx

    if a1 {
        uu_cp::copy_attributes::{{closure}}(a3, a4);
        v13 = *(&v0 as &i64);
        if !a2 {
            if v13 != 13 {
                v11 = *(&v6 as &i128);
                v10 = *(&v4 as &i128);
                v9 = *(&v2 as &i128);
                v8 = *(&v0 as &i128);
                uu_cp::show_error_if_needed(&v8, v16, v17);
            }
        } else {
            if v13 != 13 {
                v14 = *(&v1 as &i128);
                v15 = *(&v3 as &i128);
                return struct64 {
                    field_0: v13
                    field_8: v14
                    field_24: v15
                    field_40: *(&v5 as &i128)
                    field_56: *(&v7 as &i64)
                };
            }
        }
    }
    return struct8 {
        field_0: 13
    };
}
