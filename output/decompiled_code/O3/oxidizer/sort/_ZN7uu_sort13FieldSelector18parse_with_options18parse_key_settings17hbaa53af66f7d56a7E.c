fn uu_sort::FieldSelector::parse_with_options::parse_key_settings(a0: &struct24, a1: u32, a2: u32, a3: &struct6) -> u64 {
    let v0: i64;  // [sp-0x88], Other Possible Types: Option<struct24>
    let v1: i64;  // [sp-0x78]
    let v2: i32;  // [sp-0x54]
    let v3: i64;  // [sp-0x50]
    let v4: i64;  // [sp-0x48]
    let v6: i64;  // rax
    let v7: i64;  // rbp
    let v8: i8;  // bpl
    let v9: i64;  // rdx
    let v10: i64;  // rdx
    let v12: i64;  // rdx
    let v14: i64;  // 4096
    let v15: i64;  // 4096
    let v18: i64;  // rcx
    let v19: i64;  // rcx

    v3 = a1;
    v4 = a2 + a1;
    v6 = core::str::validations::next_code_point(&v3);
    if !v6 {
        v8 = 0;
    } else {
        v7 = 0;
        do {
            switch (v2) {
            case 77:
                v12 = 3;
                goto LABEL_521953;
            case 82:
                v10 = 5;
LABEL_5218a2:
                v0 = uu_sort::KeySettings::set_sort_mode(v14, v10);
                v6 = v0;
                if v6 != 0x8000000000000000 {
                    v18 = a0;
                    *((v18 + 8) as &i128) = *((&v0 as &char + 8) as &i128);
                    *(v18 as &i64) = v6;
                    return v6;
                }
            case 86:
                v10 = 4;
                goto LABEL_5218a2;
            case 98:
                v7 = v7 | -0x100 | 1;
                break;
            case 100:
                v0 = uu_sort::KeySettings::set_dictionary_order(a3);
                if v0 != 0x8000000000000000 {
                    vvar_279{reg 24} = a0;
                    *((v19 + 16) as &i64) = v1;
                    *(v19 as &i192) = v0;
                    return v6;
                }
            case 102:
                *((a3 + 1) as &i8) = 1;
                break;
            case 103:
                v12 = 2;
LABEL_521953:
                v0 = uu_sort::KeySettings::set_sort_mode(v15, v12);
                if v0 != 0x8000000000000000 {
                    v6 = v1;
                    v19 = a0;
                    *((v19 + 16) as &i64) = v6;
                    *(v19 as &i192) = v0;
                    return v6;
                }
            case 104:
                v12 = 1;
                goto LABEL_521953;
            case 105:
                v0 = uu_sort::KeySettings::set_ignore_non_printing(a3);
                if v0 != 0x8000000000000000 {
                    vvar_274{reg 24} = a0;
                    *((v19 + 16) as &i64) = v1;
                    *(v19 as &i192) = v0;
                    return v6;
                }
            case 110:
                v10 = 0;
                goto LABEL_5218a2;
            case 114:
                *((a3 + 4) as &i8) = 1;
                break;
            default:
                v2 = v9;
                v6 = format!("invalid option: '{:?}'", &v2);
                return v6;
            }
            v6 = core::str::validations::next_code_point(&v3);
        } while (v6);
        v8 = v7 | -0x100 | 1;
    }
    *((a0 + 8) as &i8) = v8;
    *(a0 as &i64) = 0x8000000000000000;
    return v6;
}
