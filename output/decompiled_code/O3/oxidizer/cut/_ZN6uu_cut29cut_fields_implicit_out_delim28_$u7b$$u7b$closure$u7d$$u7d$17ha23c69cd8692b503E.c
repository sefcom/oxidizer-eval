fn uu_cut::cut_fields_implicit_out_delim::{{closure}}(a0: &struct_0, a1: &struct_6, a2: &u8, a3: u64) -> u64 {
    let v0: u8;  // [bp-0x98]
    let v1: i8;  // [bp-0x90]
    let v2: i8;  // [bp-0x88]
    let v3: &struct_3;  // [sp-0x78]
    let v4: u64;  // [sp-0x70]
    let v8: u64;  // [sp-0x48]
    let v9: u64;  // [sp-0x40]
    let v12: &u8;  // rdx
    let v13: u64;  // rcx
    let v14: u64;  // r14
    let v17: &struct_4;  // rax
    let v18: u64;  // rcx
    let v19: &struct_0;  // rax
    let v22: u64;  // r15
    let v23: void*;  // rbx
    let v24: void*;  // rsi
    let v25: &struct_3;  // rbx

    v12 = a2;
    v13 = a3;
    v14 = a3;
    <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v0, a1->field_0, a2, a3);
    if *(&v0 as &i64) {
        v3 = a1->field_10;
        v17 = a1->field_20;
        v18 = v17->field_8;
        if !v18 {
            goto LABEL_0x48e4c2;
        }
        v4 = v1;
        v9 = &v17->field_0[v18];
        v22 = -1;
        v23 = 0;
        v8 = v2;
        v24 = 0;
    }
    v19 = a1->field_8;
    if v19->field_0 {
LABEL_48e3e8:
        *(&a0->field_0 as &i16) = 0x100;
        return v19;
    }
    v25 = a1->field_10;
    v19 = v25->field_8->field_38();
    if v19 {
LABEL_48e40c:
        a0->field_8 = v19;
        a0->field_0 = 1;
        return v19;
    }
    if v14 < 1 {
        core::panicking::panic_bounds_check(); /* do not return */
    }
    v19 = a1->field_18->field_0;
    if !(a2[1 + v14] != v0) || !((v0 = v19 as u8, v19 = v25->field_8->field_38() as u64, v19)) {
        goto LABEL_48e3e8;
    }
    goto LABEL_48e40c;
}
