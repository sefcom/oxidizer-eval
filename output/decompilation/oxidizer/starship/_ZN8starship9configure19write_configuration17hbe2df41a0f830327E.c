fn starship::configure::write_configuration(a0: i64, a1: i64) -> int {
    let v0: Option<struct24>;  // [bp-0x70], Other Possible Types: Result<struct4, struct8>
    let v1: u32;  // [bp-0x6c]
    let v2: u64;  // [bp-0x60]
    let v3: struct24;  // [bp-0x58]
    let v4: u64;  // [bp-0x50]
    let v5: u32;  // [bp-0x48]
    let v6: u128;  // [bp-0x28]
    let v7: u64;  // [bp-0x18]
    let v9: struct700;  // rax

    v0 = starship::context::Context::get_config_path_os();
    if (((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char {
        eprintln!("config path required to write configuration");
        std::process::exit(1); /* do not return */
    }
    v7 = v2;
    v6 = v0 as i128;
    v3 = <T as alloc::string::SpecToString>::spec_to_string(a1);
    v0 = std::fs::File::create(&v6);
    if let Ok(_) = v0 {
        v9 = starship::configure::write_configuration::{{closure}}(v4, v5, v1 as u64);
    }
    core::result::Result<T,E>::expect(v9);
    return;
}
