fn uu_cut::cut_fields(a0: u32, a1: u64, a2: u64, a3: &struct_0) -> u64 {
    let v0: u64;  // [sp-0x58]
    let v1: u64;  // [sp-0x50]
    let v2: u8;  // [bp-0x41]
    let v3: u64;  // [sp-0x40]
    let v4: u64;  // [sp-0x38]
    let v6: u8;  // r13b
    let v7: u32;  // ebp
    let v9: u64;  // rax
    let v10: u64;  // rdx
    let v12: u64;  // rax
    let v14: u64;  // rax

    v6 = a3->field_20;
    if v6 == 2 {
        core::option::unwrap_failed(); /* do not return */
    }
    v7 = a3->field_28;
    if !a3->field_10 {
        v9 = a3->field_0;
        v1 = (v9 ? 1 : a3->field_8);
        v0 = v12;
        v14 = uu_cut::cut_fields_explicit_out_delim(a0, &v2, a1, a2, -0x100 | v6, v7);
    } else {
        v3 = uu_cut::matcher::ExactMatcher::new(a3->field_10, a3->field_18);
        v4 = v10;
        if !v0 {
            v14 = uu_cut::cut_fields_implicit_out_delim(a0, &v3, a1, a2, -0x100 | v6, v7);
            return v14;
        }
        v1 = a3->field_8;
        v0 = a3->field_0;
        v14 = uu_cut::cut_fields_explicit_out_delim(a0, &v3, a1, a2, -0x100 | v6, v7);
    }
    return v14;
}
