fn uu_du::parse_time_style(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x38]
    let v1: struct24;  // [sp-0x30]

    if !a1 {
LABEL_4f3f92:
        *((a0 + 8) as &&i64) = &g_41cf4a;
        *((a0 + 16) as &i64) = 14;
        goto LABEL_4f3fa5;
    } else {
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "full-iso") as i8 {
            *((a0 + 8) as &&i64) = &g_41cf58;
            *((a0 + 16) as &i64) = 23;
            goto LABEL_4f3fa5;
        }
        if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "long-iso") as i8) {
            goto LABEL_4f3f92;
        }
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "iso") as i8 {
            v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
            v0 = 2;
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
            *((a0 + 16) as &&i64) = &g_584558;
        } else {
            *((a0 + 8) as &&i64) = &g_40f860;
            *((a0 + 16) as &i64) = 8;
LABEL_4f3fa5:
        }
    }
    return struct8 {
        field_0: v3
    };
}
