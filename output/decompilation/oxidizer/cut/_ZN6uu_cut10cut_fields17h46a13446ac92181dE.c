fn uu_cut::cut_fields(a0: i32, a1: i32, a2: i64, a3: i64) -> long long {
    let v0: u8;  // [bp-0x41]
    let v1: struct16;  // [bp-0x40]
    let v3: u8;  // r13b
    let v4: u8;  // bpl
    let v5: core::fmt::rt::Argument;  // rax
    let v6: u64;  // rdx
    let v7: u64;  // rax
    let v8: core::fmt::rt::Argument;  // rax

    v3 = *((a3 + 32) as &i8);
    if v3 == 2 {
        core::option::unwrap_failed(); /* do not return */
    }
    v4 = *((a3 + 40) as &i8);
    if *((a3 + 16) as &i64) {
        v1 = struct16 {
            field_0: uu_cut::matcher::ExactMatcher::new(*((a3 + 16) as &i64), *((a3 + 24) as &i64))
            field_8: v6
        };
        if !*(a3 as &i64) {
            return uu_cut::cut_fields_implicit_out_delim(a0, &v1, a1, a2, v3, v4);
        }
        v7 = uu_cut::cut_fields_explicit_out_delim(a0, &v1, a1, a2, v3, v4, *(a3 as &i64), *((a3 + 8) as &i64));
    } else {
        v5 = *(a3 as &i64);
        if v5 {
            v8 = v5;
        } else {
            v8 = &g_41dc19.ty;
        }
        v7 = uu_cut::cut_fields_explicit_out_delim(a0, &v0, a1, a2, v3, v4, v8, (v5 ? *((a3 + 8) as &i64) : 1));
    }
    return v7;
}
