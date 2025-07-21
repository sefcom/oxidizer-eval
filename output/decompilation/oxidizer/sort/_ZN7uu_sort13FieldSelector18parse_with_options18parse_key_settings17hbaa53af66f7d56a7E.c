fn uu_sort::FieldSelector::parse_with_options::parse_key_settings(a1: i64, a2: i64, a3: i64) -> Result<struct24, struct9> {
    let a0: u64;  // rsi
    let v0: struct24;  // [bp-0x88], Other Possible Types: u64
    let v1: i8;  // [bp-0x80], Other Possible Types: u64
    let v2: i64;  // [bp-0x78], Other Possible Types: u64
    let v3: u64;  // [bp-0x70]
    let v4: void*;  // [bp-0x68]
    let v5: u32;  // [bp-0x54]
    let v6: struct16;  // [bp-0x50]
    let v7: i64;  // [bp-0x40]
    let v8: u64;  // [bp-0x38]
    let v11: u64;  // rdx
    let v14: core::fmt::rt::Argument;  // rdx
    let v16: u64;  // rdx
    let v17: u8;  // bpl
    let v18: i64;  // rdi
    let v19: i64;  // rdi
    let v20: i64;  // rbx
    let v21: core::option::Option<u32>;  // rax:rax
    let v22: core::option::Option<u32>;  // rax:rax

    v6 = struct16 {
        field_0: a0
        field_8: a1 + a0
    };
    v22 = core::str::validations::next_code_point(&v6) as u128;
    if let Some(_) = v22 {
        loop {
            match (v11 as u32) {
                77 => {
                    goto LABEL_521953;
                }
                82 => {
                    goto LABEL_521931;
                }
                86 => {
                    goto LABEL_521931;
                }
                100 => {
                    uu_sort::KeySettings::set_dictionary_order(a2, v11);
                    if !(v0 == 0x8000000000000000) {
                        goto LABEL_521992;
                    }
                    break;
                }
                102 => {
                    *((a2 + 1) as &i8) = 1;
                    break;
                }
                103 => {
                    goto LABEL_521953;
                }
                104 => {
LABEL_521953:
                    uu_sort::KeySettings::set_sort_mode(a2, v16, a2 as u32);
                    if v0 != 0x8000000000000000 {
LABEL_521992:
                        *((v19 + 16) as &u64) = v2;
                        *(v19 as &i128) = *(&v0 as &i128);
                        return;
                    }
                    break;
                }
                105 => {
                    uu_sort::KeySettings::set_ignore_non_printing(a2, v11);
                    if !(v0 == 0x8000000000000000) {
                        goto LABEL_521992;
                    }
                    break;
                }
                110 => {
LABEL_521931:
                    uu_sort::KeySettings::set_sort_mode(a2, v14, a2 as u32);
                    if v0 != 0x8000000000000000 {
                        *((v18 + 8) as &i128) = *(&v1 as &i128);
                        *(v18 as &u64) = v0;
                        return;
                    }
                    break;
                }
                114 => {
                    *((a2 + 4) as &i8) = 1;
                    break;
                }
                _ => {
                    v5 = v11 as u32;
                    v7 = &v5;
                    v8 = <char as core::fmt::Display>::fmt;
                    v0 = "invalid option: '";
                    v1 = 2;
                    v4 = 0;
                    v2 = &v7;
                    v3 = 1;
                    v0 = core::option::Option<T>::map_or_else(v11);
                    return;
                }
            }
            v21 = core::str::validations::next_code_point(&v6) as u128;
            if (!v21 as i32)
                break;
        }
    }
    *((v20 + 8) as &u8) = v17;
    *(v20 as &i64) = 0x8000000000000000;
    return;
}
