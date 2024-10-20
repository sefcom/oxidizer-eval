fn uu_paste::DelimiterState::write_delimiter(a0: void*, a1: &u64) -> u64 {
    let v1: u64;  // rax
    let v3: u64;  // rbx
    let v4: u64;  // r15
    let v5: &u64;  // 4096
    let v6: &u64;  // rax
    let v7: &u64;  // r12
    let v8: u64;  // rcx
    let v9: u64;  // rbx
    let v10: u64;  // r14
    let v11: u64;  // r15
    let v12: &u64;  // 4096
    let v13: &u64;  // r13

    v1 = a0->field_0;
    if !v1 {
        return v1;
    } else if v1 == 1 {
        v3 = a0->field_10;
        v4 = a1[2];
        if *(a1) - v4 < v3 {
            v7 = a1;
            alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a1, v4, v3);
            v4 = v7[2];
        }
        v1 = memcpy(v5[1] + v4, a0->field_8, v3);
        v5[2] = v4 + v3;
        return v1;
    } else {
        v6 = a0->field_38;
        if v6 == a0->field_40 {
            v6 = a0->field_28;
            v8 = a0->field_30;
            a0->field_38 = &v6;
            a0->field_40 = v8;
            if v6 == v8 {
                core::option::unwrap_failed(); /* do not return */
            }
        }
        a0->field_38 = &v6[2];
        v9 = *(v6);
        v10 = v6[1];
        v11 = a1[2];
        if *(a1) - v11 < v10 {
            v13 = a1;
            alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a1, v11, v10);
            v11 = v13[2];
        }
        v1 = memcpy(v12[1] + v11, v9, v10);
        v12[2] = v11 + v10;
        a0->field_8 = v9;
        a0->field_10 = v10;
        return v1;
    }
}
