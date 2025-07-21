fn uu_cp::handle_preserve(a1: i8, a2: i8, a3: i64, a4: i64) -> Option<struct64> {
    let a0: i64;  // rdi
    let v0: Option<struct8>;  // [bp-0x98]
    let v1: struct64;  // [bp-0x98]
    let v2: i8;  // [bp-0x80]
    let v3: i8;  // [bp-0x70]
    let v4: u64;  // [bp-0x60]
    let v5: struct64;  // [bp-0x58]
    let v7: u128;  // xmm0
    let v8: u128;  // xmm1

    if a1 {
        v0 = uu_cp::copy_attributes::{{closure}}(a3, a4);
        if a2 {
            if let Some(_) = v0 {
                v7 = v0;
                v8 = *(&v2 as &i128);
                return Some(struct64 {
                    field_0: v0 as i64
                    field_8: v7
                    field_24: v8
                    field_40: *(&v3 as &i128)
                    field_56: v4
                });
            }
        } else {
            if let Some(_) = v0 {
                v5 = v1;
                uu_cp::show_error_if_needed(&v5);
            }
        }
    }
    return struct8 {
        field_0: 13
    };
}
