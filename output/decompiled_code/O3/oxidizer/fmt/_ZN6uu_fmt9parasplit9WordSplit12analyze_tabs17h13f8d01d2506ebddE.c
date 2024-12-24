fn uu_fmt::parasplit::WordSplit::analyze_tabs(a0: &u64, a1: &struct_0, a2: u64, a3: u64) -> u64 {
    let v0: u64;  // [sp-0x58]
    let v1: u64;  // [sp-0x48]
    let v2: u64;  // [sp-0x40]
    let v3: void*;  // [sp-0x38]
    let v5: u64;  // rbp
    let v8: void*;  // r12
    let v9: u64;  // rdx
    let v10: struct8;  // rax
    let v11: u64;  // rdx
    let v12: u64;  // rcx
    let v13: u64;  // rax
    let v14: u64;  // rax
    let v15: u64;  // rdx
    let v16: u32;  // eax

    v1 = a2;
    v2 = a3 + a2;
    v3 = 0;
    v5 = 0;
    loop {
        v8 = 0;
        loop {
            v10 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a1, v9);
            if v11 == 32 {
LABEL_4bab45:
                v8 += 1;
            } else {
                if v11 == 0x110000 {
                    return struct40 {
                        field_0: v5
                        field_8: v0
                        field_16: v8
                        field_24: 0
                        field_32: v10
                    };
                }
                if v11 - 9 < 5 {
                    if !(v11 == 9) {
                        goto LABEL_4bab45;
                    }
                    if v5 {
                        v12 = a1->field_40;
                        if !v12 {
                            core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
                        }
                        if (v8 | v12) >> 32 {
                            v13 = v8;
                            v14 = (0 CONCAT v13) /m v12;
                            v15 = (0 CONCAT v13) /m v12 >> 64;
                        } else {
                            v16 = v8 as u32;
                            v15 = (0 CONCAT v16) /m v12 >> 32 & 4294967295;
                            v14 = (0 CONCAT v16) /m v12 & 4294967295 & 4294967295;
                        }
                        v8 = v12 * (v14 + 1);
                        v5 = 1;
                    } else {
                        v5 = 1;
                        v0 = v8;
                        break;
                    }
                } else {
                    if !(v11 >= 128) || !(core::unicode::unicode_data::white_space::lookup(v11 & 4294967295) as i32) {
                        return struct40 {
                            field_0: v5
                            field_8: v0
                            field_16: v8
                            field_24: 1
                            field_32: v10
                        };
                    }
                    goto LABEL_4bab45;
                }
            }
        }
    }
}
