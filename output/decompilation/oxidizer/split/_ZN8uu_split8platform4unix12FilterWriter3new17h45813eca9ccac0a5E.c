fn uu_split::platform::unix::FilterWriter::new(a0: &struct36, a1: u64, a2: u64, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x1c4]
    let v2: Result<struct28, struct8>;  // [sp-0x1a8], Other Possible Types: i256
    let v3: i192;  // [sp-0x188], Other Possible Types: struct24
    let v4: i192;  // [sp-0x168]
    let v5: i256;  // [sp-0x150], Other Possible Types: Result<struct24, struct8>
    let v6: struct56;  // [sp-0x130]
    let v7: i1664;  // [sp-0xf8], Other Possible Types: struct208
    let v9: i64;  // rdx
    let v10: i128;  // xmm0

    v6 = uu_split::platform::unix::WithEnvVarSet::new(a3, a4);
    v5 = std::env::var("SHELL");
    match v5 {
        Ok(v4) => {
        },
        Err(_) => {
            v4 = *((&v5 as &char + 8) as &i192);
            v3 = uu_split::platform::unix::FilterWriter::new::{{closure}}(&v4);
        },
    }
    v7 = std::process::Command::new(&v3);
    v2 = std::process::Command::spawn(std::process::Command::stdin(std::process::Command::arg(std::process::Command::arg(&v7, &g_421f85, 2), a1, a2), 2, v9));
    if !v2 {
        v10 = v0;
        return struct36 {
            field_0: 0
            field_4: v10
            field_16: <UNKNOWN>
        };
    }
}
