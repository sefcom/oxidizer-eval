fn uu_du::parse_depth(a0: i64, a1: i64, a2: i64, a3: i8) -> u64 {
    let v0: i64;  // [sp-0x40], Other Possible Types: Result<struct8, struct1>
    let v1: struct24;  // [sp-0x38], Other Possible Types: i192
    let v3: i64;  // rcx
    let v4: i64;  // rax
    let v5: i64;  // rax

    if !a1 {
        v3 = 0;
        goto LABEL_4f3ce8;
    }
    v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(a1, a2);
    match v0 {
        Ok(_) => {
            if !(!a3) {
                goto LABEL_4f3ca5;
            }
            v4 = v1;
            v3 = 1;
LABEL_4f3ce8:
            *((a0 + 8) as &i64) = v3;
            *((a0 + 16) as &i64) = v4;
            v5 = 0;
        },
        Err(_) => {
            if !a3 {
                v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
                v0 = 0;
            } else {
LABEL_4f3ca5:
                v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
                v0 = 1;
            }
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
            *((a0 + 16) as &&i64) = &g_583ff8;
            v5 = 1;
        },
    }
    return struct8 {
        field_0: v5
    };
}
