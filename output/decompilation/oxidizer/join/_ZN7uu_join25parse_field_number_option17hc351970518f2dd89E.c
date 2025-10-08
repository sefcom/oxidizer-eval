fn uu_join::parse_field_number_option(a0: &struct24, a1: i32, a2: i32) -> u64 {
    let v0: Result<struct16, struct16>;  // [bp-0x18]
    let v2: u64;  // rcx

    if !a1 {
        return struct16 {
            field_0: 0
        };
    }
    v0 = uu_join::parse_field_number(a1, a2);
    match v0 {
        Err(_) => {
            return struct24 {
                field_0: 0
                field_8: 1
                field_16: *((&v0 as &char + 8) as &i64)
            };
        },
        Ok(_) => {
            v2 = *((&v0 as &char + 8) as &i64);
            return struct24 {
                field_0: 1
                field_8: v0 as i64
                field_16: v2
            };
        },
    }
}
