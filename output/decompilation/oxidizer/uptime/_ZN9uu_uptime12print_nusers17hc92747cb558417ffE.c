fn uu_uptime::print_nusers(a0: i8, a1: i64) -> int {
    let v0: struct24;  // [bp-0x20]

    if !(a0 & 1) {
        a1 = uucore::features::uptime::get_nusers();
    }
    v0 = uucore::features::uptime::format_nusers(a1);
    print!("{},  ", &v0);
    return;
}
