fn starship::num_configured_starship_threads() -> long long {
    let v0: Result<struct32, struct16>;  // [bp-0x38], Other Possible Types: struct24
    let v1: iNone;  // [bp-0x28]
    let v2: core::option::Option<&str>;  // [bp-0x18]
    let v4: u64;  // rax

    v0 = std::env::var(&g_543858);
    match v0 {
        Err(_) => {
            return 0;
        },
        Ok(_) => {
            v4 = *((&v0 as &char + 8) as &i64);
            v2 = v1;
            if !((((0 ^ v4) & (0 ^ -(v4))) >> 63) as char) {
                v0 = struct24 {
                    field_0: v4
                    field_8: v2
                };
                return starship::num_configured_starship_threads::{{closure}}(&v0);
            }
            return 0;
        },
    }
}
