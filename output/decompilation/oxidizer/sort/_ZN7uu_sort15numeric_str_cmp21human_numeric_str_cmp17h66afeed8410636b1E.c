fn uu_sort::numeric_str_cmp::human_numeric_str_cmp(a0: void*, a1: void*) -> u64 {
    let v0: struct16;  // [bp-0x70], Other Possible Types: struct24
    let v1: u64;  // [sp-0x58]
    let v2: u64;  // [sp-0x50]
    let v3: struct24;  // [bp-0x48]
    let v7: u8;  // bpl
    let v8: u8;  // cl
    let v11: u64;  // rax
    let v12: u8;  // r12b
    let v13: u32;  // edx
    let v14: u32;  // eax
    let v15: u64;  // rdx
    let v16: u8;  // al
    let v17: u64;  // rax

    v7 = a0->field_10->field_8;
    v8 = a1->field_10->field_8;
    if v7 != v8 {
        v11 = -(v7 < v8) & 0xffffffffffffff00 | -(v7 < v8) | 1;
        return v11;
    }
    v1 = a1->field_8;
    v2 = a0->field_8;
    v0 = struct16 {
        field_0: v9
        field_8: v9 + v2
    };
    v12 = 0;
    if !core::str::validations::next_code_point_reverse(&v0) as i32 {
        v0 = struct16 {
            field_0: v10
            field_8: v1 + v10
        };
        v14 = core::str::validations::next_code_point_reverse(&v0) as i32;
    } else {
        match (v13) {
            69 => {
                v12 = 6;
                break;
            }
            71 => {
                v12 = 3;
                break;
            }
            75 | 107 => {
                v12 = 1;
                break;
            }
            77 => {
                v12 = 2;
                break;
            }
            80 => {
                v12 = 5;
                break;
            }
            84 => {
                v12 = 4;
                break;
            }
            89 => {
                v12 = 8;
                break;
            }
            90 => {
                v12 = 7;
                break;
            }
        }
        v0 = struct16 {
            field_0: v10
            field_8: v1 + v10
        };
        v14 = core::str::validations::next_code_point_reverse(&v0) as i32;
    }
    if !v14 {
        v16 = 0;
    } else {
        v16 = 0;
        match (v15) {
            69 => {
                v16 = 6;
                break;
            }
            71 => {
                v16 = 3;
                break;
            }
            75 | 107 => {
                v16 = 1;
                break;
            }
            77 => {
                v16 = 2;
                break;
            }
            80 => {
                v16 = 5;
                break;
            }
            84 => {
                v16 = 4;
                break;
            }
            89 => {
                v16 = 8;
                break;
            }
            90 => {
                v16 = 7;
                break;
            }
        }
    }
    v17 = (v16 <= v12 ? 255 : v12 != v16);
    if !v17 {
        v3 = struct24 {
            field_0: v9
            field_8: v2
            field_16: v5
        };
        v0 = struct24 {
            field_0: v10
            field_8: v1
            field_16: v6
        };
        v11 = uu_sort::numeric_str_cmp::numeric_str_cmp(&v3, &v0);
        return v11;
    }
    v11 = (v7 ? v17 & 4294967295 & 4294967295 : -(v17));
    return v11;
}
