fn starship::modules::aws::get_creds(a0: u64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rbx

    v0 = v2;
    core::cell::once::OnceCell<T>::get_or_try_init(a1, a0);
    return 0;
}
