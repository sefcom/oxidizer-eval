fn uu_fmt::parasplit::WordSplit::analyze_tabs(a0: &u64, a1: &struct_0, a2: u64, a3: u64) -> u64 {
    let v0: u64;  // [sp-0x58]
    let v1: u64;  // [sp-0x48]
    let v2: u64;  // [sp-0x40]
    let v3: void*;  // [sp-0x38]
    let v5: u64;  // rbp
    let v9: void*;  // r12
    let v10: u64;  // rdx
    let v11: struct8;  // rax
    let v12: u64;  // rdx
    let v13: u64;  // rcx
    let v14: u64;  // rax
    let v15: u64;  // rax
    let v16: u64;  // rdx
    let v17: u32;  // eax

    v1 = a2;
    v2 = a3 + a2;
    v3 = 0;
    v5 = 0;
    loop {
        v9 = 0;
        loop {
            v11 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a1, v10);
            if v12 == 32 {
LABEL_4ba665:
                v9 += 1;
            } else {
                if v12 == 0x110000 {
                    return struct40 {
                        field_0: v5
                        field_8: v0
                        field_16: v9
                        field_24: 0
                        field_32: v11
                    };
                }
                if v12 - 9 < 5 {
                    if !(v12 == 9) {
                        goto LABEL_4ba665;
                    }
                    if v5 {
                        v13 = a1->field_40;
                        if !v13 {
                            core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
                        }
                        if (v9 | v13) >> 32 {
                            v14 = v9;
                            v15 = (0 CONCAT v14) % v13 CONCAT (0 CONCAT v14) / v13;
                            v16 = ((0 CONCAT v14) % v13 CONCAT (0 CONCAT v14) / v13) >> 64;
                        } else {
                            v17 = v9 as u32;
                            v16 = ((0 CONCAT v17) % (v13 & 4294967295) CONCAT (0 CONCAT v17) / (v13 & 4294967295)) >> 32 & 4294967295;
                            v15 = ((0 CONCAT v17) % (v13 & 4294967295) CONCAT (0 CONCAT v17) / (v13 & 4294967295)) & 4294967295 & 4294967295;
                        }
                        v9 = v13 * (v15 + 1);
                        v5 = 1;
                    } else {
                        v5 = 1;
                        v0 = v9;
                        break;
                    }
                } else {
                    if !(v12 >= 128) || !(core::unicode::unicode_data::white_space::lookup(v12 & 4294967295) as i32) {
                        return struct40 {
                            field_0: v5
                            field_8: v0
                            field_16: v9
                            field_24: 1
                            field_32: v11
                        };
                    }
                    goto LABEL_4ba665;
                }
            }
        }
    }
}
