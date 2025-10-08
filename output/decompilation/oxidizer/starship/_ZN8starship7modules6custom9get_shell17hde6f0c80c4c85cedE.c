fn starship::modules::custom::get_shell(a0: i64, a1: i64, a2: i64) -> double {
    let v0: Option<struct24>;  // [bp-0x28]
    let v3: struct24;  // xmm0lq

    if a2 {
        return struct40 {
            field_0: 0x8000000000000000
            field_8: *(a1 as &i128)
            field_24: a1 + 16
            field_32: a2 - 1
        };
    }
    v0 = starship::context_env::Env::get_env("STARSHIP_SHELL");
    match v0 {
        Some(_) => {
            v3 = v0 as i128 as i64;
            return struct40 {
                field_0: v0 as i128
                field_16: *((&v0 as &char + 16) as &i64)
                field_24: 8
                field_32: 0
            };
        },
        None => {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: &g_53ee1b
                field_16: 2
            };
        },
    }
}
