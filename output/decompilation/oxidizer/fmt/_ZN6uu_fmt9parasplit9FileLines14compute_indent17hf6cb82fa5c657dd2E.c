fn uu_fmt::parasplit::FileLines::compute_indent(a0: &struct24, a1: void*, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: u64;  // [sp-0x58]
    let v1: struct24;  // [bp-0x48]
    let v4: void*;  // rax
    let v5: u32;  // edx
    let v6: void*;  // r12
    let v8: u64;  // rbp
    let v9: &struct_0;  // r15
    let v10: u64;  // cc_ndep
    let v11: u64;  // rcx
    let v12: u64;  // r12

    v1 = struct24 {
        field_0: a2
        field_8: a3 + a2
        field_16: 0
    };
    v4 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v1);
    if v5 == 0x110000 {
        return struct24 {
            field_0: v4
            field_8: v7
            field_16: v6
        };
    }
    v8 = v5;
    v0 = a0;
    v6 = 0;
    v9 = a1;
    do {
        if amd64g_calculate_condition(2, 8, v4, a4, v10) as char {
LABEL_4b9915:
            if !(v8 == 9) {
                goto LABEL_4b98f0;
            }
            v11 = v9->field_40;
            v12 = (!(v6 | v11) >> 32 ? ((0 CONCAT v6 as u32) % (v11 & 4294967295) CONCAT (0 CONCAT v6 as u32) / (v11 & 4294967295)) & 4294967295 & 4294967295 : (0 CONCAT v6) % v11 CONCAT (0 CONCAT v6) / v11);
            v10 = amd64g_calculate_rflags_c(19, 0, 0, v10);
            v6 = v11 * (v12 + 1);
        } else {
            if v8 == 32 {
                goto LABEL_4b98f0;
            }
            if v8 - 9 < 5 {
                goto LABEL_4b9915;
            }
            if !(v8 >= 128) || !((v9 = a1, core::unicode::unicode_data::white_space::lookup(v8 & 4294967295) as i32 as i8)) {
                goto LABEL_4b9985;
            }
LABEL_4b98f0:
            v6 += uu_fmt::parasplit::char_width(v8 & 4294967295);
        }
    } while ((v4 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v1), v8 = v5 as u64, v5 != 0x110000));
LABEL_4b9985:
}
