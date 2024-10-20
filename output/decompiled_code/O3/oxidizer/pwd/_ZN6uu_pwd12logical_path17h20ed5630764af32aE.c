fn uu_pwd::logical_path(a0: i64) -> u64 {
    let v0: i64;  // [sp-0xf8]
    let v1: i64;  // [sp-0xf0]
    let v2: i64;  // [sp-0xe8]
    let v3: i192;  // [sp-0xe0], Other Possible Types: Enum, struct20, struct24
    let v4: i8;  // [bp-0xd0]
    let v5: i8;  // [bp-0xa6]
    let v7: i64;  // rbx
    let v8: i64;  // rdi
    let v9: i64;  // rax
    let v10: i64;  // rcx
    let v12: i64;  // r11
    let v14: i64;  // r9
    let v15: i64;  // rsi
    let v16: i64;  // rdx
    let v17: i64;  // r8
    let v18: i64;  // r10
    let v19: i64;  // r9
    let v20: i32;  // r11d
    let v21: i32;  // r14d
    let v22: i32;  // ebp
    let v26: i64;  // r8
    let v28: i64;  // r8
    let v32: i8;  // r13b

    v3 = std::env::_var_os(&g_41803c, 3);
    v7 = v3;
    if v7 != 0x8000000000000000 {
        v0 = *((&v3 as &char + 8) as &i64);
        v1 = v4;
        v3 = std::path::Path::components(*((&v3 as &char + 8) as &i64), v1);
        if v5 || *((&v3 as &char + 16) as &i8) - 5 >= 2 {
            v3 = std::sys::os_str::bytes::Slice::to_string_lossy(v0, v1);
            v8 = *((&v3 as &char + 8) as &i64);
            v9 = *((&v3 as &char + 16) as &i64);
            v10 = v8 + v9;
            v12 = 0;
            do {
                v15 = 0;
                do {
                    v16 = v14;
                    v17 = v12;
                    if v16 == v10 {
                        break;
                    }
                    v18 = *(v16 as &i8);
                    if v18 >= 0 {
                        v19 = v16 + 1;
                    } else {
                        v20 = v18 & 31;
                        v21 = *((v16 + 1) as &i8) & 63;
                        if (v18 & 255) <= 223 {
                            v19 = v16 + 2;
                            v18 = v20 * 64 | v21;
                        } else {
                            v22 = *((v16 + 2) as &i8) & 63 | v21 * 64;
                            if (v18 & 255) < 240 {
                                v19 = v16 + 3;
                                v18 = v22 | v20 * 0x1000;
                            } else {
                                v19 = v16 + 4;
                                v18 = *((v16 + 3) as &i8) & 63 | v22 * 64 | (v20 & 7) * 0x40000;
                            }
                        }
                    }
                    v12 = v19 - v16 + v17;
                } while (v18 != 47);
                v28 = v26 - v15;
                if v28 == 2 {
                    if !(*((v8 + v15) as &i16) == 11822) {
                        goto LABEL_47b700;
                    }
LABEL_47b7dd:
                    if v3 << 1 {
                        goto LABEL_47b65f;
                    }
                }
                if v28 == 1 && *((v8 + v15) as &i8) == 46 {
                    goto LABEL_47b7dd;
                }
LABEL_47b700:
            } while (v16 != v10);
            v3 = std::sys::pal::unix::fs::stat(v0, v1);
            v2 = *((&v3 as &char + 8) as &i64);
            v3 = std::sys::pal::unix::fs::stat(&g_41803f, 1);
            if v3 == 2 || v3 == 2 {
                v32 = 0;
            } else {
                v32 = *((&v3 as &char + 40) as &i64) ^ *((&v3 as &char + 40) as &i64) | *((&v3 as &char + 32) as &i64) ^ *((&v3 as &char + 32) as &i64) | -0x100 | (!(*((&v3 as &char + 40) as &i64) ^ *((&v3 as &char + 40) as &i64)) && !(*((&v3 as &char + 32) as &i64) ^ *((&v3 as &char + 32) as &i64)));
            }
            if v32 {
                *(a0 as &i64) = v7;
                *((a0 + 8) as &i64) = v0;
                *((a0 + 16) as &i64) = v1;
                return a0;
            }
        }
    }
LABEL_47b65f:
    std::env::current_dir(a0);
    if v7 << 1 {
        return a0;
    }
    return a0;
}
