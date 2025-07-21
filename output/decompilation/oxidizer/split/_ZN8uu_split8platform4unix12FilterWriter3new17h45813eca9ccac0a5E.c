fn uu_split::platform::unix::FilterWriter::new(a1: i64, a2: i64, a3: i64, a4: i64) -> Result<struct32, struct8> {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0x1c4]
    let v1: u64;  // [bp-0x1c0]
    let v2: u128;  // [bp-0x1b8]
    let v3: core::result::Result<std::process::Child, std::io::error::Error>;  // [bp-0x1a8]
    let v4: u32;  // [bp-0x1a4]
    let v5: u64;  // [bp-0x1a0]
    let v6: u128;  // [bp-0x198]
    let v7: struct16;  // [bp-0x188], Other Possible Types: struct24
    let v9: struct24;  // [bp-0x168]
    let v10: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x150]
    let v11: struct24;  // [bp-0x148]
    let v12: u8;  // [bp-0xf8]
    let v15: u128;  // xmm0

    uu_split::platform::unix::WithEnvVarSet::new(a3, a4, a3);
    v10 = std::env::var("SHELL");
    if let Err(_) = v10 {
        v9 = v11;
        v7 = uu_split::platform::unix::FilterWriter::new::{{closure}}(&v9);
    }
    vvar_170{stack -392} = struct16 OrderedDict({0: 𝜙@128b [((5069678, None), None), ((5069680, None), vvar_146{stack -392})]})
    std::process::Command::new(&v12, &v7);
    v3 = std::process::Command::spawn(std::process::Command::stdin(std::process::Command::arg(std::process::Command::arg(&v12, &g_421f85, 2), a1, a2), 2, a2))?;
    v0 = v4;
    v1 = v5;
    v2 = v6;
    v15 = *(&v0 as &i128);
    return Ok(struct24 {
        padding_0: <UNKNOWN>
        field_8: v2
    });
}
