fn uu_fmt::parasplit::FileLines::compute_indent(a0: &struct24, a1: void*, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: u64;  // [sp-0x48]
    let v1: u64;  // [sp-0x40]
    let v2: void*;  // [sp-0x38]
    let v4: struct8;  // rax
    let v5: u32;  // edx
    let v6: void*;  // r12
    let v8: u64;  // rbp
    let v9: &struct_0;  // 4096
    let v10: &struct_0;  // r15
    let v11: u64;  // cc_ndep
    let v14: u64;  // rcx
    let v15: u64;  // r12

    v0 = a2;
    v1 = a3 + a2;
    v2 = 0;
    v4 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next();
    if v5 == 0x110000 {
        return struct24 {
            field_0: v4
            field_8: v7
            field_16: v6
        };
    }
    v8 = v5;
    v6 = 0;
    do {
        v10 = v9;
        if amd64g_calculate_condition(2, 8, v4, a4, v11) as char {
LABEL_4b9915:
            if !(v8 == 9) {
                goto LABEL_4b98f0;
            }
            v14 = v10->field_40;
            v15 = (!(v6 | v14) >> 32 ? ((0 CONCAT v6 as u32) % (v14 & 4294967295) CONCAT (0 CONCAT v6 as u32) / (v14 & 4294967295)) & 4294967295 & 4294967295 : (0 CONCAT v6) % v14 CONCAT (0 CONCAT v6) / v14);
            v11 = amd64g_calculate_rflags_c(19, 0, 0, v11);
            v6 = v14 * (v15 + 1);
            goto LABEL_4b98fa;
        }
        if v8 != 32 {
            if v8 - 9 < 5 {
                goto LABEL_4b9915;
            }
            if !(v8 >= 128) || !(core::unicode::unicode_data::white_space::lookup(v8 & 4294967295) as i32) {
                goto LABEL_4b9985;
            }
        }
LABEL_4b98f0:
        v6 += uu_fmt::parasplit::char_width(v8 & 4294967295);
LABEL_4b98fa:
        v4 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next();
        v8 = v5;
    } while (v5 != 0x110000);
LABEL_4b9985:
}
