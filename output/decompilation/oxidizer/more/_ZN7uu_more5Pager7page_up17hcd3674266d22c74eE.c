fn uu_more::Pager::page_up(a0: &struct8) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v2: u64;  // [sp-0x30]
    let v3: u64;  // [sp-0x28]
    let v4: u64;  // [sp-0x20]
    let v5: u64;  // [sp-0x18]
    let v6: u64;  // [sp-0x10]
    let v7: u64;  // [sp-0x8]
    let v9: u64;  // rcx
    let v10: struct8;  // rax
    let v12: u64;  // cc_ndep
    let v13: u64;  // rdx
    let v14: u64;  // rcx
    let v15: u64;  // r15
    let v16: u64;  // r14
    let v17: u64;  // r13
    let v18: u64;  // r12
    let v19: u64;  // rbx
    let v20: void*;  // r13
    let v21: u64;  // rdx
    let v22: void*;  // rdx

    v9 = a0->field_40;
    v10 = a0->field_18;
    if amd64g_calculate_condition(3, 4, v9, a0->field_38, v12) as char {
        v13 = v9 + a0->field_38;
    } else {
        v13 = -1;
    }
    v14 = (v13 <= v10 ? 0 : v10 - v13);
    a0->field_18 = v14;
    if !a0->field_43 {
        return v10;
    }
    v7 = v15;
    v6 = v16;
    v5 = v17;
    v4 = v18;
    v3 = v19;
    v0 = a0->field_8;
    v1 = v0 + a0->field_10 * 24;
    if v10 > v13 {
        v20 = v14;
        loop {
            v2 = v14 - 1;
            v21 = (v1 - v0) / 24;
            v22 = v21 - v14;
            if v21 < v14 {
                v22 = 0;
            }
            v10 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::nth_back(v22);
            if !(v10) || !(!*((v10 + 16) as &i64)) {
                break;
            }
            v20 -= 1;
            v10 = 0;
            if v20 < 1 {
                v20 = 0;
            }
            a0->field_18 = v20;
            v14 = v2;
            if !v14 {
                break;
            }
        }
    }
    return v10;
}
