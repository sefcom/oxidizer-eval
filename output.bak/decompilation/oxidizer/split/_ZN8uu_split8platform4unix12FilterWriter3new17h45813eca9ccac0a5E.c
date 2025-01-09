fn uu_split::platform::unix::FilterWriter::new(a0: &Result<struct32, struct8>, a1: u64, a2: u64, a3: u32, a4: u32) -> u64 {
    let v0: i32;  // [sp-0x1c4]
    let v1: i64;  // [sp-0x1c0]
    let v2: i128;  // [sp-0x1b8]
    let v3: i224;  // [sp-0x1a8], Other Possible Types: Result<struct28, struct8>
    let v4: i192;  // [sp-0x188], Other Possible Types: struct24
    let v5: struct24;  // [bp-0x168]
    let v6: Result<struct24, struct8>;  // [sp-0x150], Other Possible Types: i200
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
            v5 = struct24 {
                field_0: *((&v6 as &char + 8) as &i128)
                field_16: v6
            };
            v4 = uu_split::platform::unix::FilterWriter::new::{{closure}}(&v5);
        },
    }
    v8 = std::process::Command::new(&v4);
    v3 = std::process::Command::spawn(std::process::Command::stdin(std::process::Command::arg(std::process::Command::arg(&v8, &g_421f85, 2), a1, a2), 2, v10)) as u224;
    return Err(struct8 {
        field_4: <UNKNOWN>
    });
    v0 = *((&v3 as &char + 4) as &i32);
    v1 = *((&v3 as &char + 8) as &i64);
    v2 = v3;
    v11 = v0;
    return Ok(struct32 {
        field_0: v11
        field_12: <UNKNOWN>
    });
}
