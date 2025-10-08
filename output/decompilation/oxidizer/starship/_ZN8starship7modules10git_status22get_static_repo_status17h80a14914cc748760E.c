fn starship::modules::git_status::get_static_repo_status(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct72;  // [bp-0xc8]
    let v1: struct32;  // [bp-0xb0]
    let v2: i64;  // [bp-0xb0]
    let v3: struct8;  // [bp-0xa8]
    let v4: struct72;  // [bp-0xa0]
    let v5: Option<struct112>;  // [bp-0x90]
    let v7: struct16;  // cc_dep1, Other Possible Types: struct8
    let v9: Result<struct32, struct16>;  // 4096
    let v10: Result<struct16, struct64>;  // rbx

    <parking_lot::raw_mutex::RawMutex as lock_api::mutex::RawMutex>::lock();
    if !((((0 ^ g_125ceb0.field_0.field_16) & (0 ^ -(g_125ceb0.field_0.field_16))) >> 63) as char) && <std::path::PathBuf as core::cmp::PartialEq>::eq(*(&g_125ceb8 as &i64), g_125cec0.field_0) {
        v7 = g_125ceb0.field_0.field_16;
        if g_125ceb0.field_0.field_16 != 0x8000000000000000 {
            goto LABEL_b9b086;
        }
    } else {
        v5 = starship::modules::git_status::get_repo_status(a0, a1, a2);
        v9 = a1;
        v7 = 0x8000000000000000;
        if let Some(_) = v5 {
            v1 = starship::modules::git_status::get_static_repo_status::{{closure}}(a0, &v5);
            v0 = v4;
            v9 = v2;
            v7 = v3;
        }
        *(&g_125cea8 as &Result<struct32, struct16>) = v9;
        g_125ceb0.field_0 = v7;
        *(&g_125ceb8 as &struct72) = v0;
        if v7 != 0x8000000000000000 {
LABEL_b9b086:
            if _ccall(14, 24, atomic_fetch_add(g_125cea8.field_0) as u64 + 1, 0, (v7 < 0x8000000000000000) as u8 as u64) as char {
                [D] Unsupported jumpkind Ijk_NoDecode at address 12169520()
            }
        }
    }
    return v10;
}
