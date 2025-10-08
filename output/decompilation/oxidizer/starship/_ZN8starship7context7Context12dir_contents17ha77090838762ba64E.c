fn starship::context::Context::dir_contents(a0: i64) -> u64 {
    let v0: struct16;  // [bp-0x8]
    let v2: struct16;  // rax

    v0 = v2;
    return !*(std::sync::once_lock::OnceLock<T>::get_or_try_init(a0 + 608, a0) as &i64);
}
