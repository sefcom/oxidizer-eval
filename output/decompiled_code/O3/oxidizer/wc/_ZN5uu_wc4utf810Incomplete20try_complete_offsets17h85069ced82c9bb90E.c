fn uu_wc::utf8::Incomplete::try_complete_offsets(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: Enum;  // [sp-0x38], Other Possible Types: u128
    let v1: u8;  // [bp-0x28]
    let v2: u8;  // [bp-0x27]
    let v4: u64;  // r12
    let v6: u64;  // 4096
    let v7: u64;  // r15
    let v9: u64;  // r14
    let v10: u64;  // r14
    let v11: u64;  // r14

    v4 = a0->field_4;
    if v4 > 4 {
        core::slice::index::slice_start_index_len_fail(); /* do not return */
    }
    memcpy(&a0->padding_0[v4] as &struct_0, a1, v6);
    v7 = v6 + v4;
    v0 = core::str::converts::from_utf8(a0, v7);
    if !v0 as i64 {
        a0->field_4 = v7;
        return v11;
    }
    if v9 {
        v10 = *((&v0 as &char + 8) as &i64);
        v11 = v10 - v4;
        if v10 < v4 {
            core::option::unwrap_failed(); /* do not return */
        }
        v7 = v10 & 4294967295;
    } else if v1 {
        v7 = v2;
        if (v7 & 255) < (v4 & 255) {
            core::option::unwrap_failed(); /* do not return */
        }
        v11 = (v7 & 4294967295) - v4;
    }
}
