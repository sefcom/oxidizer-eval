fn uu_sort::FieldSelector::parse_with_options::parse_key_settings(a0: void*, a1: &u64, a2: u32, a3: &u64) -> u64 {
    let v0: i32;  // [sp-0xa4]
    let v1: i64;  // [sp-0xa0], Other Possible Types: Enum, Arguments
    let v2: i64;  // [sp-0x90]
    let v3: i32;  // [sp-0x6c]
    let v4: Argument;  // [bp-0x68]
    let v5: Argument;  // [bp-0x60]
    let v6: i64;  // [sp-0x50]
    let v7: i192;  // [sp-0x48], Other Possible Types: String
    let v9: i64;  // 4096
    let v10: i64;  // rax
    let v11: i64;  // r12
    let v12: i64;  // rax
    let v13: i64;  // r12
    let v14: i32;  // ecx
    let v15: i32;  // esi
    let v16: i32;  // edx
    let v17: i64;  // rdx
    let v20: i64;  // rax
    let v23: i64;  // 4096
    let v24: i64;  // rcx
    let v25: i128;  // xmm0
    let v26: i64;  // rcx

    if !a2 {
        *((a0 + 8) as &i8) = 0;
        *(a0 as &i64) = 0x8000000000000000;
        return v10;
    }
    v0 = 0;
    loop {
        v11 = v9;
        v12 = *(v11 as &i8);
        if v12 >= 0 {
            v13 = v11 + 1;
        } else {
            v14 = v12 & 31;
            v15 = *((v11 + 1) as &i8) & 63;
            if (v12 & 255) <= 223 {
                v13 = v11 + 2;
                v12 = v14 * 64 | v15;
            } else {
                v16 = *((v11 + 2) as &i8) & 63 | v15 * 64;
                if (v12 & 255) >= 240 {
                    v13 = v11 + 4;
                    v12 = *((v11 + 3) as &i8) & 63 | v16 * 64 | (v14 & 7) * 0x40000;
                } else {
                    v13 = v11 + 3;
                    v12 = v16 | v14 * 0x1000;
                }
            }
        }
        switch (v7) {
        case 77:
            v17 = 3;
            goto LABEL_4c48d0;
        case 82:
            v17 = 5;
            goto LABEL_4c48d0;
        case 86:
            v1 = uu_sort::KeySettings::set_sort_mode(a3, 0x4);
            if v1 != 0x8000000000000000 {
                vvar_451{reg 224} = *((&v1 as &char + 8) as &i128);
                vvar_454{reg 24} = a0;
                *((v26 + 8) as &i128) = v25;
                *(v26 as &i64) = v10;
                return v10;
            }
            break;
        case 98:
            v0 = v7 | -0x100 | 1;
            break;
        case 100:
            v20 = *((a3 + 5) as &i8);
            v1 = v1;
            v2 = v2;
            if v20 <= 3 {
                v3 = *((&g_41efd0 as &u8 + 4 * v20) as &i32);
                v4 = Argument {
                    value: &g_41eae8
                    formatter: <char as core::fmt::Display>::fmt
                };
                v5 = Argument {
                    value: <char as core::fmt::Display>::fmt
                    formatter: &v3
                };
                v6 = <char as core::fmt::Display>::fmt;
                v1 = Arguments {
                    pieces: ["options '-", &g_5928d0, "' are incompatible"]
                    args: [&v4, &v5]
                    fmt: None
                };
                v7 = alloc::fmt::format::format_inner(&v1);
                v10 = v7;
                v1 = v1;
                v2 = v2;
                if v10 != 0x8000000000000000 {
                    vvar_438{reg 24} = a0;
                    *((v26 + 8) as &i128) = v25;
                    *(v26 as &i64) = v10;
                    return v10;
                }
            }
            v2 = v2;
            v1 = v1;
            *((a3 + 2) as &i8) = 1;
            break;
        case 102:
            *((a3 + 1) as &i8) = 1;
            break;
        case 103:
            v17 = 2;
            goto LABEL_4c48d0;
        case 104:
            v17 = 1;
LABEL_4c48d0:
            v1 = uu_sort::KeySettings::set_sort_mode(v23, v17);
            if v1 != 0x8000000000000000 {
                v24 = a0;
                *((v24 + 16) as &i64) = v2;
                *(v24 as &i192) = v1;
                return v10;
            }
            break;
        case 105:
            v1 = uu_sort::KeySettings::check_compatibility(*((a3 + 5) as &i8), 0x1, *((a3 + 2) as &i8));
            if v1 != 0x8000000000000000 {
                vvar_443{reg 224} = *((&v1 as &char + 8) as &i128);
                vvar_446{reg 24} = a0;
                *((v26 + 8) as &i128) = v25;
                *(v26 as &i64) = v10;
                return v10;
            }
            *((a3 + 3) as &i8) = 1;
            break;
        case 110:
            v17 = 0;
            goto LABEL_4c48d0;
        case 114:
            *((a3 + 4) as &i8) = 1;
            if v13 == a2 + a1 {
                v10 = v0 | -0x100 | v0 & 1;
                *((a0 + 8) as &i8) = v10;
                *(a0 as &i64) = 0x8000000000000000;
                return 0;
            }
            continue;
        default:
            v7 = v12;
            v4 = Argument {
                value: &v7
                formatter: <char as core::fmt::Display>::fmt
            };
            v1 = Arguments {
                pieces: ["invalid option: '", "'"]
                args: [&v4]
                fmt: None
            };
            v10 = alloc::fmt::format::format_inner(a0, &v1);
            return v10;
        }
    }
}
