fn uu_du::parse_time_style(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0x38]
    let v1: struct24;  // [sp-0x30]
    let v3: i64;  // rax

    if !a1 {
LABEL_4f3bc2:
        *((a0 + 8) as &&i64) = &g_41cdcf;
        *((a0 + 16) as &i64) = 14;
        goto LABEL_4f3bd5;
    } else {
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "full-iso") as i8 {
            *((a0 + 8) as &&i64) = &g_41cde0;
            *((a0 + 16) as &i64) = 23;
            goto LABEL_4f3bd5;
        }
        if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "long-iso") as i8) {
            goto LABEL_4f3bc2;
        }
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "iso") as i8 {
            v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
            v0 = 2;
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
            *((a0 + 16) as &&i64) = &g_583ff8;
            v3 = 1;
        } else {
            *((a0 + 8) as &&i64) = &g_40f6f8;
            *((a0 + 16) as &i64) = 8;
LABEL_4f3bd5:
            v3 = 0;
        }
    }
    return struct8 {
        field_0: v3
    };
}
