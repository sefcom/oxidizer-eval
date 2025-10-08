fn starship::configure::get_configuration_edit() -> : struct200 {
    let a0: u64;  // rdi
    let v0: u128;  // [bp-0x118]
    let v2: void*;  // [bp-0x108]
    let v3: Option<struct24>;  // [bp-0x100]
    let v4: u64;  // [bp-0x100]
    let v5: void*;  // [bp-0xf8]
    let v6: u64;  // [bp-0xf0]
    let v7: Option<struct24>;  // [bp-0xe8]
    let v8: void*;  // [bp-0xd8]
    let v9: struct176;  // [bp-0xd0]
    let v12: void*;  // rsi
    let v13: u64;  // rsi
    let v14: void*;  // rdx

    v3 = starship::context::Context::get_config_path_os();
    v12 = 0;
    if !((((0 ^ v3 as i64) & (0 ^ -(v4))) >> 63) as char) {
        v12 = v5;
    }
    v7 = starship::config::StarshipConfig::read_config_content_as_str(v12, v6);
    if let Some(_) = v7 {
        v0 = v7 as i128 as u128;
        v14 = v8;
        v2 = v14;
    }
    v9 = <toml_edit::document::DocumentMut as core::str::traits::FromStr>::from_str(v13, v14);
    core::result::Result<T,E>::expect(a0, &v9);
    return;
}
