fn uvx::get_uv_path(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: u64;  // [bp-0x120]
    let v1: u64;  // [bp-0x118]
    let v2: struct24;  // [bp-0x110]
    let v3: u64;  // [bp-0x100]
    let v4: u64;  // [bp-0xe0]
    let v6: struct24;  // [bp-0xd0], Other Possible Types: u8
    let v7: u8;  // [bp-0xcf]
    let v8: u64;  // [bp-0xc8]
    let v9: u64;  // [bp-0xc0]
    let v10: alloc::string::String;  // [bp-0xb8]
    let v12: u64;  // [bp-0x98]
    let v13: u64;  // [bp-0x90]
    let v15: u64;  // [bp-0x88]
    let v17: iNone;  // [bp-0x78]
    let v20: alloc::string::String;  // [bp-0x48]
    let v22: u64;  // r14
    let v23: u64;  // r13
    let v24: u64;  // rbx
    let v25: i64;  // rbx
    let v26: u64;  // r12
    let v27: u64;  // rbp
    let v28: core::result::Result<bool, std::io::error::Error>;  // rax:rdx
    let v29: core::result::Result<bool, std::io::error::Error>;  // rax:rdx
    let v32: u64;  // [bp-0x90]

    v22 = 0x8000000000000000;
    if a3 {
        v2 = uvx::get_uv_path::{{closure}}(a1, a2, a3, a4);
        v22 = v2.field_0;
        v23 = v3;
        if v22 == 0x8000000000000000 {
            v12 = v23;
            v0 = v24;
            v22 = 0x8000000000000000;
        } else {
            v25 = v0;
            v28 = std::fs::exists(&v6);
            if v6 == 1 {
                v4 = v8;
                v32 = v25;
                v15 = v23;
                eprintln!("warning: failed to determine if `{}` exists, trying `uv` instead: {}", &v32, &v4);
            } else if v7 {
                v2 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v25, v23);
                return struct24 {
                    field_0: v2.field_0
                    field_16: v3
                };
            }
            v12 = v23;
            v0 = v25;
        }
    }
    v1 = v22;
    v20 = format!("uv{}", &g_4097f0);
    v6 = std::path::Path::join(a1, a2, &v20);
    v26 = v8;
    v27 = v9;
    v29 = std::fs::exists(&v2 as u384);
    if !v2.field_0 as i8 && !(*((&v2.field_0 as &char + 1) as &i8) & 1) {
        v13 = v26;
        v15 = v27;
        v10 = format!("Could not find the `uv` binary at: {}", &v13);
        return struct16 {
            field_0: 0x8000000000000000
            field_8: std::io::error::Error::new(&v17)
        };
        return;
    }
    return struct24 {
        field_0: v6.field_0
        field_16: v9
    };
    return;
}
