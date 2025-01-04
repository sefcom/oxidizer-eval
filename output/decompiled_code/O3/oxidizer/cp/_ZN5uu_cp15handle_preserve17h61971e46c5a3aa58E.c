fn uu_cp::handle_preserve(a0: &struct_0, a1: u8, a2: u8, a3: u64, a4: i64, a5: i64) -> u64 {
    let v0: u8;  // [bp-0x98]
    let v1: u8;  // [bp-0x90]
    let v2: u8;  // [bp-0x88]
    let v3: u8;  // [bp-0x80]
    let v5: u8;  // [bp-0x68]
    let v7: u128;  // [sp-0x58]
    let v8: u256;  // [bp-0x48]
    let v9: u128;  // [sp-0x28]
    let v11: u64;  // rax
    let v12: u128;  // xmm0
    let v13: u128;  // xmm1
    let v14: u64;  // rsi
    let v15: u64;  // rdx
    let v16: u64;  // rax

    if a1 {
        uu_cp::copy_attributes::{{closure}}(a3);
        v11 = *(&v0 as &i64);
        if !a2 {
            v11 = v11;
            if v11 != 13 {
                v9 = *(&v5 as &i128);
                v8 = *(&v2 as &i256);
                v7 = *(&v0 as &i128);
                uu_cp::show_error_if_needed(&v7, v14, v15);
                v11 = v16;
            }
        } else {
            v11 = v11;
            if v11 != 13 {
                v12 = *(&v1 as &i128);
                v13 = *(&v3 as &i128);
                return struct64 {
                    field_0: v11
                    field_8: v12
                    field_24: v13
                    field_40: *(&v4 as &i128)
                    field_56: *(&v6 as &i64)
                };
            }
        }
    }
    return struct8 {
        field_0: 13
    };
}
