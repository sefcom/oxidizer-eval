fn forc_crypto::args::checked_read_file(a0: i64, a1: i64) -> int {
    let v0: u64;  // [bp-0x40]
    let v1: u128;  // [bp-0x38]
    let v2: u64;  // [bp-0x30]
    let v3: Result<struct24, struct16>;  // [bp-0x28]

    if (((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v3 = std::fs::read(a1);
    v1 = *((&v3 as &char + 8) as &i128);
    v0 = v3 as i64;
    match v3 {
        Ok(_) => {
            return struct24 {
                field_0: v0
                field_8: v1 as i64
                field_16: v2
            };
        },
        Err(_) => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
    }
}
