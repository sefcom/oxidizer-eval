fn uu_cp::handle_preserve(a0: &Option<struct64>, a1: u8, a2: u8, a3: u32) -> u64 {
    let v0: Option<struct32>;  // [sp-0x98]
    let v2: i8;  // [bp-0x68]
    let v4: iNone;  // [sp-0x58]
    let v5: iNone;  // [sp-0x48]
    let v6: iNone;  // [sp-0x28]
    let v8: i64;  // rax

    if a1 {
        v0 = uu_cp::copy_attributes::{{closure}}(a3);
        v8 = v0 as i64;
        if !a2 {
            if v8 != 13 {
                v6 = *(&v2 as &i128);
                v5 = v0 as i256;
                v4 = v0 as i128;
                uu_cp::show_error_if_needed(&v4);
            }
        } else {
            if v8 != 13 {
                return Some(struct64 {
                    field_0: v8
                    field_8: v9
                    field_24: v10
                    field_40: *(&v1 as &i128)
                    field_56: *(&v3 as &i64)
                });
            }
        }
    }
    return struct8 {
        field_0: 13
    };
}
