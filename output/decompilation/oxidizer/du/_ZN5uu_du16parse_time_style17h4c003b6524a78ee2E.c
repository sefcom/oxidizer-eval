fn uu_du::parse_time_style(a0: &struct24, a1: i64, a2: i64) -> long long {
    let v0: u64;  // [bp-0x38]
    let v1: struct24;  // [bp-0x30]
    let v3: u64;  // rax
    let v4: u64;  // rax

    if a1 {
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "full-iso") as i8 {
            return struct24 {
                field_0: v3
                field_8: &g_41cf58
                field_16: 23
            };
        } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "long-iso") as i8 {
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "iso") as i8 {
                *((a0 + 8) as &&u8) = &g_40f860;
                *((a0 + 16) as &i64) = 8;
            }
            v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
            v0 = 2;
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
            *((a0 + 16) as &&u64) = &g_584558;
            v4 = 1;
        }
    }
    *((a0 + 8) as &&u8) = &g_41cf4a;
    *((a0 + 16) as &i64) = 14;
}
