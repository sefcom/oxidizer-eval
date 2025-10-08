fn uu_du::birth_u64(a0: i64) -> u64 {
    let v0: struct12;  // [bp-0x28], Other Possible Types: struct20
    let v1: struct12;  // [bp-0x28]
    let v2: struct12;  // [bp-0x10]

    v0 = std::fs::Metadata::created(a0);
    if v0.field_8 == 0x3b9aca00 {
        return 0;
    }
    v2 = v1;
    v0 = std::time::SystemTime::duration_since(&v2, None, 0);
    if !(v0.field_0 as i8 & 1) {
        return 1;
    }
    return 0;
}
