fn uu_uptime::print_uptime(a0: i64, a1: i64) -> u64 {
    let v0: core::fmt::rt::Argument;  // [bp-0x60], Other Possible Types: struct24
    let v1: u64;  // [bp-0x60]
    let v2: u64;  // [bp-0x58]

    v0 = uucore::features::uptime::get_formatted_uptime(a0, a1);
    if (((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char {
        return v2;
    }
    v0 = v0.field_0;
    print!("up  {},  ", &v0);
    return 0;
}
