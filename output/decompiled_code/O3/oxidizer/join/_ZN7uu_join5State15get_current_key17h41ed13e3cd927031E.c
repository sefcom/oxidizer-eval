fn uu_join::State::get_current_key(a0: &struct_2) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: &struct_0;  // r8
    let v4: &u64;  // rcx
    let v5: &u64;  // rcx
    let v6: &u64;  // rdx
    let v7: u64;  // rax
    let v8: u64;  // rsi

    v0 = v2;
    if !a0->field_10 {
        core::panicking::panic_bounds_check(); /* do not return */
    }
    v3 = a0->field_8;
    v4 = a0->field_40;
    if v3->field_10 <= v4 {
        return 0;
    }
    v5 = v4 * 16;
    v6 = v3->field_8;
    v7 = *((v6 + v5) as &i64);
    v8 = *((v6 + v5 + 8) as &i64);
    if v8 < v7 {
        core::slice::index::slice_index_order_fail(); /* do not return */
    } else if v8 <= v3->field_28 {
        return v7 + v3->field_20;
    } else {
        core::slice::index::slice_end_index_len_fail(); /* do not return */
    }
}
