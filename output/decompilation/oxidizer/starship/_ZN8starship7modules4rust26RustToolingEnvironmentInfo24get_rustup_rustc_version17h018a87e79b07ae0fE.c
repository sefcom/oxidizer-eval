fn starship::modules::rust::RustToolingEnvironmentInfo::get_rustup_rustc_version(a0: u64, a1: u64) -> long long {
    return std::sync::once_lock::OnceLock<T>::get_or_try_init(a0 + 160, a0, a1);
}
