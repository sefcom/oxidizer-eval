fn uu_cp::handle_preserve(a1: i8, a2: i8, a3: i64) -> Option<struct64> {
    let a0: i64;  // rdi
    let v0: struct40;  // [bp-0x98]
    let v1: struct64;  // [bp-0x98]
    let v2: i8;  // [bp-0x70]
    let v3: u64;  // [bp-0x60]
    let v4: struct64;  // [bp-0x58]
    let v6: u128;  // xmm0
    let v7: u128;  // xmm1

    if a1 {
        v0 = uu_cp::copy_attributes::{{closure}}(a3);
        if a2 {
            if v0.field_0 != 13 {
                v6 = v0.field_8;
                v7 = *(&v0.field_24 as &i128);
                return Some(struct64 {
                    field_0: v0.field_0
                    field_8: v6
                    field_24: v7
                    field_40: *(&v2 as &i128)
                    field_56: v3
                });
            }
        } else {
            if v0.field_0 != 13 {
                v4 = v1;
                uu_cp::show_error_if_needed(&v4);
            }
        }
    }
    return struct8 {
        field_0: 13
    };
}
