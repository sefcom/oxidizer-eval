fn uu_sort::numeric_str_cmp::NumInfo::parse(a0: &struct25, a1: u32, a2: void*, a3: &struct9) -> u64 {
    let v0: u64;  // [sp-0x1a8]
    let v1: u8;  // [bp-0x85], Other Possible Types: struct1
    let v2: u32;  // [sp-0x84]
    let v3: u64;  // [sp-0x80]
    let v4: u64;  // [sp-0x78], Other Possible Types: struct8
    let v6: u64;  // [bp-0x60]
    let v7: u64;  // [sp-0x50]
    let v8: u64;  // [sp-0x48]
    let v9: void*;  // [sp-0x40]
    let v11: struct8;  // rax
    let v12: u64;  // rdx
    let v13: u64;  // rcx
    let v14: u32;  // r12d
    let v15: u32;  // r14d
    let v16: u32;  // ebp
    let v17: void*;  // r13
    let v18: u64;  // rdx
    let v19: u64;  // rsi
    let v20: u64;  // rdx
    let v21: u64;  // rdx
    let v22: u64;  // rdx
    let v24: u64;  // rax
    let v26: u64;  // rax
    let v27: u8;  // al
    let v32: u64;  // r15
    let v33: u64;  // rcx
    let v34: u64;  // r15
    let v35: u32;  // r12d
    let v36: u64;  // r12
    let v37: u64;  // r15

    v1 = struct1 {
        field_0: 0
    };
    v7 = a1;
    v8 = a1 + a2;
    v9 = 0;
    v11 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a1 + a2, a2);
    if v12 == 0x110000 {
        v13 = 0;
    } else {
        v14 = v12;
        v15 = a3->field_0;
        v16 = a3->field_4;
        v2 = (v11 | -0x100 | 1) as u32;
        v3 = -1;
        v13 = 0;
        v17 = 0;
        do {
            v18 = v20;
            v17 = v17;
            if v17 == 1 {
                loop {
                    if false {
                        break;
                    }
                    if !(v14 - 9 >= 5) || !(v14 != 32) {
LABEL_570952:
                        v11 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v19, v21);
                        v14 = v12;
                        if v12 == 0x110000 {
                            v2 = v2;
                            vvar_737{stack -132} = v2;
                            a0->field_0 = v3;
                            a0->field_8 = v2 & 1;
                            a0->field_10 = v4;
                            a0->field_18 = a2;
                            return a0;
                        }
                    } else if v14 > 127 {
                        if !(!(core::unicode::unicode_data::white_space::lookup(v14) & 255 & 255 & 255)) {
                            goto LABEL_570952;
                        }
                        break;
                    } else if v14 == 45 {
                        v2 = 0;
                        goto LABEL_570952;
                    }
                }
                if v15 != 0x110000 && v15 == v14 {
LABEL_570950:
                    goto LABEL_570952;
                }
                v24 = uu_sort::numeric_str_cmp::NumInfo::is_invalid_char(v14, &v1, v16);
                if !(!(core::unicode::unicode_data::white_space::lookup(v14) & 255 & 255 & 255)) {
                    goto LABEL_570b99;
                }
                if !(!(core::unicode::unicode_data::white_space::lookup(v14) & 255 & 255 & 255)) {
                    goto LABEL_570950;
                }
                v27 = v24 | -0x100 | v14 == 48;
                goto LABEL_570abb;
            }
            v13 = v13;
            if v14 - 9 >= 5 && v14 != 32 {
                if v14 >= 128 {
                    if !(!(core::unicode::unicode_data::white_space::lookup(v14) & 255 & 255 & 255)) {
                        goto LABEL_570a02;
                    }
                    goto LABEL_570a23;
                } else if v14 == 45 {
                    v2 = 0;
                }
            }
LABEL_570a02:
            v11 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v19, v22);
            v14 = v12;
            if !(!(core::unicode::unicode_data::white_space::lookup(v14) & 255 & 255 & 255)) {
                continue;
            }
            break;
LABEL_570a23:
            if v15 != 0x110000 && v15 == v14 {
LABEL_570a00:
                goto LABEL_570a02;
            }
            v26 = uu_sort::numeric_str_cmp::NumInfo::is_invalid_char(v14, &v1, v16);
            if !v26 {
                if !(!(core::unicode::unicode_data::white_space::lookup(v14) & 255 & 255 & 255)) {
                    goto LABEL_570a00;
                }
                if v14 != 48 {
                    v27 = 0;
                } else if !v1 {
                    v13 = v26 | -0x100 | 1;
                    goto LABEL_570a00;
                } else {
                    v3 -= 1;
                    v27 = v26 | -0x100 | 1;
                    goto LABEL_570ae7;
                }
            } else {
                if !v17 {
                    if !(v6 as i8 & 1) {
                        v11 = 0;
                    }
                    a0->field_0 = 0;
                    a0->field_8 = 1;
                    *(&a0->field_10 as &struct8) = v4;
                    a0->field_18 = v37;
                    return a0;
                }
LABEL_570b99:
                if a3->field_8 {
                    v36 = v35 - 69;
                    if v36 <= 38 {
                        v0 = 274881087813;
                        if (*((&v0 + ((v36 & 63) >> 3)) as &i8) >> (v36 & 63 & 7) & 1) {
                            v34 += 1;
                        }
                    }
                }
                a0->field_0 = v3;
                a0->field_8 = 1;
                *(&a0->field_10 as &struct8) = v4;
                a0->field_18 = v37;
                return a0;
            }
LABEL_570abb:
LABEL_570ae7:
            v3 += 1 ^ 1;
            v4 = v32;
            v17 = v17 == 1 | v27 ^ 1;
            v11 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v4, v3 + (1 ^ 1));
            v14 = v12;
            v13 = v33 | -0x100 | 1;
        } while (v12 != 0x110000);
        v2 = v2;
        if v17 {
            v2 = v2;
            a0->field_0 = v3;
            a0->field_8 = v2 & 1;
            a0->field_10 = v4;
            a0->field_18 = a2;
            return a0;
        }
    }
    if !(v13 & 1) {
        a2 = 0;
    }
    a0->field_0 = 0;
    a0->field_8 = v2 & 1;
    a0->field_10 = v4;
    a0->field_18 = a2;
    return a0;
}
