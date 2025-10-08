fn uu_cp::symlink_file(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> long long {
    let v0: i64;  // [bp-0x1f0]
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x1d8]
    let v2: u64;  // [bp-0x1d0]
    let v3: u128;  // [bp-0x1c8]
    let v4: struct32;  // [bp-0x198]
    let v5: std::path::PathBuf;  // [bp-0x178]
    let v6: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x170]
    let v7: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x168]
    let v8: struct4;  // [bp-0x160]
    let v12: struct16;  // rax
    let v13: u64;  // rdx
    let v14: i64;  // rax
    let v16: core::fmt::rt::Argument;  // rdx

    v1 = std::os::unix::fs::symlink(a1, a2, a3, a4);
    v12 = uucore::features::fs::get_filename(a3, a4);
    v4 = struct32 {
        field_0: 0
        field_8: v12
        field_16: v13
        field_24: 1
    };
    v14 = uucore::features::fs::get_filename(a1, a2);
    v5 = 0;
    v6 = v14;
    v7 = v16;
    v8 = 1;
    format!("cannot create symlink {} to {}", &v4, &v5);
    if let Ok(_) = v1 {
        *((v0 + 16) as &u128) = v3;
        *(v0 as &i64) = 9223372036854775810;
        *((v0 + 8) as &u64) = v2;
        *((v0 + 32) as &core::result::Result<std::fs::Metadata, std::io::error::Error>) = v1;
        return v2;
    }
}
