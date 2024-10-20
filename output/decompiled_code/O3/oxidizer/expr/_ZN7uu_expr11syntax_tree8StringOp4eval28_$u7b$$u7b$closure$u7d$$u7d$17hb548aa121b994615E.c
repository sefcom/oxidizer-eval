fn uu_expr::syntax_tree::StringOp::eval::{{closure}}(a0: &struct_1) -> u64 {
    let v1: &u8;  // rdx
    let v2: &u8;  // r14
    let v3: &u8;  // r15
    let v4: u64;  // rsi

    if a0->field_14 < 2 {
        core::option::unwrap_failed(); /* do not return */
    }
    v1 = a0->field_18->field_4;
    if v1 != -1 {
        v2 = a0->field_20->field_4;
        v3 = a0->field_0;
        v4 = a0->field_8;
        if v1 as u32 > v2 as u32 {
            core::str::slice_error_fail(); /* do not return */
        }
        if v1 as u32 {
            if v4 <= v1 {
                if v4 != v1 {
                    core::str::slice_error_fail(); /* do not return */
                }
            } else {
                if *((v3 + v1) as &i8) <= 191 {
                    core::str::slice_error_fail(); /* do not return */
                }
            }
        }
        if !v2 as u32 {
            onig_region_free(&a0->padding_10 as &struct_1, 0);
            return v3 + v1;
        }
        if v4 <= v2 {
            if v4 != v2 {
                core::str::slice_error_fail(); /* do not return */
            }
        } else {
            if *((v3 + v2) as &i8) <= 191 {
                core::str::slice_error_fail(); /* do not return */
            }
        }
    }
}
