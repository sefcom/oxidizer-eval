fn uu_pr::open(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0xf8]
    let v1: i64;  // [sp-0xf0], Other Possible Types: Enum
    let v2: i8;  // [bp-0xe8]
    let v3: i1408;  // [sp-0xe0], Other Possible Types: Enum, struct8
    let v4: i32;  // [bp-0xd8]
    let v5: i16;  // [sp-0xd4]
    let v7: i64;  // rax
    let v8: i32;  // ebp
    let v10: i64;  // r13
    let v12: i64;  // rdi
    let v15: i64;  // r15
    let v16: i64;  // rax
    let v19: i64;  // rbp
    let v21: i64;  // rax
    let v22: i64;  // 4096
    let v24: i64;  // r12

    if a2 == 1 && *(a1 as &i8) == 45 {
        v7 = __rust_alloc(8, 8);
        *(v7 as &long long) = std::io::stdio::stdin();
        *((a0 + 8) as &i64) = v7;
        *((a0 + 16) as &&i64) = &g_68ec30;
        *(a0 as &i64) = 9223372036854775813;
        return a0;
    }
    v3 = std::sys::pal::unix::fs::stat(a1, a2);
    if v3 == 2 {
        memcpy(v10, a1, a2);
        *(a0 as &i64) = 9223372036854775812;
        *((a0 + 8) as &i64) = a2;
        *((a0 + 16) as &i64) = v10;
        *((a0 + 24) as &i64) = a2;
        return a0;
    }
    v8 = *((&v3 as &char + 56) as &i32);
    v15 = 9223372036854775813;
    v0 = v12;
    memcpy(v0, a1, a2);
    v16 = 0x8000000000000000;
    switch ((v8 & 0xf000) - 0x1000 >> 12) {
    case 3:
        v16 = 9223372036854775810;
        goto LABEL_54730a;
    case 7: case 9:
        v3 = struct8 {
            field_0: 0x1b600000000
        };
        v4 = 0;
        v5 = 0;
        *(&v4 as &&i64) = &g_1;
        v1 = std::fs::OpenOptions::_open(&v3, a1, a2);
        if !v1 {
            v21 = __rust_alloc(&g_1, &g_1);
            *(v21 as &i32) = *((&v1 as &char + 4) as &i32);
            v24 = &g_68ec88;
            if !a2 {
                break;
            } else {
                break;
            }
        } else {
            v19 = v2;
            if !a2 {
                v21 = &g_1;
                memcpy(&g_1, a1, a2);
                break;
            } else {
                v21 = __rust_alloc(a2, &g_1);
                memcpy(v21, a1, a2);
                break;
            }
        }
    case 11:
        v16 = 9223372036854775811;
        goto LABEL_54730a;
    default:
        goto LABEL_547315;
    }
LABEL_54730a:
LABEL_547315:
    v0 = v0;
    *(a0 as &i64) = 0;
    *((a0 + 8) as &i64) = v21;
    *((a0 + 16) as &i64) = 0;
    *((a0 + 24) as &i64) = v22;
    return a0;
}
