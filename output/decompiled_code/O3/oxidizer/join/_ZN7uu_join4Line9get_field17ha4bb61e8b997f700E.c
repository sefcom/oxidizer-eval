fn uu_join::Line::get_field(a0: void*, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: &u64;  // rsi
    let v4: &u64;  // rcx
    let v5: u64;  // rax
    let v6: u64;  // rsi

    v0 = v2;
    if a0->field_10 <= a1 {
        return 0;
    }
    v3 = a1 * 16;
    v4 = a0->field_8;
    v5 = *((v4 + v3) as &i64);
    v6 = *((v4 + v3 + 8) as &i64);
    if v6 < v5 {
        core::slice::index::slice_index_order_fail(); /* do not return */
    } else if v6 > a0->field_28 {
        core::slice::index::slice_end_index_len_fail(); /* do not return */
    } else {
        return v5 + a0->field_20;
    }
}
