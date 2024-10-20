fn uu_touch::stat(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0xf0]
    let v1: i64;  // [sp-0xe8]
    let v2: i1408;  // [sp-0xe0], Other Possible Types: Enum
    let v3: i8;  // [bp-0xd8]
    let v4: i8;  // [bp-0x78]
    let v5: i8;  // [bp-0x70]
    let v6: i8;  // [bp-0x68]
    let v7: i8;  // [bp-0x60]
    let v9: i64;  // rsi
    let v10: i64;  // r12
    let v11: i32;  // eax
    let v12: i64;  // r14
    let v13: i64;  // rbp
    let v14: i32;  // r13d
    let v15: i64;  // r14
    let v16: i64;  // r15
    let v17: i64;  // rax

    v9 = a1;
    if !a3 {
        v11 = std::sys::pal::unix::fs::lstat(&v2, v9, a2) as i32;
        v12 = v2;
        if v12 != 2 {
            v13 = v4;
            v14 = v5;
            v10 = v6;
            v11 = v7;
        }
        v16 = v3;
        if v12 == 2 {
            *((a0 + 8) as &i64) = v16;
            *(a0 as &i64) = 1;
            return 1;
        }
    } else {
        v10 = a1;
        v2 = std::sys::pal::unix::fs::stat(v9, a2);
        if v2 != 2 {
            v13 = *((&v2 as &char + 104) as &i64);
            v14 = *((&v2 as &char + 112) as &i64);
            v10 = *((&v2 as &char + 120) as &i64);
            v11 = *((&v2 as &char + 128) as &i64);
            *((a0 + 8) as &i64) = v13;
            *((a0 + 16) as &i32) = v14;
            *((a0 + 24) as &i64) = v10;
            *((a0 + 32) as &i32) = v11;
            *(a0 as &i64) = 0;
            return 0;
        }
        v0 = *((&v2 as &char + 8) as &i64);
        v2 = std::sys::pal::unix::fs::lstat(v10, a2);
        v15 = v2;
        if v15 != 2 {
            v13 = *((&v2 as &char + 104) as &i64);
            v14 = *((&v2 as &char + 112) as &i64);
            v10 = *((&v2 as &char + 120) as &i64);
            v1 = *((&v2 as &char + 128) as &i64);
        }
        v16 = *((&v2 as &char + 8) as &i64);
        v11 = v1;
        if v15 == 2 {
            *((a0 + 8) as &i64) = v16;
            *(a0 as &i64) = 1;
            return 1;
        }
    }
    *((a0 + 8) as &i64) = v13;
    *((a0 + 16) as &i32) = v14;
    *((a0 + 24) as &i64) = v10;
    *((a0 + 32) as &i32) = v11;
    v17 = 0;
    *(a0 as &i64) = v17;
    return v17;
}
