fn uu_uptime::print_loadavg() -> int {
    let v0: u128;  // [bp-0x78]
    let v1: u64;  // [bp-0x68]
    let v2: struct24;  // [bp-0x60]
    let v3: u64;  // [bp-0x50]

    v2 = uucore::features::uptime::get_formatted_loadavg();
    if !((((0 ^ v2.field_0) & (0 ^ -(v2.field_0))) >> 63) as char) {
        v1 = v3;
        v0 = *(&v2.field_0 as &i128);
        println!("{}", &v0);
        return;
    }
    return;
}
