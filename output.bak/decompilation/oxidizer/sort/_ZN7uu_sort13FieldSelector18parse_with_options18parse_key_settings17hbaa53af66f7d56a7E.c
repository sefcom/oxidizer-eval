fn uu_sort::FieldSelector::parse_with_options::parse_key_settings(a0: &struct24, a1: u32, a2: u32, a3: &struct6) -> u64 {
    let v0: Option<struct24>;  // [sp-0x88], Other Possible Types: i64
    let v1: i64;  // [sp-0x80]
    let v2: i64;  // [sp-0x78]
    let v3: i64;  // [sp-0x70]
    let v4: i64;  // [sp-0x68]
    let v5: i32;  // [sp-0x54]
    let v6: i64;  // [sp-0x50]
    let v7: i64;  // [sp-0x48]
    let v8: i64;  // [sp-0x40]
    let v9: i64;  // [sp-0x38]
    let v11: i64;  // rax
    let v12: i64;  // rbp
    let v14: i64;  // rdx
    let v15: i64;  // rdx
    let v17: i64;  // rdx
    let v19: i64;  // 4096
    let v20: i64;  // 4096

    v6 = a1;
    v7 = a2 + a1;
    v11 = core::str::validations::next_code_point(&v6);
    if !v11 {
        return struct9 {
            field_0: 0x8000000000000000
            field_8: v13
        };
    }
    v12 = 0;
    do {
        switch (v5) {
        case 77:
            v17 = 3;
            goto LABEL_521953;
        case 82:
            v15 = 5;
LABEL_5218a2:
            v0 = uu_sort::KeySettings::set_sort_mode(v19, v15);
            if v0 != 0x8000000000000000 {
                return struct24 {
                    field_0: v11
                    field_8: *((&v0 as &char + 8) as &i128)
                };
            }
        case 86:
            v15 = 4;
            goto LABEL_5218a2;
        case 98:
            v12 = v12 | -0x100 | 1;
            break;
        case 100:
            v0 = uu_sort::KeySettings::set_dictionary_order(a3);
            return struct24 {
                field_0: v0
                field_16: v11
            };
        case 102:
            *((a3 + 1) as &i8) = 1;
            break;
        case 103:
            v17 = 2;
LABEL_521953:
            v0 = uu_sort::KeySettings::set_sort_mode(v20, v17);
            return struct24 {
                field_0: v0
                field_16: v11
            };
        case 104:
            v17 = 1;
            goto LABEL_521953;
        case 105:
            v0 = uu_sort::KeySettings::set_ignore_non_printing(a3);
            return struct24 {
                field_0: v0
                field_16: v11
            };
        case 110:
            v15 = 0;
            goto LABEL_5218a2;
        case 114:
            *((a3 + 4) as &i8) = 1;
            break;
        default:
            v5 = v14;
            v8 = &v5;
            v9 = <char as core::fmt::Display>::fmt;
            v0 = "invalid option: '";
            v1 = 2;
            v4 = 0;
            v2 = &v8;
            v3 = 1;
            core::option::Option<T>::map_or_else();
        }
        v11 = core::str::validations::next_code_point(&v6);
    } while (v11);
}
