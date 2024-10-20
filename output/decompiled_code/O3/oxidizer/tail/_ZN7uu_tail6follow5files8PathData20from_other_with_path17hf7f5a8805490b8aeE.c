fn uu_tail::follow::files::PathData::from_other_with_path(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [bp-0x1b0]
    let v1: i64;  // [sp-0x1a8]
    let v2: i64;  // [sp-0x1a0]
    let v3: i64;  // [sp-0x198]
    let v4: i64;  // [sp-0x190]
    let v5: i64;  // [sp-0x188]
    let v6: i64;  // [bp-0x180], Other Possible Types: Enum, struct8
    let v7: i8;  // [bp-0x178]
    let v8: i16;  // [sp-0x174]
    let v9: i128;  // [sp-0x170]
    let v10: i64;  // [sp-0x160]
    let v11: i32;  // [sp-0x158]
    let v12: i64;  // [sp-0xd0], Other Possible Types: Enum
    let v13: i64;  // [sp-0x30]
    let v15: i64;  // rbx
    let v16: i64;  // rbp
    let v17: i64;  // rbx
    let v18: i32;  // ebx
    let v19: i64;  // rax
    let v20: i128;  // xmm0
    let v21: i64;  // r15
    let v22: i64;  // r14
    let v24: i64;  // rbp
    let v26: i64;  // rbx

    v13 = v15;
    v16 = a1;
    v17 = *((a1 + 200) as &i64);
    v4 = *((a1 + 208) as &i64);
    v2 = v4;
    v1 = v17;
    v3 = a1;
    if !v17 {
        v6 = struct8 {
            field_0: 0x1b600000000
        };
        v7 = 0;
        v8 = 0;
        v7 = 1;
        v12 = std::fs::OpenOptions::_open(&v6, a2, a3);
        if v12 {
            v1 = 0;
        } else {
            v17 = v17;
            v18 = *((&v12 as &char + 4) as &i32);
            v6 = __rust_alloc(0x2000, 1);
            v7 = 0x2000;
            v9 = 0;
            v10 = 0;
            v11 = v18;
            v19 = __rust_alloc(48, 8);
            v20 = v6;
            *((v19 + 32) as &i64) = v10;
            *((v19 + 16) as &i128) = v9;
            v1 = v19;
            *(v19 as &i128) = v20;
        }
        v2 = &anon.c568fa996e9b1afffbd2fe86e67742f4.14.llvm.893476530518564186;
    }
    v6 = std::sys::pal::unix::fs::stat(a2, a3);
    v21 = v6;
    v22 = *((&v6 as &char + 8) as &i64);
    if v21 != 2 {
        memcpy(&v12, &v6, 160);
    }
    v5 = v21;
    v24 = *((v16 + 192) as &i64);
    if v24 {
        v0 = v17;
    }
    memcpy(v26, *((v16 + 184) as &i64), v24);
    *((a0 + 200) as &i64) = v1;
    *((a0 + 208) as &i64) = v2;
    *(a0 as &i64) = v5;
    *((a0 + 8) as &i64) = v22;
    memcpy(a0 + 16, &v12, 160);
    *((a0 + 176) as &i64) = v24;
    *((a0 + 184) as &i64) = v26;
    *((a0 + 192) as &i64) = v24;
    return a0;
}
