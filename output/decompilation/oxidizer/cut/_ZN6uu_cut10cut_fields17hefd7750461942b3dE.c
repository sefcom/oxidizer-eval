fn uu_cut::cut_fields(a0: u32, a1: i64, a2: u64, a3: u64, a4: i64) -> long long {
    let v0: u8;  // [bp-0x49]
    let v1: u64;  // [bp-0x48]
    let v2: struct16;  // [bp-0x40]
    let v4: u8;  // bl
    let v5: u64;  // r8
    let v6: u64;  // rbp
    let v7: i64;  // rax
    let v8: struct48;  // rcx
    let v9: u64;  // r10
    let v10: i64;  // rax
    let v11: u64;  // rdx
    let v12: u64;  // rax
    let v13: struct48;  // rax

    v4 = *((a4 + 32) as &i8);
    core::option::unwrap(v4);
    v5 = a3;
    v6 = *((a4 + 40) as &i8);
    v7 = *((a4 + 16) as &i64);
    if v7 {
        if *((a4 + 24) as &i64) == 1 && *(v7 as &i8) == v6 {
            v8 = *(a4 as &i64);
            v9 = 1;
            v10 = v7;
            if !*(a4 as &i64) {
                return uu_cut::cut_fields_newline_char_delim(a0, *(a1 as &i64), *((a1 + 8) as &i64), a2, a3, v6, v10, v9);
            }
            v9 = *((a4 + 8) as &i64);
            v10 = v8;
            return uu_cut::cut_fields_newline_char_delim(a0, *(a1 as &i64), *((a1 + 8) as &i64), a2, a3, v6, v10, v9);
        }
        v1 = a3;
        v2 = struct16 {
            field_0: uu_cut::matcher::ExactMatcher::new(v7, *((a4 + 24) as &i64))
            field_8: v11
        };
        if *(a4 as &i64) {
            v12 = uu_cut::cut_fields_explicit_out_delim(a0, a1, &v2, a2, v1, v4, v6 & 255, *(a4 as &i64));
        } else {
            v12 = uu_cut::cut_fields_implicit_out_delim(a0, a1, &v2, a2, v1, v4, v6 & 255);
        }
    } else {
        v12 = uu_cut::cut_fields_explicit_out_delim(a0, a1, &v0, a2, a3, v4, v6 & 255, v13 as u32);
    }
    return v12;
}
