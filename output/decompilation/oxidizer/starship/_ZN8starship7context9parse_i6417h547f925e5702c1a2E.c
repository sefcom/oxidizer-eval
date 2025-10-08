fn starship::context::parse_i64(a0: i64, a1: i64, a2: i64) -> double {
    let v0: Result<(), Error>;  // [bp-0x18]

    v0 = starship::context::parse_trim(a1, a2);
    match v0 {
        Err(_) => {
            return struct16 {
                field_0: v0
            };
        },
        Ok(_) => {
            return struct16 {
                field_0: 0
                padding_1: <UNKNOWN>
                field_8: 0
            };
        },
    }
}
