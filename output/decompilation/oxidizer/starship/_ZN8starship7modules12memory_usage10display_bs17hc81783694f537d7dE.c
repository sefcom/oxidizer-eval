fn starship::modules::memory_usage::display_bs(a0: i64, a1: u64) -> long long {
    let v0: struct72;  // [bp-0x29]
    let v1: &mut [u8];  // [bp-0x28], Other Possible Types: u8
    let v2: i8;  // [bp-0x18]

    bytesize::to_string(&v1, a1, 1);
    v0 = 1;
    alloc::string::String::retain(&v1, &v0);
    return struct24 {
        field_0: v1
        field_16: *(&v2 as &i64)
    };
}
