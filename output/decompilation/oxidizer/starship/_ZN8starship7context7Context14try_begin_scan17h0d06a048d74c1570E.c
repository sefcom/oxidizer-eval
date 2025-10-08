fn starship::context::Context::try_begin_scan(a0: i64, a1: u64) -> long long {
    let v1: u64;  // rdx

    if !((!v1 | starship::context::Context::dir_contents(a1)) & 1) {
        return struct56 {
            field_0: v1
            field_8: 8
            field_16: 0
            field_24: 8
            field_32: 0
            field_40: 8
            field_48: 0
        };
    }
    return struct8 {
        field_0: 0
    };
}
