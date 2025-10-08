fn starship::modules::azure::get_config_file_location(a1: i64) -> Option<struct24> {
    let a0: u64;  // rdi
    let v1: struct16;  // [bp-0x48]
    let v2: Option<struct24>;  // [bp-0x28]

    v2 = starship::context_env::Env::get_env("AZURE_CONFIG_DIR");
    core::option::Option<T>::or_else(a0, &v1, a1);
    return;
}
