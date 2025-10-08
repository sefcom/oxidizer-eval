fn uu_sort::FieldSelector::parse_with_options::parse_key_settings(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x90]
    let v1: Result<struct24, struct16>;  // [bp-0x88]
    let v2: Option<struct24>;  // [bp-0x88]
    let v3: Option<struct24>;  // [bp-0x88]
    let v4: Option<struct24>;  // [bp-0x88]
    let v5: u64;  // [bp-0x78]
    let v6: u32;  // [bp-0x54]
    let v7: struct16;  // [bp-0x50]
    let v10: u64;  // rdx
    let v11: struct32;  // bpl
    let v12: std::path::PathBuf;  // rdi
    let v13: struct40;  // rsi
    let v14: struct24;  // edx
    let v15: u64;  // rax
    let v16: core::option::Option<u32>;  // rax:rax
    let v17: core::option::Option<u32>;  // rax:rax

    v7 = struct16 {
        field_0: a1
        field_8: a2 + a1
    };
    v16 = core::str::validations::next_code_point(&v7) as u128;
    if let Some(_) = v16 {
        loop {
            match (v10 as u32) {
                77 => {
                    v2 = uu_sort::KeySettings::set_sort_mode(a3, 3);
                    if let Some(_) = v2 {
                        goto LABEL_4d3889;
                    }
                    break;
                }
                82 => {
                    v12 = &v1;
                    v13 = a3;
                    v14 = 5;
                    goto LABEL_4d3815;
                }
                86 => {
                    v12 = &v1;
                    v13 = a3;
                    v14 = 4;
                    goto LABEL_4d3815;
                }
                100 => {
                    uu_sort::KeySettings::set_dictionary_order(&v1, a3);
                    if let Ok(_) = v1 {
                        goto LABEL_4d3889;
                    }
                    break;
                }
                102 => {
                    *((a3 + 1) as &i8) = 1;
                    break;
                }
                103 => {
                    v3 = uu_sort::KeySettings::set_sort_mode(a3, 2);
                    if let Some(_) = v3 {
                        goto LABEL_4d3889;
                    }
                    break;
                }
                104 => {
                    v4 = uu_sort::KeySettings::set_sort_mode(a3, 1);
                    if let Some(_) = v4 {
LABEL_4d3889:
                        *(&v0[16] as &u64) = v5;
                        *(v0 as &i128) = v1 as i128;
                        return;
                    }
                    break;
                }
                105 => {
                    uu_sort::KeySettings::set_ignore_non_printing(&v1, a3);
                    v15 = v1;
                    if let Ok(_) = v1 {
                        goto LABEL_4d3876;
                    }
                    break;
                }
                110 => {
                    v12 = &v1;
                    v13 = a3;
                    v14 = 0;
LABEL_4d3815:
                    uu_sort::KeySettings::set_sort_mode(v12, v13, v14);
                    v15 = v1;
                    if let Ok(_) = v1 {
LABEL_4d3876:
                        *(&v0[8] as &i128) = *((&v4 as &char + 8) as &i128);
                        *(v0 as &u64) = v15;
                        return;
                    }
                    break;
                }
                114 => {
                    *((a3 + 4) as &i8) = 1;
                    break;
                }
                _ => {
                    v6 = v10 as u32;
                    format!("invalid option: '{}'", &v6);
                    return;
                }
            }
            v17 = core::str::validations::next_code_point(&v7) as u128;
            if (!(v17 as i8 & 1))
                break;
        }
    }
    *(&v0[8] as &struct32) = v11;
    *(v0 as &i64) = 0x8000000000000000;
    return;
}
