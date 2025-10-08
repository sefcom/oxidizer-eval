fn check_docs::search_for_pattern(a1: i64, a2: i64, a3: i64, a4: i64) -> Result<struct24, struct16> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x1a8]
    let v1: u64;  // [bp-0x1a0]
    let v2: Result<struct52, struct16>;  // [bp-0x198]
    let v3: u128;  // [bp-0x198]
    let v4: struct24;  // [bp-0x188]
    let v5: struct56;  // [bp-0x160]
    let v6: struct157;  // [bp-0x128], Other Possible Types: struct32, struct16
    let v7: Result<struct40, struct32>;  // [bp-0x128]
    let v8: u64;  // [bp-0x128]
    let v9: u128;  // [bp-0x120]
    let v10: struct24;  // [bp-0x110], Other Possible Types: struct32
    let v11: alloc::string::String;  // [bp-0x48]

    v0 = a1;
    v1 = a2;
    v6 = std::process::Command::new(&g_4451ac);
    v6 = std::process::Command::arg("-H");
    v6 = std::process::Command::arg("-n");
    v6 = std::process::Command::arg("-r");
    v6 = std::process::Command::arg("--binary-files=without-match");
    v6 = std::process::Command::arg("--exclude-dir=check-docs");
    v6 = std::process::Command::arg(a1, a2);
    v6 = std::process::Command::arg(a3, a4);
    v2 = std::process::Command::output(&v6);
    v5 = core::result::Result<T,E>::expect(&v2, "failed grep command", "scripts/check-docs/src/lib.rs");
    if v5.field_48 as i32 {
        v11 = format!("Failed running `grep` command for pattern '{}'", &v0);
        return struct16 {
            field_0: 0x8000000000000000
            field_8: anyhow::error::<impl anyhow::Error>::msg(&v11)
        };
    }
    v7 = alloc::string::String::from_utf8(&v5);
    v3 = *((&v7 as &char + 8) as &i128);
    v4 = v10;
    if !((((0 ^ v7 as i64) & (0 ^ -(v8))) >> 63) as char) {
        v10 = v4;
        v9 = v3;
        v6 = v7 as i64;
        return struct16 {
            field_0: 0x8000000000000000
            field_8: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v6)
        };
    }
    return Ok(struct24 {
        field_0: v3
        field_16: v4
    });
}
