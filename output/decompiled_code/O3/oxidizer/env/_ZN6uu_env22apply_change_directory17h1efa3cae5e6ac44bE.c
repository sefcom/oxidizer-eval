fn uu_env::apply_change_directory(a0: &u64) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: i192;  // [sp-0xa0], Other Possible Types: String
    let v2: Argument;  // [bp-0x88]
    let v3: Argument;  // [bp-0x80]
    let v4: i64;  // [sp-0x70]
    let v5: i64;  // [sp-0x68]
    let v6: i64;  // [sp-0x60]
    let v7: i64;  // [sp-0x58]
    let v8: i8;  // [sp-0x50]
    let v9: Arguments;  // [bp-0x48]
    let v11: i64;  // rbx
    let v12: i64;  // rax
    let v13: i64;  // r14
    let v14: i64;  // rax
    let v15: i64;  // r14
    let v16: i64;  // rax
    let v18: i64;  // r15
    let v19: i64;  // rbx

    v11 = *((a0 + 120) as &i64);
    if !*((a0 + 88) as &i64) && v11 {
        v12 = __rust_alloc(38, &g_0);
        v15 = v12;
        *((v12 + &g_10 as &u8) as &i128) = 140090286471437898250066691899222024557;
        *(v12 as &i128) = 145464207023276652289113907314348488045;
        *((v15 + 30) as &i64) = 2973269829360970084;
        v16 = __rust_alloc(32, &g_8);
        *(v16 as &i64) = 38;
        *((v16 + &g_8 as &u8) as &i64) = v15;
        *((v16 + &g_10 as &u8) as &i64) = 38;
        *((v16 + &g_18 as &u8) as &i32) = 125;
        return v16;
    }
    if !v11 {
        return &g_0;
    }
    v13 = *((a0 + 128) as &i64);
    v14 = std::sys::pal::unix::os::chdir(v11, v13);
    if v14 {
        v0 = v14;
        v5 = &g_0;
        v6 = v11;
        v7 = v13;
        v8 = &g_0;
        v2 = Argument {
            value: &v5
            formatter: <os_display::Quoted as core::fmt::Display>::fmt
        };
        v3 = Argument {
            value: <os_display::Quoted as core::fmt::Display>::fmt
            formatter: &v0
        };
        v4 = <std::io::error::Error as core::fmt::Display>::fmt;
        v9 = Arguments {
            pieces: ["cannot change directory to ", ": "]
            args: [&v2, &v3]
            fmt: None
        };
        v1 = alloc::fmt::format::format_inner(&v9);
        v18 = *((&v1 as &char + 8) as &i64);
        v19 = *((&v1 as &char + 16) as &i64);
        v16 = __rust_alloc(32, &g_8);
        *(v16 as &i192) = v1;
        *((v16 + &g_8 as &u8) as &i64) = v18;
        *((v16 + &g_10 as &u8) as &i64) = v19;
        *((v16 + &g_18 as &u8) as &i32) = 125;
        return v16;
    }
}
