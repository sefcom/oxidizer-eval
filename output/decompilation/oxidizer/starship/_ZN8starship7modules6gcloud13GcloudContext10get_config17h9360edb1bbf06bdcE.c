fn starship::modules::gcloud::GcloudContext::get_config(a0: u64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v3: i64;  // rax

    v0 = v2;
    v3 = std::sync::once_lock::OnceLock<T>::get_or_try_init(a0 + 48, a0);
    return 0;
}
