fn starship::modules::gcloud::get_active_config(a1: i64, a2: i64) -> Option<struct24> {
    let a0: u64;  // rdi
    let v0: Option<struct24>;  // [bp-0x38]

    v0 = starship::context_env::Env::get_env("CLOUDSDK_ACTIVE_CONFIG_NAME");
    core::option::Option<T>::or_else(a0, &v0, a1, a2);
    return;
}
