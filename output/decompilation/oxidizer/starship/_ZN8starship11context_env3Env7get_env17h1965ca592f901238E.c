fn starship::context_env::Env::get_env(a0: i64, a1: u64, a2: u64) -> int {
    let v0: Result<struct32, struct16>;  // [bp-0x28]
    let v1: u128;  // [bp-0x20]

    v0 = std::env::var(<&T as core::convert::AsRef<U>>::as_ref(a1, a2));
    match v0 {
        Ok(_) => {
            return struct24 {
                field_0: v1
                field_16: *((&v0 as &char + 24) as &i64)
            };
        },
        Err(_) => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
    }
}
