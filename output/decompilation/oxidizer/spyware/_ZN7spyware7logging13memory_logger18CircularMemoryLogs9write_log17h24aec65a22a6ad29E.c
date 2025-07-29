fn spyware::logging::memory_logger::CircularMemoryLogs::write_log(a0: i64, a1: i64) -> int {
    let v0: struct24;  // [bp-0x48], Other Possible Types: u8
    let v2: i64;  // r14
    let v3: u64;  // r15
    let v4: struct40;  // rax
    let v5: u64;  // rax

    if *((a1 + 16) as &i64) >= *((a0 + 40) as &i64) {
        return;
    }
    std::sync::rwlock::RwLock<T>::write(&v0, a0);
    v2 = core::result::Result<T,E>::unwrap(&v0);
    v3 = v2 + 16;
    v0 = struct24 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i64)
    };
    alloc::vec::Vec<T,A>::push(v3, &v0, "src/logging/memory_logger.rs");
    v4 = spyware::logging::memory_logger::compute_used_chars(*((v2 + 24) as &i64), *((v2 + 32) as &i64));
    if v4 < *((a0 + 40) as &i64) {
        return;
    }
    do {
        alloc::vec::Vec<T,A>::remove(&v0, v3, 0, "src/logging/memory_logger.rs");
        v5 = spyware::logging::memory_logger::compute_used_chars(*((v2 + 24) as &i64), *((v2 + 32) as &i64));
    } while (v5 >= *((a0 + 40) as &i64));
    return;
}
