fn uu_touch::stat(a1: &std::path::Path, a2: i32) -> : struct32 {
    let a0: i64;  // rdi
    let v0: Result<struct176, struct16>;  // [bp-0x178]
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x178]
    let v2: u64;  // [bp-0x110]
    let v3: u64;  // [bp-0x100]
    let v4: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc8]
    let v6: u64;  // rsi
    let v7: u32;  // rdx
    let v8: u64;  // rsi
    let v9: u64;  // rdx
    let v16: u64;  // rax
    let v17: u32;  // esi
    let v18: void*;  // rcx
    let v19: u64;  // rax
    let v20: u64;  // rcx

    if a2 {
        v4 = std::fs::metadata(v6, v7);
        match v4 {
            Err(_) => {
                v0 = uu_touch::stat::{{closure}}(a1, v7);
            },
            Ok(_) => {
                memcpy(&v0 as u8, &v4, 176);
            },
        }
    } else {
        v1 = std::fs::symlink_metadata(v8, v9);
    }
    v16 = v2;
    v17 = v2;
    v18 = 0;
    return struct40 {
        field_0: v20
        field_8: v19
        field_16: *((&v1 as &char + 112) as &i32)
        field_24: v3
        field_32: v17
    };
}
