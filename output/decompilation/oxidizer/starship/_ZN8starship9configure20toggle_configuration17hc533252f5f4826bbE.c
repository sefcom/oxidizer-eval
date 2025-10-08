fn starship::configure::toggle_configuration(a0: u32, a1: u64, a2: u64, a3: u32, a4: u32) -> void {
    let v0: struct25;  // [bp-0x170]
    let v1: u64;  // [bp-0x160]
    let v2: u128;  // [bp-0x148]
    let v3: u64;  // [bp-0x138]
    let v4: struct200;  // [bp-0xf8]

    v4 = starship::configure::get_configuration_edit();
    v0 = starship::configure::handle_toggle_configuration(&v4, a1, a2, a3, a4);
    if !((((0 ^ v0.field_0) & (0 ^ -(v0.field_0))) >> 63) as char) {
        v3 = v1;
        v2 = *(&v0.field_0 as &i128);
        eprintln!("{}", &v2);
        std::process::exit(1); /* do not return */
    }
    starship::configure::write_configuration(a0, &v4);
    return;
}
