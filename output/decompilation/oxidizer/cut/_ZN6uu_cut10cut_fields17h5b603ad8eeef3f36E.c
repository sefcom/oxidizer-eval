fn uu_cut::cut_fields(a0: u32, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: u64;  // [sp-0x58]
    let v1: u8;  // [bp-0x41]
    let v2: u64;  // [sp-0x40]
    let v3: u64;  // [sp-0x38]
    let v5: u8;  // r13b
    let v6: u32;  // ebp
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: u64;  // rdx
    let v11: u64;  // r10
    let v12: u64;  // rax

    v5 = a3->field_20;
    if v5 == 2 {
        core::option::unwrap_failed("src/uu/cut/src/cut.rs"); /* do not return */
    }
    v6 = a3->field_28;
    v7 = a3->field_10;
    if !v7 {
        v8 = a3->field_0;
        if !v8 {
            v11 = 1;
        } else {
            v11 = *(&a3->field_8 as &i64);
        }
        v12 = uu_cut::cut_fields_explicit_out_delim(a0, &v1, a1, a2, v5, v6, (v8 ? v8 : &g_41dc19), v11);
    } else {
        v2 = uu_cut::matcher::ExactMatcher::new(v7, a3->field_18);
        v3 = v9;
        if !v0 {
            v12 = uu_cut::cut_fields_implicit_out_delim(a0, &v2, a1, a2, v5, v6);
            return v12;
        }
        v0 = a3->field_0;
        v12 = uu_cut::cut_fields_explicit_out_delim(a0, &v2, a1, a2, v5, v6, v0, *(&a3->field_8 as &i64));
    }
    return v12;
}
