fn uu_expr::syntax_tree::is_truthy(a0: void*) -> u64 {
    let v0: struct8;  // [sp-0x38], Other Possible Types: struct32, u256
    let v1: u64;  // [sp-0x30]
    let v5: u64;  // rbx
    let v6: u64;  // rbx
    let v7: u8;  // al
    let v8: u64;  // rbx
    let v9: &u8;  // rax
    let v11: u32;  // eax

    if a0->field_0 != 0x8000000000000000 {
        v0 = num_bigint::bigint::convert::<impl core::convert::From<i64> for num_bigint::bigint::BigInt>::from();
        v7 = a0->field_18;
        v6 = v8 | -0x100 | 1;
        if v7 == *((&v0 as &char + 24) as &i8) {
            if v7 == 1 {
                v6 = 0;
            } else {
                v6 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(a0->field_8, a0->field_10, v1, *((&v0 as &char + 16) as &i64)) as i32 | -0x100 | alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(a0->field_8, a0->field_10, v1, *((&v0 as &char + 16) as &i64)) as i32 ^ 1;
            }
        }
    } else {
        v6 = v5 | -0x100 | 1;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0->field_10, *(&a0->field_18 as &i64), "-") as i8 {
            v0 = struct8 {
                field_0: v3
            };
            v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v9 {
                v6 = 0;
            } else {
                v11 = *(v9);
                if v11 == 48 || (v6 = v6 | -0x100 | 1, v11 == 45) {
                    v6 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0) as i32) | -0x100 | <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0) as i32) ^ 1;
                }
            }
        }
    }
    return v6 & 4294967295;
}
