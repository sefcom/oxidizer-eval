fn uu_du::parse_depth(a0: &struct24, a1: u32, a2: u32, a3: u8) -> u64 {
    let v0: Result<struct8, struct1>;  // [sp-0x40]
    let v1: i64;  // [sp-0x40]
    let v2: struct24;  // [sp-0x38]
    let v4: i64;  // rcx
    let v5: i64;  // rax

    if !a1 {
        v4 = 0;
        goto LABEL_4f40b8;
    }
    v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(a1, a2);
    match v0 {
        Ok(_) => {
            if !(!a3) {
                goto LABEL_4f4075;
            }
            v5 = v2.field_0;
            v4 = 1;
LABEL_4f40b8:
            *((a0 + 8) as &unsigned long) = v4;
            *((a0 + 16) as &unsigned long) = v5;
        },
        Err(_) => {
            if !a3 {
                v2 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
                v1 = 0;
            } else {
LABEL_4f4075:
                v2 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
                v1 = 1;
            }
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
            *((a0 + 16) as &&i64) = &g_584558;
        },
    }
    return struct8 {
        field_0: v6
    };
}
