fn check_docs::find_files(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64) -> u64 {
    let v0: void*;  // [bp-0x200]
    let v1: struct128;  // [bp-0x1f8], Other Possible Types: u128
    let v2: Result<struct52, struct16>;  // [bp-0x1f8]
    let v3: u64;  // [bp-0x1e8]
    let v4: u64;  // [bp-0x170]
    let v5: u64;  // [bp-0x168]
    let v6: struct56;  // [bp-0x160]
    let v7: Result<struct40, struct32>;  // [bp-0x128], Other Possible Types: u64
    let v8: u64;  // [bp-0x128]
    let v9: struct157;  // [bp-0x128], Other Possible Types: struct16
    let v10: u128;  // [bp-0x120]
    let v11: u64;  // [bp-0x110]
    let v12: alloc::string::String;  // [bp-0x48]

    v4 = a1;
    v5 = a2;
    v9 = std::process::Command::new(&g_444240);
    v1 = struct128 {
        field_0: a3
        field_8: a4
        field_16: "-type"
        field_32: "f"
        field_48: "-name"
        field_64: a1
        field_72: a2
        field_80: "!"
        field_96: "-name"
        field_112: a5
        field_120: a6
    };
    v9 = std::process::Command::args(&v1);
    v2 = std::process::Command::output(&v9);
    v6 = core::result::Result<T,E>::expect(&v2, "Program `find` not in PATH", "scripts/check-docs/src/lib.rs");
    if v6.field_48 as i32 {
        v12 = format!("Failed running `find` command for pattern {}", &v4);
        *(&v0[8] as &u64) = anyhow::error::<impl anyhow::Error>::msg(&v12);
        *(v0 as &i64) = 0x8000000000000000;
    } else {
        v7 = alloc::string::String::from_utf8(&v6);
        v1 = *((&v7 as &char + 8) as &i128);
        v3 = v11;
        if (((0 ^ v7 as i64) & (0 ^ -(v8))) >> 63) as char {
            *(&v0[16] as &u64) = v3;
            *(v0 as &u128) = v1;
        } else {
            v11 = v3;
            v10 = v1;
            v7 = v7 as i64;
            *(&v0[8] as &u64) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v7);
            *(v0 as &i64) = 0x8000000000000000;
        }
    }
    return v0;
}
