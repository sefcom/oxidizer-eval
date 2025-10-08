fn uu_split::platform::unix::FilterWriter::new(a0: i64, a1: u32, a2: u32, a3: u64, a4: u64) -> void {
    let v0: u32;  // [bp-0x198]
    let v1: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x198]
    let v2: u64;  // [bp-0x194]
    let v3: u128;  // [bp-0x18c]
    let v4: u32;  // [bp-0x188]
    let v6: struct32;  // [bp-0x178]
    let v7: u32;  // [bp-0x174]
    let v8: u64;  // [bp-0x170]
    let v9: u128;  // [bp-0x168]
    let v10: struct24;  // [bp-0x158]
    let v13: struct56;  // [bp-0x140]
    let v14: struct224;  // [bp-0x108], Other Possible Types: struct8, struct16
    let v16: iNone;  // xmm0

    v13 = uu_split::platform::unix::WithEnvVarSet::new(a3, a4);
    v1 = std::env::var("SHELL");
    if let Err(_) = v1 {
        v10 = uu_split::platform::unix::FilterWriter::new::{{closure}}(*((&v1 as &char + 8) as &i64), v4);
    }
    v14 = std::process::Command::new(&v10);
    v14 = std::process::Command::arg("-c");
    v14 = std::process::Command::arg(a1, a2);
    v14 = std::process::Command::stdin(a1, a2);
    v6 = std::process::Command::spawn(&v14);
    if v6.field_0 != 1 {
        v0 = v7;
        v2 = v8;
        v3 = v9;
        v16 = *(&v0 as &i128);
        return struct40 {
            field_0: 0
            field_4: <UNKNOWN>
            field_16: <UNKNOWN>
        };
    }
    return struct16 {
        field_0: 1
        padding_4: <UNKNOWN>
        field_8: v8
    };
}
