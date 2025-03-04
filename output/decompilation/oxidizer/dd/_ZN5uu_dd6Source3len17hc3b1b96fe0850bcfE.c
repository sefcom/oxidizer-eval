fn uu_dd::Source::len(a0: &u32) -> u64 {
    let v0: struct16;  // [sp-0xb0]
    let v1: i8;  // [bp-0x60]

    if *(a0) {
        return 0;
    }
    v0 = std::fs::File::metadata(a0 + 1);
    if v0.field_0 as i32 == 2 {
        return 1;
    } else if *(&v1 as &i64) >= 9223372036854775807 {
        return 0;
    } else {
        return 0;
    }
}
