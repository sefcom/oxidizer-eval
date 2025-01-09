fn uu_sort::numeric_str_cmp::numeric_str_cmp(a0: &struct24, a1: &struct24) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v2: u64;  // [sp-0x30]
    let v3: u64;  // [sp-0x28]
    let v7: u8;  // r15b
    let v8: u8;  // cl
    let v14: u32;  // ebp
    let v15: u32;  // eax

    v7 = a0->field_10->field_8;
    v8 = a1->field_10->field_8;
    if v7 != v8 {
        return -(v7 < v8) & 0xffffffffffffff00 | -(v7 < v8) | 1;
    }
    v0 = a0->field_0;
    v1 = a0->field_8 + v0;
    v2 = a1->field_0;
    v3 = a1->field_8 + v2;
    do {
        v14 = core::iter::traits::iterator::Iterator::try_fold(&v0) as i32;
        v15 = core::iter::traits::iterator::Iterator::try_fold(&v2);
        if v14 == 0x110000 {
            if v15 != 48 {
                if !(v15 == 0x110000) {
                    goto LABEL_570ebb;
                }
            } else {
                if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v2)) {
LABEL_570ebb:
                }
            }
        }
        if v15 == 0x110000 && v14 == 48 {
            <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0));
        }
    } while (v14 == v15);
}
