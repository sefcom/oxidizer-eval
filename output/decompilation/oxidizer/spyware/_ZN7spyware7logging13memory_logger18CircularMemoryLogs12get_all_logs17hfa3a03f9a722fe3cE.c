fn spyware::logging::memory_logger::CircularMemoryLogs::get_all_logs(a0: i64, a1: i64) {
    let v0: struct24;  // [bp-0x30]

    std::sys::sync::rwlock::futex::RwLock::read(a1);
    v0 = std::sync::rwlock::RwLockReadGuard<T>::new(a1);
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0, core::result::Result<T,E>::unwrap(&v0));
    return;
}
