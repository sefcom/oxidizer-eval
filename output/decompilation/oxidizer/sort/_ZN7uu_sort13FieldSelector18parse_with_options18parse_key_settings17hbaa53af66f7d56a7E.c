fn uu_sort::FieldSelector::parse_with_options::parse_key_settings(a1: i64, a2: i64, a3: i64) -> Result<struct24, struct9> {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x88], Other Possible Types: struct24
    let v1: i8;  // [bp-0x80], Other Possible Types: u64
    let v2: i64;  // [bp-0x78], Other Possible Types: u64
    let v3: u64;  // [bp-0x70]
    let v4: void*;  // [bp-0x68]
    let v5: u32;  // [bp-0x54]
    let v6: u64;  // [bp-0x50]
    let v7: u64;  // [bp-0x48]
    let v8: i64;  // [bp-0x40]
    let v9: u64;  // [bp-0x38]
    let v12: u64;  // rdx
    let v15: u64;  // rdx
    let v17: u64;  // rdx
    let v18: u8;  // bpl
    let v19: i64;  // rdi
    let v20: i64;  // rdi
    let v21: i64;  // rbx
    let v22: core::option::Option<u32>;  // rax:rax
    let v23: core::option::Option<u32>;  // rax:rax

    v6 = a0;
    v7 = a1 + a0;
    v23 = core::str::validations::next_code_point(&v6) as u128;
    if let Some(_) = v23 {
        loop {
            match (v12 as u32) {
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
                    uu_sort::KeySettings::set_dictionary_order(a2, v12);
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
                    uu_sort::KeySettings::set_sort_mode(a2, v17, a2 as u32);
                    if v0 != 0x8000000000000000 {
LABEL_521992:
                        *((v20 + 16) as &u64) = v2;
                        *(v20 as &i128) = *(&v0 as &i128);
                        return;
                    }
                    break;
                }
                105 => {
                    uu_sort::KeySettings::set_ignore_non_printing(a2, v12);
                    if !(v0 == 0x8000000000000000) {
                        goto LABEL_521992;
                    }
                    break;
                }
                110 => {
LABEL_521931:
                    uu_sort::KeySettings::set_sort_mode(a2, v15, a2 as u32);
                    if v0 != 0x8000000000000000 {
                        *((v19 + 8) as &i128) = *(&v1 as &i128);
                        *(v19 as &u64) = v0;
                        return;
                    }
                    break;
                }
                114 => {
                    *((a2 + 4) as &i8) = 1;
                    break;
                }
                _ => {
                    v5 = v12 as u32;
                    v8 = &v5;
                    v9 = <char as core::fmt::Display>::fmt;
                    v0 = "invalid option: '";
                    v1 = 2;
                    v4 = 0;
                    v2 = &v8;
                    v3 = 1;
                    v0 = core::option::Option<T>::map_or_else(v12);
                    return;
                }
            }
            v22 = core::str::validations::next_code_point(&v6) as u128;
            if (!v22 as i32)
                break;
        }
    }
    *((v21 + 8) as &u8) = v18;
    *(v21 as &i64) = 0x8000000000000000;
    return;
}
