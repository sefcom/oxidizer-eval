fn uu_sort::numeric_str_cmp::numeric_str_cmp(a0: void*, a1: void*) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v2: u64;  // [sp-0x30]
    let v3: u64;  // [sp-0x28]
    let v5: &struct_0;  // rax
    let v6: &struct_1;  // r9
    let v7: u8;  // r15b
    let v8: u8;  // cl
    let v10: u64;  // rdi
    let v11: u64;  // rcx
    let v12: u64;  // rdx
    let v13: &struct_0;  // rax
    let v15: u8;  // al
    let v16: &struct_0;  // rax
    let v17: u32;  // ebp
    let v18: u64;  // rsi
    let v19: u64;  // rdx
    let v20: &struct_0;  // rax
    let v21: u8;  // al
    let v22: &struct_0;  // rax

    v5 = a0->field_10;
    v6 = a1->field_10;
    v7 = v5->field_8;
    v8 = v6->field_8;
    if v7 != v8 {
        v13 = -(v7 < v8) | -0x100 | -(v7 < v8) | 1;
        return v13;
    }
    v10 = a0->field_8;
    v11 = a1->field_0;
    v12 = a1->field_8;
    if !v12 || !v10 || !((a1 = v6->field_0, v5->field_0 != a1)) {
        v0 = a0->field_0;
        v1 = v10 + v0;
        v2 = v11;
        v3 = v12 + v11;
        do {
            v17 = core::iter::traits::iterator::Iterator::try_fold(&v0, a1, v12 + v11) as i32;
            v20 = core::iter::traits::iterator::Iterator::try_fold(&v2, v18, v19);
            if v17 == 0x110000 {
                switch (v20 as u32) {
                case 48:
                    v20 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v2, v18, v19) as i32);
                    if !(v20 & 255 & 255) {
                        goto LABEL_560888;
                    } else {
                        goto LABEL_560884;
                    }
                case 1114112:
LABEL_560884:
                    return 0;
                default:
LABEL_560888:
                    v13 = v20 | -0x100 | 255;
                    if !v7 {
                        return v13;
                    }
                    return v13;
                }
            }
            if v20 as u32 == 0x110000 {
                if v17 == 48 {
                    v20 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0, v18, v19) as i32);
                    if !(v20 & 255 & 255) {
                        goto LABEL_560863;
                    } else {
                        goto LABEL_560884;
                    }
                }
LABEL_560863:
                v13 = v20 | -0x100 | 1;
                if !v7 {
                    return v13;
                }
                return v13;
            }
        } while (v17 == v20 as u32);
        v16 = -(v17 < v20 as u32);
    } else {
        v15 = -(v5->field_0 < a1);
        v16 = v5 | -0x100 | v15;
    }
    v21 = v15 | 1;
    v13 = v16 | -0x100 | v21;
    if v7 {
        return v13;
    } else if v21 == 255 {
        v13 = v22 | -0x100 | 1;
        return v13;
    } else {
        v13 = v22 | -0x100 | 255;
        return v13;
    }
}
