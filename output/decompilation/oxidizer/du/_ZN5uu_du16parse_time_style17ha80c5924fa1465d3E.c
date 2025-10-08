fn uu_du::parse_time_style(a1: i64, a2: i64) -> Result<struct16, struct16> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x38]
    let v1: struct24;  // [bp-0x30]
    let v3: u64;  // rax
    let v4: u64;  // rax

    if !a1 {
        return struct24 {
            field_0: v4
            field_8: &g_421684
            field_16: 14
        };
    }
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "full-iso") {
        *((a0 + 8) as &&u8) = &g_421692;
        *((a0 + 16) as &i64) = 23;
    } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "long-iso") {
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "iso") {
            *((a0 + 8) as &&u8) = &g_41ead8;
            *((a0 + 16) as &i64) = 8;
        }
        v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
        v0 = 2;
        *((a0 + 8) as &u64) = alloc::boxed::Box<T>::new(&v0) as u64;
        *((a0 + 16) as &&u64) = &g_545d90;
        v3 = 1;
    }
    return struct24 {
        field_0: v4
        field_8: &g_421684
        field_16: 14
    };
}
