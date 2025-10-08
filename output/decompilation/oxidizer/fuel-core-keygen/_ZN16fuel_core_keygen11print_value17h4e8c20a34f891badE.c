fn fuel_core_keygen::print_value(a0: &struct32, a1: i32) -> u64 {
    let v0: struct32;  // [bp-0x30], Other Possible Types: Result<struct24, struct16>
    let v1: u64;  // [bp-0x28]
    let v2: u64;  // [bp-0x20]
    let v3: u64;  // [bp-0x18]
    let v5: u64;  // rdi

    if a1 {
        v0 = serde_json::ser::to_vec_pretty(a0);
    } else {
        v0 = serde_json::ser::to_vec(a0);
    }
    v5 = v1;
    if (((0 ^ v0) & (0 ^ -(v0))) >> 63) as char {
        return anyhow::error::<impl anyhow::Error>::msg(v5);
    }
    v3 = fuel_core_keygen::display_string_discreetly(v5, v2);
    return 0;
}
