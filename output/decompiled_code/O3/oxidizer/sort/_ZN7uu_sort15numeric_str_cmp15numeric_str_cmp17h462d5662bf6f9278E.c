fn uu_sort::numeric_str_cmp::numeric_str_cmp(a0: &struct24, a1: &struct24) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v2: u64;  // [sp-0x30]
    let v3: u64;  // [sp-0x28]
    let v7: u8;  // r15b
    let v8: u8;  // cl
    let v11: u64;  // rcx
    let v12: u64;  // rdx
    let v14: u32;  // ebp
    let v15: u64;  // rsi
    let v16: u64;  // rdx
    let v17: u32;  // eax

    v7 = a0->field_10->field_8;
    v8 = a1->field_10->field_8;
    if v7 != v8 {
        return -(v7 < v8) | -0x100 | -(v7 < v8) | 1;
    }
    v11 = a1->field_0;
    v12 = a1->field_8;
    v0 = a0->field_0;
    v1 = a0->field_8 + v0;
    v2 = v11;
    v3 = v12 + v11;
    do {
        v14 = core::iter::traits::iterator::Iterator::try_fold(&v0, a1, v12 + v11) as i32;
        v17 = core::iter::traits::iterator::Iterator::try_fold(&v2, v15, v16);
        if v14 == 0x110000 {
            if v17 != 48 {
                if !(v17 == 0x110000) {
                    goto LABEL_570ebb;
                }
            } else {
                if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v2, v15, v16) as i32) {
LABEL_570ebb:
                }
            }
        }
        if v17 == 0x110000 && v14 == 48 {
            <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0, v15, v16) as i32);
        }
    } while (v14 == v17);
}
