fn starship::modules::rust::RustToolingEnvironmentInfo::get_env_toolchain_override(a0: u64, a1: u64) -> long long {
    let v0: struct16;  // [bp-0x8]
    let v2: struct16;  // rax
    let v3: i64;  // rcx

    v0 = v2;
    v3 = std::sync::once_lock::OnceLock<T>::get_or_try_init(a0 + 128, a1, a0);
    return 0;
}
