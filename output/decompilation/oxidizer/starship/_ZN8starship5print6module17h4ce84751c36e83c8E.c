fn starship::print::module(a0: u64, a1: u64, a2: void*) -> void {
    let v0: u128;  // [bp-0x748]
    let v1: Option<struct48>;  // [bp-0x738]
    let v2: &str;  // [bp-0x730], Other Possible Types: Option<struct24>
    let v3: i64;  // [bp-0x720]
    let v4: struct361;  // [bp-0x6f0]

    v2 = 0x8000000000000000;
    v4 = starship::context::Context::new(a2, &v2 as u32);
    v2 = starship::print::get_module(a0, a1, &v4);
    if let Some(_) = v2 {
        v1 = v3;
        v0 = v2 as i128 as u128;
    }
    print!("{}", &v6);
    return;
}
