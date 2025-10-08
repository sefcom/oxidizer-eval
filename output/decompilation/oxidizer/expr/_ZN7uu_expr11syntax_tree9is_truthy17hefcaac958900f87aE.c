fn uu_expr::syntax_tree::is_truthy(a0: &struct32) -> u64 {
    let v0: struct32;  // [bp-0x38], Other Possible Types: u64
    let v1: u64;  // [bp-0x30]
    let v2: u64;  // [bp-0x28]
    let v4: i64;  // r14
    let v5: u64;  // r15
    let v7: u64;  // rbx
    let v8: u32;  // eax
    let v9: u64;  // rsi

    if (((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char {
        v4 = a0[16] as i64;
        v5 = a0[24] as i64;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "-") {
            v1 = v4 + v5;
            if v5 {
                v0 = v4 + 1;
                v8 = *(v4 as &i8);
                if v8 != 45 && v8 != 48 {
                    return v7 & 4294967295;
                }
                <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0), v9);
            }
        }
    } else {
        v0 = num_bigint::bigint::convert::<impl core::convert::From<i64> for num_bigint::bigint::BigInt>::from();
        if a0[24] as i8 == *((&v0.field_16 as &char + 8) as &i8) && a0[24] as i8 != 1 {
            alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(a0[8] as i64, a0[16] as i64, v1, v2);
        }
    }
    return v7 & 4294967295;
}
