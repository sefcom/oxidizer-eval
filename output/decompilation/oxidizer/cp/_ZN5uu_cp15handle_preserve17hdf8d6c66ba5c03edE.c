fn uu_cp::handle_preserve(a0: &Option<struct64>, a1: u8, a2: u8, a3: u32, a4: u32) -> u64 {
    let v0: Option<struct8>;  // [sp-0x98]
    let v1: i8;  // [bp-0x88]
    let v3: i8;  // [bp-0x78]
    let v5: i8;  // [bp-0x68]
    let v7: Option<struct8>;  // [sp-0x58]
    let v8: u128;  // [sp-0x48]
    let v9: u128;  // [sp-0x38]
    let v10: u128;  // [sp-0x28]
    let v12: u64;  // rax

    if a1 {
        v0 = uu_cp::copy_attributes::{{closure}}(a3, a4);
        v12 = v0 as i64;
        if !a2 {
            if v12 != 13 {
                v10 = *(&v5 as &i128);
                v9 = *(&v3 as &i128);
                v8 = *(&v1 as &i128);
                v7 = v0;
                uu_cp::show_error_if_needed(&v7);
            }
        } else {
            if v12 != 13 {
                return Some(struct64 {
                    field_0: v12
                    field_8: v13
                    field_24: v14
                    field_40: *(&v4 as &i128)
                    field_56: *(&v6 as &i64)
                });
            }
        }
    }
    return struct8 {
        field_0: 13
    };
}
