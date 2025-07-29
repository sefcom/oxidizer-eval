long long spyware::logging::core::MemoryLogger::get_logs(unsigned long long a0, unsigned long a1)
{
    char v0;  // [bp-0x30]
    unsigned long v2;  // rbx
    unsigned long long v4;  // rdx

    v2 = a1 + 24;
    v2.read();
    v0.new(v2);
    a0.get_all_logs(v0.unwrap());
    return core::ptr::drop_in_place<std::sync::rwlock::RwLockReadGuard<alloc::vec::Vec<alloc::string::String>>>(v4);
}
