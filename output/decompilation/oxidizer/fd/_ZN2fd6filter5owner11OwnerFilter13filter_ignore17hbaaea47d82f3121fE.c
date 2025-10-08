fn fd::filter::owner::OwnerFilter::filter_ignore(a0: i64, a1: i64, a2: i64, a3: i64) -> double {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax

    v0 = v2;
    if <fd::filter::owner::Check<T> as core::cmp::PartialEq>::eq(*(a1 as &i32), a1[4] as i32, 2, a3) && <fd::filter::owner::Check<T> as core::cmp::PartialEq>::eq(a1[8] as i32, a1[12] as i32, 2, a3) {
        return struct4 {
            field_0: 3
        };
    }
    return struct16 {
        field_0: *(a1 as &i128)
    };
}
