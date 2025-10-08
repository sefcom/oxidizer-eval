fn uu_uptime::print_time() -> int {
    let v0: struct24;  // [bp-0x20]

    v0 = uucore::features::uptime::get_formatted_time();
    print!(" {}  ", &v0);
    return;
}
