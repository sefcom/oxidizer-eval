fn starship::modules::hg_state::get_state_description(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: u8;  // [bp-0x128]
    let v1: u64;  // [bp-0x120]
    let v2: u64;  // [bp-0x118]
    let v3: u8;  // [bp-0x110]
    let v4: u64;  // [bp-0x108]
    let v5: u64;  // [bp-0x100]
    let v6: u8;  // [bp-0xf8]
    let v7: u64;  // [bp-0xf0]
    let v8: struct80;  // [bp-0xe8]
    let v9: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]

    std::path::Path::join(&v3, a0, a1, ".hg");
    std::path::Path::join(&v0, v4, v5, "rebasestate");
    v9 = std::fs::metadata(v1, v2);
    if v9 as i64 != 2 {
        return *((a2 + 16) as &i64);
    }
    std::path::Path::join(&v3, a0, a1, ".hg");
    std::path::Path::join(&v0, v4, v5, "updatestate");
    v9 = std::fs::metadata(v1, v2);
    if v9 as i64 != 2 {
        return *((a2 + 32) as &i64);
    }
    std::path::Path::join(&v3, a0, a1, ".hg");
    std::path::Path::join(&v0, v4, v5, "bisect.state");
    v9 = std::fs::metadata(v1, v2);
    if v9 as i64 != 2 {
        return *((a2 + 48) as &i64);
    }
    std::path::Path::join(&v3, a0, a1, ".hg");
    std::path::Path::join(&v0, v4, v5, "graftstate");
    v9 = std::fs::metadata(v1, v2);
    if v9 as i64 != 2 {
        return *((a2 + 80) as &i64);
    }
    std::path::Path::join(&v3, a0, a1, ".hg");
    std::path::Path::join(&v0, v4, v5, "transplant");
    std::path::Path::join(&v6, v1, v2, "journal");
    v9 = std::fs::metadata(v7, v8);
    if v9 as i64 != 2 {
        return *((a2 + 96) as &i64);
    }
    std::path::Path::join(&v3, a0, a1, ".hg");
    std::path::Path::join(&v0, v4, v5, "histedit-state");
    v9 = std::fs::metadata(v1, v2);
    if v9 as i64 != 2 {
        return *((a2 + 112) as &i64);
    }
    v9 = starship::modules::hg_state::is_merge_state(a0, a1);
    return (!v9 as i8 ? *(a2 as &i64) : 0);
}
