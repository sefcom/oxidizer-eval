fn uu_env::print_env(a0: u8, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [sp-0x159]
    let v1: i64;  // [sp-0x158]
    let v2: i64;  // [sp-0x150]
    let v3: i128;  // [sp-0x148]
    let v4: i64;  // [sp-0x138]
    let v5: i128;  // [sp-0x128]
    let v6: i64;  // [sp-0x118]
    let v7: i128;  // [sp-0x108]
    let v8: i128;  // [sp-0xf8]
    let v9: i64;  // [sp-0xe0]
    let v10: i64;  // [sp-0xd8]
    let v11: i64;  // [sp-0xd0]
    let v12: i64;  // [sp-0xc8]
    let v13: i64;  // [sp-0xc0]
    let v14: i64;  // [sp-0xb8]
    let v15: i64;  // [sp-0xb0]
    let v16: i64;  // [sp-0xa8]
    let v17: i64;  // [sp-0xa0]
    let v18: i64;  // [sp-0x98]
    let v19: i64;  // [sp-0x90]
    let v20: Option<struct48>;  // [sp-0x80], Other Possible Types: i384
    let v21: i256;  // [sp-0x50], Other Possible Types: struct32
    let v23: i64;  // rsi
    let v24: i64;  // rdx
    let v25: i128;  // xmm0
    let v26: i256;  // ymm0
    let v27: i256;  // ymm0
    let v28: i128;  // xmm0
    let v29: i128;  // xmm0

    v0 = a0;
    v2 = std::io::stdio::stdout();
    v1 = std::io::stdio::Stderr::lock(&v2, v23, v24);
    v21 = std::env::vars();
    v25 = v21;
    v27 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25;
    v8 = *((&v21 as &char + 16) as &i128);
    v7 = v25;
    loop {
        v20 = <std::env::Vars as core::iter::traits::iterator::Iterator>::next(&v7);
        if v20 == 0x8000000000000000 {
            break;
        }
        v4 = *((&v20 as &char + 16) as &i64);
        v28 = v20;
        v3 = v28;
        v6 = *((&v20 as &char + 40) as &i64);
        v29 = *((&v20 as &char + 24) as &i128);
        v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
        v5 = v29;
        v9 = &v3;
        v10 = <alloc::string::String as core::fmt::Display>::fmt;
        v11 = &v5;
        v12 = <alloc::string::String as core::fmt::Display>::fmt;
        v13 = &v0;
        v14 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
        v15 = &g_5487c0;
        v16 = 3;
        v19 = 0;
        v17 = &v9;
        v18 = 3;
        core::result::Result<T,E>::unwrap(std::io::Write::write_fmt(&v1, &v15));
    }
    return;
}
