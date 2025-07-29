long long spyware::logging::memory_logger::CircularMemoryLogs::get_all_logs(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x30]
    unsigned long long v3;  // rdx

    a1.read();
    v0.new(a1);
    a0.clone(v0.unwrap());
    return core::ptr::drop_in_place<std::sync::rwlock::RwLockReadGuard<alloc::vec::Vec<alloc::string::String>>>(v3);
}
