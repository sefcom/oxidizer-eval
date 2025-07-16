fn uu_cut::cut_fields(a0: i32, a1: i32, a2: i64, a3: i64) -> long long {
    let v0: u8;  // [bp-0x41]
    let v1: u64;  // [bp-0x40]
    let v2: u64;  // [bp-0x38]
    let v4: u8;  // r13b
    let v5: u8;  // bpl
    let v6: u64;  // rax
    let v7: u64;  // rdx
    let v8: struct24;  // rax
    let v9: u64;  // rax

    v4 = *((a3 + 32) as &i8);
    if v4 == 2 {
        core::option::unwrap_failed(); /* do not return */
    }
    v5 = *((a3 + 40) as &i8);
    if *((a3 + 16) as &i64) {
        v1 = uu_cut::matcher::ExactMatcher::new(*((a3 + 16) as &i64), *((a3 + 24) as &i64));
        v2 = v7;
        if !*(a3 as &i64) {
            return uu_cut::cut_fields_implicit_out_delim(a0, &v1, a1, a2, v4, v5);
        }
        v8 = uu_cut::cut_fields_explicit_out_delim(a0, &v1, a1, a2, v4, v5, *(a3 as &i64), *((a3 + 8) as &i64));
    } else {
        v6 = *(a3 as &i64);
        if v6 {
            v9 = v6;
        } else {
            v9 = &g_41dc19;
        }
        v8 = uu_cut::cut_fields_explicit_out_delim(a0, &v0, a1, a2, v4, v5, v9, (v6 ? *((a3 + 8) as &i64) : 1));
    }
    return v8;
}
