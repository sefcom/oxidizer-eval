fn starship::context::Context::get_repo(a0: u64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    if *(std::sync::once_lock::OnceLock<T>::get_or_try_init(a0 + 808, a0) as &i32) != 2 {
        return 0;
    }
    return 1;
}
