fn uu_sort::numeric_str_cmp::human_numeric_str_cmp(a0: &struct_1, a1: &struct_1, a2: i64) -> u64 {
    let v0: struct16;  // [bp-0x70], Other Possible Types: struct24
    let v1: u64;  // [sp-0x58]
    let v2: u64;  // [sp-0x50]
    let v3: struct24;  // [bp-0x48]
    let v5: u8;  // bpl
    let v6: u8;  // cl
    let v8: u64;  // rax
    let v9: u8;  // r12b
    let v10: u32;  // edx
    let v12: u32;  // eax
    let v13: u64;  // rdx
    let v14: u8;  // al
    let v15: u64;  // rax

    v5 = a0->field_10->field_8;
    v6 = a1->field_10->field_8;
    if v5 != v6 {
        v8 = -(v5 < v6) | -0x100 | -(v5 < v6) | 1;
        return v8;
    }
    v1 = a1->field_8;
    v2 = a0->field_8;
    v0 = struct16 {
        field_0: v7
        field_8: v7 + v2
    };
    v9 = 0;
    if !core::str::validations::next_code_point_reverse(&v0) as i32 {
        v0 = struct16 {
            field_0: v11
            field_8: v1 + v11
        };
        v12 = core::str::validations::next_code_point_reverse(&v0) as i32;
    } else {
        switch (v10) {
        case 69:
            v9 = 6;
            break;
        case 71:
            v9 = 3;
            break;
        case 75: case 107:
            v9 = 1;
            break;
        case 77:
            v9 = 2;
            break;
        case 80:
            v9 = 5;
            break;
        case 84:
            v9 = 4;
            break;
        case 89:
            v9 = 8;
            break;
        case 90:
            v9 = 7;
            break;
        }
        v0 = struct16 {
            field_0: v11
            field_8: v1 + v11
        };
        v12 = core::str::validations::next_code_point_reverse(&v0) as i32;
    }
    if !v12 {
        v14 = 0;
    } else {
        v14 = 0;
        switch (v13) {
        case 69:
            v14 = 6;
            break;
        case 71:
            v14 = 3;
            break;
        case 75: case 107:
            v14 = 1;
            break;
        case 77:
            v14 = 2;
            break;
        case 80:
            v14 = 5;
            break;
        case 84:
            v14 = 4;
            break;
        case 89:
            v14 = 8;
            break;
        case 90:
            v14 = 7;
            break;
        }
    }
    v15 = (v14 <= v9 ? (-0x100 | v9 != v14) & 4294967295 & 4294967295 : 255);
    if !v15 {
        v3 = struct24 {
            field_0: v7
            field_8: v2
            field_16: v16
        };
        v0 = struct24 {
            field_0: v11
            field_8: v1
            field_16: v17
        };
        v8 = uu_sort::numeric_str_cmp::numeric_str_cmp(&v3, &v0);
        return v8;
    }
    v8 = (v5 ? v15 & 4294967295 & 4294967295 : -(v15));
    return v8;
}
