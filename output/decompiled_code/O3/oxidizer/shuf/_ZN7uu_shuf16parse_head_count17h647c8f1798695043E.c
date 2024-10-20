fn uu_shuf::parse_head_count(a0: &u64, a1: void*) -> u64 {
    let v0: i64;  // [sp-0xf8]
    let v1: i64;  // [sp-0xf0]
    let v2: i64;  // [sp-0xe8]
    let v3: i64;  // [sp-0xd8]
    let v4: i64;  // [sp-0xd0]
    let v5: i64;  // [sp-0xc8]
    let v6: i64;  // [sp-0xc0]
    let v7: Enum;  // [sp-0xb8], Other Possible Types: i128
    let v8: Argument;  // [bp-0xa8]
    let v9: i64;  // [sp-0x98]
    let v10: i64;  // [sp-0x90]
    let v11: i64;  // [sp-0x88]
    let v12: i8;  // [sp-0x80]
    let v13: String;  // [sp-0x78], Other Possible Types: i192
    let v14: Arguments;  // [bp-0x60]
    let v15: i64;  // [sp-0x18]
    let v17: i64;  // r14
    let v18: i64;  // r14
    let v19: i64;  // rax
    let v20: i64;  // rbp
    let v21: i64;  // r15
    let v22: i64;  // r12
    let v23: i64;  // r13
    let v24: i64;  // rbx
    let v27: i64;  // rbp
    let v28: i64;  // rax

    v15 = v17;
    v18 = *((a1 + 8) as &i64);
    v19 = *((a1 + 16) as &i64);
    v3 = v18;
    v4 = v18;
    v2 = *(a1 as &i64);
    v5 = v2;
    v6 = v1;
    if !v19 {
        v20 = -1;
    } else {
        v1 = v6;
        v0 = v19 * 24;
        v20 = -1;
        v21 = 0;
        do {
            v22 = *((v18 + v21) as &i64);
            if v22 == 0x8000000000000000 {
                v1 = v18 + v21 + 24;
                break;
            }
            v23 = *((v18 + v21 + 8) as &i64);
            v24 = *((v18 + v21 + 16) as &i64);
            v7 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v23, v24);
            if v7 {
                v4 = v18 + v21 + 24;
                v9 = 0;
                v10 = v23;
                v11 = v24;
                v12 = 1;
                v8 = Argument {
                    value: &v9
                    formatter: <os_display::Quoted as core::fmt::Display>::fmt
                };
                v14 = Arguments {
                    pieces: ["invalid line count: "]
                    args: [&v8]
                    fmt: None
                };
                v13 = alloc::fmt::format::format_inner(&v14);
                v27 = a0;
                *((v27 + 16) as &i64) = *((&v13 as &char + 16) as &i64);
                *(v27 as &i192) = v13;
                if v2 {
                    return v27;
                }
                return v27;
            }
            v21 += 24;
        } while (v0 != v21);
        v4 = v1;
    }
    v28 = a0;
    *((v28 + 8) as &i64) = v20;
    v27 = v28;
    *(v27 as &i64) = 0x8000000000000000;
    return v27;
}
