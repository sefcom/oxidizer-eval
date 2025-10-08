fn uu_comm::OrderChecker::verify_order(a0: i64, a1: void*, a2: u32) -> long long {
    let v0: struct24;  // [bp-0x70], Other Possible Types: u192
    let v1: core::fmt::Arguments;  // [bp-0x60], Other Possible Types: u64
    let v2: i64;  // [bp-0x30]
    let v3: u64;  // [bp-0x28]
    let v5: struct24;  // [bp-0x70]

    if !*((a0 + 16) as &i64) {
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
    } else if <A as core::slice::cmp::SliceChain>::chaining_ge(a1, a2, *((a0 + 8) as &i64), *((a0 + 16) as &i64)) {
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
    } else {
        if *((a0 + 26) as &i8) != 1 {
            v2 = (*((a0 + 24) as &i8) ? &g_4190e5 : &g_4190e4);
            v3 = 1;
            eprintln!("comm: file {} is not in sorted order", &v2);
            *((a0 + 26) as &i8) = 1;
        }
        v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
        return struct24 {
            field_0: *(&v5.field_0 as &i128)
            field_16: v1
        };
    }
    return struct24 {
        field_0: v0 as i128
        field_16: v1
    };
}
