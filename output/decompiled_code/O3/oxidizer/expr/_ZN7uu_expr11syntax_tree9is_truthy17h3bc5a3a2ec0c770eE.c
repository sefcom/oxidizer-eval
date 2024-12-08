fn uu_expr::syntax_tree::is_truthy(a0: void*) -> u64 {
    let v0: u256;  // [sp-0x38], Other Possible Types: struct32, struct8
    let v4: u64;  // rbx
    let v5: void*;  // rbx
    let v6: u8;  // al
    let v7: u64;  // rbx
    let v8: &u8;  // rax
    let v10: u32;  // eax

    if a0->field_0 != 0x8000000000000000 {
        v0 = num_bigint::bigint::convert::<impl core::convert::From<i64> for num_bigint::bigint::BigInt>::from();
        v6 = a0->field_18;
        v5 = v7 | -0x100 | 1;
        if v6 == *((&v0 as &char + 24) as &i8) {
            if v6 == 1 {
                v5 = 0;
            } else {
                v5 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(a0->field_8, a0->field_10, v0.8, *((&v0 as &char + 16) as &i64)) as i32 | -0x100 | alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(a0->field_8, a0->field_10, v0.8, *((&v0 as &char + 16) as &i64)) as i32 ^ 1;
            }
        }
    } else {
        v5 = v4 | -0x100 | 1;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0->field_10, *(&a0->field_18 as &i64), "-") as i8 {
            v0 = struct8 {
                field_0: v2
            };
            v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v8 {
                v5 = 0;
            } else {
                v10 = *(v8);
                if v10 == 48 || (v5 = v5 | -0x100 | 1, v10 == 45) {
                    v5 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0) as i32) | -0x100 | <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0) as i32) ^ 1;
                }
            }
        }
    }
    return v5 & 4294967295;
}
