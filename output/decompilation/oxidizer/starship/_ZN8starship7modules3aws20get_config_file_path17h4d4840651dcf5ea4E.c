fn starship::modules::aws::get_config_file_path(a0: u64, a1: u32) -> long long {
    let v0: Result<struct32, struct16>;  // [bp-0x40], Other Possible Types: struct24
    let v1: Option<struct24>;  // [bp-0x28]

    v1 = starship::context_env::Env::get_env("AWS_CONFIG_FILE");
    if !((((0 ^ v1 as i64) & (0 ^ -(v1 as i64))) >> 63) as char) {
        v0 = starship::modules::aws::get_config_file_path::{{closure}}(&v1);
    }
    return core::option::Option<T>::or_else(a0, &v0, a1);
}
