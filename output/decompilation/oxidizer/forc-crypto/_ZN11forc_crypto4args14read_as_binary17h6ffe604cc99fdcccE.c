fn forc_crypto::args::read_as_binary(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x20]

    if !((((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char) {
        v0 = forc_crypto::args::read_as_binary::{{closure}}(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
        return struct24 {
            field_0: v0.field_0 as i64
            field_8: *((&v0.field_0 as &char + 8) as &i128)
        };
    }
    return struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
}
