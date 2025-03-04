fn uu_split::platform::unix::FilterWriter::new(a0: &struct36, a1: u64, a2: u64, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x1c4]
    let v2: Result<struct28, struct8>;  // [sp-0x1a8]
    let v3: iNone;  // [sp-0x168], Other Possible Types: struct24
    let v4: Result<struct24, struct8>;  // [sp-0x150]
    let v5: struct56;  // [sp-0x130]
    let v6: struct208;  // [sp-0xf8]
    let v8: iNone;  // xmm0

    v5 = uu_split::platform::unix::WithEnvVarSet::new(a3, a4);
    v4 = std::env::var("SHELL");
    match v4 {
        Ok(v3) => {
        },
        Err(_) => {
            v3 = *((&v4 as &char + 8) as &i192);
            v3 = uu_split::platform::unix::FilterWriter::new::{{closure}}(&v3);
        },
    }
    v6 = std::process::Command::new(&v3);
    v2 = std::process::Command::spawn(std::process::Command::stdin(std::process::Command::arg(std::process::Command::arg(&v6, &g_421f85, 2), a1, a2), 2, a2));
    if !v2 as i32 {
        v8 = *(&v0 as &i128);
        return struct36 {
            field_0: 0
            field_4: v8
            field_16: <UNKNOWN>
        };
    }
}
