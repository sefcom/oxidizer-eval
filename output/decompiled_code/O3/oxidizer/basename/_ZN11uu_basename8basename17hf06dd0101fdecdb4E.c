fn uu_basename::basename() -> u32 {
    let v0: i64;  // [sp-0xe0]
    let v1: i64;  // [sp-0xd8]
    let v2: i64;  // [sp-0xd0]
    let v3: struct24;  // [sp-0xc0], Other Possible Types: i192
    let v4: i8;  // [bp-0xa8]
    let v5: struct20;  // [sp-0x70]
    let v7: i64;  // rcx
    let v8: i64;  // rsi
    let v9: i64;  // rdx
    let v10: i64;  // r11
    let v11: i64;  // rax
    let v12: i64;  // rax
    let v13: i64;  // rcx
    let v14: i64;  // r8
    let v15: i64;  // r9
    let v16: i32;  // r8d
    let v17: i32;  // r9d
    let v19: i64;  // rax
    let v20: i64;  // r8
    let v21: i64;  // r13
    let v22: i64;  // r13
    let v23: i64;  // rax
    let v25: i64;  // rdi

    v1 = v7;
    v10 = v8 + v9;
    loop {
        if v11 == v8 {
            v19 = v9;
            break;
        } else {
            v12 = v10;
            v13 = *((v12 - 1) as &i8);
            if v13 < 0 {
                v14 = *((v12 - 2) as &i8);
                if v14 >= 192 {
                    v10 = v12 - 2;
                    v16 = v14 & 31;
                } else {
                    v15 = *((v12 - 3) as &i8);
                    if v15 >= 192 {
                        v10 = v12 - 3;
                        v17 = v15 & 15;
                    } else {
                        v10 = v12 - 4;
                        v17 = v15 & 63 | (*((v12 - 4) as &i8) & 7) * 64;
                    }
                    v16 = v14 & 63 | v17 * 64;
                }
                if !((v13 & 63 | v16 << 6) == 47) {
                    goto LABEL_480276;
                }
            } else {
                v10 = v12 - 1;
                if v13 == 47 {
                    continue;
                }
LABEL_480276:
                v19 = v12 - v8;
                if v12 != v8 {
                    break;
                }
            }
        }
    }
    v3 = std::sys::os_str::bytes::Slice::to_owned(v8, v19);
    v2 = *((&v3 as &char + 8) as &i64);
    v5 = std::path::Path::components(*((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64));
    v0 = v20;
    v22 = v21 | -0x100 | 10;
    loop {
        <std::path::Components as core::iter::traits::iterator::Iterator>::next();
        v23 = v4;
        if v23 == 10 {
            break;
        }
        v22 = v23 & 4294967295;
    }
    *(v25 as &i64) = 0;
    *((v25 + 8) as &i64) = 1;
    *((v25 + 16) as &i64) = 0;
    return;
}
