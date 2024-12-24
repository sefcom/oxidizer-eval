fn uu_split::platform::unix::FilterWriter::new(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i32;  // [sp-0x1c4]
    let v1: i64;  // [sp-0x1c0]
    let v2: i128;  // [sp-0x1b8]
    let v3: Result<struct28, struct8>;  // [sp-0x1a8], Other Possible Types: i224
    let v4: i192;  // [sp-0x188], Other Possible Types: struct24
    let v5: i192;  // [bp-0x168]
    let v6: i192;  // [sp-0x150], Other Possible Types: Result<struct24, struct8>
    let v7: struct56;  // [sp-0x130]
    let v8: struct208;  // [sp-0xf8], Other Possible Types: i1664
    let v10: i64;  // rdx
    let v11: i128;  // xmm0

    v7 = uu_split::platform::unix::WithEnvVarSet::new(a3, a4);
    v6 = std::env::var("SHELL");
    match v6 {
        Ok(v4) => {
        },
        Err(_) => {
            v5 = v6;
            v4 = uu_split::platform::unix::FilterWriter::new::{{closure}}(&v5);
        },
    }
    v8 = std::process::Command::new(&v4, v10);
    v3 = std::process::Command::spawn(std::process::Command::stdin(std::process::Command::arg(std::process::Command::arg(&v8, &g_422185, 2), a1, a2), 2, v10));
    match v3 {
        Ok(_) => {
            v0 = *((&v3 as &char + 4) as &i32);
            v1 = *((&v3 as &char + 8) as &i64);
            v2 = v3;
            v11 = v0;
            *((a0 + 16) as &i128) = v2;
            *((a0 + 4) as &i128) = v11;
            *(a0 as &i32) = 0;
        },
        Err(_) => {
            *((a0 + 8) as &i64) = *((&v3 as &char + 8) as &i64);
            *(a0 as &i32) = 1;
        },
    }
    return;
}
