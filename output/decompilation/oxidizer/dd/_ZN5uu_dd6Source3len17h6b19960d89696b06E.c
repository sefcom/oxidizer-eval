fn uu_dd::Source::len(a0: i64) -> long long {
    let v0: struct16;  // [bp-0xb0]

    if *(a0 as &i32) {
        return 0;
    }
    v0 = std::fs::File::metadata(a0 + 4);
    if v0.field_0 as i32 != 2 {
        return 0;
    }
    return 1;
}
