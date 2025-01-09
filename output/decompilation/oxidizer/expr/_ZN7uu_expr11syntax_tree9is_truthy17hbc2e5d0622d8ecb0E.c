fn uu_expr::syntax_tree::is_truthy(a0: void*) -> u64 {
    let v0: struct32;  // [sp-0x38], Other Possible Types: u256, struct8
    let v1: u64;  // [sp-0x30]
    let v5: u64;  // rbx
    let v6: u64;  // rbx
    let v7: u8;  // al
    let v8: &u8;  // rax
    let v9: u32;  // eax
    let v10: u32;  // eax

    if a0->field_0 == 0x8000000000000000 {
        v6 = v5 & -0x100 | 1;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0->field_10, *(&a0->field_18 as &i64), "-") as i8 {
            v0 = struct8 {
                field_0: v3
            };
            v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v8 {
                v6 = 0;
            } else {
                v10 = *(v8);
                if v10 == 48 || (v6 = v6 & -0x100 | 1, v10 == 45) {
                    v6 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0)) & 0xffffffffffffff00 | <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0)) ^ 1;
                }
            }
        }
    } else {
        v0 = num_bigint::bigint::convert::<impl core::convert::From<i64> for num_bigint::bigint::BigInt>::from();
        v7 = a0->field_18;
        if v7 == *((&v0 as &char + 24) as &i8) && v7 != 1 {
            v9 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(a0->field_8, a0->field_10, v1, *((&v0 as &char + 16) as &i64)) as i32;
        }
    }
    return v6 & 4294967295;
}
