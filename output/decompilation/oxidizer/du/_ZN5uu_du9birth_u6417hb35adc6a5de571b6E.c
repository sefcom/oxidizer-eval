fn uu_du::birth_u64(a0: u32) -> u64 {
    let v0: struct12;  // [sp-0x28], Other Possible Types: i160, struct20
    let v1: i96;  // [sp-0x10], Other Possible Types: struct12
    let v2: i32;  // [sp-0x8]

    v0 = std::fs::Metadata::created(a0);
    if v2 == 0x3b9aca00 {
        return 0;
    }
    v1 = v0;
    v0 = std::time::SystemTime::duration_since(&v1, None, 0);
    if v0 {
        return 0;
    }
    return 1;
}
