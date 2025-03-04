fn uu_sort::FieldSelector::parse_with_options::parse_key_settings(a0: &struct24, a1: u32, a2: u32, a3: &struct6) -> u64 {
    let v0: i64;  // [sp-0x90]
    let v1: i64;  // [sp-0x88], Other Possible Types: Option<struct24>
    let v2: Option<struct24>;  // [sp-0x88]
    let v4: i32;  // [sp-0x54]
    let v5: i64;  // [sp-0x50]
    let v6: i64;  // [sp-0x48]
    let v9: i64;  // rax
    let v10: i64;  // rbp
    let v12: i64;  // rdx
    let v13: i64;  // rsi
    let v14: i64;  // rdx
    let v15: i64;  // rsi
    let v16: i64;  // rdx

    v5 = a1;
    v6 = a2 + a1;
    v9 = core::str::validations::next_code_point(&v5);
    if !v9 as u32 {
        return struct9 {
            field_0: 0x8000000000000000
            field_8: v11
        };
    }
    v0 = a0;
    v10 = 0;
    do {
        match (v12 as u32) {
            77 => {
                v15 = a3;
                v16 = 3;
LABEL_521953:
                v2 = uu_sort::KeySettings::set_sort_mode(v15, v16);
                if v1 != 0x8000000000000000 {
                    return struct24 {
                        field_0: v2 as i128
                        field_16: v9
                    };
                }
            }
            82 => {
                v13 = a3;
                v14 = 5;
                goto LABEL_5218a2;
            }
            86 => {
                v13 = a3;
                v14 = 4;
                goto LABEL_5218a2;
            }
            98 => {
                v10 = v10 & -0x100 | 1;
                break;
            }
            100 => {
                v2 = uu_sort::KeySettings::set_dictionary_order(a3);
                if v1 != 0x8000000000000000 {
                    return struct24 {
                        field_0: v2 as i128
                        field_16: v9
                    };
                }
            }
            102 => {
                *((a3 + 1) as &i8) = 1;
                break;
            }
            103 => {
                v15 = a3;
                v16 = 2;
                goto LABEL_521953;
            }
            104 => {
                v15 = a3;
                v16 = 1;
                goto LABEL_521953;
            }
            105 => {
                v2 = uu_sort::KeySettings::set_ignore_non_printing(a3);
                if v1 != 0x8000000000000000 {
                    return struct24 {
                        field_0: v2 as i128
                        field_16: v9
                    };
                }
            }
            110 => {
                v13 = a3;
                v14 = 0;
LABEL_5218a2:
                v1 = uu_sort::KeySettings::set_sort_mode(v13, v14);
                if v1 != 0x8000000000000000 {
                    return struct24 {
                        field_0: v9
                        field_8: *((&v1 as &char + 8) as &i128)
                    };
                }
            }
            114 => {
                *((a3 + 4) as &i8) = 1;
                break;
            }
            _ => {
                v4 = v12 as u32;
            }
        }
        v9 = core::str::validations::next_code_point(&v5);
    } while (v9 as u32);
}
