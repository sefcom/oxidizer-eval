fn starship::modules::daml::get_daml_sdk_version(a0: u64, a1: u64) -> long long {
    let v0: Option<struct24>;  // [bp-0x30]

    v0 = starship::context_env::Env::get_env("DAML_SDK_VERSION");
    return core::option::Option<T>::or_else(a0, &v0, a1);
}
