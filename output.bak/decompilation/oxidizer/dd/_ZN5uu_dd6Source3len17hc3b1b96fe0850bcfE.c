fn uu_dd::Source::len(a0: &u32) -> u64 {
    let v0: u128;  // [sp-0xb0], Other Possible Types: struct16
    let v1: i8;  // [bp-0x60]

    if *(a0) {
        return 0;
    }
    v0 = std::fs::File::metadata(a0 + 1);
    if v0 as i32 == 2 {
        return 1;
    } else if v1 >= 9223372036854775807 {
        return 0;
    } else {
        return 0;
    }
}
