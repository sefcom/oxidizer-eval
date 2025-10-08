fn uu_sort::numeric_str_cmp::numeric_str_cmp(a0: &struct24, a1: &struct24) -> u8 {
    let v0: u64;  // [bp-0x40]
    let v1: u64;  // [bp-0x38]
    let v2: u64;  // [bp-0x30]
    let v3: u64;  // [bp-0x28]
    let v5: struct96;  // r15
    let v6: u64;  // rdx
    let v7: u32;  // ebp
    let v8: u32;  // eax
    let v11: u8;  // al

    v5 = *((*((a0 + 16) as &i64) + 8) as &i8);
    v6 = *((*((a1 + 16) as &i64) + 8) as &i8);
    if v5 as u8 != v6 {
        return (v6 < v5) - (v5 < v6);
    }
    if !*((a1 + 8) as &i64) || !*((a0 + 8) as &i64) || *(*((a0 + 16) as &i64) as &i64) == *(*((a1 + 16) as &i64) as &i64) {
        v0 = *(a0 as &i64);
        v1 = *((a0 + 8) as &i64) + *(a0 as &i64);
        v2 = *(a1 as &i64);
        v3 = *((a1 + 8) as &i64) + *(a1 as &i64);
        loop {
            v7 = core::iter::traits::iterator::Iterator::try_fold(&v0);
            v8 = core::iter::traits::iterator::Iterator::try_fold(&v2);
            if v7 == 0x110000 {
                break;
            }
            if v8 != 0x110000 {
                if v7 != v8 {
                    break;
                }
            } else {
                if v7 == 48 {
                    <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0), a1);
                }
            }
        }
    }
    return v11;
}
