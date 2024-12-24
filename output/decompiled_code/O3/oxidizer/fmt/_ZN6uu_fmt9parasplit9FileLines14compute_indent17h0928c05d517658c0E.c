fn uu_fmt::parasplit::FileLines::compute_indent(a0: &u64, a1: &struct_0, a2: u64, a3: u64, a4: u64) -> u64 {
    let v0: u64;  // [sp-0x48]
    let v1: u64;  // [sp-0x40]
    let v2: void*;  // [sp-0x38]
    let v4: struct8;  // rax
    let v5: u32;  // edx
    let v6: void*;  // r12
    let v7: void*;  // rbx
    let v8: u64;  // rbp
    let v9: &struct_0;  // 4096
    let v10: &struct_0;  // r15
    let v11: u64;  // cc_ndep
    let v12: u64;  // r12
    let v14: u64;  // rcx
    let v15: u64;  // rax
    let v16: u64;  // rax
    let v17: u64;  // rdx
    let v18: u32;  // eax
    let v19: u64;  // rdx
    let v20: u64;  // rsi

    v0 = a2;
    v1 = a3 + a2;
    v2 = 0;
    v4 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a1, a2);
    if v5 == 0x110000 {
        v6 = 0;
        v4 = 0;
        v7 = 0;
    } else {
        v8 = v5;
        v7 = 0;
        v6 = 0;
        do {
            v10 = v9;
            v7 = v12;
            if amd64g_calculate_condition(2, 8, v4, a4, v11) as char {
LABEL_4b9df5:
                if (v4 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v20, v19), v8 = v5 as u64, v5 != 0x110000) {
                    goto LABEL_4b9dd0;
                }
                v14 = v10->field_40;
                if !v14 {
                    core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
                }
                if !(v6 | v14) >> 32 {
                    v18 = v6 as u32;
                    v17 = (0 CONCAT v18) /m v14 >> 32 & 4294967295;
                    v16 = (0 CONCAT v18) /m v14 & 4294967295 & 4294967295;
                } else {
                    v15 = v6;
                    v16 = (0 CONCAT v15) /m v14;
                    v17 = (0 CONCAT v15) /m v14 >> 64;
                }
                v11 = amd64g_calculate_rflags_c(19, 0, 0, v11);
                v6 = v14 * (v16 + 1);
            } else {
                if v8 == 32 {
                    goto LABEL_4b9dd0;
                }
                if v8 - 9 < 5 {
                    goto LABEL_4b9df5;
                }
                if !(v8 >= 128) || !(core::unicode::unicode_data::white_space::lookup(v8 & 4294967295) as i32) {
                    goto LABEL_4b9e67;
                }
LABEL_4b9dd0:
                v6 += uu_fmt::parasplit::char_width(v8 & 4294967295);
            }
        } while ((v4 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v20, v19), v8 = v5 as u64, v5 != 0x110000));
        v4 = 0;
LABEL_4b9e67:
    }
    *(a0 as &struct8) = v4;
    a0[1] = v7;
    a0[2] = v6;
    return v4;
}
